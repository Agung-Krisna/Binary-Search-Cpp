#include <iostream>
#include <cstdio>

int array[100];
bool isSorted(int size, int array[])
    {
        int start = 0;
        if (size == 0 || size == 1){
            return true;
        }
        for (start; start < size; start ++){
            if (array[start - 1] > array[start]){
                return false;
            }
        }
        return true;
    }

bool isEmpty(int size)
    {
        if (size == 0){
            return true;
        }
        else{
            return false;
        }
    }


void insert(int data, int size, int array[]){
    if (size == 0 || size == 1){
        array[0] = data;
    }
    else{
        array[size - 1] = data; 
    }
}

void binarysearch(int array[], int find, int size){
    int l = 0;
    int r = size - 1;
    int mid;
    if ((isEmpty(size))){
        printf ("Array is empty.\n");
    }
    else
    {
        while (l <= r){
            mid = l + (r - 1) / 2;
            if (find == array[mid]){
                printf ("%d is present in array", find);
            }
            else if(array[mid] < find){
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
    }
}
int main(){
    using namespace std;
    int N = 2;
    int data;
    int size;
    int start_again = 0;
    int find;
    array[N];
    printf ("Enter how many data that you want to insert:\n");
    scanf ("%d", &size);
    array[N] = array[size];
    printf ("Enter the data that you want to insert:\n");
    for (start_again; start_again < size; start_again++){
        scanf("%d", &data);
        insert(data, size, array);
    }
    printf ("Enter the data that you want to find:\n");
    scanf ("%d", &find);
    if (isSorted(size, array)){
        binarysearch(array, find, size);
    }
    else{
        printf ("Binary is not sorted\n");
    }
}

