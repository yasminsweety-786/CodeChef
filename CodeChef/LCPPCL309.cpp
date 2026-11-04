The correct version of the swap() function to swap two numbers using pointers is Option 1:


void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


In this version:

1. The value pointed to by ptr1 is stored in a temporary variable temp.
2. The value pointed to by ptr1 is then updated to the value pointed to by ptr2.
3. Finally, the value pointed to by ptr2 is updated to the value stored in temp, effectively swapping the values of the two pointers.