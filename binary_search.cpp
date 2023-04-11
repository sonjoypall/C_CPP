#include <iostream>
using namespace std;
int binary_search(int data_arr[12], int search_data){
    int search_result, mid, left, right;
    left = 0, right = 12;
    mid = (left+right)/2;

    while(left <= right ){

        if(search_data == data_arr[mid]){
            search_result = data_arr[mid];
            return mid;
        }
        if(data_arr[mid] < search_data){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
        mid = (left+right)/2;
    }
    return 0;
}

int main(){
    int myArr[12] = {10, 15, 25, 35, 40, 45, 56, 78, 98, 123, 154, 159};
    int data_re, find_data;
    cout << "Please enter a value: ";
    cin >> find_data;
    data_re = binary_search(myArr, find_data);
    if(data_re == 0){
        cout << "No match Found";
    } else{
        cout << "Data: " << find_data << " is found at the position: " << data_re;
    }
    return 0;
}
