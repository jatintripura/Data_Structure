#include<stdio.h>

int main() {
    int n,m;
    printf("Enter the length of the first array: ");
    scanf("%d", &n);

    int first_array[n];
    printf("Enter the elements of the first array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &first_array[i]);
    }

    printf("Enter the length of the second array: ");
    scanf("%d", &m);

    int second_array[m];
    printf("Enter the elements of the second array: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &second_array[i]);
    }

    int merged_array[n+m];
    for(int i = 0; i < n; i++) {
        merged_array[i] = first_array[i];
    }

    for( int i = 0; i <  m; i++ ) {
        merged_array[i + n] = second_array[i];
    }

    for(int i = 0; i < n + m; i++) {
        printf(" %d", merged_array[i]);
    }
    printf("\n");
    return 0;
}