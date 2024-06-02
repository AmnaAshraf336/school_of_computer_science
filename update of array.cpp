#include<iostream>
using namespace std;
main()
{
    int pos,num;
    	int n;
	cout<<"Enter the size of an array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
	{
		cout<<"arr["<<i<<"] = ";
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"The Original array elements are:"<<endl;
	for(int i=0; i<n; i++)
	{
        cout<<"arr["<<i<<"]"<<"="<<arr[i]<<endl;
    }
    cout<<"Enter a index position which you want to update:" ;
	cin>>pos;
	cout<<"Enter a number you want to insert:" ;
	cin>>num;
    arr[pos]=num;
    cout<<"The array elements after updation:"<<endl;
    for(int i=0; i<n; i++)
    {
      cout<<"arr["<<i<<"]"<<"="<<arr[i]<<endl;
    }
}
