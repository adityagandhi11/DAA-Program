Q2. Given an already sorted array of positive integers, design an algorithm and implement it using a 
program to find whether given key element is present in the array or not. Also, find total number of 
comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input).


CODE:-
#include <iostream>
using namespace std;
int main()
{
 int mid, n;
 cout<<"Enter the number of elements:";
 cin>>n;
 int a[n],i,m,c=0;
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 int l=0, h=n-1;
 cout<<"Enter Key:";
 cin>>m;
 while(l<=h)
 {
 mid=(l+h)/2;
 if(a[mid]==m)
 {
 c++;
 break;
 }
 else
 {
 if(m<a[mid])
 {
 h=mid-1;
 }
 else
 {
 l=mid+1;
 }
 }
 }
 if(c==1)
 {
 cout<<"Present";
 }
 else
 {
 cout<<"Not Present";
 }
 return 0;
}