#include <iostream>

using namespace std;

int main()
{
    int n,key,i;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>> key;

    for(i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"KEY EXISTS AT"<<i<<endl;
        }
        }
            cout<<"KEY DOES'NT EXIST";
             return 0;
    }


