#include <iostream>
using namespace std;
int main () {
    int m;
    cin >>m;
while(m>0) {
long long int k;
cin >>k ;
if(k==1) k=2;
else{
int s=1;
long long int e=k;
long long int m=s+(e-s)/4;
while(s<e){
if(m*m >= k) {
e=m;
}
else if(m*m<k) s=m+1;
m=s+(e-s)/2;
}
k+=m;
k--;
if(k>=m*m) k++;
}
cout <<k <<endl ;
m--;
}
}