
#include<bits/stdc++.h>
using namespace std;
int gcd_recursion(int p,int r){
    if(p==0) return r;
    if(r==0) return p;

    if(p==r) return p;

    if(p>r) return gcd_recursion(p-r,r);
    else return gcd_recursion(p,r-p);


}
int gcd_without_recursion(int p,int r){
    int gcd=1;
    if(p==0) return r;
    if(r==0) return p;
    if(p==r) return p;
    if(p<r){

    
    for(int i=2; i<=p ;i++){
        if(r%p==0) return p;

        if(p%i==0 && r%i==0){
            gcd=i;

        }

    }
    return gcd;
    }
    else{

    
    for(int i=2; i<=r ;i++){
        if(p%r==0) return p;

        if(p%i==0 && r%i==0){
            gcd=i;

        }

    }
    return gcd;
    }

}
int main(){
    int p,r;
    cout<<"enter the first number: ";
    cin>>p;
    cout<<"enter the second number: ";
    cin>>r;
    cout<<endl;
    cout<<"using recursion the gcd is "<<gcd_recursion(p,r)<<endl;
    cout<<"without recursion the gcd is "<<gcd_without_recursion(p,r)<<endl;

return 0;
}
