#include <stdio.h>

void main()
{
   
    int A[5]={2,6,8,9,4};
    int flag,temp;
    for(int i=0;i<5;i++)
    {
        flag=0;
        for (int j = 0; j < 4-i; j++)
        {
            if (A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }  
        }
        if (flag==0)
        {
            break;
        }
    }
    for (int k = 0; k < 5; k++)
    {
        printf("%2d",A[k]);
    }
    
}