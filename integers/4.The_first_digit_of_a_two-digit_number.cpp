//  Дано двузначное число. Выведите его первую цифру (число десятков)

//  Формат входных данных
//  На вход дается натуральное двузначное число N.

//  Формат выходных данных
//  Выведите одно целое число - ответ на задачу.

//  Sample Input:
//  42
//  Sample Output:
//  4

#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  cout << x / 10;
  return 0;
}
