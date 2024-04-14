//Write a program to create an array of integers and perform following operations on that array like finding the sum, average, maximum and minimum number in that array. Accept the numbers of the array from user.
#include<iostream>
using namespace std;
int sumarr(int arr[],int n){
	int sum=0;
	for(int i = 0;i<n;i++){
		sum=sum+arr[i];
	}
	return sum;
}
double avgarr(int arr[],int n){
	int sum=0;
	double avg;
	for(int i = 0;i<n;i++){
		sum=sum+arr[i];
		
	}
	avg=(double)sum/n;
	return avg;
}
int maxarr(int arr[],int n){
	int max=arr[0];
	for(int i=0;i<=n;i++){
		
		if(max<arr[i]){
			max=arr[i];
	
		}
	}
	return max;
}

int minarr(int arr[],int n){
	int min=arr[0];
	for(int i=1;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	return min;
}

int main(){
	int arr[25],n;
	cout<<"Enter the limit of array:  "<<endl;
	cin>>n;

	cout<<"Enter the element of the array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Sum of element of array: "<<sumarr(arr,n)<<endl;
	cout<<"Average of element of array: "<<avgarr(arr,n)<<endl;
	cout<<"Maximum element of array: "<<maxarr(arr,n)<<endl;
	cout<<"Minimum element of array: "<<minarr(arr,n)<<endl;
	
	
}
