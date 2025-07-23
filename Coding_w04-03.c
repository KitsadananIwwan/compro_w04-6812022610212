#include <stdio.h> // สำหรับใช้ฟังก์ชัน printf()

int main() { // ประกาศตัวแปรและกำหนดค่าเริ่มต้น
    char nameInitial = 'K'; // Data Type: char (สำหรับเก็บอักขระเดี่ยว)
    int age = 20;           // Data Type: int (สำหรับเก็บจำนวนเต็ม)
    float weight = 77.5f;   // Data Type: float (สำหรับเก็บเลขทศนิยม, ใช้ 'f' ต่อท้ายเพื่อระบุว่าเป็น float literal)
    char gender[] = "Male"; // Data Type: char array (สำหรับเก็บข้อความ, ใน C คืออาร์เรย์ของ char)

    // แสดงผลลัพธ์ออกทางหน้าจอ
    printf("nameInitial = %c\n", nameInitial); // %c สำหรับ char
    printf("age = %d\n", age);                 // %d สำหรับ int
    printf("weight = %.2f\n", weight);        // %.2f สำหรับ float แสดงทศนิยม 2 ตำแหน่งเพื่อให้ครอบคลุม 48.50
    printf("gender = %s\n", gender);           // %s สำหรับ string (char array)

    return 0; // คืนค่า 0 แสดงว่าโปรแกรมทำงานเสร็จสมบูรณ์
}