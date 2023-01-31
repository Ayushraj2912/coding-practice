#include<stdio.h>
int main()
{
int age;
printf("Enter age = ");
scanf("%d", &age);
if (age > 18) {
    printf("Adult \n");
    printf("They can vote\n");
}
 else
{
    printf("Not Adult\n");
 
}
 return 0;

}
