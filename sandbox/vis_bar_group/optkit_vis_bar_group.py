#!/bin/python3

import json
import os
import sys 
import numpy as np
import matplotlib.pyplot as plt

def read_json_or_yaml_files(directory):
    json_files = []
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith(".json") or file.endswith(".yaml"):
                json_files.append(os.path.join(root, file))
    for file in sorted(json_files):
        print(file)
    return sorted(json_files)  # Sort the list of JSON & YAML files


categories = ["Vectorised","Non-Vectorised"] 
durations = []
file_name = ""

socket0_energy_pkg_values = []
socket0_energy_ram_values = [] 
socket0_energy_categories_values = []
socket0_energy_gpu_values = [] 
socket0_energy_psys_values = [] 
socket0_energy_total = [] 
socket0_power = [] 
socket0_power_efficiency = []

socket1_energy_pkg_values = []
socket1_energy_ram_values = [] 
socket1_energy_categories_values = []
socket1_energy_gpu_values = [] 
socket1_energy_psys_values = [] 
socket1_energy_total = [] 
socket1_power = [] 
socket1_power_efficiency = []
 
def draw_line_chart(): 
    # Define the data for the plot
    socket0_data = {
        # 'energy-pkg': socket0_energy_pkg_values,
        # 'energy-ram': socket0_energy_ram_values,
        # 'energy-gpu': socket0_energy_gpu_values,
        # 'energy-psys' : socket0_energy_psys_values,
        # 'duration(ms)' : durations,
        'total-energy (Joules)' : socket0_energy_total,
        'total-power (Miliwatt)' : socket0_power,
        # 'power-efficiency' : socket0_power_efficiency
    }

    socket1_data = {
        # 'energy-pkg': socket1_energy_pkg_values,
        # 'energy-ram': socket1_energy_ram_values,
        # 'energy-gpu': socket1_energy_gpu_values,
        # 'energy-psys' : socket1_energy_psys_values,
        # 'duration(ms)' : durations,
        'total-energy (Joules)' : socket1_energy_total,
        'total-power (Miliwatt)' : socket1_power,
        # 'power-efficiency' : socket1_power_efficiency
    }

    print("size :: ", durations)

    # Define the x-axis labels and the width of each bar 
    bar_width = 0.25

    # Create a numpy array of the x-axis positions for each group of bars
    x_pos = np.arange(len(categories))

       # Create a figure and axis object with subplots
    fig, axs = plt.subplots(2, 1, figsize=(10, 8), sharey=True)

    # Loop through each group of bars for socket 0 and create a set of bars for each group
    for i, (group, values) in enumerate(socket0_data.items()):
        # Calculate the x-axis position for the current group of bars for socket 0
        pos = x_pos + (i * bar_width)
        # Create a set of bars for the current group for socket 0
        rects = axs[0].bar(pos, values, width=bar_width, label=f'{group}')  
        axs[0].bar_label(rects, padding=3) 

    # Loop through each group of bars for socket 1 and create a set of bars for each group
    for i, (group, values) in enumerate(socket1_data.items()):
        # Calculate the x-axis position for the current group of bars for socket 1
        pos = x_pos + (i * bar_width)
        # Create a set of bars for the current group for socket 1
        rects = axs[1].bar(pos, values, width=bar_width, label=f'{group}')  
        axs[1].bar_label(rects, padding=3) 

    # Set the x-axis labels and tick positions
    for ax in axs:
        ax.set_xticks(x_pos + ((len(socket0_data) - 1) / 2) * bar_width)
        ax.set_xticklabels(categories)

        # Add axis labels and a title to the plot
        ax.set_xlabel('Categories')

    # Add a shared y-axis label
    axs[0].set_ylabel('Values')
    axs[1].set_ylabel('Values')

    # Add titles to subplots
    axs[0].set_title('Socket 0')
    axs[1].set_title('Socket 1')

    # Add legends to subplots
    axs[0].legend(loc="upper right", ncols=1)
    axs[1].legend(loc="upper right", ncols=1)

    # Show the plot
    plt.show() 
     

def fill_line_chart(json_file):
    
    ## read file
    with open(json_file, "r") as file:
        data = json.load(file)
 
    duration = data[0]["readings"][0]["duration"] / 1000
    durations.append(duration)
    
    for reading in data[0]["readings"]:
        socket = reading["package_number"]   
        for metric in reading["metrics_set"]:
            if metric["metric_name"] == "energy-pkg":
                energy_pkg = metric["value"]
                if socket == 0:
                    socket0_energy_pkg_values.append(energy_pkg)
                else:
                    socket1_energy_pkg_values.append(energy_pkg)

            elif metric["metric_name"] == "energy-ram":
                energy_ram = metric["value"] 
                if socket == 0:
                    socket0_energy_ram_values.append(energy_ram)
                else:
                    socket1_energy_ram_values.append(energy_ram)
                    
            elif metric["metric_name"] == "energy-categories":
                energy_categories = metric["value"]
                if socket == 0:
                    socket0_energy_categories_values.append(energy_categories)
                else:
                    socket1_energy_categories_values.append(energy_categories)
                    
            elif metric["metric_name"] == "energy-gpu":
                energy_gpu = metric["value"]
                if socket == 0:
                    socket0_energy_gpu_values.append(energy_gpu)
                else:
                    socket1_energy_gpu_values.append(energy_gpu)
                    
            elif metric["metric_name"] == "energy-psys":
                energy_psys = metric["value"]
                if socket == 0:
                    socket0_energy_psys_values.append(energy_psys)
                else:
                    socket1_energy_psys_values.append(energy_psys)

            elif metric["metric_name"] == "energy-total":
                energy_total = metric["value"]
                if socket == 0:
                    socket0_energy_total.append(energy_total)
                else:
                    socket1_energy_total.append(energy_total)
 
            elif metric["metric_name"] == "power":
                power = metric["value"]
                if socket == 0:
                    socket0_power.append(power)
                else:
                    socket1_power.append(power)


            elif metric["metric_name"] == "power-efficiency":
                power_efficiency = metric["value"]
                if socket == 0:
                    socket0_power_efficiency.append(power_efficiency)
                else:
                    socket1_power_efficiency.append(power_efficiency)


def plot_json_files(json_files):
    for file in json_files: 
        fill_line_chart(file) 

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python script.py <files_or_directory>")
        sys.exit(1)
          
    
    for path in sys.argv[1:]: 
        if os.path.isfile(path):
            file_name = path
            if path.endswith(".json") or path.endswith(".yaml"):
                print(path)
                fill_line_chart(path) 
            else:
                print("The specified file is not a JSON or YAML file.")
        elif os.path.isdir(path):
            json_files = read_json_or_yaml_files(path)
            for file in json_files: 
                fill_line_chart(file)
        else:
            print("The specified path is not a valid file or directory.")
            
    draw_line_chart()