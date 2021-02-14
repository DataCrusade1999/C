#include<stdio.h>

void main(){
   int position,a[7],c[8],num_to_insert;
   printf("Enter the elements in the array\n");
   for (int i = 0; i < 7; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Enter the element to insert\n");
   scanf("%d",&num_to_insert);
   printf("Enter where you want to insert the number i.e the index<7\n");
   scanf("%d",&position);
   for (int i = 0; i < 8; i++)
   {
      if (i==position-1)
      {
         c[i+1]=a[i];
         c[i]=num_to_insert;
      }
      else if (i==position)
      {
         c[i]=a[i];
      }
      
      else
      {
         c[i]=a[i];
      } 
   }
   printf("The resultant array is\n");
   for (int i = 0; i < 8; i++)
   {
      printf("%3d",c[i]);
   }

}