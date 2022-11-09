#include<iostream>
#include <vector>
using namespace std;


    int duplicateZeros(vector<int>& arr) {
         int length = arr.size();
        int i=0, cnt=0, flag=0;
        for(int i=0;i<length-1;i++){
            if(arr[i] == 0){
                flag=1;
                arr.insert(arr.begin()+i, 0);
                i+=1;
                cnt+=1;
            }
        }
        
        while(cnt>0 && flag==1){
            arr.pop_back();
            cnt--;
        }
    }

int print_array(vector<int>& arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}



int main(){

    vector<int> arr={1,2,0,6,0,3,0,8};
    
    cout << "Printing before duplicating:  ";
    print_array(arr ,8);

    cout << endl;
    duplicateZeros(arr);
    cout << "Printing after duplicating:  ";
    print_array(arr ,8);
    
}