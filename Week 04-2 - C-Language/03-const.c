#include <stdio.h>

int main()
{
  int a = 0b11001011;  // จำนวนที่เขียนด้วยเลขฐานสองได้เป็น 11001011
  int b = 0x3FC0;      // จำนวนที่เขียนด้วยเลขฐานสิบหกได้เป็น 3FC0
  int c = 01763;       // จำนวนที่เขียนด้วยเลขฐานแปดได้เป็น 1763
  int d = '0';         // รหัสแอสกี้ของอักขระ 0 (อักขระเลขศูนย์ ไม่ใช่ค่าศูนย์)

  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("d = %d\n", d);

  return 0;
}