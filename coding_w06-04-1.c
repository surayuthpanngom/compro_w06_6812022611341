#include <stdio.h>

int main() {
    float x1, x2, y = 2.0, z = 3.0, a = 4.0;
    float price = 10.0, quantity = 2.0, discount = 3.0;
    float total1, total2;
    float rate = 5.0;
    float score1, score2;
    int penalty = 2, mistake = 1;

    // Example 1
    x1 = x2 = 10.0;
    x1 = x1 - 4.0;
    x2 -= 4.0;
    printf("1. x = x - 4.0\t\t Full: %.2f, Short: %.2f\n", x1, x2);

    // Example 2
    x1 = x2 = 2.0;
    x1 = 6.5 * x1;
    x2 *= 6.5;
    printf("2. x = 6.5 * x\t\t Full: %.2f, Short: %.2f\n", x1, x2);

    // Example 3
    x1 = x2 = 25.0;
    x1 = (int)x1 % (int)(y + z * a);
    x2 = (int)x2 % (int)(y + z * a);
    printf("3. x = x %% (y + z * a)\t Full: %.2f, Short: %.2f\n", x1, x2);

    // Example 4
    x1 = x2 = 8.0;
    x1 = x1 / (2.0 * x1);
    x2 /= (2.0 * x2);
    printf("4. x = x / (2.0 * x)\t Full: %.2f, Short: %.2f\n", x1, x2);

    // Example 5
    total1 = total2 = 100.0;
    total1 = total1 + (price * quantity - discount);
    total2 += (price * quantity - discount);
    printf("5. total = total + (...)\t Full: %.2f, Short: %.2f\n", total1, total2);

    // Example 6
    x1 = x2 = 200.0;
    x1 = x1 * (1 + rate / 100);
    x2 *= (1 + rate / 100);
    printf("6. x = x * (1 + rate/100)\t Full: %.2f, Short: %.2f\n", x1, x2);

    // Example 7
    score1 = score2 = 50.0;
    score1 = score1 - (penalty * (mistake + 1));
    score2 -= (penalty * (mistake + 1));
    printf("7. score = score - (...)\t Full: %.2f, Short: %.2f\n", score1, score2);

    return 0;
}