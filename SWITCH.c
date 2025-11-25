#include <stdio.h>
#include <stdlib.h>

//switch

int main()
{
   char grade;
   printf ("Enter student grade (A,B,C):");
   scanf(" %c,%grade");
   switch(grade){
   case 'A':
    printf("Grade A:excellent work\n");
    break;
    case 'B':
    printf("Grade B:good work\n");
    break;
    case 'C':
    printf("Grade C:put in more effort\n");
    break;
    default:
    printf("enter grade again\n");
    break;
   }
return 0;
    }
