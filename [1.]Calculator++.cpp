#include <iostream>

int main() {
    float num1,num2,res;
    char op;
  std::cout << "enter two number:";
  std::cin>> num1 >> num2;
  std::cout<<"enter\n+ for addition\n- for subtraction\n* for multiplication\n/ for division\n";
  std::cin>> op;
  if(op=='+'){
    res=num1+num2;
  }
  if(op=='-'){
    res=num1-num2;
    }
  if(op=='*'){
    res=num1*num2;
  }
  if(op=='/'){
    if(num2==0){
      std::cout << "denominator cannot be zero\n";
      return (0);
    }
    else{
    res=num1/num2;
  }
 }
 std::cout <<res<< "\n";

  return 0;
}