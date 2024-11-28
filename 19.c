#include <stdio.h>

int sumevens(int a);

int main()
{ 
int a;
printf("Enter a number: ");
scanf("%d", &a);
printf("The sum of all even numbers is: %d", sumevens(a));
}

int sumevens(int a)
{
    int i=1;
    int sum=0;
    while (i<=a){
        if (i % 2 == 0){
            sum += i;
        
        }
    i++;
    }
return sum;
}