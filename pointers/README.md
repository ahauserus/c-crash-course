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
##### Relationship Between Arrays and Pointers
> * Pointers and Arrays are synonymous in terms of how they access the memory. However, they differ in how they take addresses. A Pointer variable can take different addresses as value whereas, with arrays, the address is fixed. Also to note, the address of an array is the address of the first element of the array. This is also called the base address.

```c
int a[3];
int *p = 10;

p = a -> p points to the memory location of the array. We can also say that it's pointing to a[0].
*p = 10 -> p sets the base item of the array to 10. a[0] = 10.

p++; -> Also known as pointer arithmetic, increment the memory location by 1. Meaning, p now points to the next available memory location.

*p = 20 -> p sets a[1] to 20. So a[1] = 20.
p++;
*p = 30 -> a[2] = 30;

NB: p is the address.
    *p is the value at address. The * is also called a dereference operator.

```

