#include <stdio.h>

void main_screen(void) {
int area, num1, num2;
scanf("%d-%d-%d", &area, &num1, &num2);
if(area == 915) {
  if(num1 != 701) {
    printf("OK!\n");
  } else {
    if(num2 >= 1000 && num2 <= 1999) {
      printf("BLOCKED.\n");
    } else {
      printf("OK!\n");
    }
  }
} else {
if(area == 617 && num1 == 253) {
  printf("OK!\n");
} else if(area==718 && num1==834 && num2==9899) {
printf("OK!\n");
} else if(area==661 && num1==112 && num2==3581) {
  printf("OK!\n");
} else {
  printf("BLOCKED.\n");
}
}
}



