A storage class defines the scope (visibility) and life-time of variables and functions within a C Program. 
They precede the type that they modify.
 We have four different storage classes in a C program −
1.auto
2.register
3.static
4.extern

1.Auto storage class:

The auto storage class is the default storage class for all local variables.

{
   int mount;
   auto int month;
}

The example above defines two variables with in the same storage class.
'auto' can only be used within functions, i.e., local variables.

2.Register Storage Class : 

The register storage class is used to define local variables that should be stored in a
register instead of RAM. This means that the variable has a maximum size equal to the 
register size (usually one word) 
and can't have the unary '&' operator applied to it (as it does not have a memory location).

3.Static storage class:

The static storage class instructs the compiler to keep a local variable in existence during 
the life-time of the program instead of creating and destroying it each time it comes 
into and goes out of scope. Therefore, making local variables static allows them to maintain
their values between function calls.

The static modifier may also be applied to global variables. When this is done,
it causes that variable's scope to be restricted to the file in which it is declared.

#include <stdio.h>
 
/* function declaration */
void func(void);
 
static int count = 5; /* global variable */
 
main() {

   while(count--) {
      func();
   }
	
   return 0;
}

/* function definition */
void func( void ) {

   static int i = 5; /* local static variable */
   i++;

   printf("i is %d and count is %d\n", i, count);
}

4.Extern storage class:

The extern storage class is used to give a reference of a global variable that is visible 
to ALL the program files. When you use 'extern', the variable cannot be initialized however, 
it points the variable name at a storage location that has been previously defined.

When you have multiple files and you define a global variable or function,
which will also be used in other files, then extern will be used in another file
to provide the reference of defined variable or function. Just for understanding, 
extern is used to declare a global variable or function in another file.

#include <stdio.h>
 
int count ;
extern void write_extern();
 
main() {
   count = 5;
   write_extern();
}

#include <stdio.h>
 
extern int count;
 
void write_extern(void) {
   printf("count is %d\n", count);
}
