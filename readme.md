# C++ RoboDogVoiceController
[![Build Status](https://travis-ci.org/rubenacevedo3/cpp-RoboDogVoiceController.svg?branch=master)](https://travis-ci.org/rubenacevedo3/cpp-RoboDogVoiceController)
[![Coverage Status](https://coveralls.io/repos/github/rubenacevedo3/cpp-RoboDogVoiceController/badge.svg?branch=master)](https://coveralls.io/github/rubenacevedo3/cpp-RoboDogVoiceController?branch=master)

---

## Overview

Brief Explanation/Purpose:

This is a self-contained voice control component in the control module of the Acme RoboDog Companion platform. The purpose of this component is to process the signals from the robot’s microphone component and translate them into motion commands that get inputted into the robot’s motion modules. The voice controller interface also allows for the robot to be trained by its owner. This permits the user to train the RoboDog using secret commands that only he/she would know. This voice control of motion component is a meaningful addition to the RoboDog platform since it makes controlling the robot more intuitive to the user and it allows the robot to be trained in a similar manner to how humans train real dogs. This gives the robot a more lifelike quality. In addition, the personal touch of training the RoboDog using the users own commands results in the user having a more intimate connection to the platform, thus adding more companionship between the user and the product. 

Component Features:

1. RoboDog Training Capabilities

The robot can be trained to understand 7 different commands for the following actions:

a. walk

b. turn right

c. turn left

d. stop

e. sit

f. lie down

g. chase tail

2. Converting microphone outputs to motion commands 
Since the ACME RoboDog Microphone already takes in sound inputs and converts them into text files, the voice control component analyzes the text files outputted from the microphone and checks to see if a motion command was said. If it was then it correctly communicates to the robot’s motion controller to output the desired result. 

Performance Example: 

The user receives the RoboDog for the first time. When he/she turns on the voice controller module he/she will be prompted to pick a setting. The two options are training or listening. The user first picks the training setting. He/She is prompted to say outload the command he wants to use for the robot to walk. He/She says “robodog mush”.  He/She then exits the training setting and selects the listening setting.  In this stage the robot’s microphone will be pick up anything that is said within earshot. The voice control module analyzes the text files that are being outputted from the microphone module and sends the walk command once it sees the phrase “robodog mush” in the text file. After the excitement of having the RoboDog listen to his/her secret command the user turns off the voice controller interface. 

Point of Caution:

For the Demo to work, pre-recorded text files from the microphone module were used to create a microphone stub module. The way the demo gets away with “listening” is that the pre-recorded text files get inputted to the voice controller randomly. In addition, the robot’s motion module is also a stub class.  The stub motion module will output text in the form of “**<insert motion here>**” to show that the voice controller sent a motion command and it is being successfully executed by the robot.    


## SIP Code Development Process
Below is a link to the Product Backlog, Iteration Backlog, and Work Log for the development of this module

https://docs.google.com/spreadsheets/d/1Evc1lwxYjVYgp8eVesqZZPQv8sxqJg0tbtugLbrcmqk/edit?usp=sharing

## License
The MIT License

Copyright 2017 Ruben Acevedo 

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
© 2017 GitHub, Inc.

## Standard install via command-line
```
git clone --recursive https://github.com/rubenacevedo3/cpp-RoboDogVoiceController.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone --recursive https://github.com/rubenacevedo3/cpp-RoboDogVoiceController.git
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of cpp-boilerplate

```
cd ~/workspace
mkdir -p RoboDogVoiceController-eclipse
cd RoboDogVoiceController-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../cpp-RoboDogVoiceController/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select "RoboDogVoiceController-eclipse" directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold RoboDogVoiceController-eclipse project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the RoboDogVoiceController-eclipse in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)


## Debug

1. Set breakpoint in source file (i.e. double click in the left margin on the line you want 
the program to break).

2. In Eclipse, right click on the RoboDogVoiceController-eclipse in Project Explorer, select Debug As -> 
Local C/C++ Application, choose the binaries to run (e.g. shell-app).

3. If prompt to "Confirm Perspective Switch", select yes.

4. Program will break at the breakpoint you set.

5. Press Step Into (F5), Step Over (F6), Step Return (F7) to step/debug your program.

6. Right click on the variable in editor to add watch expression to watch the variable in 
debugger window.

7. Press Terminate icon to terminate debugging and press C/C++ icon to switch back to C/C++ 
perspetive view (or Windows->Perspective->Open Perspective->C/C++).

## How to run cpplint 

Use cpplint to identify potential source code issues that are in conflict with the Google C++ style guide. 

To install and run from terminal:

wget https://raw.githubusercontent.com/google/styleguide/gh-pages/cpplint/cpplint.py (Links to an external site.)
Change permission to executable: chmod +x cpplint.py
cd <repository>
Run cpplint
Example run with cpp-boilerplate (cpplint.py is in the parent directory):

cd cpp-boilerplate

../cpplint.py --extensions=h,hpp,cpp $( find . -name *.h -or -name *.hpp -or -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )

This command runs cpplint.py and tells the script to examine files with extension .h, .hpp, or .cpp. The script expects a list of files so the bash command first finds all files in the directory and sub-directories that have the extension .h, .hpp, or .cpp. It then excludes any file found in the build or vendor sub-directories.

## How to run cppcheck 

Use cppcheck for static code analysis using the command-line from repository root "RoboDogVoiceController-eclipse"

cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )

## How to generate doxygen documentation

First install doxygen.

```
sudo apt install doxygen
```

To generate Doxygen Documentation in HTML and LaTEX, follow the next steps:

```
cd <path to repository>
mkdir <folder name>
cd <folder name>
doxygen -g <doxygen file name>
```
Inside the doxygen file change the following:

```
PROJECT_NAME = 'your project name'
INPUT = ../app ../include ../test
```
Run and generate the documents by running the next command:

```
doxygen <doxygen file name>
```

To view the documents go to the directory that you ran doxygen and open the directory called html. Ther click on the file index.html to open it using you favorite browser.
