#include <iostream>
#include <climits>
using namespace std;
int main() {
    // Write C++ code here
 int n ;
  cin>>n;
 int a[n];
 int i;


 
  int mx=INT_MIN;  int mn=INT_MAX;
 for(i=0;i<n;++i){
     cin>>a[i];
 }
 for(i=0;i<n;++i){
     if(mn>a[i])
        mn=a[i];
     
     
 }
 for(i=0;i<n;++i){
     if(mx<a[i])
        mx=a[i];
     
     
 }
 cout<<mn<< " "<<mx;
 

    return 0;
}