//case sencetive language 
// C language statement always ends with semicolan

#include <stdio.h> // standerd input and output header. It is a library
int main (){
    int myNum = 15;
    printf("%d\n",myNum);
    printf("Hello World!");
    return 0;
}

// C variables
//here you have to declare the data type of the variable first
// int (whole number), float (decimal number), char (stores single charecter'alphabet', that should be in single qutation).

// syntax of variable declaretion
//type variablename = value;
// int myNum = 15;

/* you can't directly print this..
int myNum = 15;
printf(myNum); nothing happens

To print, need format specifiers*/

// Format Specifiers
/*  for int use %d / %i
    for float use %f
    for char use %c
those should be in double qutation
*/
/*
int myNum = 15;
printf("%d",myNum);
*/

//same others
// char myLetter = 'm';
// printf("%c\n", myLetter);

//if you want to print a value inside a string
// where is d there is value
//printf("My favourite number is: %d", myNum); 
//printf("My favourite %d number is:", myNum); 
//printf("%d My favourite number is:", myNum); 
//printf("%d My favourite number is: %c", myNum,myLetter); 


