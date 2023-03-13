#include<stdio.h>
#include<conio.h>

//Q7 Write program to print the square of first 10 natural numbers.
int main()
{  
    /* int i =1;
    int square;
    while(i<=10)
    { 
            square=i*i;
            printf("The Square Of First 10 Natural Number Is%d ",square);
            i++;
      }
 */


//Q8 Write program to print the cube of first 10 natural numbers.
   /*  int i =1;
    int cube;
     printf("The Cube Of First 10 Natural Number Is:");
    while(i<=10)
    { 
        cube=i*i*i;
        printf("%d ",cube);
        i++; 


    } */

    int i=0;
    while(i<=10)
    {
        i=(2*i-1)+(i);
        printf("%d",i);
        i++;


    }
}
