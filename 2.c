#include <stdio.h>
int main()
{
int n;
printf("Enter size of the array");
scanf("%d",&n);
int arr[n];

int i,j;
printf("Enter unique  elements of the array");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int x,m,o;
printf("Enter target element");
scanf("%d",&x);

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if((arr[i]+arr[j])==x)
        {
            m=i;
            o=j;
            break;
        }
    }
}
printf("%d %d",m,o);


}
