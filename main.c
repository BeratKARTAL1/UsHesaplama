#include <stdio.h>

float usAlma(float taban, float ust);
int main() {
    float ust=0 , taban=0;
    float sonuc=1;
    printf("lutfen bir sayi girin:\n");
    scanf("%f %f",&taban,&ust);
    sonuc=usAlma( taban, ust);
    printf("sonuc=%f\n",sonuc);
    return 0;
}
float usAlma(float taban , float ust) {
    float sonuc=1;
    if (ust<0) {
        for (int i=0;i<-ust;i++) {
            sonuc*=1/taban;
        }
    }
    else {
        for (int i=0;i<ust;i++) {
            sonuc*=taban;
        }
    }
    return sonuc;
}