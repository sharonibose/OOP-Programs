/*
Write a program to input n elements to an array and display that array using dynamic memory allocation
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*arr;
    printf("Enter the number of elements to be enetered in the array: ");
    scanf("%d",&n);
    printf("\n");
    arr=(int *)malloc(n*sizeof(int));

    if(arr==NULL)
    {
        printf("Insufficient memory");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        printf("Enter element number %d ",(i+1));
        scanf("%d",(arr+i));
    }
    
    printf("The resultant array is ");

    for(i=0;i<n;i++)
    {
        printf("\n %d",*(arr+i));
    }
    free(arr);
        return 0;
}