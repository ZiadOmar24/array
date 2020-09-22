#include <stdio.h>
#include <stdlib.h>

int DELETE(int arr[], int c)
{

if (c==0 || c==1)
return c;
int array[c];
int j =0;
for (int i=0; i<c-1; i++)
if (arr[i] != arr[i+1])
array[j++] = arr[i];
array[j++] = arr[c-1];

for (int
i=0; i<j; i++)
arr[i] = array[i];

return j;
}


int main()
{
    printf("enter 20 number to add to the array\n");
    int sum=0;
    int c=20;
    int arr[c];
    for(int i=0; i<c;i++)
    {
    scanf("%d",&arr[i]);
    }

    c = DELETE(arr, c);


    for (int i=0; i<c;i++)
    {
        sum=sum+arr[i];
    printf("%d",arr[i]);
    printf(" ");
    }
    printf("\nthe SUM= %d",sum);

    return 0;
}
