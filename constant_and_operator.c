// you can't reassign a constant
const int myNum = 15; //declared and assigned
const int minutesPerHour = 60;
const float PI = 3.14;

// you need to do declare and assign at a line or you will get an error
/*
const int minutesPerHour;
minutesPerHour = 60; error must
*/

// RECOMENDATION : you should create the constant variable in capital letter for readability
#include <stdio.h>

//USER INPUT
// To get user input from user , use scanf() function
/*
int main(){
    int aNum;
    printf("Type a num: \n");
    scanf("%d", &aNum);// & means , it target the address (learn it leter)
    printf("Your number is : %d", aNum);
};
*/

// Take a string from user
/*
int main(){
    char myString[30];//you use array here because the char can only store 1 charecter. as the string is multipule of charecter so you need to specifie the charecter array size;
    printf("pls enter you first name: ");
    scanf("%s",myString);//you don't need to use  &  . as string has no specific address
    printf("your first name is : %s", myString);
}
*/


// ******************************* OPERATORS******************************************

// Assignment operator
//Arithmetic operator
//Comparison operator
//Logical operator
//Bitwise operator

// like another language but here you should remember the data type declaration and formar specifiers