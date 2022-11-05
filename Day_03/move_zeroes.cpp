#include<iostream>
using namespace std;


int move_zeroes(int arr[], int size){
    int i=0;
    for(int j=0; j<size;j++){
        if (arr[j]!=0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
}


int print_array(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}


int main(){

    int arr[6]={2,0,7,0,0,5};
    move_zeroes(arr,6);
    cout<< "Printing the array after shifting zeroes to the right: ";
    print_array(arr,6);

}