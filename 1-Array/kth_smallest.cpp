#include <iostream>
#include <climits>
using namespace std;
int main() {
    // Write C++ code here
 int k,n ;
  cin>>n>>k;
 int a[n];
 int i;
 for(i=0;i<n;++i)
    cin>>a[i];
    sort(a,a+n);
    cout<<a[k-1]<<" "<<a[n-k];

 



 
 


    return 0;
}