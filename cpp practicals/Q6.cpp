
#include <bits/stdc++.h>
using namespace std;
int b_s_recursion(int *a, int s, int e, int target)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;

    if (a[mid] == target)
        return mid;
    else if (a[mid] < target)
    {
        return b_s_recursion(a, mid + 1, e, target);
    }
    else
        return b_s_recursion(a, s, mid - 1, target);
}
int b_s_without_recursion(int a[], int s,int e, int target)
{
    int mid = s + (e - s) / 2;
    while(s<=e){
    if(a[mid]==target)
        return mid;
    else if(a[mid]>target){
        e=mid-1;

    }
    else{
        s=mid+1;
    }
    mid = s + (e - s) / 2;
    
    } 
    return -1;
}
int main()
{
    int a[6] = {1, 3, 5, 7, 34, 44};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"array: \n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    int size = 6;
    cout<<"Number to find is 7\n\n";
    int target = 7;
    cout << "using recursion the element is at index " << b_s_recursion(a, 0, size - 1, target) << endl;
    cout << "without recursion the element is at index " << b_s_without_recursion(a, 0, size - 1, target);

    return 0;
}
