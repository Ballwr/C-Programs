//mean, mode, variance using arrays

#include <stdio.h>

float mean(int arr[], int size) {
    float sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float mean = sum / size;
    return mean;
}

int mode(int arr[], int size) {
    int mode;
    int maxValue = 0, maxCount = 0;

    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (arr[j] == arr[i]) 
                count++;
        }

        if (count > maxCount){
            maxCount = count;
            maxValue = arr[i];
        }
    }
    mode = maxValue;
    return mode;
}

float variance(int size, int arr[], float arrmean){
    float diff, sum = 0;
    float variance;
    for (int i = 0; i<size; i++){
        diff = arr[i] - arrmean;
        sum += (diff*diff);
    }
    variance = sum/size;
    return variance;
}

int main(){
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    float arrmean = mean(arr, size);
    int arrmode = mode(arr, size);
    float arrvar = variance(size, arr, arrmean);
    printf("Mean is: %f\n", arrmean);
    printf("Mode is: %d\n", arrmode);
    printf("Variance is: %f\n", arrvar);

}