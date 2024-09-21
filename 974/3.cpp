#include <iostream>
using namespace std;
//number of u
int us (int arr[],int average , int n){
    int u=0;
for (int i=0;i<n;i++){
if(arr[i]<average){
u++;
}
}
return u;
}

int main () {
int f;
cin >>f;
while(f>0){
int n;
int arr[n];
for (int i=0;i<n;i++){
    cin >>arr[i];
}

int maxi=INT_MIN;
float sum=0;

for (int i=0;i<n;i++){
    sum+=arr[i];
    if(arr[i]>maxi){
maxi=arr[i];
    }
}

int u=0;
float average=float(sum/n);
u=us(arr,average,n);

//
int s=0;
int e=maxi;
int m=s+(e-s)/2;
while(1){
if(u<n/2){
while(s<e){
sum+=m;
float average=float(sum/n);
u=us(arr,average,n);
if(u>n/2) e=m-1;
if(u<n/2) s=m+1;
m=s+(e-s)/2;
}
}
else break;
}

cout <<m;
f--;
}



}