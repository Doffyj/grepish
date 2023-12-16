# Other languages
[![es](https://img.shields.io/badge/lang-es-yellow.svg)](https://github.com/Doffyj/grepish/blob/master/readme/README.es.md)

# grepish

This program makes use of 42 school's common-core projects [get_next_line](https://github.com/Doffyj/42-cursus/tree/master/get_next_line) and ft_strstr (made in the pool, the one in Libft is ft_strnstr) and adapts them to create a program that simulates the behavior of [grep](https://man7.org/linux/man-pages/man1/grep.1.html).

In the current version, the program is case sensitive and only searches the file specified in the current directory.
For future versions, I will try to make it more similar to the original.

# Compiling

Inside the repository, you must open a terminal and type
```
make
```
The grepish file will be created, which we will compile with the following arguments:
```
./grepish str file
```
Where str is the string of characters we want to find and file is the file where the search will be performed.

In the event of making a modification to the program, the Makefile has a clean rule that removes the compiled file, simply type:
```
make clean
```

# to do
- [x] Print the name of the file read.
- [x] Print the searched string in red to facilitate reading.
- [ ] Include a mode to make it case-sensitive or not.
- [ ] Open all files in the local directory, unless one is specified.
  - [ ] Print the names of the files to which the matches belong.


# etc

If you want to add extra things to the program, open a pull request and I'll take a look.
