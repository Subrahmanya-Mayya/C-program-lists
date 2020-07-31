#include<stdio.h>
#include<math.h>

int main(){
  float r1,r2,a,b,c,d,img,r;
  printf("Enter the Coefficients of the quadratic equation : ");
  scanf("%f%f%f",&a,&b,&c);
  d = (b * b) - 4 * a * c;
  if(d>0){
    r1 = (-b + sqrt(d))/(2*a);
    r2 = (-b - sqrt(d))/(2*a);
    printf("roots are real\nroot1 = %.2f and root2 = %.2f",r1,r2);
  }
  else if(d==0){
    r1 = r2 = (-b)/(2 * a);
    printf("roota are real and equal\nroot1 = %.2f and root2 = %.2f",r1,r2);
  }
  else{
    r = (-b) / (2 * a);
    img = sqrt(-d)/(2 * a);
    printf("roots are imaginary\nroot1 = %.2f + i%.2f \nroot2 = %.2f - i%.2f",r,img,r,img);
  }
  return 0;
}