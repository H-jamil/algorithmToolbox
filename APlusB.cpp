/**
 * @Author: jamil
 * @Date:   2018-05-14T11:48:44-05:00
 * @Last modified by:   jamil
 * @Last modified time: 2021-04-22T18:10:27-05:00
 */


#include <iostream>


int sum_of_digits(int first_digit, int second_digit){
  return first_digit+second_digit;
}

int main(){
  int a =0;
  int b =0;
  std::cin >> a;
  std:: cin >>b;
  std:: cout <<sum_of_digits(a,b);
  return 0;

}
