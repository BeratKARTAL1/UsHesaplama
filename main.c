#include <stdio.h>

float exp(float base, float top);
int main() {
    float top=0 , base=0;
    float conclusion=1;
    printf("please enter a number:\n");
    scanf("%f %f",&base,&top);
    conclusion=exp( base, top);
    printf("sonuc=%f\n",conclusion);
    return 0;
}
float exp(float base , float top) {
    float conclusion=1;
    if (top<0) {
        for (int i=0;i<-top;i++) {
            conclusion*=1/base;
        }
    }
    else {
        for (int i=0;i<top;i++) {
            conclusion*=base;
        }
    }
    return conclusion;
}
