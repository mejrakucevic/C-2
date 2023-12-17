#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Strukture podataka i algoritmi vezbanja (C)

// ---------------------------------------------------------------------------------------------------------------------------

// 1. izracunati dijagonalu pravougaonika
// float num1;
// float num2;
// float result;

// int main () {
//     printf("Unesite stranicu a ");
//     scanf("%f", &num1);
//     printf("\nUnesite stranicu b ");
//     scanf("%f", &num2);

//     result = sqrt(num1 * num1 + num2 * num2);
//     printf("Dijagonala pravougaonika je %.1f", result);

// }
// --------------------------------------------------------------------------------------------------------------------------------

// 2. izracunati sumu dva broja

// float broj1;
// float broj2;
// float resultat;

// int main() {
//      printf("Unesite prvi broj: ");
//      scanf("%f", &broj1);
//      printf("Unesite drugi broj: ");
//      scanf("%f", &broj2);
//      resultat = broj1 + broj2;
//      printf("Suma brojeva je %.1f", resultat);
     

//      return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------

// 3. Izracunati kvadrat upisanog broja

// float broj;
// float resultat;

// int main() {
//     printf("Unesite broj: ");
//     scanf("%f", &broj);

//     resultat = broj * broj;
//     printf("Kvadrat vaseg broja je %.1f", resultat);


//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------------------------

// selekcije . razgraniti algoritam
// int main() {
//     int num;
//     scanf("%d", &num);

//     if (num >= 18) {
//         printf("You are a legal adult!");
//     } else {
//         printf("You are not legal yet!");
// } 
// }
// --------------------------------------------------------------------------------------------------------------------------------
// ciklicne strukture - algoritmi
// brojac parnih brojeva od 1 do 25
// int main() {
//     int  i;
//     printf("Parni brojevi od 1 do 25 su :\n");
//     for (i = 1; i <= 25; i++) {
//         if (i % 2 == 0) {
//            printf("%d \t", i);
//         }
//     }
// }
// --------------------------------------------------------------------------------------------------------------------------------

// Formirati algoritam za izračunavanje sume brojeva 1 do N, gde
// se N učitava
// int main() {
//     int N;
//     int i;
//     double suma = 0;
//     printf("Unesite vas broj : ");
//     scanf("%d", &N);

//     for (i = 1; i<=N; i++) {
//         suma = suma + i;
//         printf("Suma brojeva je %.1lf", suma);
//     }
// }
// --------------------------------------------------------------------------------------------------------------------------------

// Lista brojeva od 10 do 1
// int main() {
//     int i = 10;
//     for (i = 10; i>=1; i--) {
//         printf("%d\n", i);
//     }

//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------------------------

// Za unete brojeve A, B i C, treba rešiti linearnu jednačinu AX+B=C.
// int main() {
//     double A;
//     double B;
//     double C;
//     double x;

//     printf("Unesite A : ");
//     scanf("%lf", &A);

//     printf("Unesite B : ");
//     scanf("%lf", &B);

//     printf("Unesite C : ");
//     scanf("%lf", &C);

//     x = (C - B) / A;
//     printf("Rezultat jednacine AX + B = C jeste %.1lf", x);

// }
// --------------------------------------------------------------------------------------------------------------------------------

// Za unetu temperaturu u Celzijusovim stepenima, izračunati temperaturu u Farenhajtima. 
// int main() {
//     double C;

//     printf("Unesite temperaturu u Celzisujovim stepenima : ");
//     scanf("%lf", &C);

//     double F = (C * 1.8 + 32);
//     printf("Temperatura u Farenhajtima je : %.1lf", F);

//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------------------------

// Unosi se rezolucija slike u obliku dva cela broja koji označavaju broj piksela po širini i visini. Izračunati rezoluciju slike u megapikselima, ako znamo da megapiksel predstavlja milion piksela.
// int main() {
//    int sirina;
//     int visina;
//     printf("Pixel --> Megapixel Converter\n");

//     printf("Unesite sirinu vase slike : ");
//     scanf("%d", &sirina);

//      printf("Unesite visinu vase slike : ");
//     scanf("%d", &visina);

//     double megaS = (visina * sirina) / 1000000.0;
//      printf("Dimenzija vase slike u megapixelima jesu : %.2lf MP \n", megaS);

//      return 0;
// }

// Unosi se broj casova koje ucenici imaju tog dana. Izracunati koliko sati i minuta djaci provedu na nastavi, ako znamo da cas traje 45min
// int main() {

//     int brCasova;
//     int satImin;
//     printf("Unesite broj casova: ");
//     scanf("%d", &brCasova);

//     switch(brCasova) {
//         case 1: 
//         satImin = 45;
//         printf("Proveli ste %d minuta na nastavi.", satImin);
//         break;
//          case 2: 
//         satImin = 90;
//         printf("Proveli ste %d minuta, tj. 1 sat i 10 minuta na nastavi.", satImin);
//         break;
//          case 3: 
//         satImin = 135;
//         printf("Proveli ste %d minuta, tj. 2 sata i 15 minuta na nastavi.", satImin);
//         break;
//          case 4: 
//         satImin = 180;
//         printf("Proveli ste %d minuta, tj. 3 sata na nastavi.", satImin);
//         break;
//          case 5: 
//         satImin = 225;
//         printf("Proveli ste %d minuta, tj. 3 sata i 45min na nastavi.", satImin);
//         break;
//          case 6: 
//         satImin = 280;
//         printf("Proveli ste %d minuta, tj. 4 sata i 40 minuta na nastavi.", satImin);
//         break;
//     }
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Izracunati rezultat deljenja brojeva X i Y, zaokruzen na dve decimale

// int main() {
//     double x;
//     double y;
//     double rezultat;

//     printf("Unesite prvi broj: ");
//     scanf("%lf", &x);

//     printf("Unesite drugi broj: ");
//     scanf("%lf", &y);
//     rezultat = x / y; 
//     printf("Rezultat deljenja brojeva je: %.2lf", rezultat);

// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unesi se neka godina, GOD, kao ceo broj. Ispisati u kom veku pripada.

// int main() {
//     int GOD;
//     int VEK;
//     printf("Kojem veku pripada X godina?\n");
//     printf("Unesite godinu: ");
//     scanf("%d", &GOD);

//     if (GOD >= 1601 && GOD <= 1700) {
//         VEK = 17;
//         printf("Godina %d je %d. vek!", GOD, VEK);
//     } else if (GOD >= 1701 && GOD <= 1800) {
//         VEK = 18;
//         printf("Godina %d je %d. vek!", GOD, VEK);
//     }  else if (GOD >= 1801 && GOD <= 1900) {
//         VEK = 19;
//         printf("Godina %d je %d. vek!", GOD, VEK);
//     }  else if (GOD >= 1901 && GOD <= 2000) {
//         VEK = 20;
//         printf("Godina %d je %d. vek!", GOD, VEK); 
//     }  else if (GOD >= 2001 && GOD <= 2100) {
//         VEK = 21;
//         printf("Godina %d je %d. vek!", GOD, VEK);
//     } 
//     return 0;

// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Uneto veliko slovo engleske abecede, treba konvertovati u malo slovo, npr. za uneto "R" treba da se dobije "r".

// int main() {
//     char X, upperX;
//     printf("Unesite veliko slovo engleske abecede : ");
//     scanf("%c", &X);
//     upperX = tolower(X);
//     printf("Malo slovo : %c", upperX);
// }

// ----------------------------------------------------------------------------------------------------------------------------------
// Za uneti celi broj X, proveriti i ispisati da li je paran ili neparan.

// int main() {
//     int X;
//     printf("Provera parnosti broja.\n");

//     printf("Unesite celi broj: ");
//     scanf("%d", &X);

//     if (X % 2 == 0) {
//         printf("Broj je paran!");
//     } else {
//         printf("Broj nije paran!");
// }
//  }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se tri broja A, B i C. Izračunati zbir onih koji su veći od nule.

// int main() {
//      double A, B, C;
//      double zbir;
//      printf("Unesite 3 broja : ");
//      scanf("%lf %lf %lf", &A, &B, &C);
    
//      if (A >= 0) {
//         zbir += A;
//      }
//      if (B >= 0) {
//         zbir += B;
//      }
//      if (C >= 0) {
//         zbir += C;
//      }
     
//      printf("%.1lf", zbir);
//      return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unosi se veličina nekog fajla u bajtovima B. Treba izračunati veličinu tog fajla u kibibajtima i mebibajtima i ispisati rezultat, zaokružen na dve, odnosno tri decimale. // 1 kb = 1024B i 1 mb = 1024KB

// int main() {
//     double B;
//     double kiloB;
//     double megaB;

//     printf("Bajt --> Kilobajt i Megabajt\n");
//     printf("Unesite velicinu u Bajtu: ");
//     scanf("%lf", &B);

//     kiloB = B / 1000;
//     megaB = B / 1000000;
//     printf("Bajt --> Kilobajt = %.6lf\n", kiloB);
//     printf("Bajt --> Megabajt = %.6lf", megaB);

// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se tri broja A,B i C. Otkriti i ispisati najmanji broj

// int main() {
//     int A;
//     int B;
//     int C;

//     printf("Unesite prvi broj: ");
//     scanf("%d", &A);

//     printf("Unesite drugi broj: ");
//     scanf("%d", &B);

//     printf("Unesite treci broj: ");
//     scanf("%d", &C);

//     if (A < B && A < C) {
//         printf("%d je najmanji!", A);
//     } else if (B < A && B < C) {
//         printf("%d je najmanji!", B);
//     } else if (C < A && C < B) {
//         printf("%d je najmanji!", C);
//     }
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Za unete 4 ocene proveriti da li je za učenika bolji prosek koji se računa po aritmetičkoj, geometrijskoj ili harmonijskoj sredini. Aritmetička sredina se dobija kao količnik zbira N vrednosti i njihovog broja N. Geometrijska kao N-ti koren proizvoda N vrednosti (postoji razlog zašto imamo baš 4 ocene). Harmonijsku sredinu računamo kao količnik broja vrednosti N i zbira N recipročnih zadatih vrednosti. Kako se racuna N-ti koren - posto je nti koren po defaultu 2 onda dva put stavimo sqrt da bi bio 4

//  int main() {
//     double ocena1, ocena2, ocena3, ocena4;

//      printf("Unesite prvu ocenu: ");
//      scanf("%lf", &ocena1);

//     printf("Unesite drugu ocenu: ");
//     scanf("%lf", &ocena2);

//      printf("Unesite trecu ocenu: ");
//      scanf("%lf", &ocena3);

//      printf("Unesite cetvrtu ocenu: ");
//      scanf("%lf", &ocena4);

//     double aritmeticka = (ocena1 + ocena2 + ocena3 + ocena4) / 4;
//     double geometrijska2 = sqrt(sqrt(ocena1 * ocena2 * ocena3 * ocena4));
//     double harmonijska = 4 / (1/ocena1 + 1/ocena2 + 1/ocena3 + 1/ocena4);

//     if (aritmeticka > geometrijska2 && aritmeticka > harmonijska) {
//          printf("Najbolji je prosek po aritmetickoj sredini!");
//      } else if (harmonijska > geometrijska2 && harmonijska > aritmeticka) {
//          printf("Najbolji je prosek po harmonijskoj sredini!");
//      } else if (geometrijska2 > aritmeticka && geometrijska2 > harmonijska) {
//          printf("Najbolji je prosek po geometrijskoj sredini!");
//      } else ("nzm");
//  }

// ----------------------------------------------------------------------------------------------------------------------------------

// Ako se učenik loše ponaša na časovima (ponašanje se unosi kao broj od 1 do 10, sve iznad 5 je dobro ponašanje), i ne zna gradivo (ocena na kontrolnom je manja od 4), profesor će ga izvesti pred tablu i oceniti ga. Ako se učenik loše ponaša i zna gradivo, biće isteran sa časa. Ako se učenik dobro ponaša, profesor će ga pohvaliti. Unosi se ponašanje, a ako je potrebno i ocena sa kontrolnog. Treba ispisati poruku "ISPITATI", "IZBACITI" ili "POHVALITI".

// int main() {

//     int ponasanje;
//     int ocena;

//     printf("Uneti ponasanje od 1-10: ");
//     scanf("%d", &ponasanje);

//     printf("Uneti ocenu: ");
//     scanf("%d", &ocena);

//     if (ponasanje <= 5 && ocena < 4) {
//         printf("Ispitati");
//     } else if (ponasanje <= 5 && ocena > 4) {
//         printf("Izbaciti");
//     } else if (ponasanje >= 5) {
//         printf("Pohvaliti");
//     }
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Ispisati sve brojeve od A do B, gde se A i B unose, u razmacima od po X.
// Npr. ako su A=5.3, B=7.6 i X=0.3, onda se ispisuju brojevi 5.3 5.6 5.9 6.2 6.5 6.8 7.1 i 7.4 .

// int main() {
//     float A;
//     printf("Unesite prvi broj : ");
//     scanf("%f", &A);
//     float B;
//     printf("Unesite drugi broj : ");
//     scanf("%f", &B);
//     float X;
//     printf("Unesite broj za razmak : ");
//     scanf("%f", &X);

//     for (float brojevi = A; brojevi <= B; brojevi+= X) {
//         printf("%.1f ", brojevi);
//      } printf("\n");

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se dva cela broja, A i B. Napraviti algoritam koji će ispisati sve brojeve od A do B korišćenjem ciklusa sa preduslovom.

// int main() {
//     int A;
//     printf("Unesite prvi broj : ");
//     scanf("%d", &A);
//     int B;
//     printf("Unesite drugi broj : ");
//     scanf("%d", &B);

//     for (int i = A; i <= B; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Ispis faktorijala unetog broja

// int main() {
//     int broj;
//     printf("Unesite broj: ");
//     scanf("%d", &broj);

//     int faktorijal = 1;
//     for (int f = broj; f >= 1; f--) {
//         faktorijal *= f;
//     }
//     printf("Faktorijal broja %d! jeste %d\n", broj, faktorijal);

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se celi brojevi dok se ne unese 0. Izračunati i ispisati zbir recipročnih unetih brojeva. Npr. za unete brojeve 5, 3 i 9, dobijamo zbir 1/5 + 1/3 + 1/9.

// int main() {
//     double A, B, C;
//     printf("Unesite 3 broja: ");
//     scanf("%lf %lf %lf", &A, &B, &C);

//     double brojevi = 0;
//     if (A  == 0 || B == 0 || C == 0) {
//         printf("Unesite broj drugaciji od 0");
//     } else {
//         brojevi = 1 / A + 1 / B + 1 / C;
//         printf("Zbir reciprocnih brojeva je: %f\n", brojevi);

//     }

// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Ispisati sve delioce unetog celog pozitivnog broja X.
// int main() {
//     int X;
//     printf("Unesite celi broj X: ");
//     scanf("%d", &X);

//     for (int i = 1; i <= X; i++) {
//         if (X % i == 0) {
//             printf("%d ", i);
//         }
//     } return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------
// Prestupnost godine

// int main() {
//     int godina;
//     printf("Provera prestupnosti godine.\nUnesite godinu: ");
//     scanf("%d", &godina);

//     if (godina % 4 == 0 && godina % 100 != 0) {
//         printf("Godina je prestupna!");
//     } else if (godina % 400 == 0) {
//         printf("Godina je prestupna!");
//     } else printf("Godina nije prestupna!");
// }         return 0;

// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se celi brojevi dok se ne unese 0. Izračunati i ispisati prosek unetih parnih brojeva.

// float = %f, double = %lf

// int main() {
//     float A, B, C;
//     printf("Unesite brojeve : ");
//     scanf("%f %f %f", &A, &B, &C);

//     int delilac = 0;
//     float zbir = 0;

//     if ((int)A % 2 == 0) {
//         zbir += A;
//         delilac++;
//     }

//      if ((int)B % 2 == 0) {
//         zbir += B;
//         delilac++;
//     }

//     if ((int)C % 2 == 0) {
//         zbir += C;
//         delilac++;
//     }

//     if (delilac != 0) {
//         float prosek = zbir / delilac;
//         printf("Prosek je %.2f", prosek);
//     }    
//     return 0; }
// 

// ----------------------------------------------------------------------------------------------------------------------------------

// Unosi se redni broj dana u nedelji (celi broj od 1 do 7). Proveriti da li je u pitanju radni dan ili vikend.

// int main() {
//     int dan;
//     printf("Unesite redni broj vaseg dana u nedelji: ");

//     scanf("%d", &dan);
//     if (dan == 6 || dan == 7) {
//         printf("Vikend je!");
//     } else printf("Radni dan je!");
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Za unetu numeričku ocenu učenika (celi broj od 1 do 5), ispisati njeno značenje (5 - "Odličan", 4 - "Vrlo dobar", 3 - "Dobar", 2 - "Dovoljan" i 1 - "Nedovoljan").

// int main() {
//     int ocena;

//     printf("Unesite ocenu: ");
//     scanf("%d", &ocena);

//     switch (ocena) {
//         case 1:
//             printf("Odlican!");
//             break;

//         case 2:
//             printf("Vrlo dobar");
//             break;

//         case 3:
//             printf("Dobar");
//             break;

//         case 4:
//             printf("Dovoljan");
//             break;

//         case 5:
//             printf("Ne dovoljan");
//             break;

//         default:
//             printf("Nepoznata ocena");
//     }

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------


// find the sum of the first N numbers

// int main() {
//     printf("Unesite broj: ");
//     int N;
//     scanf("%d", &N);

//     int sum = 0;

//     for (int i = 0; i <= N; i++) {
//         sum = sum + i;


//     } printf("%d", sum);
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------


// print numbers of N from N to 0 in while and for loops

// int main() {
//      // for loop
//     // int N, i, sum = 0;
//     // printf("Unesite broj: ");
//     // scanf("%d", &N);

//     // for (i = N; i >= 0; i--) {
//     //     printf("%d\n", i);

//     // }

//     // int N;
//     // printf("Unesite broj: ");
//     // scanf("%d", &N);

//     // while (N >= 0) {
//     //     printf("%d\n", N);
//     //     N--;
        
//     // }
    
// ----------------------------------------------------------------------------------------------------------------------------------


//     return 0;
// }



// Unosi se pozitivan celi broj N.
// a) Ispisati sve cele brojeve od 2 do 2N.
// b) Ispisati sve cele brojeve od N do 1.
// int main() {
//      int N;
//      printf("Unesite broj: ");
//      scanf("%d", &N);
     
//      for (int i = N; i >= 1; i--) {
//         if (N == 1) {
//         printf("1"); 
//         continue;
//      }
//         printf("%d\n", i);

//       }
// }

// ----------------------------------------------------------------------------------------------------------------------------------


// Izračunati rezultat deljenja brojeva X i Y, zaokružen na dve decimale.

// int main() {
//      double x, y;
//      printf("Unesite brojeve: ");
//      scanf("%lf %lf", &x, &y);

//      double r = x / y;
//      printf("%.2lf", r);
//      return 0;   
//      }
// ----------------------------------------------------------------------------------------------------------------------------------

// Kalkulator

// int main() {
//     double x,y;
//     int op;
    
//     printf("Unesite prvi broj: ");
//     scanf("%lf", &x);

   
//     printf("1. + \n"); 
//     printf("2. -  \n"); 
//     printf("3. * \n"); 
//     printf("4. / \n"); 
//     printf("Unesite broj operatora: \n");
//     scanf("%d", &op);
    
//     printf("Unesite drugi broj: ");
//     scanf("%lf", &y);

//     switch(op) {
//          case 1:
//             printf("Zbir %.1lf i %.1lf jeste: %.2lf", x, y, x + y);
//             break;
//          case 2:
//             printf("Razlika %.1lf i %.1lf jeste: %.2lf", x, y, x - y);
//             break;
//          case 3:
//             printf("Rezultat mnozenja %.1lf i %.1lf jeste: %.2lf", x, y, x * y);
//             break;
//          case 4:
//             printf("Rezultat deljenja %.1lf i %.1lf jeste: %.2lf", x, y, x / y);
//             break;
//          default: printf("Unesite jedan od brojeva!");
//     }
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Napisati aplikaciju koja izracunava aritmetičku sredinu brojeva niza djeljivih sa nekim brojem uz pomoc for petlje.

// int main() {
//     int a, b, brojac;
//     float sum, rezultat;
//     printf("Unesite broj: ");
//     scanf("%d", &a);

//     printf("Unesite delilac: ");
//     scanf("%d", &b);

//     brojac = 0;
//     sum = 0;

//     for (int i = 1; i <= a; i++) {
//         if (i % b == 0) { 
//         brojac += 1;
//         sum += i;  
//         } 
//     } 
//     rezultat = sum / brojac;
//     printf("%.2f", rezultat);

//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------


// Napišite program koji pronalazi faktorijel datog broja.

// int main() {
//     int a, n;
//     n = 1;

//     printf("Unesite pozitivan broj: ");
//     scanf("%d", &a);

//     for (int i = 1; i <= a; i++) {
//         if (a <= 0) {
//             printf("Unesite pozitivan broj!");
//         } else { 
//         n = n * i;
//          }
//     }   printf("%d", n);


//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------


// Ispisati zbir svih parnih brojeva i proizvod svih neparnih brojeva od 1 do N.

// int main() {

//     int broj, zbir, prozivod;
//     zbir = 0;
//     prozivod = 1;
//     printf("Unesite neki broj: ");
//     scanf("%d", &broj);

//     for (int i = 1; i <= broj; i++) {
//         if (i % 2 == 0) {
//             zbir += i;
            
//         } else {
//             prozivod *= i;
//         }
//     } 
//     printf("Zbir : %d\n", zbir); 
//     printf("Prozivod: %d\n", prozivod);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Implementirajte program koji proverava da li je dati broj prost ili nije.
 // Prost broj je broj veci od 1 i on je broj koji je deljiv samo sa 1 i sa samim sobom.
        // ,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113

        // int main() {
        //     int broj, prost = 1;
        //     printf("Unesite neki broj: ");
        //     scanf("%d", &broj);

        //     if (broj <= 1) {
        //         prost = 0;
        //     } else{ 
        //     for (int i = 2; i < broj; i++) {
        //         if (broj % i == 0) {
        //             prost = 0;
        //             break;
        //         }  }
        //     } if (prost == 1) {
        //         printf("Broj je prost!"); }
        //         else {
        //             printf("Broj nije prost!");
        //         }

        //      return 0;
        // }
// ----------------------------------------------------------------------------------------------------------------------------------

// Napravite program koji pronalazi zbir svih elemenata u nizu.

// int main() {
//     int broj, zbir = 0;
//     printf("Unesite broj: "); 
//     scanf("%d", &broj);

//     for (int i = 0; i <= broj; i++){ 
//         zbir += i;
//     }
//     printf("%d", zbir);
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Number Guessing Game: Create a simple number guessing game where the program generates a random number, and the user has to guess it within a certain number of attempts.

// int main() {
//     srand(time(0));
//     int tacanBroj = (rand() % 20) + 1;

//     int broj;
//     int brojPogadjaja = 0;
//     printf("Igra pogadjanja broja! ");

//     do {
//         printf("Unesite broj: ");
//         scanf("%d", &broj);
        
//         if (broj > tacanBroj) {
//             printf("Vas broj je veci od tacnog broja!\n"); }

//          else if (broj < tacanBroj) {
//          printf("Vas broj je manji od tacnog broja!\n"); }
//          else {
//             printf("Pogodili ste broj, bravo!\n");   
//         } 
//         brojPogadjaja += 1;

//         }  while (broj != tacanBroj);
//         printf("Broj pogadjaja: %d", brojPogadjaja);
//           return 0;
//     } 
// ----------------------------------------------------------------------------------------------------------------------------------

// 2.
// Jednog dana tri najbolja prijatelja Petya, Vasya i Tonya odlučili su da formiraju tim i učestvuju u programerskim takmičenjima. Učesnicima se obično nude različiti problemi tokom programerskih takmičenja. Dugo pre početka takmičenja prijatelji su odlučili da će rešiti problem samo ako bar dvoje od njih troje sigurno znaju rešenje. U suprotnom, prijatelji neće pisati rešenje problema.

// Takmičenje nudi n problema učesnicima. Za svaki problem znamo koji prijatelj je siguran u rešenje. Pomozite prijateljima da pronađu broj problema za koje će napisati rešenje.

// Ulaz
// Prvi red ulaza sadrži jedan ceo broj n (1 ≤ n ≤ 1000) — broj problema na takmičenju. Zatim n linija sadrže po tri cela broja, svaki broj je ili 0 ili 1. Ako prvi broj u liniji ima vrednost 1, onda Petya je siguran u rešenje problema, inače nije siguran. Drugi broj predstavlja stav Vasye o rešenju, treći broj predstavlja Tonyin stav. Brojevi u linijama su odvojeni razmakom.

// Izlaz
// Ispišite jedan ceo broj — broj problema za koje će prijatelji napisati rešenje na takmičenju.

// int main() {
//         int n;
//         printf("Unesite broj problema na takmicenju: ");
//         scanf("%d", &n);

//         int a, b, c;
        
//         int brojProblema = 0;

//         for (int i = 1; i <= n; i++) { 
//         printf("Unesite sigurnost takmicara sa 0 ili 1: ");
//         scanf("%d %d %d", &a, &b, &c);

//         int sigurnost = a + b + c;

//         if (sigurnost >= 2) {
//                 brojProblema ++;
            
//         } }
//         printf("Broj problema koji ce napisati jeste %d", brojProblema);
//         return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------


// Ispisati Fibonačijev niz do N-og člana.
// ----------------------------------------------------------------------------------------------------------------------------------

// Write a C program to print all natural numbers in reverse (from n to 1). – using while loop
// int main() {
//         int n;
//         printf("Unesite n: ");
//         scanf("%d", &n);
//         int i = 1;

//         while (n >= i) {        
//                 printf("%d\n", n);
//                 n--;
//         } 
//         return 0;
// }


// ----------------------------------------------------------------------------------------------------------------------------------

// Medved Limak želi da postane najveći medved, ili barem da postane veći od svog brata Boba.​
// Trenutno, Limak i Bob imaju težinu a i b respektivno. Garantovano je da je Limakova težina manja ili jednaka težini njegovog brata.​
// Limak jede mnogo i njegova težina se utrostručuje svake godine, dok se Bobova težina udvostručuje svake godine.​
// Posle koliko punih godina će Limak postati striktno veći (strogo teži) od Boba?​
// Jedini red unosa sadrži dva cela broja a i b — težinu Limaka i težinu Boba.​
// Odštampajte jedan ceo broj, označavajući ceo broj godina nakon kojih će Limak postati striktno veći od Boba.​


// Ulazni parametri: (4 7), (4 9), (1 1)​

// Izlazni parametri: (2), (3), (1)​

// int main() {

//         int a, b;
//         printf("Unesite tezinu: ");
//         scanf("%d %d", &a, &b);

//         int godine = 0;

//         while (a <= b) {
//                 a *= 3;
//                 b *= 2;
//                 godine++;
//         } if (a > b) {
//                 printf("%d", godine);
//         }
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Konj Valera ide na žurku sa prijateljima. Već neko vreme prati modne trendove i zna da je vrlo popularno nositi četiri potkovice različitih boja. Valera je ostao sa četiri potkovice od prošle godine, ali možda neke od njih imaju istu boju. U tom slučaju, mora otići u prodavnicu i kupiti još nekoliko potkova, da ne izgubi lice pred svojim stilskim drugovima.

// Srećom, prodavnica prodaje potkove svih boja pod suncem, a Valera ima dovoljno novca da kupi bilo koje četiri. Međutim, kako bi uštedeo novac, želeo bi da potroši što manje novca, pa mu treba pomoć da odredi koji je minimalni broj potkova koje treba kupiti kako bi nosio četiri potkove različitih boja na žurku.

// Ulaz
// Prvi red sadrži četiri celobrojne vrednosti odvojene razmakom s1, s2, s3, s4 (1 ≤ s1, s2, s3, s4 ≤ 109) — boje potkova koje Valera ima.

// Sve moguće boje se indeksiraju celim brojevima.

// Izlaz
// Ispišite jedan ceo broj — minimalni broj potkova koje Valera treba kupiti.

// int main() {
//         int b1, b2, b3, b4;
//         scanf("%d %d %d %d", &b1, &b2, &b3, &b4);

//         int posebneBoje = 1;
//         int isteBoje;

//         if (b1 != b2 && b1 != b3 && b1 != b4) {
//                 posebneBoje++;
//         } if (b2 != b3 && b2 != b4) {
//                 posebneBoje++;
//         } if (b3 != b4) {
//                 posebneBoje++;
//         }

//         isteBoje = 4 - posebneBoje;
//         printf("%d", isteBoje);
        
//         return 0;    
// }
// ----------------------------------------------------------------------------------------------------------------------------------


// Napišite program u C da prikaže n članova prirodnih brojeva i njihov zbir.

// int main() {
//         int n, brojac = 0;
//         int zbir = 0;
//         int i;
//         printf("Unesite broj: ");
//         scanf("%d", &n);

//         for (i = 1; i <= n; i++){
//                 printf("%d\n", i);
//                 zbir += i;


//         } printf("%d", zbir);
// }
// ----------------------------------------------------------------------------------------------------------------------------------


//  Izračunati i ispisati sumu prirodnih brojeva od k do n.

// int main() {
//         int k,n;
//         printf("unesite prvi i zadnji broj: ");
//         scanf("%d %d", &k, &n);
//         int suma = 0;

//         for (int i = k; i <= n; i++) {
//                 if (k > 0 && n > 0) {
//                     suma += i;
//                 }
//         } printf("%d", suma); 
//         return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Napišite program u C da čita 10 brojeva sa tastature i nađe njihov zbir i prosek.

// int main() {
//         int brojevi[10];
//         int zbir = 0;
//         float prosek;
//         printf("Unesite 10 brojeva: ");

//         for (int i = 0; i < 10; i++){
//                 scanf("%d", &brojevi[i]);
//                 zbir += brojevi[i];
                
//         } prosek = (float)zbir / 10;
//         printf("%d je zbir, a prosek je %d", zbir, prosek);
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Napisati program da ispisuje 3 puta u 3 reda IME sa razmakom.
// IME IME IME 
// IME IME IME
// IME IME IME

// int main() {
//         int i, j;
        
//         for (i = 1; i <= 3; i++) {
//                 for (j = 1; j <= 3; j++) {
//                         printf("IME ");
//                 } printf("\n");
//         }
// }

// ----------------------------------------------------------------------------------------------------------------------------------
//  Ispis prirodnih brojeva od k do n koji nisu djeljivi sa a.

// int main() {
//         int k, n, a;
//         printf("Unesite prvi i drugi broj, i broj za proveru ne deljivosti: ");
//         scanf("%d %d %d", &k, &n, &a);

//         for (int i = k; i <= n; i++) {
//                 if (i % a != 0) {
//                         printf("%d ", i);
//                 }
//         }
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// 8.1.. Izračunati i ispisati sumu kvadrata prirodnih brojeva od t do v.

// int main() {
//         int t, v;
//         printf("Unesite prvi i zadnji broj: ");
//         scanf("%d %d", &t, &v);

//         int suma = 0;

//         for (int i = t; i <= v; i++) {          
//                 suma += i * i;
//         } printf("%d", suma);
//         return 0;
// } 

// ----------------------------------------------------------------------------------------------------------------------------------

// . Suma neparnih prirodnih brojeva od 1 do 5.

// int main() {
//         int suma = 0;
        
//         for (int i = 1; i <= 5; i++) { 
//                 if (i % 2 != 0) {
//                         suma += i;
//                 }
//         } printf("%d", suma);
//         return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// 8.1..Izračunati i ispisati sumu reciprocnih vrijednosti prirodnih brojeva od t do v.

// int main() {
//          float t, v;
//          printf("Unesite prvi i zadnji broj: ");
//          scanf("%f %f", &t, &v);

//          float suma = 0;

//          for (float i = t; i <= v; i++) {
//                 suma += 1.0 / i;
//          } printf("%f", suma);
//          return 0;

// }

// ----------------------------------------------------------------------------------------------------------------------------------

//  Izračunati aritmetičku sredinu prirodnih brojeva od 3 do 8. // arit sredina = suma / broj brojeva

// int main() {
//         float suma = 0;
//         float sredina;
//         float brojBrojeva = 0;
//         for (float i = 3; i <= 8; i++) {
//                 suma += i;
//                 brojBrojeva++;
//         } printf("Arit. sredina je %.2f", suma / brojBrojeva); 
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Izračunati aritmetičku sredinu prirodnih brojeva od a do b. // suma brojeva / broj brojeva

// int main() {
//         int a, b;
//         printf("Unesite 2 broja: ");
//         scanf("%d %d", &a, &b);
//         float suma = 0;
//         float brojBrojeva = 0;


//         for (int i = a; i <= b; i++){
//             suma += i;
//             brojBrojeva++;
//         } printf("Aritmeticka sredina brojeva %d i %d jeste : %.2f: ", a, b, suma / brojBrojeva);
//         return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Izračunati proizvod parnih prirodnih brojeva od 1 do 5.

// int main() {
//         int p = 1;
//         for (int i = 1; i <= 5; i++) {
//                 if (i % 2 == 0) {
//                        p *= i;
//                 }
//         } printf("%d", p);
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// 48.Napisati program za ispis proizvoda brojeva od 1 do n koji su djeljivi sa a.

// int main() {
//         int n, a;

//         printf("Unesite broj i delilac broja: ");
//         scanf("%d %d", &n, &a);
//         int p = 1;

//         for (int i = 1; i <= n; i++) {
//                 if (i % a == 0) {
//                         p = p * i;
//                 }

//         } printf("Proizvod je %d", p);
//         return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Jednog dana tri najbolja prijatelja Pet, Vasa i Toni odlučili su da formiraju tim i učestvuju u takmičenjima u programiranju. Učesnicima se obično nudi nekoliko zadataka tokom takmičenja u programiranju. Mnogo pre početka prijatelji su odlučili da će sprovesti problem ako su bar dvojica sigurni u rešenje. U suprotnom, prijatelji neće napisati rešenje problema.​

// Ovo takmičenje nudi učesnicima n problema. Za svaki problem koji znamo, koji prijatelj je siguran u rešenje. Pomozite prijateljima da pronađu broj problema za koje će napisati rešenje.​

// Prva linija unosa sadrži jedan ceo broj n — broj zadataka u takmičenju. Tada n redova sadrži po tri cela broja, svaki ceo broj je ili 0 ili 1. Ako je prvi broj u redu 1, onda je Pet siguran u rešenje problema, inače nije siguran. Drugi broj prikazuje Vasa pogled na rešenje, treći broj prikazuje Toni pogled. Brojevi na linijama su razdvojeni razmacima.​

// Odštampajte jedan ceo broj — broj problema koje će prijatelji primeniti na takmičenju.​

// int main() {
//         int n, peta, vasa, toni, brojResenja = 0;

//         printf("Unesite broj zadataka na takmicenju: ");
//         scanf("%d", &n); 

//         for (int i = 1; i <= n; i++){
//                 printf("Unesite Petin, Vasin i Tonin odgovor: ");
//                 scanf("%d %d %d", &peta, &vasa, &toni);
//                 int odgovori = peta + vasa + toni;
//                 if (odgovori >= 2) {
//                         brojResenja += 1;
//                 }

//         } printf("%d", brojResenja);
//           return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Vojnik želi da kupi banane u radnji. Mora da plati k dolara za prvu bananu, 2k dolara za drugu i tako dalje (drugim rečima, mora da plati i·k dolara za i-tu bananu).​

// On ima n dolara. Koliko dolara mora da pozajmi od svog prijatelja vojnika da bi kupio banane?​

// Prvi red sadrži tri pozitivna cela broja k, n, v , cenu prve banane, početni broj dolara koji vojnik ima i broj banana koje želi.​

// Iznesite jedan ceo broj — iznos dolara koji vojnik mora da pozajmi od svog prijatelja. Ako ne mora da pozajmi novac, ispišite 0.​

// Ulazni parametri: (3 17 4)​   // prva banana = 3, druga banana = 6, treca banana = 9, cetvrtva banana = 12 ukupno = 30, 30 - 17 = 13

// Izlazni parametri: (13)​

// int main() {
//         int k, n, v;
//         printf("Unesite cenu prve banane, pocetni broj dolara vojnika, i zeljeni broj banana: ");
//         scanf("%d %d %d", &k, &n, &v);
//         int ukupnaCena = 0;

//        for (int i= 1; i <= v; i++) {
//             ukupnaCena += i * k;
          
//        } 
//          int pozajmiti = ukupnaCena - n;
//          printf("%d", pozajmiti);
//          return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Slon je odlučio da poseti svog prijatelja. Ispostavilo se da se kuća slona nalazi u tački 0, a kuća njegovog prijatelja u tački k(k > 0) koordinatne prave. U jednom koraku slon može da se pomeri za 1, 2, 3, 4 ili 5 pozicija napred. Odredi koji je minimalni broj koraka koji treba da napravi da bi stigao do kuće svog prijatelja.​

// Prvi red unosa sadrži ceo broj k — koordinata kuće prijatelja.​

// Odštampajte minimalni broj koraka koje slon treba da napravi da bi stigao od tačke 0 do tačke k.​

// Ulazni parametri: (5), (12)​

// Izlazni parametri: (1), (3)​
 // ????????????????????????????????????????????????????????????????
// ----------------------------------------------------------------------------------------------------------------------------------


//  Momak po imenu Vasa ide u završni razred srednje škole. Jednog dana Vasa je odlučio da gleda utakmicu svog omiljenog hokejaškog tima. A, kako dečak mnogo voli hokej, čak više od fizike, zaboravio je da uradi domaći zadatak. Konkretno, zaboravio je da završi svoje zadatke iz fizike. Sledećeg dana učitelj se veoma naljutio na Vasu i odlučio da mu da lekciju. On je lenjom učeniku dao naizgled lak zadatak: Dato vam je prazno telo u svemiru i sile koje na njega utiču. Telo se može posmatrati kao materijalna tačka sa koordinatama (0; 0; 0). Vasa je morao samo da odgovori da li je u ravnoteži. „Komad kolača“ — pomisli Vasa, treba samo da proverimo da li je zbir svih vektora jednak 0. Dakle, Vasja je počeo da rešava problem. Ali kasnije se ispostavilo da ovih snaga može biti mnogo i mnogo, a Vasa se ne može nositi bez vaše pomoći. Napisati program koji određuje da li telo miruje ili se kreće po datim vektorima sila.​

// Prvi red sadrži pozitivan ceo broj n, zatim sledi n redova koji sadrže po tri cela broja: ki koordinatu, ii koordinatu i zi koordinatu vektora sile, primenjene na telo.​

// Odštampajte reč „DA“ ako je telo u ravnoteži, ili reč „NE“ ako nije.​

// int main() {

//         int n, ki, ii, zi;

//         printf("Unesite broj redova: ");
//         scanf("%d", &n);
//         int zbirVektora = 0;
        
//         for (int i = 1; i <= n; i++) {
//                 printf("Unesite ki, ii i zi koordinatu: ");
//                 scanf("%d %d %d", &ki, &ii, &zi);

//                 zbirVektora += ki + ii + zi;
        

//         } if (zbirVektora == 0) {
//                 printf("DA");
//         } else printf("NE");
//         return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Devojčica Ilma uči kako da smanji broj za jedan, ali to čini pogrešno sa brojem koji se sastoji od dve ili više cifara. Ilma oduzima jedan od broja sledećim algoritmom:​

// ako je poslednja cifra broja različita od nule, ona smanjuje broj za jedan; ako je poslednja cifra broja nula, ona deli broj sa 10 (tj. uklanja poslednju cifru). Dat vam je ceo broj 𝑛. Ilma će od toga oduzeti jednu 𝑘 puta. Vaš zadatak je da odštampate rezultat nakon svih oduzimanja 𝑘.​

// Garantovano je da će rezultat biti pozitivan ceo broj.​

// Prvi red unosa sadrži dva cela broja 𝑛 i 𝑘 — broj od kojeg će Ilma oduzeti i broj oduzimanja shodno tome.​

// Odštampajte jedan ceo broj — rezultat smanjenja 𝑛 za jedan 𝑘 puta.​

// Garantovano je da će rezultat biti pozitivan ceo broj.​

// Ulazni parametri: (512 4), (1.000.000.000 9)​   

// Izlazni parametri: (50), (1)

// int main(){
//         int n, k, noviBroj;

//         printf("Unesite broj i broj puta oduzimanja: ");
//         scanf("%d %d", &n, &k);

//         noviBroj = n;


//         for (int i = 1; i <= k; i++) {
//                 if (noviBroj % 10 != 0) {
//                    noviBroj -= 1;   
//                 } else {
//                    noviBroj /= 10;
//                 }
//         } 
//         printf("%d", noviBroj);
//         return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Kada pripremaju turnir, IT koordinatori se trude da maksimalno olakšaju prvi problem. Ovoga puta koordinator je odabrao neki problem i pitao 𝑛 ljude o njihovom mišljenju. Svaka osoba je odgovorila da li je ovaj problem lak ili težak.​

// Ako je bar jedan od ovih 𝑛 ljudi odgovorio da je problem težak, koordinator odlučuje da promeni problem. Za date odgovore, proverite da li je problem dovoljno lak.​

// Prvi red sadrži jedan ceo broj 𝑛 — broj ljudi od kojih je zatraženo da daju svoje mišljenje.​

// Drugi red sadrži 𝑛 celih brojeva, svaki ceo broj je ili 0 ili 1. Ako je 𝑖-ti ceo broj 0, onda 𝑖-ta osoba misli da je problem lak; ako je 1, onda 𝑖-ta osoba misli da je problem težak.​

// Odštampajte jednu reč: „LAKO“ ako je problem lak prema svim odgovorima ili „TEŠKO“ ako postoji bar jedna osoba koja misli da je problem težak.​

// Možete odštampati svako slovo u bilo kom registru: "EASI", "easi", "EaSI" i "eAsI" će sve biti ispravno obrađeno.​

// Ulazni parametri:( 3​

// 0 0 1), (1​

// 0)​

// Izlazni parametri: (HARD), (EASY)​

// int main() {
//         int n, odg;
//         printf("Unesite broj osoba: ");
//         scanf("%d", &n);

//         int zbirOdg = 0;
//         for (int i = 1; i <= n; i++) {
//                 printf("Unesite odgovore sa 0 ili 1: ");
//                 scanf("%d", &odg);

//                 zbirOdg += odg;
//         }
//          if (zbirOdg == 0) {
//                 printf("LAKO");
//          } else printf("TESKO");
//          return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Džordž je nedavno upisao BSUCP. Džordž ima prijatelja Aleksa koji je takođe upisao fakultet. Sada se useljavaju u studentski dom.​
// Džordž i Aleks žele da žive u istoj sobi. Spavaonica ima ukupno n soba. Trenutno u i-toj prostoriji žive pi ljudi i soba može da primi ukupno ki osobe (pi ≤ ki). Vaš zadatak je da prebrojite koliko soba ima slobodnog mesta i za Džordža i za Aleksu.​

// Prvi red sadrži jedan ceo broj n  — broj soba.​

// I-ti od sledećih n redova sadrži dva cela broja pi i ki  — broj ljudi koji već žive u i-toj sobi i kapacitet sobe.​

// Odštampajte jedan ceo broj — broj soba u koje Džordž i Aleks mogu da se usele.​

// Ulazni parametri: (3​

// 1 1​

// 2 2​

// 3 3), (3​

// 1 10​

// 0 10​

// 10 10)​

// Izlazni parametri: (0), (2)
// int main() {
//         int n;
//         printf("Unesite broj soba: ");
//         scanf("%d", &n);
//         int brojLjudi, kapacitet, slobodno = 0;

//         for (int i = 1; i <= n; i++) {
//                 printf("Unesite broj ljudi u sobi i kapacitet sobe: ");
//                 scanf("%d %d", &brojLjudi, &kapacitet);
//                 if (kapacitet > brojLjudi) {
//                         slobodno += 1;
//                 }
//         } printf("%d", slobodno);
//           return 0;
// }

// uradjeni : 1, 3, 4, 5, 8, 9    (6/10)

// 1. Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]

// int main() {

//         int n1, n2, n3, n4;
//         int target;
//         printf("Unesite brojeve: ");
//         scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

//         printf("Unesite target: ");
//         scanf("%d", &target);

//         if (n1 + n2 == target) {
//                 printf("0, 1");
//         } else if (n1 + n3 == target) {
//                 printf("0, 2");
//         } else if (n1 + n4 == target) {
//                 printf("0, 3");
//         }
//         else if (n2 + n3 == target) {
//                 printf("1, 2");
//         } else if (n2 + n4 == target) {
//                 printf("1, 3");
//         }
//         else if (n3 + n4 == target) {
//                 printf("2 3");
//         }


// }
// ----------------------------------------------------------------------------------------------------------------------------------

// 1 Написати програм који рачуна суму једноцифрених бројева. Задатак решити коришћењем do-
// while наредбе.
// int main() {
//         int n, i = 0, suma = 0;
//         printf("unesi n: ");
//         scanf("%d", &n);

//         do {
//                 suma += i;
//                 i++;
//         } while (i < 10 && i <= n); 

//         printf("%d", suma); return 0;

// } 
// ----------------------------------------------------------------------------------------------------------------------------------

// 2 Унети два броја а и n. Написати програм који рачуна степен a na n

// int main() {

//         int a, n, s = 1;
//         printf("Unesite a i n: ");
//         scanf("%d %d", &a, &n);

//         for (int i = 1; i <= n; i++) {
//                 s *= a;
//         } printf("%d", s);
//           return 0; 
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// 3 Унети доњу и горњу границу интервала бројева [dg, gg]. Израчунати средњу вредност
// непарних бројева у задатом интервалу [dg, gg].
// ----------------------------------------------------------------------------------------------------------------------------------
// int main() {
//         int min, max, brojBr = 0, zbir = 0;
//         printf("Unesite min i max: ");
//         scanf("%d %d", &min, &max);
//         int sredina;

//         for (int i = min; i <= max; i++) {
//                 if (i % 2 == 0) {
//                         zbir += i;
//                         brojBr += 1;
//                 } 
//         } sredina = zbir / brojBr;
//         printf("%d", sredina); return 0;
// }
// 4 Унети границе интервала двоцифрених бројева [a, b]. Приказати све бројеве из интервала чији
// је збир цифара дељив са 3. Задатак решити коришћењем:
// а) for наредбе,

// a)   int main() {
//         int a, b, i, sum = 0;
//         printf("unesite a i b");
//         scanf("%d %d", &a, &b);
//         for (i = a; i <= b; i++) {
//                 sum += i;
//                 if (sum % 3 == 0) {
//                 printf("%d ", i);
//         }
//         }  return 0;
//     }
// б) saboiranje pozitivnih a i b unetih brojeva u while-do наредбе,

// int main() {
//         int a, b;
//         printf("Unesite pozitivan broj a i b: ");
//         scanf("%d %d", &a, &b);
//         int zbir = a + b;


//         while (a >= 0 , b >= 0 ) {
//                 printf("%d\n", zbir);
//                 break;

//         }                 
// return 0;
// }

// в) do-while наредбе.

// int main() {
//         int a, b, zbir = 0;
//         printf("Unesite pozitivan broj a i b: ");
//         scanf("%d %d", &a, &b);

//         do {
//                 int zbir = a + b;
//                 printf("%d", zbir);
//                 break;
//         } while (a >= 0 && b  >= 0); return 0;

// }
// ----------------------------------------------------------------------------------------------------------------------------------

// suma brojeva od 1 do n u while-do petlji

// int main() {
//         int n, i = 1, sum = 0;
//         printf("Unesite n: ");
//         scanf("%d", &n);
      
//         //  i = 1 i sum = 0, prva iteracija => sum = 1, i = 2; druga it sum = 3 i = 3 treca it sum = 6 i = 4 itd...

//         while (i <= n) {          
//                 sum += i;
//                 i++;

                
//         }     printf("%d", sum);
// return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// suma brojeva od 1 do n u do-while petlji

// int main() {
//         int n, i = 1, sum = 0;
//         printf("Unesite n: ");
//         scanf("%d", &n);

//         do {
//                 sum += i;
//                 i++;
//         } while (i <= n);
//           printf("%d", sum); return 0;

// }


// ----------------------------------------------------------------------------------------------------------------------------------

// 5 Написати функцију која рачуна факторијел неког броја.
// ----------------------------------------------------------------------------------------------------------------------------------

// Slon je odlučio da poseti svog prijatelja. Ispostavilo se da se kuća slona nalazi u tački 0, a kuća njegovog prijatelja u tački k(k > 0) koordinatne prave. U jednom koraku slon može da se pomeri za 1, 2, 3, 4 ili 5 pozicija napred. Odredi koji je minimalni broj koraka koji treba da napravi da bi stigao do kuće svog prijatelja.​

// Prvi red unosa sadrži ceo broj k — koordinata kuće prijatelja.​

// Odštampajte minimalni broj koraka koje slon treba da napravi da bi stigao od tačke 0 do tačke k.​

// Ulazni parametri: (5), (12)​

// Izlazni parametri: (1), (3)

// int main() {
//         int k, broj;
//         printf("Unesite broj koraka: ");
//         scanf("%d", &k);

//         broj = (k + 4) / 5;
//         printf("%d", broj);
// }

// ----------------------------------------------------------------------------------------------------------------------------------


// 6 Написати процедуру zamena_mesta која као параметре прихвата два броја и мења им
// вредности. У главном програму дефинисати два броја, приказати њихове вредности пре и
// након позива функције zamena_mesta.


// int main() {
//         int a, b, temp;
//         printf("Unesite a i b: ");
//         scanf("%d %d", &a, &b);

//         temp = a;
//         a = b;
//         b = temp;
//         printf("%d %d", a, b);

// }

// ----------------------------------------------------------------------------------------------------------------------------------

// 7 Дат је следећи програмски захтев:
// а) Имплементирати непараметризовану процедуру zadatak_1. У оквиру процедуре са
// стандардног улаза прихватити два цела бројa. Имплементирати потпрограм (процедуру или
// функцију) kontrola_unosa која проверава да ли су ова два цела броја лепо унета (оба броја
// морају бити већи од 0 и други број мора бити већи или једнак са првим бројем). Уколико
// корисник није лепо унео ова два броја, омогућити поновни унос. Поновни унос корисник може
// поновити максимално три пута. У случају да корисник лепо унесе ова два броја приказати
// поруку: Корисник је унео интервал [a,b], где је а – први, а b – други број.Ако из три покушаја
// корисник не унесе лепо интервал, приказати поруку: Корисник није унео интервал из три
// покушаја.

// int main() {
//         int a, b;
//         for (int i = 0; i <= 3; i++) {
//                 printf("Unesite 2 cela broja: ");
//                 scanf("%d %d", &a, &b);

//                 if (a > 0 && b > 0 && b >= a) {
//                         printf("Brojevi su tacno uneti.");
//                         break;
//                 } else {
//                         printf("Brojevi nisu tacni!\n");       
//                 }
//                 if (i == 3) {
//                         printf("Niste uneli vrednost iz 3 pokusaja");
//                    }            
//         }  
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// 8 Марко Марковић је студент 1. године ФОН-а и на свом рачуну у банци има X динара. Марко
// је имао договор са својим оцем да уколико положи Програмирање 1 у јунском испитном року,
// отац Марку почев од 1. септембра уплаћује на рачун у банци Y динара следећих D дана на
// следећи начин:
// – 1. септембра отац Марку треба да уплати Z динара.
// – Сваког наредног дана отац Марку треба да уплаћује V динара више него претходног дана.
// Имплементирати функцију која рачуна колико Марко има динара у банци након D дана и
// креира извештај на стандардном излазу у формату који је дат ниже.
// Формат извештаја на стандардном излазу за Х = 100, Y = ..., V= 2, Z= 10, D=30 бићe:
// BANKOVNI IZVESTAJ
// Marko Markovic, stanje = 100 dinara

// 11

// 1. dana: uplata = 10 dinara, saldo 110 dinara
// 2. dana: uplata = 12 dinara, saldo 122 dinara
// 3. dana: uplata = 14 dinara, saldo 136 dinara
// ...
// 30. dana: uplata = ... dinara, saldo ... dinara
// Hvala tata.

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
// ----------------------------------------------------------------------------------------------------------------------------------

// Unose se celi brojevi dok se ne unese 0. Izračunati i ispisati prosek unetih parnih brojeva.

// int main() {
//         int n;
//         int brojac = 0;
//         int zbir = 0;
//         printf("Unesite ceo broj: ");
//         scanf("%d", &n);

//         for (int i = 1; i <= n; i++) {
//                 if (i % 2 == 0) {
//                         brojac += 1;
//                         zbir += i;
//                 }
 
//         } int prosek = zbir / brojac;
//           printf("%d", prosek);
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// a) Napisati algoritam i program kojim se za uneti ceo broj n ispituje da li je broj prost // broj je prost samo ako moze da se deli sa 1 i sa samim sobom

// int main() {
//         int n;
//         printf("Unesite broj: ");
//         scanf("%d", &n);
//         int prost = 1;

//         if (n <= 1) {
//                 prost = 0;
//         } else {
//                 for (int i = 2; i < n; i++) {
//                         if (n % i == 0) {
//                                 prost = 0;
//                                 break;
//                         }

//                 } if (prost == 1) {
//                         printf("Broj je prost!");
//                 } else printf("Nije prost!");
//         }          return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Definisati funkciju Max koja izračunava maksimum za dva
// broja. Napisati program koji, koristeći funkciju Max, određuje
// maksimum tri uneta broja.
// ----------------------------------------------------------------------------------------------------------------------------------

// Napisati algoritam i program koji za uneti ceo broj x izračunava
// vrednost broja y, ako je

// int main() {
//         int y, x;
//         printf("Unesite x: ");
//         scanf("%d", &x);

//         if (x < -15) {
//                 y = x * x;
//         } else if(-15 <= x && x < 23){
//                 y = x + 20;
//         } else if(x>=23) {
//                 y = sqrt(x);
//         }

//         printf("%d", y);
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Jedan od najvećih problema sa kojima se današnje društvo suočava je zagađenje životne sredine. Stanari jedne zgrade u
// evropskoj metropoli svake nedelje vrše razdvajanje kućnog otpada na plastiku(1), staklo(2) i aluminijum(3). 
// Spaljivanjem njihovog otpada se proizvede određena količina struje koja zavisi od materijala koji se spaljuje. 
//Od 1kg bačenog materijala dobijase određena količina struje u kWh i to: od plastike 0.75kWh struje, od stakla 0.55kWh struje i od aluminijuma 0.33kWh struje.
// Svaki stanar predaje tačno 2 vrste otpada u kilogramima, i na osnovu količine svake vrste materijala određuje se ukupna količina
// proizvedene struje npr. 5.3 kg stakla i 6.7kg plastike, od čega se proizvede 7.94kWh struje. Napisati program koji određuje koji
// stanar po redu iz ove zgrade je proizveo najveću količinu struje svojim otpadom i koliko je struje proizveo. Ukoliko je više stanara
// proizvelo istu količinu struje, pretpostaviti da je prvi po redu od njih proizveo najveću količinu struje.
// U prvoj liniji standardnog ulaza nalazi se broj stanara zgrade N (prirodan broj 1 ≤ N ≤ 50). U narednih N linija za svakog stanara se
// unose vrednosti: vrsta_materijala količina vrsta_materijala količina, gde vrsta_materijala može imati vrednosti 1,2 ili
// 3(plastika(1), staklo(2), aluminijum(3)), a količina je realan broj. Na standardnom izlazu ispisati redni broj stanara(celobrojna
// vrednost od 1 do N) i količina proizvedene struje.

// Ulaz              Izlaz
// 4                 1 7.94
// 2 5.3 1 6.7
// 3 2.1 2 4.5
// 1 4.3 3 5.1
// 2 3.8 3 2.7

// int main() {
//         int n;
//         printf("Unesite broj stanara: ");
//         scanf("%d", &n);

//         float vrstaMaterijala, kolicina;
//         float vrstaMaterijala2, kolicina2;
//         float energija = 1;
//         float maksEnergija = 0;

//         for (int i = 1; i <= n; i++) {
//                 printf("Unesite vrste materijala i kolicine: ");
//                 scanf("%f %f %f %f", &vrstaMaterijala, &kolicina, &vrstaMaterijala2, &kolicina2); 
                
//                 if (vrstaMaterijala == 1) {
//                         energija = 0.75 * kolicina;
//                 } else if (vrstaMaterijala == 2) {
//                         energija = 0.55 * kolicina;
//                 } else if (vrstaMaterijala == 3) {
//                         energija = 0.33 * kolicina;
//                 }

//                 if (vrstaMaterijala2 == 1) {
//                         energija += 0.75 * kolicina2;
//                 } else if (vrstaMaterijala2 == 2) {
//                         energija += 0.55 * kolicina2;
//                 } else if (vrstaMaterijala2 == 3) {
//                         energija += 0.33 * kolicina2;
//                 }

//                 if (energija > maksEnergija) {
//                         maksEnergija = energija;
//                 }
//         } printf("%.2f", maksEnergija);
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// 1. Napisati program koji ce uneti trocifreni broj, rastaviti cifre i cifre sortirati u rastucem redosledu

// int main() {
//         int broj;
//         printf("Unesite neki trocifreni broj: ");
//         scanf("%d", &broj);


//         printf("Uneli ste %d\n", broj);

//         int prvi = broj / 100; // npr. 352 / 100 je u int vrednosti samo 3, bez ostatka
//         int drugi = (broj / 10) % 10; // 352 / 10 je 35, ostatak deljenja 35 sa 10 je 5
//         int treci = broj % 10; // ostatak deljenja 352 sa 10 je 2
//         int max = 1;

//         if (prvi > max) {
//                 max = prvi;
//         } 
//         if (drugi > max) {
//                 max = drugi;
//         }
//         if (treci > max) {
//                 max = treci;
//         }

//         printf("Broj %d je sastavljen od cifara %d %d %d, a od njih najveca je : %d", broj, prvi, drugi, treci, max);
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// za funkciju y 
// int main() {
//         int x, a;
//         printf("Unesite broj x od -5 do 10: ");
//         scanf("%d", &x);

//         if (x < -5 || x > 10) {
//                 printf("Pogresan unos.");
//         }else if (x > -2 && x <= 2) {
//                 a = 5 * (pow(x, 15));
//                 printf("%d", a);
//         }else if (x > 3 && x <= 7) {
//                 a = 3*x-1;
//                 printf("%d", a);
//         } else {
//                 a = sqrt(x*x-5);
//                 printf("%d", a);
//         }
//           return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// Na jednom turniru, dzudisti se takmice u 3 kategorije: do 50kg, od 51 do 75kg, i od 76 pa navise. Napisi program koji ucitava broj dzudista jednog kluba prijavljenog na taj
// turnir,a zatim tezinu od svakog od njih i za svaku kateogirju redom ispisuje koliko ce se dzudista tog kluba boriti u toj kategoriji:

// int main() {
//         int n;
//         int tez;
//         int k1 = 0;
//         int k2 = 0;
//         int k3 = 0;

//         printf("Unesite broj prijavljenih dzudista: ");
//         scanf("%d", &n);
        
//         for (int i =1; i <=n; i++) {
//                 printf("Unesite tezinu dzudiste: ");
//                 scanf("%d", &tez);
//                 if (tez <= 0) {
//                         printf("Pogresan unos tezine.");
//                         continue;
//                 } 
//                 if (tez <= 50) {
//                         k1 += 1;
//                 } else if (tez >= 51 && tez <= 75) {
//                         k2 += 1;
//                 } else if (tez >= 76) {
//                         k3 +=1;
//                 }
//         }
//         printf("Broj dzudista u 1.kategoriji je: %d\n", k1);
//         printf("Broj dzudista u 2.kategoriji je: %d\n", k2);
//         printf("Broj dzudista u 3.kategoriji je: %d", k3);
//         return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// Саставити програм који ће учитати n реалних бројева и исписати највећи.
// ----------------------------------------------------------------------------------------------------------------------------------
// int main() {
//         int n, b;
//         int max = 0;
//         printf("Unesite broj brojeva: ");
//         scanf("%d", &n);

//         for (int i =1; i <= n; i++) {
//                 printf("Unesite broj: ");
//                 scanf("%d", &b);

//                 if (b > max) {
//                         max = b;
//                 }
//         } printf("%d", max);
// }
// Саставити програм који ће исписати све бројева прве стотине који су дељиви са 6 и њихову
//суму.
// ----------------------------------------------------------------------------------------------------------------------------------

// int main() {
//         int b;
//         int suma = 0;
//         printf("Unesite delilac: ");
//         scanf("%d", &b);

//         for (int i = 1; i <= 100; i++) {
//                 if (i % b == 0) {
                        
//                         printf("%d\n", i);
//                         suma += i;
//                 }
//         } printf("Suma je %d", suma);
// }
// ----------------------------------------------------------------------------------------------------------------------------------

// // Vojnik želi da kupi banane u radnji. Mora da plati k dolara za prvu bananu, 2k dolara za drugu i tako dalje (drugim rečima, mora da plati i·k dolara za i-tu bananu).​
// On ima n dolara. Koliko dolara mora da pozajmi od svog prijatelja vojnika da bi kupio banane?​
// Prvi red sadrži tri pozitivna cela broja k, n, v , cenu prve banane, početni broj dolara koji vojnik ima i broj banana koje želi.​
// Iznesite jedan ceo broj — iznos dolara koji vojnik mora da pozajmi od svog prijatelja. Ako ne mora da pozajmi novac, ispišite 0.​

// Ulazni parametri: (3 17 4)​  
// Izlazni parametri: (13)​

// int main() {
//         int k, n ,v;
//         int ukupnaCenaBan = 0;
//         int pozajmiti;
//         printf("Unesite cenu prve banane, broj dolara vojnika i broj banan koje zeli: ");
//         scanf("%d %d %d", &k, &n, &v);

//         for (int i =1; i <= v; i++) {
//                 ukupnaCenaBan += k * i;
//         }
//         pozajmiti = ukupnaCenaBan - n;
//         printf("%d", pozajmiti); return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------------
//  Napisati program koji za uneseno n štampa sumu prvih n prirodnih brojeva i n!

// int main() {
//         int n, nf = 1, suma = 0;
//         printf("Unesite broj: ");
//         scanf("%d", &n);

//         for (int i = 1; i <= n; i++) {
//                 suma += i;
//                 nf *= i;
//         } printf("Suma je %d, faktorijal je %d", suma, nf);
//         return 0;
// }
//------------------------------------------------------------------------------------------------------------------------------------------

// 3 Унети доњу и горњу границу интервала бројева [dg, gg]. Израчунати средњу вредност
// непарних бројева у задатом интервалу [dg, gg].
//------------------------------------------------------------------------------------------------------------------------------------------

// Jednog dana tri najbolja prijatelja Pet, Vasa i  Toni odlučili su da formiraju tim i učestvuju u takmičenjima u programiranju. Učesnicima se obično nudi nekoliko zadataka tokom takmičenja u programiranju. Mnogo pre početka prijatelji su odlučili da će sprovesti problem ako su bar dvojica sigurni u rešenje. U suprotnom, prijatelji neće napisati rešenje problema.​
// Ovo takmičenje nudi učesnicima n problema. Za svaki problem koji znamo, koji prijatelj je siguran u rešenje. Pomozite prijateljima da pronađu broj problema za koje će napisati rešenje.​
// Prva linija unosa sadrži jedan ceo broj n — broj zadataka u takmičenju. Tada n redova sadrži po tri cela broja, svaki ceo broj je ili 0 ili 1. Ako je prvi broj u redu 1, onda je Pet siguran u rešenje problema, inače nije siguran. Drugi broj prikazuje Vasa pogled na rešenje, treći broj prikazuje Toni pogled. Brojevi na linijama su razdvojeni razmacima.​
// Odštampajte jedan ceo broj — broj problema koje će prijatelji primeniti na takmičenju.​
// Ulazni parametri :​
//  (3 ​
// 1 1 0 ​
// 1 1 1 ​
// 1 0 0),​

// (2​
// 1 0 0​
// 0 1 1)​

// Izlazni parametri: (2), (1)​




// Poznato je nekoliko linija autobusa koji putuju od jednog do drugog grada. Svaka linija ima određeni kapacitet putnika i trenutni broj putnika u autobusu. Vaš zadatak je da odredite koliko autobusa može primiti još putnika.

// Ulazni podaci:

// Prva linija sadrži jedan ceo broj n - ukupan broj autobusa.
// Svaka od n sledećih linija sadrži dva cela broja pi i ki - trenutni broj putnika i kapacitet i-tog autobusa.
// Ispis:

// Jedan ceo broj koji predstavlja broj autobusa u koje još putnika može stati.
// Primer ulaza:

// int main() {
//         int n, pi, ki;
//         printf("Unesite broj buseva: ");
//         scanf("%d", &n);
//         int slobodno = 0;

//         for (int i = 1; i<= n; i++) {
//                 printf("Unesite broj putnika & kapacitet buseva: ");
//                 scanf("%d %d", &pi, &ki);

//                 if (pi < ki) {
//                         slobodno += 1;
//                 }
//         } printf("%d", slobodno);

//        return 0;
// }
// Primer uklaza :
// 3
// 20 50
// 30 40
// 15 30

// Primer izlaza:
// 3



// Написати funkciju za upis i  ispis niza, i funkcija који израчунава збир елеменатa niza

// int upisNiza(int niz[]) {
//     int n;
//     printf("Unesite broj clanova niza (<10): ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("Unesite %d. clan: ", i+1);
//         scanf("%d", &niz[i]);
//     } 
// }

// int ispisNiza(int niz[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", niz[i]);
//     }
// }

// int zbirNiza(int niz[], int n) {
//     int suma = 0;
//     for (int i = 0; i < n; i++) {
//         suma += niz[i];
//     } return suma;
// }


// int main() {
//     int niz[10]; // Povecan je broj elemenata niza
//     int n;
//     int suma;
//     n = upisNiza(niz); // Cuvamo vrednost koju vraca funkcija upisNiza MAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAARS
//     ispisNiza(niz, n);
//     suma = zbirNiza(niz, n);
//     printf("Zbir niza je %d.\n", suma);
//     return 0;
// }

// Написати funkciju za upis i  ispis niza, funckiju za izracunavanje srednje vrednosti neparnih brojeva, funkciju koja pronalazi najveci parni elemenat, funkciju koja vraca elemenat ako postoji (korisnik unosi zeljeni element)


// void upisNiza(int niz[], int n) {

//     for (int i = 1; i <= n; i++) {
//         if (n > 10) {
//             printf("PISALO JE MANJE OD 10!");
//             break;
//         }
//         printf("Unesite %d.clan: ", i);
//         scanf("%d", &niz[i]);
//     }
// }

// void ispisNiza(int niz[], int n) {
//     printf("Elementi niza su: ");
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", niz[i]);
//     }
//     printf("\n");
// }


// int najveciParniElement(int niz[], int n) {
//     int max = 0;

//     for (int i = 1; i <= n; i++) {
//         if (niz[i] % 2 == 0) {
//             if (niz[i] > max) {
//                 max = niz[i];
//             }
//         }
//     } return max;
// }
// int vracaBr(int niz[], int n, int broj) {
    
//     int postoji;
    

//     for (int i = 1; i <= n; i++) {
//         if (niz[i] == broj) {
//             return i;
//         } else printf("broj ne psotoji");
//     }
// }

// double srv_neparnih( int niz[], int n){
//     double suma = 0;
//     int brojac = 0;
//     for(int i = 0; i < n; i++){
//         if(niz[i] % 2 == 1){
//             suma = suma + niz[i];
//             brojac++;
//         }
//     }
//     if(brojac > 0){
//         return suma / brojac;
//     }
//     return 0;
// }


// int main() {
//         int niz[5];
//         int n = sizeof(niz) / sizeof(int);
//         int broj, postoji;
//         // int v = sizeof(niz) / sizeof(int);

//         upisNiza(niz, n);
//         ispisNiza(niz, n);
        
//         srv_neparnih(niz, n);
//         printf("Unesite zeljeni broj: ");
//     scanf("%d", &broj);
//         printf("%d", vracaBr(niz, n, broj));
//         // if (postoji == 0) {
//         //     printf("Broj %d postoji", broj);
//         // } else printf("Broj ne postoji");
//         // printf("\nSrednja vrednost: %.2lf", srv_neparnih(niz, n));

//         // printf("\nNajveci parni broj niza jeste: %d", najveciParniElement(niz, n));
//     // printf("Srednja vrednost neparnih brojeva je: %.2lf\n", sred);
    
//          return 0;
// }

// Napisati program koji Ispisuje 10 unetih brojeva unazad iz nekog niza :

// int upisNiza(int niz[], int n) {
//     int broj;
//     int i;
//     printf("Unesite broj brojeva niza: ");
//     scanf("%d", &broj);

//     for (i = 1; i <= n; i++) {
//         printf("Unesite %d.clan: ", i);
//         scanf("%d", &niz[i]);
//     }
      
    
// }
// int main() {
//     int i;
//      int niz[10];

//     int n = sizeof(niz)/sizeof(0);
//     upisNiza(niz, n);
   
//     printf("Unazad: ");
//      for (i = n; i >= 1; i--) {
//         printf("%d ", niz[i]);

//      } 

// }
// Proveriti da li u nizu ima više pozitivnih ili negativnih brojeva.

//  int unosNiza(int niz[], int n) {

//     for (int i = 0; i < n; i++) { 
//      printf("Unesite broj niza: ");
//      scanf("%d", &niz[i]); }
  
//  }

// int provera(int niz[], int n) {
//     int p=0;
//     int ne=0;

//     for (int i = 0; i < n; i++) {
//         if (niz[i] % 2 == 0) {
//             p+=1;
//         } else {
//             ne +=1;
//         }
//     } printf("Poz: %d \n Neg: %d", p, ne);
// }
// int main() {   
//     int n;
//     printf("Unesite broj elemeneta niza: ");
//     scanf("%d", &n);
//  int niz[5];
//     unosNiza(niz, n);
//     provera(niz, n);


// }

//  Написати програм sa funckijom који учитава низ од максимално 10 бројева и рачуна њихов максимум и минимум
// int upisNiza(int niz[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("Unesite %d.clan: ", i+1);
//         scanf("%d", &niz[i]);
//     }
// }

// int maxNiza(int niz[], int n, int max) {
//     max = niz[0];
//     for (int i = 0; i < n; i++) {
//         if (max < niz[i]) {
//             max = niz[i];
//         }
//     } printf("najveci broj je : %d", max);

// }

// int minNiza(int niz[], int n, int min) {
//     min = niz[0];
//     for (int i = 0; i < n; i++) {
//         if (niz[i] < min) {
//             min = niz[i];
            
//         }
//     } printf("\nnajmanji broj je : %d", min);

// }


// int main() {
//     int niz[10];
//     int n;
//     printf("Unesite broj brojeva niza: ");
//     scanf("%d", &n);
// int max;
//     int min;
//     upisNiza(niz, n);
//     maxNiza(niz, n, max);
//     minNiza(niz, n, min);

    
// }

// Написати програм за унос елемената целобројне матрице димензија n x n.
// Израчунати суму првог реда матрице. (red = columns = j)
  
// void unosMatrice(int niz[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j< n; j++) {
//                         printf("Unesite brojeve kvadratne matrice: ");
//                         scanf("%d", &niz[i][j]);
//                 }
//         }
// }
// int prikazMatrice(int niz[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 printf("\n");
//                 for (int j = 0; j < n; j++) {
//                         printf("%d ", niz[i][j]);
//                 }
//         }
// }
// int sumaPrvogReda(int niz[10][10], int n) {
//         int suma = 0;
//         int j = 0;

//         for (j = 0; j < n; j++) {
//                 suma = suma + niz[0][j];
//         } return suma;
// }
//   int main() {
//         int niz[10][10];
//         int n, suma, i, j;
//         printf("Unesi dimenziju matrice: "); // kvadratna matrica
//         scanf("%d", &n);

//         unosMatrice(niz, n);
//         prikazMatrice(niz, n);
//         printf("\nSuma je: %d", sumaPrvogReda(niz, n));
//         return 0;
//   }




// 2.Написати програм за унос елемената целобројне матрице димензија n x n.
// a)Израчунати суму прве колоне матрице. (kolona - row - i)
// b) Израчунати суму елемената матрице на главној дијагонали.

// void unosMat(int niz[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         printf("Unesite broj matrice: ");
//                         scanf("%d", &niz[i][j]);
//                 }
//         }
// }
// int prikazMat(int niz[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 printf("\n");
//                 for (int j = 0; j < n; j++){
//                         printf("%d ", niz[i][j]);
//                 }
//          }
// }

// int sumaPrveKolone(int niz[10][10], int n) {
//         int suma = 0;
//         for (int i = 0; i < n; i++) {
//                 suma += niz[i][0];
//         } return suma;
// }

// int sumaDijagonale(int niz[10][10], int n) {
//         int suma = 0;
//         for (int i = 0; i < n; i++) {
//                 suma += niz[i][i];
//         } return suma;
// }
// int main() {

//         int niz[10][10];
//         int n, suma;
//         printf("Unesite dimenzije matrice nxn: ");
//         scanf("%d", &n);

//         unosMat(niz, n);
//         prikazMat(niz, n);
//         printf("\nSuma: %d", sumaPrveKolone(niz, n));    
//         printf("\nSuma dijagonale: %d", sumaDijagonale(niz, n));
// }

// 4.Написати програм за унос елемената целобројне матрице димензија n x n.
// Претворити све елементе првог реда у број 3.    red - row - i


// int unosMat(int niz[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         printf("Unesite broj: ");
//                         scanf("%d", &niz[i][j]);
//                 }
//         }
// }
// int pretvoriElemente(int niz[10][10], int n) {
//         int j;
//         int i = 0;
//                 for (j = 0; j < n; j++) {
//                       niz[i][j] = 3;
//                 } 
                
//         printf("Novi niz: ");
//        for (int i = 0; i < n; i++) { 
//         printf("\n");
//           for (int j = 0; j < n; j++) {
//         printf("%d ", niz[i][j]);
//     } } }


// int main() {
//         int niz[10][10];
//         int n;
//         int noviNiz[10][10];
        
        
//         printf("Unesite velicinu matrice nxn: ");
//         scanf("%d", &n);
//         unosMat(niz, n);
//         pretvoriElemente(niz, n);
        
//        return 0;
// }

// 5.Написати програм за унос елемената целобројне матрице димензија n x n.
// Претворити све елементе прве колоне у број 3.

// int unosMat(int mat[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         printf("Unesite element matrice: ");
//                         scanf("%d", &mat[i][j]);
//                 }
//         }
// }
// int promVredPrveKol(int mat[10][10], int n) {  
//      int j;
//      int i = 0;
//         // kolona - column - j
//         for (j = 0; j < n; j++) {
//                 mat[i][j] = 3;
//         }  
//  for (i = 0; i < n; i++) {
//                 printf("\n");
//                 for (int j = 0; j < n; j++) {
//                         printf("%d ", mat[i][j]);
//                 }
//         }
// }

// int prikazMat(int mat[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 printf("\n");
//                 for (int j = 0; j < n; j++) {
//                         printf("%d ", mat[i][j]);
//                 }
//         }
// }
// int main() {
//         int mat[10][10];
//         int n;
//         printf("Unesite velicinu kvadratne matrice: ");
//         scanf("%d", &n);

//         unosMat(mat, n);
//         //prikazMat(mat, n);
//         promVredPrveKol(mat, n);


//         return 0;
// }

// Napisati 2 funkcije, za unis mxn matrice i prikaz te matrice

// void unosMat(int mat[10][10], int n, int m) {
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < m; j++) {
//                         printf("Unesite elemente matrice: ");
//                         scanf("%d", &mat[i][j]);
//                 }
//         }

// }

// int prikazMat(int mat[10][10], int n, int m) {
//         for (int i = 0; i < n; i++) {
//                 printf("\n");
//                 for (int j = 0; j < m; j++) {
//                         printf("%d ", mat[i][j]);
//                 }
//         }
// }

// int main(){
//         int mat[10][10];
//         int m, n;
//         printf("Unesite broj redova matrice: ");
//         scanf("%d", &m);
//         printf("\nUnesite broj kolona matrice: ");
//         scanf("%d", &n);

//         unosMat(mat, n, m);
//         prikazMat(mat, n, m);

//         return 0;

// }

// Написати програм за унос елемената целобројне матрице димензија n x n.
// Заменити све елементе главне дијагонале са бројем 3

// void unosMat(int mat[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         printf("Unesite elemente matrice: ");
//                         scanf("%d", &mat[i][j]);
//                 }
//         }
// }

// int zamenaMesta(int mat[10][10], int n) {
//         int i,j;
//         for (i = 0; i < n; i++) {
//                 mat[i][i] = 3;
//         }

//         for (i = 0; i < n; i++) {
//                 printf("\n");
//                 for (int j = 0; j < n; j++) {
//                         printf("%d ", mat[i][j]);
//                 }
//         }
// }

// int main() {
//         int mat[10][10];
//         int n;
//         printf("Unesite dimenziju nxn matrice: ");
//         scanf("%d", &n);

//         unosMat(mat, n);
//         zamenaMesta(mat, n);
//         return 0;

// }

//  Написати програм за унос елемената целобројне матрице димензија n x n.
// a)  Пронаћи максималан елемент матрице и приказати га.
//  b) Пронаћи минималан елемент матрице и приказати га.

// void unosMat(int mat[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         printf("Unesite leemente matrice: ");
//                         scanf("%d", &mat[i][j]);
//                 }
//         }
// }

// int maxMatrice(int mat[10][10], int n) {
//         int maks = mat[0][0];
//          for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         if (maks < mat[i][j]) {
//                                 maks = mat[i][j];
//                         }
//                 }
//         } printf("Najveci element matricej este: %d", maks);
// }

// int minMatrice(int mat[10][10], int n) {
//         int min = mat[0][0];
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         if (min > mat[i][j]) {
//                                 min = mat[i][j];
//                         }
//                 }
//         } printf("Najmanji element matricej este: %d", min);

// }
// int main() {
//         int mat[10][10];
//         int n, maks;
//         printf("Unersite velicinu matrice: ");
//         scanf("%d", &n);

//         unosMat(mat, n);
//         maxMatrice(mat, n);
//         minMatrice(mat, n);
// }


// Написати програм за унос елемената целобројне матрице димензија n x n.d
// Пронаћи максималан елемент главне дијагонале и приказати га.

// void unosMat(int mat[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         printf("Unesite leemente matrice: ");
//                         scanf("%d", &mat[i][j]);
//                 }
//         }
// }
// void prikazMat(int mat[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 printf("\n");
//                 for (int j = 0; j < n; j++) {
//                         printf("%d ", mat[i][j]);
//                 }
//         }
// }
// int maxElDijagonale(int mat[10][10], int n) {
//         int max = mat[0][0];
//         for (int i = 0; i < n; i++) {   
//                         if (mat[i][i] > max) {
//                                 max = mat[i][i];
//                         }
//         } 
//         printf("max je: %d", max);
//         return max; 
// }
// int main() {
//         int mat[10][10];
//         int n, max;

//         printf("Unersite velicinu matrice: ");
//         scanf("%d", &n);
        
//         unosMat(mat, n);
//         prikazMat(mat, n);
//         maxElDijagonale(mat, n);

//         return 0;
// }

// Napisati program za zbir 2 matrice nxn dimenzija

// int unosMat1(int mat1[10][10], int n ){
//         printf("Unos prve matrice: \n");
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         printf("Unesite element matrice br.1: ");
//                         scanf("%d", &mat1[i][j]);
//                 }
//         }
// }
// int unosMat2(int mat2[10][10], int n ) {
//         printf("\nUnos druge matrice: \n");
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         printf("Unesite elemente matrice br.2: ");
//                         scanf("%d", &mat2[i][j]);
//                 }
//         }
// }
// int novaMat3(int mat1[10][10], int mat2[10][10], int mat3[10][10], int n) {
//         printf("\n");
        
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         mat3[i][j] = mat1[i][j] + mat2[i][j];
//                 }
//         }

//         for (int i = 0; i<n;i++) {
//                 printf("\n");
//                 for (int j = 0; j < n; j++) {
//                         printf("%d ", mat3[i][j]);
//                 }
//         }
        
// }

// int main() {
//         int mat1[10][10];
//         int mat2[10][10];
//         int mat3[10][10];
//         int n, m;
//         printf("Unesite dimenzije kvadratnih matrica: "); 
//         scanf("%d", &n);
        
//         unosMat1(mat1, n);
//         unosMat2(mat2, n);
//         novaMat3(mat1, mat2, mat3, n);
       
//         return 0;

// }

// C Program to Find Transpose of a Matrix (zamena kolona sa redovima) transponovana matrica

// int unosMat(int mat[10][10], int n ){
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         printf("Unesite element matrice: ");
//                         scanf("%d", &mat[i][j]);
//                 }
//         }
// }

// int prikazMat(int mat[10][10], int n) {   
//           for (int i = 0; i<n;i++) {
//                 printf("\n");
//                 for (int j = 0; j < n; j++) {
//                         printf("%d ", mat[i][j]);
//                 }
//         } 
//         }

// int transponovanaMat(int mat[10][10], int tMat[10][10], int n) {
//         for (int i = 0; i < n; i++) {
//                 for (int j = 0; j < n; j++) {
//                         tMat[i][j] = mat[j][i];
//                 }
//         } printf("\n");
//         printf("\nTransponovana matrica: \n");

//         for (int i = 0; i<n;i++) {
//                 printf("\n");
//                 for (int j = 0; j < n; j++) {
//                         printf("%d ", tMat[i][j]);
//                 }
//         } 
//         }

// int main() {
//         int mat[10][10];
//         int tMat[10][10];
//         int n;
//         printf("Unesite dimenzije matrice nxn: ");
//         scanf("%d", &n);

//         unosMat(mat, n);
//         prikazMat(mat, n);
//         transponovanaMat(mat, tMat, n);
        
//         return 0;
// }

// C Program to Multiply Two Matrices
int unosMat1(int mat1[10][10], int n ){
        printf("Unos prve matrice: \n");
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        printf("Unesite element matrice br.1: ");
                        scanf("%d", &mat1[i][j]);
                }
        }
}
int unosMat2(int mat2[10][10], int n ) {
        printf("\nUnos druge matrice: \n");
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        printf("Unesite elemente matrice br.2: ");
                        scanf("%d", &mat2[i][j]);
                }
        }
}
int mnozenjeMat(int mat1[10][10], int mat2[10][10], int mat3[10][10], int n) {
        printf("\n");
          for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                          mat3[i][j] = 0;
            for (int k = 0; k < n; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
                       

                } }

        for (int i = 0; i < n; i++) {
                printf("\n");
                for (int j = 0; j < n; j++) {
                        printf("%d ", mat3[i][j]);
                } }
        
}

int main() {
        int mat1[10][10];
        int mat2[10][10];
        int mat3[10][10];
        
        int n;
        printf("Unesite dimenzije matrice: ");
        scanf("%d", &n);
        unosMat1(mat1, n);
        unosMat2(mat2, n);
        mnozenjeMat(mat1, mat2, mat3, n);
}
// // Napisati program za zbir 2 matrice mxn dimenzija






