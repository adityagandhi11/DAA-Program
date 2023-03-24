Q3. I. Given an already sorted array of positive integers, design an algorithm and implement it using a 
program to find whether a given key element is present in the sorted array or not. For an array arr[n], 
search at the indexes arr[0], arr[2], arr[4],.....,arr[2k ] and so on. Once the interval (arr[2k ] < key < arr[ 
2k+1] ) is found, perform a linear search operation from the index 2k to find the element key. 
(Complexity < O(n), where n is the number of elements need to be scanned for searching): Jump Search 
Input format: The first line contains number of test cases, T. For each test case, there will be three input 
lines. First line contains n (the size of array). Second line contains n space-separated integers describing 
array. Third line contains the key element that need to be searched in the array. Output format: The 
output will have T number of lines. For each test case, output will be “Present” if the key element is 
found in the array, otherwise “Not Present”. Also, for each test case output the number of comparisons 
required to search the key.


CODE:-
#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter number of elements :";
 cin>>n;
 int a[n],i,m=0,l=0,h,key,c=0;
 for(i=0;i<n;i++)
 cin>>a[i];
 cout<<"Enter block size :";
 cin>>m;
 cout<<"Enter key :";
 cin>>key;
 h=m-1;
 while(l<=h)
 {
 if(key==a[h])
 {
 c++;
 break;
 }
 else if(key<a[h])
 {
 for(i=l;i<h;i++)
 {
 if(key==a[i])
 {
 c++;
 break;
 }
 }
 
 }
 if(c==1)
 {
 break;
 }
 else
 {
 l=h+1;
 h=min(h+m,n-1);
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
