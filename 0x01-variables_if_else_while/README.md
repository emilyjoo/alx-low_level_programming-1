# C - VARIABLES AND IF, ELSE AND WHILE STATEMENTS

## LINTER

The linter used is called [Betty](https://github.com/holbertonschool/Betty).

### Usage
```bash
betty filename.c
```


## COMPILATION
Compile on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
```bash
Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o filename
```

## [Task 0](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c): This program will assign a random number to the variable n each time it is executed.
The output of the program should be:
- The number, followed by
  - if the number is greater than 0: is positive
  - if the number is 0: is zero
  - if the number is less than 0: is negative
- followed by a new line

## [Task 1](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c): This program will assign a random number to the variable n each time it is executed.
- The output of the program should be:
  - The string Last digit of, followed by
  - n, followed by
  - the string is, followed by
    - if the last digit of n is greater than 5: the string and is greater than 5
    - if the last digit of n is 0: the string and is 0
    - if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
  - followed by a new line
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
bright@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
bright@ubuntu:~/0x01$
```

## [Task 2](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c): This program prints the alphabet in lowercase, followed by a new line
The program uses only the `putchar` function to print
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
bright@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
bright@ubuntu:~/0x01$
```

## [Task 3](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c): This program prints the alphabet in lowercase, and then in uppercase, followed by a new line.
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
bright@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
bright@ubuntu:~/0x01$
```

## [Task 4](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c): This program prints the alphabet in lowercase, followed by a new line.
It prints all letters except `e` and `q`
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
bright@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
bright@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
bright@ubuntu:~/0x01$
```

## [Task 5](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c): This program prints all single digit numbers of base 10 starting from `0`, followed by a new line.
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
bright@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
bright@ubuntu:~/0x01$
```

## [Task 6](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c): This program prints all single digit numbers of base 10 starting from '0', followed by a new line.
It uses only putchar for printing.
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
bright@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
bright@ubuntu:~/0x01$
```

## [Task 7](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c):This program prints the lowercase alphabet in reverse, followed by a new line.
It uses only putchar for printing.
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
bright@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
bright@ubuntu:~/0x01$
```

## [Task 8](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c): This program prints all the numbers of base 16 in lowercase, followed by a new line.
It uses only putchar for printing.
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
bright@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
bright@ubuntu:~/0x01$
```

## [Task 9](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c): This program prints all possible combinations of single-digit numbers
It uses only putchar for printing.
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
bright@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
bright@ubuntu:~/0x01$
```

## [Task 10](https://github.com/Brightini/alx-low_level_programming/blob/master/0x01-variables_if_else_while/100-print_comb3.c): This program prints all possible different combinations of two digits
It uses only putchar for printing.
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
bright@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
bright@ubuntu:~/0x01$
```

## [Task 11](): This program prints all possible different combinations of three digits
It uses only putchar for printing.
```bash
bright@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
bright@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
bright@ubuntu:~/0x01$
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Author

Bright Okon
