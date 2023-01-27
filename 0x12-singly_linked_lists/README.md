# SINGLY-LINKED LIST

This project covers the implimentation of the singly-linked list in C.

![meme](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif)

## COMPILATION
Compile on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
```bash
Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o filename.c
```
Test files can be found [here](https://github.com/Brightini/alx-low_level_programming/tree/master/0x12-singly_linked_lists/test_files)


## PROGRAMS
- [0-print_list.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c): prints all the elements in a linked list and returns the number of nodes present in the list. [This](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/test_files/0-main.c) test file can be used to test the program.

- [1-list_len.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/1-list_len.c): computes and returns the number of elements in a linked list. [This](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/test_files/1-main.c) test file can be used to test the program.

- [2-add_node.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/2-add_node.c): adds a new node at the beginning of a list. [This]() test file can be used to test the program.

- [3-add_node_end.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/3-add_node_end.c): adds a new node at the end of a list. [This](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/test_files/3-main.c) test file can be used to test the program.


- [4-free_list.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c): frees a list. [This](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/test_files/4-main.c) test file can be used to test the program.

- [100-first.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/100-first.c): prints ``You're beat! and yet, you must allow,\nI bore my house upon my back!\n`` before the ``main`` function is executed. It makes use of ``__attribute__((constructor))`` which is a function attribute that specifies that a function should be executed before the ``main`` function.

- [101-hello_holberton.asm](https://github.com/Brightini/alx-low_level_programming/blob/master/0x12-singly_linked_lists/101-hello_holberton.asm): a 64-bit program in assembly that prints ``Hello, Holberton``
The program is compiled using ``nasm`` and ``gcc`` The ``section .data`` defines the message to be printed, and the ``section .text`` contains the ``main`` function. The ``main`` function starts by setting up the stack and base pointer using the ``push`` and ``mov`` instructions. Then, it loads the address of the message into the ``rdi`` register using the ``lea`` instruction. This is the first argument that ``printf`` expects for the format string. It then calls the ``printf`` function, which prints the message to the console. After that, it calls the ``exit`` function to clean up and exit the program. It is important to note that the ``printf`` and ``exit`` functions are part of the C library, so they are included the program using the ``extern`` keyword.


# Author
Bright Okon
