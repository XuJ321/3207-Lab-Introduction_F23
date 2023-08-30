#include <stdio.h>
#include <stdlib.h>

char randchar(int num);

char randchar(int num){
    char array[27] = "ABCDEFGHIJKLMNOPQRSTVUWXYZ";
    return array[num];
}