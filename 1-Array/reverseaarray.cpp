#include <iostream>
using namespace std;
int main(){
   int n,i=0;
cin>> n;
int a[n];
for(int i=0 ;i<n;++i)
cin>>a[i];
int j=n-1;
i=0;
while(i>j){
swap( a[i],a[j]);
    i++;
    j--;
       
}
for(int i=0;i<n;++i)
cout<<a[i]<<" ";

return 0;
}

// Reverse the array
// Time Complexity = O(n)
