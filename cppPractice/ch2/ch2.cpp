#include <cstdio>
enum class Operation {
  Add,
  Subtract,
  Multiply,
  Divide
};

struct Calculator {

  Operation operation;

  Calculator(Operation operation_in) {
    operation = operation_in;
  };

  int calculate(int a, int b) {
    switch(operation) {
      case (Operation::Add) :{
        return a + b;
      } break;

      case (Operation::Subtract) :{
        return a - b;
      } break;

      case (Operation::Multiply) :{
        return a * b;
      }break;

      case (Operation::Divide) :{
        return a / b;
      } break;
      default: {
        return 0;
      }
    }
  };
};

int main() {

  int a {10};
  int b {2};

  Calculator addition(Operation::Add);
  printf("%d plus %d is equal to %d", a, b, addition.calculate(a, b));

  Calculator subtraction(Operation::Subtract);
  printf("\n%d minus %d is equal to %d", a, b, subtraction.calculate(a, b));

  Calculator multiplication(Operation::Multiply);
  printf("\n%d times %d is equal to %d", a, b, multiplication.calculate(a, b));

  Calculator division(Operation::Divide);
  printf("\n%d divided by %d is equal to %d", a, b, division.calculate(a, b));
  
  return 0;
};