/* program(16)-> write a program to generate the multiplication table of any number using while loop, do while loop and for loop.

solution(3): using do-while loop*/

#include<stdio.h>
 int main()
{ 
    int num, i = 1;

    printf("Enter a number:");
    scanf("%d", &num);

    printf("\n multiplication table of %d\n", num);

    do
    {
        printf("%d*%d\n", num, i, num*i);
        i++;
    }
    while(i<=10);
    
    return 0;
}


    
