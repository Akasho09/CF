// Input
// The first line of the input contains a pair of integers n, k (1 ≤ k ≤ n ≤ 100), 
// where n is the length of the array and the value n is divisible by k. 
// The second line contains the sequence of elements of the given array a1, a2, ..., an (1 ≤ ai ≤ 2), ai is the i-th element of the array.

// Output
// Print the minimum number of array elements we need to change to make the array k-periodic. If the array already is k-periodic, then print 0.

#include <iostream>
using namespace std;


int main () {
    //input
int n,k;
cin >>n >>k;
int arr[6];
for (int i=0;i<sizeof(arr)/sizeof(int);i++){
    cin >>arr[i];
}

int ans=0;
// 8 4
// 1 1 2 1 1 1 2 1
for (int i=0;i<n/k;i++){
    int count=0;
for (int j=i+k;j<n;j+=k){
if (arr[i]!=arr[j]){
count++;
}
}
if (count > k/2){
count = k-count;
}
ans+=count;

}

cout <<ans;
}