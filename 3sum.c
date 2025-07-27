#include<stdio.h>
int main(){

    int total_number_of_element;
    printf("enter number of element\n");
    scanf("%d",&total_number_of_element);
    int number[total_number_of_element];
    printf("enter your element\n");
    for(int i=0;i<total_number_of_element;i++){
        scanf("%d",&number[i]);
    }
    int target = 0;
    int is_found = 0;

    printf("Triplets that sum to 0:\n");
    for (int i = 0; i < total_number_of_element - 2; i++) {
        for (int j = i + 1; j < total_number_of_element - 1; j++) {
            for (int k = j + 1; k < total_number_of_element; k++) { 
                if (number[i] + number[j] + number[k] == target) {
                    printf("(%d, %d, %d)\n", number[i], number[j], number[k]);
                    is_found = 1;
                }
            }
        }
    }

    if (is_found==0) {
        printf("No triplets found\n");
    }

    return 0;
}
