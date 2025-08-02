#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char* convert(char* s, int numRows) {

    size_t stringLength = strlen(s);
    int stringTracker = 0;

    char zigzagMap [numRows][stringLength];

    int a = 0;
    int b = 0;

    bool growVertical = 0;
    bool growDiagonal = 0;

    while(stringTracker != stringLength){

        if ( (a == 0) ){
            growVertical = 1;
            growDiagonal = 0;
        } else if ( (a == (numRows - 1)) ) {
            growVertical = 0;
            growDiagonal = 1;
        }

        zigzagMap [a][b] = s[stringTracker];
        stringTracker++;



        if ( growVertical == 1) {
            a++;
        } else if ( growDiagonal = 1){
            a--;
            b++;
        }

    }

}