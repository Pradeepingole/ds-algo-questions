#include<iostream>

using namespace std;

int getmax(int arr[],int n)
{
    int max = arr[0];
    for(int i=0;i<n;i++){

        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[],int n)
{
    int min = arr[0];
    for(int i=0;i<n;i++){

        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = { 10, 501, 20, 6, 9, 99 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"maximum element is : "<<getmax(arr,n)<< endl;
    cout<<"minimum element is : "<<getmin(arr,n);
   
   return 0;
}