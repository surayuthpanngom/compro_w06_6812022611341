#include <stdio.h>// Include the standard input-output header
int main() {
    // กำหนดตัวแปรเริ่มต้นตามโจทย์ 
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // 1. แสดงค่าเริ่มต้นของตัวแปรทั้งหมด
    printf("1. a = %d, b = %d, c = %.1f, d = %.1f\n", a, b, c, d);

    // 2. ผลการคำนวณของ d + a
    printf("2. d + a = %.1f\n", d + a);  // ผลลัพธ์เป็น float

    // 3. ผลการคำนวณของ a - b
    printf("3. a - b = %d\n", a - b);  // ผลลัพธ์เป็น int

    // 4. ผลการคำนวณของ c * d
    printf("4. c * d = %.2f\n", c * d);  // ผลลัพธ์เป็น float

    // 5. ผลการคำนวณของ a * c
    printf("5. a * c = %.2f\n", a * c);  // int * float = float

    // 6. ผลการคำนวณของ c / d
    printf("6. c / d = %.2f\n", c / d);  // แบ่ง float กับ float

    // 7. ผลการคำนวณของ b / c
    printf("7. b / c = %.2f\n", b / c);  // int / float = float

    // 8. ผลการคำนวณของ a %% b
    printf("8. a %% b = %d\n", a % b);  // mod ของ int

    // 9. ผลการคำนวณของ c %% a -> ERROR
    // printf("9. c %% a = %.2f\n", c % a); 
    // Error: ไม่สามารถใช้ mod กับ float ได้
    // ต้องแปลง c เป็น int ก่อน หรือหลีกเลี่ยงการใช้ %

    // วิธีแก้: แปลง float c เป็น int ก่อน
    printf("9. (int)c %% a = %d\n", ((int)c) % a);  // หรือใช้วิธีอื่นแทน mod

    // 10. ผลการคำนวณของ c %% d -> ERROR
    // printf("10. c %% d = %.2f\n", c % d);
    // Error เช่นเดียวกับข้อ 9

    // วิธีแก้: แปลงทั้ง c และ d เป็น int ก่อน
    printf("10. (int)c %% (int)d = %d\n", ((int)c) % ((int)d));

    return 0;
}