#include<stdio.h>
void main()
{
    int array[20][20];
    int i,j,Row_Size,Column_Size,counter=0;
    printf("Enter the Size Of The Matrice\n");
    scanf("%d%d",&Row_Size,&Column_Size);
    printf("Enter The Elements Of The Matrice\n");
    for(i=0;i<Row_Size;i++)
    {
        for(j=0;j<Column_Size;j++)
        {
            scanf("%d",&array[i][j]);
            if(array[i][j]==0)
            {
                counter++;
            }
        }
    }
    printf("\n Your Matrice Is \n");
    for(i=0;i<Row_Size;i++)
    {
        for(j=0;j<Column_Size;j++)
        {
            printf("%3d",array[i][j]);
        }
        printf("\n");
    }
    if(counter>((Row_Size*Column_Size)/2))
    {
        printf("The Matrice Is A Sparse One\n");

    }
    else
    {
        printf("The Matrice Is Not A Sparse One\n");
        printf("The Number Of Zero Elements Are-->%d",counter);
    }  
}

//In a Sparse Matrice The Number Of Elements Which Are Zero Is Greater Than The Number of Elements Which Are Non-Zero.
