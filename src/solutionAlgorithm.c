#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char *convert(char* s, int numRows) {

    if (numRows == 1) return s;

    size_t stringLength = strlen(s);
    int stringTracker = 0;

    char zigzagMap [numRows][stringLength];
    memset(zigzagMap, 0, sizeof zigzagMap);

    int a = 0;
    int b = 0;

    bool growVertical = 0;
    bool growDiagonal = 0;

    while(stringTracker != stringLength){

        zigzagMap [a][b] = s[stringTracker];
        stringTracker++;

        if ( (a == 0) ){
            growVertical = 1;
            growDiagonal = 0;
        } else if ( (a == (numRows - 1)) ) {
            growVertical = 0;
            growDiagonal = 1;
        }

        if ( growVertical == 1) {
            a++;
        } else if ( growDiagonal = 1){
            a--;
            b++;
        }
        
    }

    char *finalString = malloc(stringLength + 1);
    int finalStringIndex = 0;

    for (int i = 0; i < numRows; i++){
        for(int j = 0; j < stringLength; j++){
            if ( zigzagMap [i][j] != '\0' ){
                finalString[finalStringIndex] = zigzagMap [i][j];
                finalStringIndex++;
            }else{
                continue;
            }
        }
    }

    finalString[finalStringIndex] = '\0';

    return finalString;

}