#include <iostream>

using namespace std;

int main()
{
    int n,i,mid;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int key, starting = 0, ending = n;


    cin>>key;

    while(starting<=ending){
        mid = (starting+ending)/2;

        if(arr[mid]== key){
            cout<<mid;
            break;
        }
        else if(arr[mid] > key)
             ending = mid-1;
        else
            starting = mid+1;
    }
    return 0;
}
