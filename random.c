#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    int randNumber = rand() % 26;
    char letter = 'A' + randNumber;
    return letter;
}