//Access Array Elements Using Pointers
/*To understand this example, you should have the knowledge of the following C programming topics:

C for Loop
C Arrays
C Pointers
Relationship Between Arrays and Pointers*/
#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
    return 0;
}
/*
In this program, the elements are stored in the integer array data[].

Then, the elements of the array are accessed using the pointer notation. By the way,

data[0] is equivalent to *data and &data[0] is equivalent to data
data[1] is equivalent to *(data + 1) and &data[1] is equivalent to data + 1
data[2] is equivalent to *(data + 2) and &data[2] is equivalent to data + 2
...
data[i] is equivalent to *(data + i) and &data[i] is equivalent to data + i
Visit this page to learn about the relationship between pointers and arrays.*/


