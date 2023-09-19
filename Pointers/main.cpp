int main() {
    int var1, var2; // var1 = 0, var2 = 0
    int *ptr1, *ptr2; // *ptr1 = nullptr, *ptr2 = nullptr

    ptr1 = &var1; // ptr1 = &var1, var1 = 0
    ptr2 = &var2; // ptr2 = &var2, var2 = 0

    *ptr1 = 63; // var1 = 63
    *ptr2 = 9; // var2 = 9

    *ptr1 = *ptr2; // var1 = 9, var2 = 9
    ptr1 = ptr2; // ptr1 = &var2, ptr2 = &var2
    *ptr1 = 78; // var2 = 78

    // var1 = 9
    // var2 = 78
    // *ptr1 = &var2
    // *ptr2 = &var2
}
