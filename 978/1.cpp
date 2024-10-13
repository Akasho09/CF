#include <iostream>
using namespace std ;
int main () {
int m;
cin >> m;
while(m>0){
int n , r;
cin >> n >> r;
vector <int > arr(n);
int s=0;
int sum=0;
for(int i=0;i<n;i++){
cin>>arr[i];
if(arr[i]%2!=0) { s++; }
sum+=arr[i];
}
int empty=(2*r)-sum;
if(empty>=s){
s=0;
}
else if (empty<s && empty>0){
s=s-empty;
}
cout << sum-s <<endl;
 m--;
}
 return 0;
}
