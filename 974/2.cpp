#include <iostream>
using namespace std;
 
 
int main () {
 
 
int f,n,k;
cin >>f ;
 
while(f>0){
    cin >>n >>k;
bool ans=1;
int t=0;

int temp=(n-k)%4;
n=n%4;

for(int i=1;i<=n;i++){
    if(i%2!=0) ans=ans^1;
}
for(int i=1;i<=temp;i++){
    if(i%2!=0) ans=ans^1;
}


// if(ans==1){
// cout <<"YES" <<" ";
// }
// else
// cout << "NO" <<" ";
 
// f--;
// }



// for (int i=2;i<=n;i++){
//     k--;
//     if (i%2!=0) {
//     ans=ans^1;
//     }
//     if (k==0){ 
//     if(i%2!=0){
//         ans=ans^1;
//     break;
//     }
//     else{
//         if(n%2==0) {
//             ans=ans^1;
//             break;
//     }
//     else break;
//     }
// }

if(ans==1){
cout <<"YES" <<" ";
}
else
cout << "NO" <<" ";
 
f--;
}
}