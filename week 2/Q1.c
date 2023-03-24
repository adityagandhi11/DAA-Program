#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter no. of elements :";
    cin>>n;
    int a[n],l=0,h,mid,i,p=0,q=0,m=0,key;
    cout<<"Enter elements\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter key :";
    cin>>key;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            p = mid;
            q = mid;
            break;
        }
        else if(a[mid]<key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    for(i=mid-1;i>=l;--i)
    {
        if(key == a[i])
            p=i;
        else
            break;
    }
    for(i = mid+1;i<=h;++i)
    {
        if(key == a[i])
            q=i;
        else
            break;
    }
    if(p!=0 || q!=0)
        m = (q-p) + 1;
    if(m==0)
        cout<<"Not Present\n";
    else
        cout<<"Present - "<<m;
}

