#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas [] = {10,12,13,14,20};
    char name [] = "Vaibhav";
    char full_name [] = {
        'v','a','i','b','h','a','v',' ',
        'c','h','a','u','h','a','n'
    };
    printf("The size of an int: %ld.\n",sizeof(int));
    printf("The size of an areas (int[]): %ld.\n",sizeof(areas));
    printf("The number of ints an areas : %ld.\n",sizeof(areas) / sizeof(int));
    printf("The First areas is : %d, the 2nd %d. \n",areas[0],areas[1]);
    printf("The size of char:  %ld \n", sizeof(char));
    printf("The size of name char([]): %ld \n", sizeof(name));
    printf("The number of char([]): %ld \n", sizeof(name) / sizeof(char));
    printf("The size of full_name(char[]): %ld \n", sizeof(full_name));
    printf("The number of chars:  %ld \n", sizeof(full_name) / sizeof(char));
    printf("name=\"%s\"  and full_name=\"%s\"\n", name, full_name);
    return 0;


}
