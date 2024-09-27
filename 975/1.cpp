#include <iostream>
using namespace std;

int main () {
int m;
cin >>m;
int n,k;
while(m>0){
cin >> n >>k;
int arr[n];
int ans=0;
int min=INT_MAX;
int max=INT_MIN;
for (int i=0;i<n;i++){
    cin >>arr[i];
    if(arr[i]<min) min=arr[i];
    if(arr[i]>max) max=arr[i];
}

// ans+=k/n;
// k=k%n;


ans+=min;
for(int i=0;i<n;i++){
arr[i]=arr[i]-min;
}

// int i;
// while(i<n && k>0){
//  if(arr[i]==0) {
//         arr[i]++;
//         k--;
//     }
//     i++;
// }
// if(i==n) ans++;


// int req=0;
// for (int i=0;i<n;i++){
// req+=max-arr[i];
// }
// cout <<req;
// if(k>=req){
//     k=k-req;
//     ans+=max;
//     ans+=k/n;
//     cout <<req;
// }
// else{
ans+=k/n;
k=k%n;

ans+=min;
for(int i=0;i<n;i++){
arr[i]=arr[i]-min;
}

int i=0;
while(i<n && k>0){
 if(arr[i]==0) {
        arr[i]++;
        k--;
    }
    cout << arr[0] <<arr[1] <<arr[2] <<arr[3] <<arr[4] <<ans <<endl;
    i++;
}
if(i==n) ans++;


cout <<ans <<endl;
m--;
// }
}

return 0;
}