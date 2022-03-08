//merge two ordered array and to form a single ordered array
#include<bits/stdc++.h>
using namespace std;
void merge_array(int a[],int m,int b[],int n,int c[]){
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }

}
void print(int c[],int size){
    for(int i=0;i<size;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[5]={1,3,4,6,7};
    int n1=sizeof(a)/sizeof(a[0]);
    cout<<"Array first\n";
    for(int i=0;i<n1;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    int b[6]={2,5,8,9,};
    int n2=sizeof(b)/sizeof(b[0]);
    cout<< "Array Second\n";
    for(int i=0;i<n2;i++)
    cout<<b[i]<<" ";
    cout<<endl;
    int c[11]={0};
    merge_array(a, 5, b, 6, c);
    cout<<"After merging both arrays: \n";
    print(c,11);
return 0;
}
