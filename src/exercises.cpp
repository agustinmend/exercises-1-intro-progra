
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
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
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  int ASCII;
  ASCII = (int) character;
  if (ASCII >= 65 && ASCII <= 90){
    cout << "lower-case alphabet" << endl;
  }
  else if (ASCII >= 97 && ASCII <= 122){
    cout << "upper-case alphabet" << endl;
  }
  else {
    cout << "not an alphabet" << endl;
  }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r >= 0) {
    double result;
    result = 4 * 3.1416 * r * r;
    cout << result << endl;
  }
  else {
    cout << "Error: Radius cannot be negative." << endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
  int hour = seconds / 3600;
  int minutes = seconds / 60;
  if (seconds >= 0){
    cout << hour << ":" << minutes << ":" << seconds << endl;
  }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  char caracter1 = s1[0];
  char caracter2 = s2[0];
  char caracter3 = s3[0];
  char caracter4 = s4[0];
  char caracter5 = s5[0];
  cout << s1 << s2 << s3 << s4 << s5 ;
  if ( s1 == s2) {
    cout << "Hemos encontrado algo!";
  }
  else {
    cout << "Aun sin suerte";
  }
}



int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  int S =a + b;
  string S1 = to_string(S);
  int digitos = S1.size();
  int result = S * digitos ;
  if ( a >= 0 && b >= 0) {
    cout << result << endl;
  }
  else {
    cout << "" << endl;
  }
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  if (number == 11235813) {
    return "Se encontró Fibonacci";
  }
  else {
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
  /*if (age >= 18 && years_of_experience == 0){
    cout << "coordinador de proyecto" << endl;
  }
  else if (age >= 18 && years_of_experience >= 3 && years_of_experience < 5){
    cout << "director de proyecto" << endl;
  }
  else if (age >= 18 && years_of_experience >= 5){
    cout << "director senior" << endl;
  }
  else {
    cout << "" << endl;
  }*/
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}