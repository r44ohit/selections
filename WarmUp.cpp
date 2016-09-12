#include <iostream>
using namespace std;

int main() {
	// assuming there are less than 100 numbers, and range= (1,1000);
	int arr[100],n, count[1000]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		count[arr[i]]++;
	}
	for(int i=0;i<1000;i++)
	{
		if(count[i]==1)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}