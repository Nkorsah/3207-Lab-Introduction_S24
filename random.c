#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// YOooooo


char randchar(){
    int randNumber = rand() % 26;
    char letter = 'A' + randNumber;
    return letter;
}