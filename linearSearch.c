//4.Write a program to search for an element from an array input from the user.   


#include<stdio.h>
int main()
{
   int A[50], arraySize, value, position =-1;
   int i;

   printf("Enter array size : ");
   scanf("%d", &arraySize);

   printf("Enter array elements: ");
   for(i=0; i<arraySize; i++)
    scanf("%d", &A[i]);

   printf("Enter value to search: ");
   scanf("%d",&value);

   for(i=0; i<arraySize; i++)
   {
     if(value==A[i])
     {
         position = i+1;

         break;
     }
   }
   if(position== -1){
    printf("Item is not found");

   }
   else printf("The value is found at %d position", position);
   return 0;
}