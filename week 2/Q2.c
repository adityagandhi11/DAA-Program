#include <stdio.h>
#define max 10
int main()
{
    int a[max],i,j,k,n,c=0;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            for(k=j+1;k<n;++k)
            {
                if(a[i] + a[j] == a[k])
                {
                    printf("%d,%d,%d\n",i+1,j+1,k+1);
                    ++c;
                }
            }
        }
    }
    if(c==0)
        printf("No Sequence Found\n");
    return 0;
}