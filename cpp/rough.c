#include <stdio.h>
//preprocessor directives. 
// #define pi  3.14159// macros
 void i() {
        static int a = 10;
        printf("%d", a);
        a = a+1;
    } 

int main(){
    i();
    i();
}

// int main() {

//     // int, float, double, char.  primitive datatypes
//     // array, structure.  user defined data types.

//     int age = 20; //int variable
//     float f = 2.333; // float variable
//     double d = 2.3334444444; // double variable // same as float, takesmore digit after point. 
//     char a = 'a'; // char variable
    
//     // array
//     // data_type name[size-> optional] = {};

//     // int marks[] = {1,2,3,4};
//     // int marks[4];
//     // marks[0] = 21;

//     double matrix[2][2];
// matrix[0][0] = 1;
// matrix[0][1] = 1;

//      struct linked_list {
//         int value;
//         int *p;
//     };

      

   


    

//     struct linked_list l2;
//     l2.value = 13;
//     l2.p = &l2.value;

 






    

//     // printf("%f", pi * 2*2);


//     char nidhi = 'c';
//     char *p = &nidhi;
//     // printf("%x\n", p);
//     // printf("%c", *p);

//     printf("%x\n", &p); // this line   address of p = xyz

//     char **p2 = &p;
//     printf("%x", p2); // this line
//     // datatype *var;

//     return 0;
// }