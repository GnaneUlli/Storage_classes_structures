1.
#include<stdio.h>
int main()
{
register int i=10;
int *p = &i;
*p = 11;
printf("%d %d", i, *p);
}

Ans : Error compile time
/*: The register variable can have only register name (not
address) in the processor, we cannot access register variable through
address, ‘*’ is dereferencing operator to memory addresses only. Hence,
the compiler throws an error.*/

2.register int i=10;
Is it mandatory that variable ‘i’ gets stored in the register only?

Ans : False
/* The registers are very busy components of the cpu some times and limited in number
they are not available so then variable have to be stored in memory as auto storage class.*/

3. When does the compiler accept the request to use the variable as a
register? Which is/are true about the variables?
(a) It gets stored in cache memory
(b) It gets stored in the CPU
(c) It gets stored in secondary memory.
(d) It gets stored in the main memory.

Ans : b

4.Which of the given operation cannot be done with the register?
(a) Reading from and updating (writing) into the register variable.
(b) Global declaration of register variable.
(c) Copy a value from the memory variable to the register variable.
(d) All of the above

Ans : b

5.
#include<stdio.h>
int main()
{
int i=10;
void *p = &i;
printf("%d", (int)*p);
return 0;
}
Ans: Error run time
/*The void pointer cannot be accepted without typecasting.
The correct statement is printf("%d", *(int *)p);*/




