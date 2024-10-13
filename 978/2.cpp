#include <iostream>
using namespace std ;

int main () {
int m;
cin >>m ;
while(m>0) {
int n ,x ;
cin >> n >> x;
int c=0;
vector <int> arr(n);
for (int i=0;i<n ;i++) {
    cin >> arr[i];
}
sort(arr.begin(), arr.end());
int j;
while(arr.size()>=3){
j=arr.size()-3;
c+=arr[j];
        for (int i = 0; i < x  ; i++) {
cout << arr[j+i] << " ";
arr[j+i]-=arr[j];
cout << arr[j+i] << " ";
if(arr[j+i]==0) {                 
    arr.erase(arr.begin() + (j + i));
 i-- ; }
cout << arr[j+i] <<" " <<endl;
}
sort(arr.begin(), arr.end());
}
        if (!arr.empty()) {
            c += arr.back();
        }
        cout <<"c : " <<c <<endl;
m--;
}

}