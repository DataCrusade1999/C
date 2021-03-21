#include <stdio.h>

void main()
{
    int j,temp;
    int A[5]={2,7,5,9,8};
    for (int i = 1; i < 5; i++)
    {
        temp=A[i];
        j=i-1;
        while (j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;  
        }
        A[j+1]=temp;   
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%2d",A[i]);
    }
    
    
}