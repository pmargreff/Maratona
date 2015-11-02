/* @JUDGE_ID: 602187 100 CPP  "Learning"  */

/* @BEGIN_OF_SOURCE_CODE */
#include <iostream>
// works!
// recursivity function to find the cycles length of a number
int cycle_length(int n, int count){
  count++; //count increment

  //problem algorithm
  if (n == 1){
    return 1;
  }

  if (n % 2 == 0){
    n /= 2;
  } else {
    n = (n * 3) + 1;
  }


  if (n == 1)
  return count;
  else
  cycle_length(n, count);
}

/**
* do a loop to number1 than number2 and get the cycles number if
* the result is larger than max_cycles
**/
int main() {

  int number1, number2, cycles, max_cycles, number;
  number1 = number2 = max_cycles = cycles = 1;

  //case number1 <= number2 do a growing loop
  //else do a decreasing loop
  while(std::cin >> number1 >> number2){
    if (number1 <= number2){
      for (number = number1; number <= number2; number++){
        cycles = cycle_length(number, 1);
        if (max_cycles < cycles){
          max_cycles = cycles;
        }
      }
    } else {
      // max_cycles = cycle_length(number1, 1); //old test
      for (number = number2; number <= number1; number++){
        cycles = cycle_length(number, 1);
        if (max_cycles < cycles){
          max_cycles = cycles;
        }
      }
    }
    std::cout << number1 << " " <<  number2 <<  " " << max_cycles << std::endl;
    max_cycles = 0;
  }

  return 0;
}
