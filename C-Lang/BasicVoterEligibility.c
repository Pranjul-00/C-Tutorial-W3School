#include <stdio.h>

int main() {
  int age;
  int minAge=18;
  printf("Enter your age : ");
  scanf("%d", &age);
  if (age>=minAge){
    printf("Congratulations! You are eligible to Vote.");
  }
  else{
    printf("You can not vote yet. The minimum age of a voter should be %d years, so you will have to wait %d more years.",minAge,minAge-age);
  }
}