## Memory Allocation
___
- In C, dynamic memory allocation refers to manually memory management through a group of functions in the the standard library. This means that memory is allocated at runtime.
- Some of the functions used in C to amanually allocate memory are:
> * malloc()<br>
> * calloc()<br>
> * realloc()<br>
> * free()<br>
- Their performances vary in both required memory and execution time
- The functions are defined in a header file called <em>'stdlib.h'</em>
___
### malloc()
- memory alloaction - Used to allocate a single large block of memory with the specified size.
- It returns a pointer of type void that can be cast into a pointer of any form.
- Syntax
    - ptr = (type-cast*) malloc(byte-size);
- Example:

```c
/* To allocate 400 bytes of memory, we do. ptr will hold the address of the first byte.*/
ptr = (int*) malloc(100 * sizeof(int));

int* ptr = (int*) malloc(5 * sizeof(int));
```
- When malloc function is used to allocate memory, heap's memory will be used.
- If sufficient memory is not available, NULL will be returned.
___
### calloc()
- contigous allocation - used to dynamically allocate the specified number of blocks of memory of the specified data type.
- It initializes each block with a default value of 0.
- Syntax:
    - ptr = (type-cast*) calloc(n, element-size);
- Example:
```c
/* the calloc function allocates contigous space in memory for 25 elements, each with the size of float */
ptr = (float) calloc(25, sizeof(float));
```
- If there is no sufficient space available from the heap memory, the ptr will hold NULL.
___

### realloc()
- re-allocation - used to dynamically change the memory allocation of a previously allocated memory. This is used if the previous memory allocated is not sufficient.
- Syntax:
    - ptr = realloc(ptr, new-size);
- Example:
```c
ptr = realloc(ptr,  10 * sizeof(int));

/*The below memory is insufficient*/
int* ptr = (int*) malloc(5 * sizeof(int));

/*To reallocate it, we use*/
ptr = realloc(ptr, 10 * sizeof(int));
```
___

### free()
- This is a memory de-allocation function. It releases whatever memory allocated by the three above.
- This is because the memory allocated by malloc(), calloc(), and realloc(), is not automatically deallocated.
- Syntax:
    - free(pointer-variable)
- Example:
```c
int* ptr = (int*) calloc(10, sizeof(int));
...
...
...
free(ptr);
```

