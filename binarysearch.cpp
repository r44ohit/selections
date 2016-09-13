//one crore elements take 8.87 seconds.
//in this program, output=0 if element not found
#include <iostream>
using namespace std;

int binary(int arr[],int beg,int end,int elem)
{
	if(beg<=end)
	{
		int mid=(beg+end)/2;
		if(arr[mid]==elem)
		return mid;
		else if(arr[mid]>elem)
		return binary(arr,beg,mid-1,elem);
		else 
		return binary(arr,mid+1,end,elem);
	}
	return -1;
}

int main() {
	
	int arr[1000],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int elem;
	cin>>elem;
	cout<<binary(arr,0,n-1,elem)+1;
	
	return 0;
}