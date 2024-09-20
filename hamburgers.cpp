#include <iostream>
#include <algorithm>
using namespace std;

int main (){
//input 
string s;
cin >>s;
int nb,ns,nc;
cin >>nb >>ns >>nc;
int pb,ps,pc;
cin >>pb >>ps >>pc;
long long int r;
cin >>r;

//count
int bc=0,sc=0,cc=0;
for (int i=0;i<s.length();i++){
if (s[i]=='B') bc++;
else if (s[i]=='C') cc++;
else if (s[i]=='S') sc++;
}
if (bc==0) nb=0;
if (cc==0) nc=0;
if (sc==0) ns=0;

//total p
int tp=0;
tp=bc*pb+sc*ps+cc*pc;

//handing already available
long long int ans=0;
int i=INT_MAX,j=INT_MAX,k=INT_MAX;
if (bc!=0) i=nb/bc;
if (cc!=0) j=nc/cc;
if (sc!=0) k=ns/sc;
int a=min(min(i, j), k);  ans+=a;
  nb-=a*bc;
  nc-=a*cc;
  ns-=a*sc;


// handling raples
while(1){
    if ( nb==0 && nc==0 && ns==0 ) break;
if (nb<bc && r>=0){
    r-=pb*(bc-nb);
    nb+=(bc-nb);
} 
if (nc<cc && r>=0){
    r-=pc*(cc-nc);
    nc+=cc-nc;
}
if (ns<sc && r>=0){
    r-=ps*(sc-ns);
    ns+=sc-ns;
} 
if(r>=0){ 
ans++;
nb-=bc;
nc-=cc;
ns-=sc;
}
else break;
}

if (r>=0){
    ans+=r/tp;
}

cout <<ans;


}