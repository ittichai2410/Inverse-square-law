#include <stdio.h>
#include <math.h>

float Inverse(float i1,float d2)
{
    float i2,d1 = 1;
    i2 = (i1)*pow(d1,2)/pow(d2,2);
    return i2;
}

main(){
    float i1,i2;
    float d2;
    
    printf("Enter ความเข้มตำแหน่งตั้งต้น");
    scanf("%f",&i1);
    printf("Enter ระยะทาง");
    scanf("%f",&d2);
    
    i2 = Inverse(i1,d2);

    printf("Result = %f",i2);
}