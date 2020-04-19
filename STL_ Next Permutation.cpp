#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,size;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++){
            cin>>arr[j];
        }  
        next_permutation(arr,arr+size);
        for(int j=0;j<size;j++){
            cout<<arr[j]<<" ";
        }  

        cout<<endl;
         
    }
}
