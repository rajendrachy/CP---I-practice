//program to check id student is passed or not
#include <stdio.h>
int main()
{
    // int marks;
    // printf("Enter a marks from 0 to 100:  \n");
    // scanf("%d", &marks);
    // if(marks >30) {
    //     printf("Student is pased:\n");
    // } 
    // else {
    //     printf("Student is Failed\n");
    // }
    int marks;
    printf("Enter the no:\n");
    scanf("%d", &marks);
    marks>30 ? printf("Passed"):printf("failed");

    return 0;
}