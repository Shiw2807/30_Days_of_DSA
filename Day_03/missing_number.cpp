#include<iostream>
using namespace std;

int main(){
    
    int missing_number;
    int arr[9]={9,6,4,2,3,5,7,0,1};

    for(int i=0;i<9;i++){
        int key=i;
        for(int j=0;j<9;j++)
        if(arr[j]!=key){
            missing_number=i;
        }
    }

    cout<< "Printing array: "<< endl;
     for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    cout<< endl<< "Missing number is: "<< missing_number;
}