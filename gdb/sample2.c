#include<stdio.h>
int sumArray(int a[], int elements) {
        int sum;
        for(long long int i=0;i<elements;i++) {
            sum += a[i];
        }
        printf("The sum of the array is: %d \n",sum);
}

int multiplyArray(int a[], int elements) {
        int sum;
        for (int i=0;i<elements;i++) {
                a[i] = a[i] * 5 ;
                sum += a[i];
        }
        printf("The sum of array elements after multiplying by 5 is: %d \n",sum);
}


int initArray(int elements) {
        int a[elements];
        for (int i=0;i<elements;i++) {
            a[i] = i + 1;
        }
        sumArray(a,elements);
        multiplyArray(a,elements);
}

int main() {
        int elements;
        printf("Enter number of elements for an array: \n");
        scanf("%d",&elements);
        initArray(elements);
        return 0;
}

