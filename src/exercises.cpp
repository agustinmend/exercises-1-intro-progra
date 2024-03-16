
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE 
  if (s1 < s2 && s1 < s3) {
    cout << s1 ;
  }
  else if (s2 < s1 && s2 < s3) {
    cout << s2 ;
  }
  else if (s3 < s1 && s3 < s1) {
    cout << s3 ;
  }
  else {
    cout << s1;
  }

}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  double result;
  double resultraiz = sqrt( B * B -4 * A * C);
  if (resultraiz > 0 && A != 0){
    double result_1 = (- B + resultraiz )/(2 * A);
    double result_2 = (- B - resultraiz )/(2 * A);
    cout << result_1 << " " << result_2 << endl;
  }
  else if (resultraiz == 0 && A !=0 ){
    result = - B /( 2 * A);
    cout << result << endl;
  }
  else if ( A == 0 && B!=0){
    result = - C / B;
    cout << result << endl; 
  }
  else {
    cout << "";
  }

}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
if (b==0){
  cout << "Impossible" << endl;
}
else {
  cout << a/b << endl;
}
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  double result; 
  if (n > a && n < b) {
    result = n - n * (x/100) ;
    cout << result << endl;
  }
  else if (n > b && n < a) {
    cout << n << endl;
  }
  else if (n > a && n > b){
    result = n - n * (y/100);
    cout << result << endl;
  }
  else if ( x == 0 or y == 0 ){
    cout << n << endl;
  }
  else {
    cout << n << endl;
  }
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  int ASCII;
  ASCII = (int) character;
  if (ASCII >= 65 && ASCII <= 90){
    cout << "upper-case alphabet" << endl;
  }
  else if (ASCII >= 97 && ASCII <= 122){
    cout << "lower-case alphabet" << endl;
  }
  else {
    cout << "not an alphabet" << endl;
  }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  if (number == 0) {
    cout << "Invalid input";
  }
  else if (number == 1) {
    cout << "Monday" << endl;
  }
  else if (number == 2) {
    cout << "Martes";
  }
  else if (number == 3) {
    cout << "Miercoles";
  }
  else if (number == 4) {
    cout << "Thursday" << endl;
  }
  else if (number == 5) {
    cout << "Viernes";
  }
  else if (number == 6) {
    cout << "Sabado" ;
  }
  else if (number == 7) {
    cout << "Domingo";
  }
  else {
    cout << "Invalid input" << endl;
  }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r >= 0) {
    double result;
    result = 4 * 3.14 * r * r;
    cout << result << endl;
  }
  else {
    cout << "Error: Radius cannot be negative." << endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  char caracter1 = s1[0];
  char caracter2 = s2[0];
  char caracter3 = s3[0];
  char caracter4 = s4[0];
  char caracter5 = s5[0];
  cout << caracter1 << caracter2 << caracter3 << caracter4 << caracter5 << endl ;
  if ( caracter1 == caracter5) {
    return "Hemos encontrado algo!";
  }
  else {
    return "Aun sin suerte";
  }
}



int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  int sum = a + b ;
  string suma = to_string(sum);
  int digitos = size(suma);
  if (a>0 && b>0){
    int result = sum * digitos;
    cout << result << endl;
  }
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  if (number == 11235813) {
    return "Se encontro a Fibonacci";
  }
  else 
  {
    return "Esto no es de Fibonacci";
  }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  if (age >= 18 && years_of_experience < 3 && years_of_experience >= 0){
    return "Project coordinator";
  }
  else if (age >= 18 && years_of_experience >= 3 && years_of_experience < 5){
    return "Project manager";
  }
  else if (age >= 18 && years_of_experience >= 5){
    return "Senior project manager";
  }
  else {
    return "Not eligible";
  }
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if (number_of_docs == 1 ) {
    return "Se encontro un documento";
  }
  else if (number_of_docs <= 0 ) {
    return "No se encontraron documentos";
  }
  else if (number_of_docs > 1) {
    return to_string(number_of_docs) + " documentos encontrados";
  }
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}