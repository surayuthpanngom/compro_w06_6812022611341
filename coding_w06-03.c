#include <stdio.h> // Include the standard input-output header

int main() { // Main function to demonstrate various expressions and their evaluations
    int x = 12, y = 7, z = 12; // Declare and initialize integer variables x, y, z

    printf("1. x > y = %d\n", x > y);              // 12 > 7 เป็น จริง(1)

    printf("2. x < z = %d\n", x < z);              // 12 < 12 เป็น เท็จ(0)

    printf("3. x == z = %d\n", x == z);            // 12 == 12 เป็น จริง(1)

    printf("4. x != y = %d\n", x != y);            // 12 != 7 เป็น จริง(1)

    printf("5. !(2*5 >= y) || (5 != (5/3)) = %d\n", !(x >= y) || (5 != (5 / 3))); // !(12 >= 7) || (5 != 1) -> !(1) || (1) -> 0 || 1 -> 1
    printf("6. !(x < y) = %d\n", !(x < y));        // !(12 < 7) -> !(0) -> 1

    printf("7. (x + y) > (z * 2) = %d\n", (x + y) > (z * 2));  // (12 + 7 = 19) > (12 * 2 = 24) -> 19 > 24 -> 0

    printf("8. (x %% 2 == 0) || (y %% 2 == 1) = %d\n", (x % 2 == 0) || (y % 2 == 1));   // 12 % 2 == 0 -> 1, 7 % 2 == 1 -> 1 -> 1 || 1 = 1

    printf("9. (x > y) && (z < y) = %d\n", (x > y) && (z < y));  // 12 > 7 = 1, 12 < 7 = 0 -> 1 && 0 = 0


    return 0;   // Return 0 to indicate successful execution
}