#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int compare (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

bool hasProduct(float *arr, float product, int size){
    qsort(arr, (size_t) size, sizeof(float), compare);
    int mid_limit = size-1;
    while(arr[mid_limit]>sqrt(product))
        --mid_limit;
    for(int i=mid_limit; i<size; ++i)
        for (int j = 0; j <= mid_limit; ++j)
            if(arr[j]*arr[i]==product)
                return true;
    return false;
}

bool hasProduct2(float *arr, float product, int size){
    unordered_map<float, float> map;
    for (int i = 0; i < size; ++i) {
        float other_num = product/arr[i];
        if(map.find(arr[i])==map.end() and map.find(other_num)==map.end()){
            map[arr[i]] = 1;
            map[other_num]=1;
        } else
            return true;
    }
    return false;
}

int main() {
    float arr[] = {10, 20, 9, 40};
    cout<<hasProduct2(arr, 50, 4);
    return 0;
}