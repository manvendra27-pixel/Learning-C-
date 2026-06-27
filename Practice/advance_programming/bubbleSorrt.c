#include <stdio.h>

int main() {

    //we are sorting elements using bubble sort algorithm 

    int array[20], i, j, n, temp;

    printf("Enter the number of the elements: \n");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");

    for ( i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for ( i = 0; i < n; i++) {
        for( j = 0; j < n - i - 1; j++) {
            if( array[j] > array[ j + 1]) {
                temp = array[ j + 1];
                array[ j + 1] = array[ j ];
                array[ j ] = temp;
            } 
        }
    }

    printf("Final sorted array is: \n");
    for ( i = 0; i < n; i ++) {
        printf("%d ", array[i]);
    }

}