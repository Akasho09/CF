#include <iostream>
#include <algorithm>
using namespace std;


int main () {
int f;
cin >>f;
while(f>0){
int n,k;
cin >>n >>k;
int arr[n];
for (int i=0;i<n;i++){
    cin >>arr[i];
}

int gold=0;
int ans=0;
for (int i=0;i<n;i++){
    if(arr[i]>=k){
        gold+=arr[i];
        arr[i]==0;
    }
    else if (arr[i]==0 && gold>0){
        arr[i]++;
        gold--;
        ans++;
    }
}

cout <<ans <<endl;
f--;
}
}