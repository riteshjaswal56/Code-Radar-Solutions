#include <stdio.h>
#include <string.h>

char findMostFrequentChar(char *str) {
    int frequency[256] = {0}; 
    int maxFreq = 0;
    char mostFrequentChar = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
        if (frequency[(unsigned char)str[i]] > maxFreq) {
            maxFreq = frequency[(unsigned char)str[i]];
            mostFrequentChar = str[i];
        }
    }

    return mostFrequentChar;
}

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    char mostFrequent = findMostFrequentChar(str);

    if (mostFrequent != '\0') {
        printf("'%c'\n", mostFrequent);
    } 

    return 0;
}