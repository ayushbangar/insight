#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements : ");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    int n1=arr[0],n2=arr[1],sum=n1+n2;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temps=abs(arr[i]+arr[j]);
            if(temps<sum)
            {
                n1=arr[i];
                n2=arr[j];
                sum=temps;
            }
        }
    }
    printf("[%d,%d]",n1,n2);
}
