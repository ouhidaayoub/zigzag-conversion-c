#include <stdio.h>
#include "C:/Users/priva/OneDrive/Documents/Practicing C Language/#6 Zigzag Conversion/src/solutionAlgorithm.c"

int main(){

    char *result1 = convert("PAYPALISHIRING", 3);
    printf("Input: s = \"PAYPALISHIRING\", numRows = 3\n");
    printf("Output: \"%s\"\n\n", result1);

    char *result2 = convert("PAYPALISHIRING", 4);
    printf("Input: s = \"PAYPALISHIRING\", numRows = 4\n");
    printf("Output: \"%s\"\n\n", result2);

    char *result3 = convert("A", 1);
    printf("Input: s = \"A\", numRows = 1\n");
    printf("Output: \"%s\"\n\n", result3);

    char *result4 = convert("AB", 1);
    printf("Input: s = \"AB\", numRows = 1\n");
    printf("Output: \"%s\"\n\n", result4);

    char *result5 = convert("ABCD", 2);
    printf("Input: s = \"ABCD\", numRows = 2\n");
    printf("Output: \"%s\"\n\n", result5);

    return 0;

}