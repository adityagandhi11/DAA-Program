#include <stdio.h>
#define max 100

void sel_sort(int[],int);

int main()
{
    int a[max],n,i;
    printf("Ente no of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    sel_sort(a,n);
    printf("After Sorting\n");
    for(i=0;i<n;++i)
        printf("%d\n",a[i]);
    return 0;
}

void sel_sort(int a[],int n)
{
    int i,j,min,pos,temp,c=0,s=0;
    for(i=0;i<n;++i)
    {
        pos = i;
        min = a[i];
        for(j=i+1;j<n;++j)
        {
            ++c;
            if(min>a[j])
            {
                min = a[j];
                pos = j;
            }
        }
        temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
        ++s;
    }
    printf("Comparisons: %d\nShifts: %d\n",c,s);
}