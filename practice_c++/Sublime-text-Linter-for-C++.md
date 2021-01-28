1. To istall sublime text 3:
   sudo add-apt-repository ppa:webupd8team/sublime-text-3
   sudo apt-get update
   sudo apt-get install sublime-text-installer

2. To install g++ :
   sudo apt-get install g++ to install g++

3. to make new build system
   {
   "cmd": ["g++", "$file", "-o", "${file_path}/${file_base_name}"],
   "file*regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.\_)$",
  "working_dir": "${file_path}",
   "selector": "source.c, source.c++, source.cxx, source.cpp",
   "variants":
   [
   {
   "name": "Run",
   "shell": true,
   "cmd": ["gnome-terminal -e 'bash -c \"${file_path}/${file_base_name};echo;echo; echo Press ENTER to continue; read line;exit; exec bash\"'"]
   }
   ]
   }

[ To compile program press Ctrl+shift+b and select c++ ]
[To run program press Ctrl+shift+b and select c++ run ]
