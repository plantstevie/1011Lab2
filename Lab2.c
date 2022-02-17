#include <stdio.h>

int main() {
   char plus = '+';
   char us[5] = "U.S.";
   char brazil[7] = "Brazil";
   char croa[8] = "Croatia";
   char egy[6] = "Egypt";
   char fran[7] = "France";
   int usCode = 1;   
   int brCode = 55;
   int croaCode = 385;
   int egyCode = 20;
   int franCode = 33;
   int areaCode1;
   int prefix1;
   int line1;


   
   scanf("%d", &areaCode1);
   scanf("%d", &prefix1);
   scanf("%d", &line1);
   
   printf("Country  Phone Number\n");
   printf("-------  --------------------\n");
   // first number
   
   printf("%7s", us);
   printf("%3c", plus);
   printf("%5d", usCode);
   printf(" (%d)", areaCode1);
   printf("%d", prefix1);
   printf("-%0d\n", line1);
   
   // second number
   
   printf("%7s", brazil);
   printf("%3c", plus);
   printf("%5d", brCode);
   printf(" (%d)", areaCode1);
   printf("%d", prefix1 + 100);
   printf("-%d\n", line1);

   // third number
   printf("%s", croa);
   printf("%3c", plus);
   printf("%5d", croaCode);
   printf(" (%d)", areaCode1);
   printf("%d", prefix1);
   printf("-%d\n", line1 + 50); 

   //fourth number
   printf("%7s", egy);
   printf("%3c", plus);
   printf("%5d", egyCode);
   printf(" (%d)", areaCode1 + 30);
   printf("%d", prefix1);
   printf("-%d\n", line1); 

   //fifth number 
   printf("%7s", fran);
   printf("%3c", plus);
   printf("%5d", franCode);
   printf(" (%4d)", prefix1);
   printf("%d", areaCode1);
   printf("-%d\n", line1);
}

