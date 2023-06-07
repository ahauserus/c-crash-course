## Pointers
> * Pointers (pointer variables) are variables that are used to store addresses rather than data. When a variable is declared in a program, some memory will be allocated either at compilation or run time.
> * To access such memory address, we need special variables called `Pointers`
> * If we have a variable x in our program, the `&x` will give us its address in the memeory. Example of this is the `scanf function`.

##### Declaring a Pointer
> * To declare a pointer variable, we use: `DataType *VariableName`<br>
> * Example: int *ptr--> `ptr` is a pointer variable which can store the address of an integer variable.

##### Accessing the Address and Value at Address
> * We can use format specifiers `&u` or `&p` tp access the address.
> * THe * is used to access the value at a particular address.

```c
int a = 10;
int *ptr;
ptr = &a;

printf("%d\n", a); --> 10
printf("%p", ptr); --> 006FE84. This will print the address of ptr.

printf("%p", &ptr) --> 0040FE60
printf("%d", *ptr) --> 10
printf("%p", &a) --> 0040FE60


```

