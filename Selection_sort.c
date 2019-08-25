#include<stdio.h>
#include<stdlib.h>
void selection(int arr[],int s)
{
    int i,j,temp;
    printf("sorted elements are\n");
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    printf("%d\n",arr[i]);
    }
}
int main()
{
    int s,arr[30];
    int i;
    printf("enter the size of the arrray\n");
    scanf("%d",&s);
    printf("enter the element\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements are\n");
    for(i=0;i<s;i++)
    {
        printf("%d\n",arr[i]);
    }
    selection(arr,s);

}
