# C - MALLOC AND FREE
This project covers the concept of dynamic memory allocation using ``malloc`` and ``free`` functions. For more details on these functions,
man
- ``malloc``
- ``free``

``valgrind``, a programming tool used to monitor allocated and deallocated memory is also used.

## TASKS
- [0-malloc_checked.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-malloc_checked.c):
Prototype: ``void *malloc_checked(unsigned int b);``
This is a function that  allocates memory using ``malloc``.
It returns a pointer to the allocated memory.
If malloc fails, the function causes normal process termination with a status value of 98.

- [1-string_nconcat.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-string_nconcat.c):
Prototype: ``char *string_nconcat(char *s1, char *s2, unsigned int n);``
This is a function that  concatenates two strings.
The returned pointer points to a newly allocated space in memory, which contains ``s1``, followed by the first ``n`` bytes of ``s2``, and null terminated.
If the function fails, it returns NULL
If ``n`` is greater or equal to the length of s2 then the entire string ``s2`` is used
if ``s1`` or ``s2`` is passed as NULL, it is treated as an empty string

- [2-calloc.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x0C-more_malloc_free/2-calloc.c): 
Prototype: ``void *_calloc(unsigned int nmemb, unsigned int size);``
This is a function that allocates memory for an array, using malloc. The function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If ``nmemb`` or size is 0, then the function returns NULL. If ``malloc`` fails, then the function returns NULL

- [3-array_range.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x0C-more_malloc_free/3-array_range.c):
Prototype: ``int *array_range(int min, int max);``
The array created should contain all the values from ``min`` (included) to ``max`` (included), ordered from ``min`` to ``max``
The function returns a pointer to the newly created array
If ``min`` > ``max``, the function returns NULL
If malloc fails, the function returns NULL

- [100-realloc.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x0C-more_malloc_free/100-realloc.c):
Prototype: ``void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);``
``ptr`` is a pointer to the memory previously allocated with a call to `malloc`: ``malloc(old_size)``
``old_size`` is the size, in bytes, of the allocated space for ``ptr`` and ``new_size`` is the new size, in bytes of the new memory block
If ``new_size`` > ``old_size``, the “added” memory is not initialized
If ``new_size`` == ``old_size`` the function does nothing and returns ``ptr``
If ``ptr`` is NULL, then the call is equivalent to ``malloc(new_size)``, for all values of ``old_size`` and ``new_size``
If ``new_size`` is equal to zero, and ``ptr`` is not NULL, then the call is equivalent to ``free(ptr)``. Return NULL


- [101-mul.c](https://github.com/Brightini/alx-low_level_programming/blob/master/0x0C-more_malloc_free/101-mul.c):
Usage: ``mul num1 num2``
If the number of arguments is incorrect, ``Error`` is printed, followed by a new line, and the function exits with a status of ``98``
``num1`` and ``num2`` should only be composed of digits. If not, ``Error`` is printed, followed by a new line, and the function exitss with a status of ``98``


## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Author

Bright Okon
