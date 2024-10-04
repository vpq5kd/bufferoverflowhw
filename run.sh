#!/bin/bash

./gen_formatstring >input.txt
setarch -R ./format_string_vulnerability.exe <input.txt
