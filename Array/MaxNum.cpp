#include <iostream>

using namespace std;

int main(){
    int max = 0;

    int arr[] = {1, 2, 3, 4, 5};

    for(int i=0; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return 0;
}