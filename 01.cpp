# include<iostream>
using namespace std;

int product(int n,int p, int m){
    if(m==1) return n;
    return product(n+p,p,m-1);
}
//ok  
int main(){
     
int n,m;
cout<<"Enter n and m: ";
cin>>n>>m;
cout<<"The value of the product n and m is "<<product(n,n,m);
     
return 0;
}
