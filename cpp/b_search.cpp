#include <bits/stdc++.h>
using namespace std;
int key = 0;
int BinarySearch(int *p, int f, int l)
{
    int mid = (f + l) / 2;
    if (p[mid] == key)
        return mid;

    else if (p[mid] < key)
    {
        BinarySearch(p, mid + 1, l);
    }

    else
    {
        BinarySearch(p, f, mid - 1);
    }
}

int main()
{
    int s;
    cout<<"enter size of the array"<<endl;
    cin>>s;
    int arr[s];
    cout<<"enter elements of the array"<<endl;
    for (int i = 0; i < s; i++)
    {
        cin >> i[arr];
    }

    //selection sort
     int start = 0;
    while(start<s){
    int min = arr[start];
    for(int i = start;i<s;i++){
        if(arr[i]<min){
            int temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
        }
    }
    start++;
    }
    cout<<"sorted array:"<<endl;

    for(int i = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"enter key"<<endl;
    cin >> key;
    cout << BinarySearch(arr, 0, s - 1)+1;
}
