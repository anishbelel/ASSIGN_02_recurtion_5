# include<iostream>
using namespace std;

int gray_code(int n, int i){
    int a=n%10;
    int b=(n/10)%10;

    if(i==1) return n;

    else if((a==0 && b== 0) || (a==1 &&b==1)) return 10*gray_code(n/10,i-1);
    return 1+10*gray_code(n/10,i-1);


}
    
int main(){
    
    int n,i=0;
    cout<<"Enter the binary number ";
    cin>>n;
    int m=n;
    do{
        m=m/10;
        i++;
    }
    while(m>0);
    
    
    cout<<"The gray code of the number of "<<n<<" is "<<gray_code(n,i);
     
return 0;
}