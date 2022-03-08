#include<iostream>
using namespace std;
int main()
{
	int n,p,q,r=0;
	cout<< "Enter size of array: ";
	cin>>n;
	int a[n],b[n];
	cout<<"Enter elements: "<<"\n";
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	cout<<"before removing duplicates"<<"\n";
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	cout<<"\nafter removing duplicates"<<"\n";
    for (p = 0; p < n; p++)
    {
        for (q = 0; q < r; q++)
        {
            if (a[p] == b[q])
                break;
        }
        if (q == r)
        {
            b[r] = a[p];
            r++;
        }
    }
    for (p = 0; p < r; p++)
        cout << b[p] << " ";
    return 0;
}
