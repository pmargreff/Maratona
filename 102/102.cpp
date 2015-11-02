/* @JUDGE_ID: 602187 102 CPP  "Learning"  */

/* @BEGIN_OF_SOURCE_CODE */

#include <iostream>

// sum 3 bottles
long int sum(long int bottle1, long int bottle2,long int bottle3){
  return (bottle1 + bottle2 + bottle3);
}

// sum 2 bottles
long int sum (long int bottle1, long int bottle2){
  return (bottle1 + bottle2);
}

// find bottles with most moviments
// return 1 = brown , 2 = green and 3 = clear
// retuln 4 = total_b == total_g > total
// return 0 = error
int find_more(long int brown[3], long int green[3], long int clear[3], int *move){
  long int total_b, total_g, total_c;
  total_b = sum(brown[0], brown[1], brown[2]);
  total_g = sum(green[0], green[1], green[2]);
  total_c = sum(clear[0], clear[1], clear[2]);

  if ((total_c < total_b) && (total_g < total_b)){

    return 1;
  } else if ( (total_b < total_g) && total_c < total_g ){
    return 2;
  } else if ((total_g < total_c) && (total_b < total_c)){
    return 3;
  } else if(total_b == total_g ){
    return 4;
  } else if (total_b == total_c){
    return 5;
  } else if (total_g == total_c){
    return 6;
  }
  return 0;

}

sum_lesser(long int array[3]){
  if (array[0] < array[2] && array[1] < array[2]){
    return array[0] + array[1];
  }
  else if (array[0] < array[2] && array[1] < array[2]){

  }else if (array[0] < array[2] && array[1] < array[2]{

  }
}

int main() {

  long int brown[3], green[3], clear[3]; //bottles
  int move;
  char bottleOrder[4];
  while (std::cin >> brown[0] >> green[0] >> clear[0] >> brown[1] >> green[1] >> clear[1] >> brown[2] >> green[2] >> clear[2]) {

    if (find_more(brown, green, clear) != 0){
      if (find_more(brown, green, clear) == 1){

      } else if (find_more(brown, green, clear) == 2){

      } else if (find_more(brown, green, clear) == 3){

      }

    } else {

    }

  }

  return 0;
}
/* @END_OF_SOURCE_CODE */
