#!/usr/bin/python3
import sys
import os
from CellFrame import AppCli

app_name = "MyAuth"
tmp_dir = os.getcwd() + "/tmp"
var_dir = os.getcwd() + "/var"
sys.exit(AppCli.main(app_name, tmp_dir+"/node_cli", sys.argv))
