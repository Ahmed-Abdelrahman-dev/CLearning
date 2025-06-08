#include <stdio.h>
#include <math.h>

int main(){

    int x = 9 ;
    int y = 2;
    float z = 3.14;
    float u = 3.14;
    float v = 3.99;
    float w = -9;
    float m = 100;


    x = sqrt(x);
    y = pow(y,4);
    z= round(z); // up for >= 0.5 and down for less
    u= ceil(u); // rounds up
    v= floor(v); // rounds down
    w = abs(w);
    m = log(m); // nuntural log --> ln


    printf("%d\n",x);
    printf("%d\n",y);
    printf("%.1f\n",z);
    printf("%.1f\n",u);
    printf("%.1f\n",v);
    printf("%.1f\n",w);
    printf("%.1f\n",m);





    return 0;
}