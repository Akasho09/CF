#include <iostream>
using namespace std;

int main () {

int m;
cin >>m;
while(m>0){
int n,k;
cin >>n >>k;
int p=n;
int ans=0;
if (k==1) ans=n;
else{
while(p>0){
int i=1;
while(i<=p)
{
    i=i*k;
}
i=i/k;
p=p-i;
ans++;
}
}
cout <<ans <<endl;
m--;
}

}