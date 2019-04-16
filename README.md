# simple_shell
---
This is the repository for the custom shell we built as the final project for the first trimester at Holberton School.

## Description
This shell is able to get data typed into the standard input, read it, determine if it has a function or not and execute commands if that is the case.


## Installation
After you clone this repository you need to compile its content running the following command:
``` sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
## How to use
Run the shell typing ```./hsh``` on your command line. After that, you're able to type any command (one word or with all the path) and get the correspondant output.
## Examples
``` sh
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh
$ ls -l
total 128
-rw-rw-r-- 1 vagrant vagrant   761 Apr 15 19:42 2-str_concat.c
-rw-rw-r-- 1 vagrant vagrant   751 Apr 15 18:44 2-str_concat.c~
-rw-rw-r-- 1 vagrant vagrant   283 Apr 12 01:27 2-strlen_recursion.c
-rw-rw-r-- 1 vagrant vagrant   287 Apr 12 01:17 2-strlen_recursion.c~
-rw-rw-r-- 1 vagrant vagrant   391 Apr 15 18:32 3-strcmp.c
-rw-rw-r-- 1 vagrant vagrant   387 Apr 12 21:01 3-strcmp.c~
-rw-rw-r-- 1 vagrant vagrant   216 Apr 12 21:28 _env.c
-rw-rw-r-- 1 vagrant vagrant   224 Apr 12 21:27 _env.c~
-rw-rw-r-- 1 vagrant vagrant   717 Apr 15 01:58 env.c~
-rw-rw-r-- 1 vagrant vagrant   593 Apr 15 18:13 getline.c
-rw-rw-r-- 1 vagrant vagrant    62 Apr 11 15:04 Makefile
-rw-rw-r-- 1 vagrant vagrant    96 Apr 10 22:40 Makefile~
-rw-rw-r-- 1 vagrant vagrant   707 Apr 15 19:52 _path.c
-rw-rw-r-- 1 vagrant vagrant   708 Apr 15 19:50 _path.c~
-rw-rw-r-- 1 vagrant vagrant   707 Apr 15 19:48 #_path.c#
-rwxrwxr-x 1 vagrant vagrant 21238 Apr 15 19:55 prueba
-rw-rw-r-- 1 vagrant vagrant    54 Apr  9 19:52 README.md
-rw-rw-r-- 1 vagrant vagrant   405 Apr 15 19:37 shell.h
-rw-rw-r-- 1 vagrant vagrant   426 Apr 15 02:46 shell.h~
-rwxrwxr-x 1 vagrant vagrant  8646 Apr 15 01:18 _static_var
-rw-rw-r-- 1 vagrant vagrant   184 Apr 15 01:17 _static_variable.c~
-rw-rw-r-- 1 vagrant vagrant   690 Apr 15 19:39 _strtok.c
-rw-rw-r-- 1 vagrant vagrant   690 Apr 15 18:43 _strtok.c~
-rw-rw-r-- 1 vagrant vagrant   836 Apr 15 19:47 _strtok_execv.c
-rw-rw-r-- 1 vagrant vagrant   838 Apr 15 19:44 _strtok_execv.c~
```

```
vagrant@vagrant-ubuntu-trusty-64:~/holbertonschool-low_level_programming/simple_shell$ ./hsh
pwd
/home/vagrant/holbertonschool-low_level_programming/simple_shell
```

## Features:
### Built-in:
This shell receives ```env``` for printing a list of environment variables. Also, it can handle the ```exit``` built-in for lefting the shell.
### Other types of data
This shell exits if you press ```Ctrl + D```. Besides, the shell still works if you press ```Ctrl + C```
## Contents
The set of functions for our shell and other files contained here are the following:

| Filename| Description |
| ------ | ------ |
| getline.c | Heart of this shell, contains the getline function and sets flow. |
| _strtok.c | Our custom function that converts the value of the string obtained from getline and convert every value into tokens|
| _strtok_execv.c| Function that executes the commands stored as tokens from _strtok function|
| 2-str-concat.c| Function that concatenates two strings, on this case the full path provided by ```$PATH```|
|2-strlen_recursion|Function that returns the lenght of strings|
|3-strcmp.c|Function that compares two strings|
|_env.c|Function to get the contents of env variable|
|_path.c | Function that look for the full path and concatenates it to the command|
| _error| Function for displaying the right error message when a command is not found |
|_convert_num.c | Function for generating the right number of execution of a process |
|_free_grid.c | Function that frees a two dimensional grid |

### Authors
* [**Carolina Andrade**](https://github.com/xica369)
* [**Lucía Rodriguez**](https://github.com/luroto)
