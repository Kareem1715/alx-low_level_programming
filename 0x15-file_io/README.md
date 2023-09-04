# File input/ouput project
In this project we have 4 mandatory tasks and 1 advanced task.

0-read_textfile.c
1-create_file.c
2-append_text_to_file.c
3-cp.c
100-elf_header.c

# Resources
- [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=e-srF6c3TJ8)

## man or help:
- open
- close
- read
- write
- dprintf

# Learning Objectives
- [x] Look for the right source of information online
- [x] How to create, open, close, read and write files
- [x] What are file descriptors
- [x] How to use the I/O system calls open, close, read and write
- [x] What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- [x] What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- [x] What are file permissions, and how to set them when creating a file with the open system call
- [x] What is a system call
- [x] What is the difference between a function and a system call

# Requirements
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called `main.h`
- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...
