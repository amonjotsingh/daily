#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int i,j,k,l,result=0;
	int arr[100];
	cout<<"enter array elements"<<endl;
	for(k=0;k<4;k++)
	{
		cin>>arr[k];
	}
	for(l=0;l<4;l++)
	{
		cout<<arr[l]<<endl;
	}
	for(i=0;i<4;i++)
	{
		for(j=3;j>i;j--)
		{
			cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
			result+=(arr[i]+arr[j]);
		}
	}
	cout<<result<<endl;		//returning result
return 0;
}

