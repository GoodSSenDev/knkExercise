a)
Output if DEBUG is defined:
Value of i: 1
Value of j: 2
Value of k: 3
Value of i + j: 3
Value of 2 * i + j - k: 1
b)
Output if DEBUG is not defined:

c) 
because #ifdef DEBUG only operate 
(write #define PRINT_DEBUG(n) printf("Value of " #n ": %d\n", n))
when DEBUG is defined else it operate(write #define PRINT_DEBUG(n))
therefore everything is different
same thing happen to "Output if DEBUG is not defined:"
 #ifdef DEBUG only operate when DEBUG macro is defined.
 
d)yes it is necessary, because preprocessor operate sequentially top to bottom (downwords).