# HEAD FIRST C:

## Chapter zero:

Almost all the operating systems in use C.

---
What is make and how to use it?

`make` is a utility for maintaining programs.
It compiles the files and returns the binary version of the same. 

Here is how to use make: 
`make` <filename>

This will generate a new file for example we compile `make hello` then it will generate a file named `hello`.

Here are some `CFLAGS` you should set this will provide you the warning in the program if any.
I set the `CFLAGS` so that `make` works by default without a `Makefile` at the moment:

``` bash
export CFLAGS="-Wall -Wextra -Werror"
```
I went ahead and added them to ~/.bashrc

---

We will be following Linux kernel coding style. 

`echo $?` --> this returns the error status for the running code. we will use this to detect if any errors or not. 


## Chapter 1:

1. Assigns the number 11 to varaible card_count. 
1. Check the value of card_count is greater than 10 
	1. if yes then print the following string. 

> Most of the code example uses libraries that are not explained
anywhere, such as `stdlib.h` and `stdbool.h` and that sucks. though
there are man pages available which you could look up if you really need
to use them. 

> Warning: You should not use `atoi()` as the function does return the
integer value from the string but it cannot differentiate between errors
and return values because whenever it fails it return back 0. 
So it is recommended to use `strtol()`. 

