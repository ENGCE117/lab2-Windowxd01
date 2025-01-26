#include <stdio.h>
#include <string.h>

char* reverse(char str1[]);

int main() {
    char text[50];
    char *output;
    output = reverse(text);
    printf("MAIN : %s\n", output);
    return 0;
}

char str2[50];

char* reverse(char str1[]) {
    int len;
    printf("Enter a string: ");
    gets(str1); // รับค่าสตริงจากผู้ใช้
    len = strlen(str1);

    for (int i = 0; i < len; i++) {
        str2[i] = str1[len - 1 - i];
    }
    str2[len] = '\0'; // เพิ่ม null terminator

    printf("REVERSE : %s\n", str2); // แสดงผลลัพธ์ในฟังก์ชัน reverse

    return str2; // คืนค่าพอยน์เตอร์ไปยังสตริงที่กลับลำดับแล้ว
}
