#!/bin/bash

./gen_formatstring >input.txt
./format_string_vulnerability.exe <input.txt
