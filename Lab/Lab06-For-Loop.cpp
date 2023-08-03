/*
    จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
    - หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
    - หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น

    Test case:
        Enter value:
            11
    Output:
        Series: 1 3 5 7 9 11

    Test case:
        Enter value:
            8
    Output:
        Series: 8 6 4 2 0
*/
#include <stdio.h>

void print_odd_series(int n) {
    int i;
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
}

void print_even_series(int n) {
    int i;
    for (i = n; i >= 0; i -= 2) {
        printf("%d ", i);
    }
}

int main() {
    int n;
    printf("Enter value: ");
    scanf("%d", &n);

    if (n % 2 == 1) {
        printf("Output:\nSeries: ");
        print_odd_series(n);
    } else {
        printf("Output:\nSeries: ");
        print_even_series(n);
    }

    return 0;
}