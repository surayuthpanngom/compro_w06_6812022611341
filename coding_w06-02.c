#include <stdio.h>

int main() {
    int i = 1, j = 2, k;

    // บรรทัดที่ 1
    printf("1: i=%d, j=%d, k=undefined\n", i, j);

    // บรรทัดที่ 2
    k = i + j;
    printf("2: i=%d, j=%d, k=%d\n", i, j, k);

    // บรรทัดที่ 3
    i = i + (k * j);
    printf("3: i=%d, j=%d, k=%d\n", i, j, k);

    // บรรทัดที่ 4
    j = i / 2;
    printf("4: i=%d, j=%d, k=%d\n", i, j, k);

    // บรรทัดที่ 5
    k = i % 2;
    printf("5: i=%d, j=%d, k=%d\n", i, j, k);

    // บรรทัดที่ 6
    i = (j + k) * 3;
    printf("6: i=%d, j=%d, k=%d\n", i, j, k);

    return 0;
}


#include <stdio.h>

int main() {
    double x = 1.0, y = 2.0,

    // บรรทัดที่ 1
    printf("1: x=%.1f, y=%.1f, z=undefined\n", x, y);

    // บรรทัดที่ 2
    x = y + 5.0;
    printf("2: x=%.1f, y=%.1f, z=undefined\n", x, y);

    // บรรทัดที่ 3
    y = x / 2.0;
    printf("3: x=%.1f, y=%.1f, z=undefined\n", x, y);

    // บรรทัดที่ 4
    y = (x * 3.0) + 4.0;
    printf("4: x=%.1f, y=%.1f, z=undefined\n", x, y);

    // บรรทัดที่ 5
    x = -0.5 - y;
    printf("5: x=%.1f, y=%.1f, z=undefined\n", x, y);

    // บรรทัดที่ 6
    z = x + y;
    printf("6: x=%.1f, y=%.1f, z=%.1f\n", x, y,);

    return 0;
}