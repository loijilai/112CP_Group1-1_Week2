#include <stdio.h>
#include <math.h>
double abs(double a)
{
    if(a > 0)
        return a;
    return -a;
}

int main()
{
    double pi = 3.1415926;
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    double hour_angle = hour*30 + minute*0.5;
    double minute_angle = minute*6;
    double angle = abs(hour_angle - minute_angle);
    double length = sqrt(1*1 + 2*2 - 2*1*2*cos(angle / 180 * pi));
    printf("Angle: %.2lf\n", angle);
    printf("Length: %.2lf\n", length);
    return 0;
}