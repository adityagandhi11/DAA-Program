1.Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find 
whether given key element is present in the array or not. Also, find total number of comparisons for each 
input case. (Time Complexity = O(n), where n is the size of input).


CODE:-
 #include <iostream>
 using namespace std;
 int main()
{
 int n, c=0;
 cout<<"Enter size of array :";
 cin>>n;
 int a[n],i,key;
 for(i=0;i<n;i++)
 cin>>a[i];
 cout<<"Enter key :";
 cin>>key;
 for(i=0;i<n;i++)
 {
 if(key==a[i])
 {
 c++;
 break;
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
}
