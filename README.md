# Libft
The aim of this project is to code a C static library regrouping usual functions that
will be used in other projects. This project is written in compliance with 42's norme accessible [here](https://drive.google.com/file/d/1cGpOsXhTSsJswEq_gM2FJ4BaF5t6t1k_/view?usp=sharing "42 norme").
## How to run it?
A Linux distribution / Unix based system is required. It has been tested on major Linux distro and Mac OS. [GCC](https://gcc.gnu.org/ "gcc web page") is used to compile see **Makefile**.<br>
To create the library, simply run 
```bash
make
```
If failure due to missing dependencies, install them and re-run the command. Upon success, the library will be created under the name **_libft.a_**.<br>To clean object files run:
```bash
make clean
```
To clean library and object files run:
```bash
make fclean
```
To restart, meaning clean all and make the library run:
```bash
make re
```
run
```bash
make f
```
to make the library and clean object files at once.<br>
Every single function of the library can be compile with
```bash
make function_name.o
```
All the previous rules apply for files in sub-directories <br>
├── ft_printf<br>
├── get_next_line<br>
├── libft<br>
## Note:
The header file isn't compile with the library. It will be used at run time.
