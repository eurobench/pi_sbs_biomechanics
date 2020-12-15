import sys
from termcolor import colored
import os
from run_pi_mocap_metrics import Generate_PI

USAGE = """usage: run_pi file_in folder_out
            file_in: csv file containing at least a timestamp column
            folder_out: folder where the PI yaml file yaml file will be stored
            """
            
if len(sys.argv) != 3:
    print(colored("Wrong input parameters !", "red"))
    print(colored(USAGE, "yellow"))
    sys.exit(-1)

file_in = sys.argv[1]
output_dir = sys.argv[2]

# check input parameters are good
if not os.path.exists(file_in):
    print(colored("Input file {} does not exist".format(file_in), "red"))
    sys.exit(-1)
if not os.path.isfile(file_in):
    print(colored("Input path {} is not a file".format(file_in), "red"))
    sys.exit(-1)

if not os.path.exists(output_dir):
    print(colored(
        "Output folder {} does not exist".format(output_dir),
        "red"))
    sys.exit(-1)
if not os.path.isfile(file_in):
    print(colored("Output path {} is not a folder".format(file_in), "red"))
    sys.exit(-1)

Generate_PI(sys.argv)
