#include <iostream>

using namespace std;

int main()
{
    int i, j, n;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int count = 1,temp = 0;

    while(count<n){
        for(i=0;i<n-count;i++){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
