#include<stdio.h>
int main()
{
   int score;
   char grade;

   printf("Enter score(0-100): ");
   scanf("%d",&score);

   if(score<0 || score>100) 
   {
     printf("Invalid Score");
     return 0;
   }
   if(score>=85 && score<=100)
     grade = 'A';

   else if(score>=70 && score<=84)
     grade = 'B';

   else if(score>=55 && score<=69)
     grade = 'C';

   else if(score>=40 && score<=54)
     grade = 'D';

   else
     grade = 'F';

   printf("Grade: %c\n", grade);

   return 0;
}
