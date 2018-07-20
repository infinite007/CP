#include <iostream>

using namespace std;

void smallestNearestLeft(const int *arr, int size){

    for (int i = 0; i < size; ++i) {
        int j = i;
        while(arr[j]>=arr[i] and j>-1)
            --j;
        cout<<((j==-1)?"_":to_string(arr[j]))<<"\t";
    }
}

int main() {
    int arr[] = {1, 6, 4, 10, 2, 5}, arr_size=6;
//    int arr[] = {1, 3, 0, 2, 5}, arr_size=6;
    smallestNearestLeft(arr, arr_size);
    cout<<endl;
    return 0;
}