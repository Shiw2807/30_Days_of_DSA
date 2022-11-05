#include<iostream>
using namespace std;


int reverse_array(int arr[], int size, int m){

    int s=m+1, e=size-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int print_array(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

int main(){

    int arr[6]={2,3,4,7,9,1};
    // index from which array will be reversed.
    int m=3;

    reverse_array(arr,6,m);

    cout<<" Printing after reverse "<<endl;
    print_array(arr,6);
}