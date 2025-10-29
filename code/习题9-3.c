#include<stdio.h>
#include<math.h>

int main(){
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    x3=x1+x2;
    y3=y1+y2;
    if (fabs(x3)<0.05)
        x3=fabs(x3);
    if (fabs(y3)<0.05)
        y3=fabs(y3);
    printf("(%.1f, %.1f)",x3,y3);
    return 0;
}