#include<stdio.h>
int main()
{
 int marks;
 char Grade;
 printf("Enter your marks: %d",marks);
 scanf("%d",&marks);
 if(marks>=85 && marks<=100)
 printf("Grade A");
 else if(marks>=70 && marks<=84)
   printf("Grade B");
 else if(marks>=55 && marks<=69)
   printf("Grade C");
 else if(marks>=54 && marks<=40)
   printf("Grade D");
 else if(marks>=1 && marks<=39)
   printf("Grade F");
 else 
   printf("Fail");
}
