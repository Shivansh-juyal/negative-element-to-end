#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cout<<"enter the size of array "<<endl;
    cin>>s;
    int arr[s];
    
    //to enter the array from user
    cout<<"enter the element " <<endl;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    //to move negative element to left
    int f = s;
    for(int i = 0 ; i<s; i++){
        for (int j = 0 ; j< s ;j++){
            if (arr[j]<0){
                int temp = arr[j];
                arr[j]=arr[s-1];
                arr[s-1]=temp;
                s--;

            }
        }
    }
    //t0 display the array
    cout<<"new array" <<endl;
    for(int i=0;i<f;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}