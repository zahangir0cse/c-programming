#include<stdio.h>

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertion_sort(int a[], int n){
    int unsortedCount, temp, sortedCount;
    for(unsortedCount=1; unsortedCount < n; unsortedCount++){
        temp = a[unsortedCount];
        sortedCount = unsortedCount - 1;
        while(temp < a[sortedCount] && sortedCount >= 0){
            a[sortedCount + 1] = a[sortedCount];
            sortedCount--;
        }
        a[sortedCount + 1] = temp;
    }
}
int main(){
    int data[] = {9, 5, 1, 4, 3};
    insertion_sort(data, 5);
    printArray(data, 5);
    return 0;
}
