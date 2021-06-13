#!/bin/bash

#set project name
project_name="someBase"

# make direction for build
mkdir build

# get work path
build_path=$(dirname $0)

# Build files have been written to build/
cd build
cmake ${build_path}/../

# make and copy binary file
make
cp ${project_name} ../
cd .. 

rm -r build/
echo "#####################################"
./${project_name}