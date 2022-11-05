#include<iostream>
using namespace std;

// Approach: Merge the two arrays and then sort the final array
int sort_array( int arr1[], int size){
    for(int i=0; i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if (arr1[j]<arr1[minIndex])
                minIndex=j;
        }
        swap(arr1[minIndex], arr1[i]);
    }
     
}


int merge_sorted(int arr1[], int arr2[], int m, int n){

    for(int i=0;i<n;i++){
        arr1[m+i]=arr2[i];
    }
    int size=m+n;
    sort_array(arr1, size);
}




int print_array(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}


int main(){

    int arr1[8]={1,3,5,7,9,0,0,0};
    int m=5;
    int arr2[3]={2,4,6};
    int n=3;

    merge_sorted(arr1,arr2,m,n);
    print_array(arr1,8);

}