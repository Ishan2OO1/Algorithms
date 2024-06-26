#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
//choosing the pivot as last element

int pivot=arr[high];

int i=(low-1);

for(int j=low;j<=high;j++)
{
	//If current element is smaller than the pivot
	if(arr[j]<pivot)
	{
	//Increment index of smaller element
	i++;
	swap(arr[i],arr[j]);
	}
}
swap(arr[i+1],arr[high]);
return (i+1);
}


			
void quickSort(int arr[],int low,int high)
{
// when low is less than high
if(low<high)
{
	// pi is the partition return index of pivot
	
	int pi=partition(arr,low,high);
	
	quickSort(arr,low,pi-1);
	quickSort(arr,pi+1,high);
}
}
			

int main() {
int arr[]={18,1,7,2,90,5};
int n=sizeof(arr)/sizeof(arr[0]);
// Function call
quickSort(arr,0,n-1);
cout<<"Sorted Array\n";
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
return 0;
}
