#include <stdio.h>
int main()
{
int n;
printf("Enter size of the array");
scanf("%d",&n);
int arr[n];
int arr2[n+1];
int i,j,p=0;

printf("Enter elements of array ");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int pos;
printf("Enter position where element has to be inserted");
scanf("%d",&pos);
int ele;
printf("Enter element to be inserted");
scanf("%d",&ele);

pos-=1;

for(i=0;i<n;i++)
{
    if(p!=pos)
    {
        arr2[p]=arr[i];
    }
    else{
        arr2[p]=ele;
       
        --i;
    }
    ++p;
}

for(i=0;i<n+1;i++)
{
    printf("%d",arr2[i]);
}
}
