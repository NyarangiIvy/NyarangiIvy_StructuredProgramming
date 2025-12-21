1. Normal Variable vs. Pointer

What they store: A normal variable stores a data value (like an integer or char), while a pointer stores the memory address of another variable.


Memory Access: Variables are accessed directly by their name; pointers access memory indirectly by "pointing" to a specific address.

Read/Modify: Values in normal variables are changed by direct assignment (e.g., x = 10). Values via pointers are modified using dereferencing (e.g., *ptr = 10).

2. Declaration and Definition

Variable: int num = 10; — This allocates memory for an integer and assigns it a value.
+2


Pointer: int *ptr = &num; — This defines a pointer and initializes it with the address of num.
+1

3. Operators and Dereferencing

& (Address-of): Used to get the memory address of a variable.


* (Dereference): Used to access or modify the value stored at the address the pointer is holding.


Example: If ptr = &num, then *ptr allows you to see or change what is inside num.

4. Pointer Scenarios and Use Cases
Pointers are preferred over normal variables in the following scenarios:


Dynamic Memory Allocation: Allocating memory at runtime using functions like malloc(). 


Passing Large Data: Passing a pointer to a large structure to a function is more efficient than copying the entire structure (saves memory and time).

5. Limitations and Risks

Dangling Pointers: Pointers that point to memory that has been freed. 


Memory Leaks: Occurs when memory is allocated but never released. 


Segmentation Faults: Accessing invalid memory locations can cause the program to crash.

6. Call by Value vs. Call by Reference
Call by Value: A copy of the actual value is passed. Changes made inside the function do not affect the original variable.
+2

Call by Reference: The address (pointer) of the variable is passed. Changes made inside the function directly update the original variable.
