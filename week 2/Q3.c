#include <stdio.h>
#define max 10

int main()
{
    int a[max],n,c=0,i,j,key;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    printf("Enter key\n");
    scanf("%d",&key);
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i] > a[j])
            {
                if(a[i] - a[j] == key)
                    ++c;
            }
            else
            {
                if(a[j] - a[i] == key)
                    ++c;
            }
            if(a[i] < a[j])
            {
                if(a[i] - a[j] == key)
                    ++c;
            }
        }
    }
    if(c != 0)
        printf("%d",c);
    return 0;
}