#include <stdio.h>
int main(){
  int num;
  printf("welcome to calculation of table \n  enter the table number :");
  scanf("%d",&num);
  
  for (int i =1; i <= 10; i++){
    printf("%d X %d = %d\n",num,i,num*i);
  }
  printf("end of loop\n");
  return 0;
}
// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 