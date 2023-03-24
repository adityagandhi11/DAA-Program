#include <stdio.h>
#define max 50

int main()
{
    int a[max],n,i,j,temp,c=0,s=0;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    for(i=1;i<n;++i)
    {
        temp = a[i];
        j = i-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1] = a[j];
            --j;
            ++s;
        }
        a[j+1] = temp;
        ++c;
    }
    printf("Output\n");
    for(i=0;i<n;++i)
        printf("%d\n",a[i]);
    printf("c = %d  & s = %d",c,s);
    return 0;
}
