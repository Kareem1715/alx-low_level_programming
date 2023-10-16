# Dynamic Library
- [x] In this project we will learn:

-  What is a dynamic library, how does it work, how to create one, and how to use it.
- What is the environment variable `$LD_LIBRARY_PATH` and how to use it.
- What are the differences between static and shared libraries.
-  Basic usage `nm`, `ldd`, `ldconfig`
---
- [x] `nm`: The nm command is used to list symbols from object files or libraries. It can be used to examine the symbols (functions, variables, etc.) present in a dynamic library. 
- `nm -D mylib.so`: This command lists the dynamic symbols from the `mylib.so` library.
___
- [x] `ldd`:  The ldd command is used to print the shared library dependencies of an executable or a shared library. It shows the list of libraries that the executable or library depends on, including their locations.

- `ldd myprogram`: This command displays the shared library dependencies of `myprogram`.

___
- [x] `ldconfig`: The ldconfig command is used to configure the dynamic linker run-time bindings. It is responsible for creating and updating the necessary links and cache to the most recent shared libraries found in the directories specified in the /etc/ld.so.conf file and the /etc/ld.so.conf.d directory.

- `sudo ldconfig`: This command updates the dynamic linker cache after installing new shared libraries.
---
- `LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`: This command setting the LD_LIBRARY_PATH variable to include the current directory (.) as well as any previously defined directories in LD_LIBRARY_PATH. This allows the dynamic linker to search for shared libraries in the current directory along with the other specified directories.
