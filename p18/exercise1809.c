a)
typedef char Fcn(int);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_array[10]
Fcn_ptr_array x;

b)
typedef int ptr[5]
typedef ptr *vrb(int)
vrb x;

c)
typedef float * Fcn(int);
typedef Fcn *Vrb(void);
Vrb x;

d)
typedef void Fcn(int);
typedef Fcn *Vrb(int, void (*y)(int));
Vrb x;