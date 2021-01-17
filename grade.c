#include<stdio.h>
void main()
{int Grade;
printf("Enter your marks:");
scanf("%d",&Grade);
if(Grade>85)
   printf("Your grade is A");
   else if(Grade>70)
        printf("Your grade is B");
      else if(Grade>55)
           printf("Your grade is C");
            else if(Grade>40)
            printf("Your grade is D");
            else if(Grade<40)
            printf("Your grade is F");
           
           
      
}
