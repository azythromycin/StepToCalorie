#include <stdio.h>

int main(){
  double weight;
  int steps;
  printf("Enter your weight(kilograms) and the number of steps you covered please: ");
  scanf("%lf %d",&weight, &steps);
  
  int calories = (((int)weight * 0.000693)+0.03)*steps;
  printf("Calories burned: %d\n",calories);

  if (calories <= 150){
    printf("\nNeed to walk more! You got this!\n");
  } else {
    printf("\nGood job!");
  }
  printf("\n");
}
