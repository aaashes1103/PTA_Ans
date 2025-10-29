#include<stdio.h>
#include<math.h>

int main(){
    double s[3][2];
    for(int i=0;i<3;i++){
        scanf("%lf %lf",&s[i][0],&s[i][1]);
    }
    double l1,l2,l3;
    l1=pow(((s[0][0]-s[1][0])*(s[0][0]-s[1][0])+(s[0][1]-s[1][1])*(s[0][1]-s[1][1])),0.5);
    l2=pow(((s[2][0]-s[1][0])*(s[2][0]-s[1][0])+(s[2][1]-s[1][1])*(s[2][1]-s[1][1])),0.5);
    l3=pow(((s[0][0]-s[2][0])*(s[0][0]-s[2][0])+(s[0][1]-s[2][1])*(s[0][1]-s[2][1])),0.5);
    if(l1+l2<=l3 || l1+l3<=l2 ||l2+l3<=l1){
        printf("Impossible");
        return 0;
    }
    double a,l;
    l=l1+l2+l3;
    a=pow((l/2)*(l/2-l1)*(l/2-l2)*(l/2-l3),0.5);
    printf("L = %.2f, A = %.2f",l,a);
    return 0;
}