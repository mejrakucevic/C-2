#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

//  void birthday(char x[], int y) {
//         printf("\nHappy Birthday dear %s!", x);
//         printf("\nYou are %d years old!", y);
     
//     }
       
    //    double square(double x) {
    //         double result = x * x;
    //         return result;
    //    }

// int findMax(int x, int y) {
//     return (x > y) ? x : y;
// }


// typedef = reserved keyword that gives a nickname for an existing datatype
// its mostly for convenience

// typedef char user[25] ;


// struct Student {
//   char name[12];
//   float gpa;
// };

// struct reperi {
//   char ime[20];
//   int grammys;
// };

// // ENUMNS ARE NOT STRINGS, HELP MAKE THE CODE MORE READABLE;
// enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu, Fri, Sat};

// int main() {

  //  srand(time(0));

  //  int number1 = (rand() % 20) + 1;
  //     int number2 = (rand() % 20) + 1;
  //        int number3 = (rand() % 20) + 1;



  //  printf("%d\n", number1);
  //   printf("%d\n", number2);
  //    printf("%d", number3);

  // const int MIN = 1;
  // const int MAX = 100;
  // int guess;

  // int guesses = 0;
  // int answer;

  // srand(time(0));

  // // generates a random number between min and max
  // answer = (rand() % MAX) + MIN;

  //    do{
  //        printf("Enter a guess: ");
  //        scanf("%d", &guess);

  //        if (guess > answer) {
  //         printf("Too high!\n");
  //        } else if (guess < answer) {
  //         printf("Too low!\n");
  //        } else {
  //         printf("CORRECT!\n");
  //        }
  //        guesses++;
  //    } while (guess != answer);

  //      printf("-----------------------\n");
  //      printf("answer: %d\n", answer);
  //      printf("guesses: %d\n", guesses);
  //      printf("-----------------------");



    // enum Day today = Sun;
    // printf("%d", today);

    // struct reperi reper1 = {"Frank Ocean", 2};
    // struct reperi reper2 = {"Ye", 4};
    // struct reperi reper3 = {"Doja Cat", 2};

    // struct reperi grupaRepera[] = {reper1, reper2, reper3};

    // for (int i = 0; i <= sizeof(grupaRepera)/sizeof(grupaRepera[0]); i++) {
    //   printf("%-2s\t", grupaRepera[i].ime);
    //   printf("%-2d\n", grupaRepera[i].grammys);

      
    // }



    // struct Student student1 = {"Spongebob", 3.0};
    // struct Student student2 = {"Patrick", 2.5};
    // struct Student student3 = {"Sandy", 4.0};

    // struct Student students[] = {student1, student2, student3};

    // for (int i = 0; i <= sizeof(students)/sizeof(students[0]); i++) {
    //   printf("%-12s\t", students[i].name);
    //   printf("%.2f\n", students[i].gpa);

    // }


  // }
      //  user user1 = "Bro";
    // struct Player player1;
    // struct Player player2;

    // strcpy(player1.name, "Mejra");
    // player1.score = 4;

    // strcpy(player2.name, "Dag");
    // player2.score = 5;

    // printf("%s\n", player1.name);
    // printf("%d\n", player1.score);

    // printf("%s\n", player2.name);
    // printf("%d\n", player2.score);

    
    // 2d arrays - an array, where each element is an entire array
    //             useful for matrix, grid, or tables of data

    // matrica 3x3
    //  int numbers[3][3]; 
    // //     {1, 2, 3},
    // //     {4, 5, 6}
    // //     }; 

    // int rows = sizeof(numbers)/sizeof(numbers[0]);
    // int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    // numbers[0][0] = 1;
    // numbers[0][1] = 2;
    // numbers[0][2] = 3;
    // numbers[1][0] = 4;
    // numbers[1][1] = 5;
    // numbers[1][2] = 6;
    // numbers[2][0] = 7;
    // numbers[2][1] = 8;
    // numbers[2][2] = 9;

    // for(int i = 0; i < rows;  i++) { // 2rows
    //     for (int j = 0; j < columns; j++) // 3columns
    //     {
    //         printf("%d ", numbers[i][j]);
    //     }
    //     printf("\n");
    // }

    // matrica 3x3
    // int brojevi[3][3];

    // int redovi = sizeof(brojevi)/sizeof(brojevi[0]);
    // int kolone = sizeof(brojevi[0])/sizeof(brojevi[0][0]);

    // brojevi[0][0] = 0;
    // brojevi[0][1] = 0;
    // brojevi[0][2] = 0;
    // brojevi[1][0] = 4;
    // brojevi[1][1] = 2;
    // brojevi[1][2] = 0;
    // brojevi[2][0] = 0;
    // brojevi[2][1] = 0;
    // brojevi[2][2] = 0;

    // for (int i = 0; i < redovi; i++) {
    //     for (int j = 0; j < kolone; j++) {
    //         printf("%d", brojevi[i][j]);
    //     } printf("\n");
    // }

    // 

    // char cars[][10] = {"Mustang", "Porsche", "Audi"};

    // strcpy(cars[0], "Ferrari");

    // for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
    //     printf("%s\n", cars[i]);
    // }

    // EGG TOAST

    // char recipe[][10] = {"Eggs", "Toast", "Oil", "Mayo"};

    // printf("Ingredients for egg toast: \n");
    // for (int i = 0; i < sizeof(recipe)/sizeof(recipe[0]); i++) {
    //     printf("%s\n", recipe[i]);
    // } 

    // char x[] = "water";
    // char y[] = "lemonade";
    // char temp[15];

    // strcpy(temp, x);
    // strcpy(x, y);
    // strcpy(y, temp);

    // printf("x = %s\n", x);
    // printf("y = %s\n", y);
    // arrays  
    // double prices[] = {5.0, 10.0, 15.0, 25, 20.0, 30.0};

    

    // for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
    //     printf("$%.2lf\n", prices[i]);

    // }
    

    // nested loops
    // int rows;
    // int columns;
    // int symbol;

    // printf("\nEnter # of rows: ");
    // scanf("%d", &rows);

    // printf("Enter # of columns: ");
    // scanf("%d", &columns);

    // scanf("%c");

    // printf("Enter a symbol to use: ");
    // scanf("%c", &symbol);

    // for (int i = 1; i <= rows; i++) {
    //     for(int j = 1; j <= columns; j++) {
    //         printf("%c", symbol);

    //     } printf("\n");
    // }

//   char string1[] ="Mejra";
//   char string2[] = "Kucevic";

//   strupr(string1);
//   strcpy(string1, string2);
//   strrev(string1);

//   int result = strlen(string1);

//   printf("%d", result);
  

    // int max = findMax(3, 4);

    // printf("%d", max);

    // double x = square(3.14);
    // printf("%lf", x);
    // char name3[] = "Mejra";
    // int age3 = 18;

    // birthday(name3, age3);
      

    // This is a comment 
    // printf("I\nlike\npizza\n");
    // printf("It's really good!\n");

    // // there are 
    // // multiple comments

    // printf("1\t2\t3\n4\t5\t6\n");
    // printf("\"I like Pizza\"");

    // int x; // declaration
    // x  = 132; // initilization

    // int y = 192; // declaration + intilization

    // int age = 18; // integer
    // float gpa = 3.05; // floating point number/ decimal
    // char grade = 'B'; // single character
    // char name[] = "Mejra"; // array of characters
    
    // printf("Hello, %s", name);
    // printf("\nYou are %d years old\n", age);
    // printf("Your average grade is %c\n", grade);
    // printf("Your gpa is %f", gpa);

    // double d = 3.141567567567; // 8 bytes
    // printf("0.15%lf\n", d);

//    bool e = true;
//    printf("%d\n", e);

//    unsigned char f = 280;
//    printf("%d", f);

//    short int h = 32525;
//    unsigned short in i = 6555;

    //  float item1 = 5.75;
    //  float item2 = 10.00;
    //  float item3 = 100.99;

    //  printf("Item 1 : $%8.2f\n", item1);
    //  printf("Item 2 : $%8.2f\n", item2);
    //  printf("Item 3 : $%8.2f\n", item3);

    // return 0;

    // printf("I like pizza!\n");

    // int age1;
 
    // //char name1[25]; // bytes
    // printf("Whats your name?\n");
    // //scanf("%s", &name1);
    // fgets(name, 25, stdin);
    // name[strlen(name)-1] = '\0';

    // printf("Hello %s, how are you?\n", name);
    // printf("How old are you?\n");
    // scanf("%d", &age1);
    // printf("You are %d years old", age1);
    // double B = pow(2, 4);
    // int C = round(3.14);
    // int D = ceil(3.14); //round up
    // int E = floor(3.99); // round down

    // printf("\n%d", E);

    // circle circumference round up calculator
    // double r;
    
    // const double PI = 3.14159;
    // printf("Enter the radius of your circle\n");

    // scanf("%lf", &r);
    // int E = 2 * r * PI;
    // double area;
    // area = PI * r * r;
    // printf("\narea: %lf", area);
    // printf("\nCircumference: %d", E);


    // double A;
    // double B;
    // double C;

    // printf("Enter side A: ");
    // scanf("%lf", &A);

    // printf("Enter side B: ");
    // scanf("%lf", &B);
    
    // C = sqrt(A*A + B*B);
    // printf("Side C: %lf", C);

    // int age1;

    // printf("\nEnter your age:");
    // scanf("%d", &age1);
    
    // if(age1 >= 18){
    //     printf("You are eligible for a credit card!");
    // }
    // else if(age1 <0){
    //     printf("Wrong input!");
    // }
    // else {
    //     printf("You are not eligible for a credit card!");
    // }

    // Convert Temperature Measurements program
    // char unit;
    // float temp;

    // printf("\nIs the temperature in F or C?");
    // scanf("%c", &unit);

    // unit = toupper(unit);
    // if(unit == 'C') {
    //      printf("\nEnter the temp in celsius");
    //      scanf("%f", &temp);
    //      temp = (temp * 9 / 5) + 32;
    //      printf("\nThe temperature in Farenheith is: %.1f", temp);
    // } else if (unit == 'F'){
    //              printf("\nEnter the temp in Farenheit Degrees:");
    //              scanf("%f", &temp);
    //              temp = ((temp - 32) * 5) / 9;
    //              printf("\nThe temp in celsius is %.1f", temp);
    // } else {
    //    printf("Not a valid unit of measurment");
    // }
    
    // Calculator Program
    // char operator;
    // double num1;
    // double num2;
    // double result;

    // printf("\nEnter an operator (+ - * /): ");
    // scanf("%c", &operator);

    // printf("Enter number 1: ");
    // scanf("%lf", &num1);

    // printf("Enter number 2: ");
    // scanf("%lf", &num2);

    // switch(operator) {
    //     case '+':
    //       result = num1 + num2;
    //       printf("\nresult : %.2lf", result);
    //       break; 
        
    //     case '-':
    //       result = num1 - num2;
    //       printf("\nresult : %.2lf", result);
    //       break;  

    //     case '*':
    //       result = num1 * num2;
    //       printf("\nresult : %.2lf", result);
    //       break; 

    //     case '/':
    //       result = num1 / num2;
    //       printf("\nresult : %.2lf", result);
    //       break; 
    //     default:
    //     printf("%c is not valid", operator);
    // }

    // float temp = 25;
    // bool sunny = true;

    // if(temp >= 20 && temp <= 30 && sunny) {
    //     printf("\nThe weather is good!");
    // } else {
    //     printf("\nThe weather is bad!");
    // }

    // bool sunny = true;
    // if(!sunny) {
    //     printf("Its clooudy!");
    // } else {
    //     printf("Its sunny!");
    // }

//    DO WHILE
//    int x = 0;

//       int a = 0;

//       do {
//         printf("x in this moment of time: %d \n", a);
//         a++;
//       } while (a <= 10);

//    WHILE LOOP
//    int x = 0;
//    while (x <= 10) {
//     printf("x in this moment of time: %d \n", x);
//     x++;
//    } // bez ovog x++ bio bi infinite loop jer je x uvek manji od 10 a ne povecava se, a ovako uz x++ povecace se do 10 i prestace program da radi
        
  // nizovi tj arrays

//   int numbers[] = {2, 4, 5, 1, 7};
//   char slova[] = {'a', 'b', 'c'};

//   printf("Number: %d \n", numbers[0]);
//   printf("Number: %d \n", numbers[3]);

//   slova[0] = 'k';
//   printf("Slovo: %c \n", slova[0]);

//   int x = 0;

//   for (x; x <= 4; x++) {
//     printf("Numbers: %d \n", numbers[x]);

//   }


   // switch case

//    printf("1 - INFJ \n");   
//    printf("2 - INFP \n");
//    printf("3 - INTJ \n");
//    printf("4 - INTP \n");
//    printf("############### \n");

//    int mbti;

//    printf("Enter Choice: ");
//    scanf("%d", &mbti);

//    switch (mbti) {
//     case 1: 
//       printf("The name of your MBTI is Advocate!");
//       break;

//     case 2:
//       printf("The name of your MBTI is Mediator!");
//       break;

//     case 3:
//       printf("The name of your MBTI is Architect!");
//       break;

//     case 4:
//       printf("The name of your MBTI is Logician!");
//       break;

//     default:
//       printf("Pick one of the numbers!");
//    }

// bubble sort
// void sort(int array[], int size) {
//         for (int i = 0; i < size - 1; i++) {
//             for (int j = 0; j < size - i - 1; j++) {
//                 if(array[j] > array[j+1]) { // 9 a 9 + 1 mesto je 1, proveravamo je li vece
//                    int temp = array[j];
//                    array[j] = array[j+1];
//                    array[j+1] = temp;
//                 }

//             }

//         }
//      }

//      void printArray(int array[], int size) {
//         for (int i = 0; i < size; i++) {
//             printf("%d ", array[i]);
//         }
//      }
// int main() {

//      int array[] = {9, 1, 6, 2, 8};
//      int size = sizeof(array)/sizeof(array[0]);
     
//      sort(array, size);
//      printArray(array, size);
    
//     return 0;
// }
  

// char stringy[] = "recenica";

// int length = strlen(stringy);
// char zadnjeslovo = stringy[length - 1];
// printf("%d", zadnjeslovo);

//   return 0;
// }

// !!!!!! linear search algorithm that finds a target number from array of numbers !!!!!!!! //

// int linearSearch(int numbers[], int size, int target) {
//         for (int i = 0; i < size; i++) {
//                 if (numbers[i] == target) {
//                         return i;
//                 }
//         }
//         return -1;
// }

// int main() {
//         int brojevi[] = {1, 2, 3, 4, 5};
//         int tacanBr = 3;
//         int velicina = sizeof(brojevi)/sizeof(brojevi[0]);

//         int result = linearSearch(brojevi, velicina, tacanBr);

//         if (result != -1) {
//                 printf("Target found at index: %d\n", result);
//         } else {
//                 printf("Target not found");
//         }

//         return 0;
// }

// void prikazNiza(int nekiNiz[], int n) {
//     for (int i = 0; i < n; i++) {
//       printf("%d", nekiNiz[i]);
//     } 
// }

// void sumaBrNiza(int nekiNiz[], int n) {
//   int zbir = 0;

//   for (int i = 0; i < n; i++) {
//     zbir += nekiNiz[i];
    
//   } printf("\n%d", zbir);
// }

// int srednjaVr(int nekiNiz[], int n) {
//   int zbir = 0;
//   int brojacBr = 0;

//   for (int i = 0; i < n; i++) {
//     zbir += nekiNiz[i];
//     brojacBr += 1;
//   } int srednja = zbir / brojacBr; 
//     return srednja;
// }

// int main() {
//   int nekiNiz[] = {1, 2, 3, 4, 5};
//   // izracunavanje velicine niza
//   int n = sizeof(nekiNiz)/sizeof(int); 
//   prikazNiza(nekiNiz, n);

//   sumaBrNiza(nekiNiz, n);  // printf("\nZbir je: %d", sumaBrNiza(nekiNiz, n)); - ovo bi koristli ako bi funckija bila INT 

//   printf("\nSrednja vrednost je: %d", srednjaVr(nekiNiz, n));


//   return 0;
// }

// Unos niza i prikaz unetog niza

void unosNiza(int niz[]) {
  int n;
  printf("Unesite broj clanova niza (<5): ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (n > 5) { 
     printf("MORA <5 !!!!!!!");
     break;
   } else { 
    printf("Unesite clan %d: ", i);
    scanf("%d", &niz[i]);
    } }
} 

void prikazNiza(int niz[]) {
  int n;
    for (int i = 1; i <= n; i++) {
      printf("\n%d", niz[i]);
    }
}
// provera postojanja odredjenog broja u nizu
int postojanjeBroja(int niz[], int n) {
  int broj;
  printf("Unesite broj koji trazite: ");
  scanf("%d", &broj);

  for (int i = 1; i <= n; i++) {
    if (niz[i] == broj) {
        printf("Broj postoji");
        break;
    }  else printf("Broj ne postoji!");
       break;
  } 
  } 



int main() {
  int n, postoji, broj;
  int niz[5];
  unosNiza(niz);
  // prikazNiza(niz);
  printf("%d", postojanjeBroja(niz, n));

  return 0;
}