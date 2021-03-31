#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>



int main() {
    int N;
    cout<<"Enter size of array: "<< endl;
    cin>>N;
    char *arr = new char[N];
    char *duplicateArr = new char[2*N];
    
    cout<<"Enter elements: "<< endl;

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
        duplicateArr[2 * i] = arr[i];
        duplicateArr[2 * i + 1] = arr[i];
    }
    
    cin.clear();
    cin.ignore(255, '\n');
    
    
    for(int i = 0; i <2 * N; i++) {
        cout<< duplicateArr[i]<<" ";
    }
    cout<< endl;

    
}
