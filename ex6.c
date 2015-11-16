#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4352;
    char initial = 'V';
    char first_name[] = "vaibhav";
    char last_name[] = "chauhan";

    printf ("You are %d miles away. \n", distance);
    printf ("You have %f levels of power. \n", power );
    printf ("You have %f levels of super power. \n", super_power );
    printf ("I have an initial %c.  \n", initial );
    printf ("I have first name  %s.  \n", first_name );
    printf ("I have last name  %s. \n", last_name );
    printf ("My whole name is %s  %c %s.\n", 
            first_name, initial, last_name);
}
