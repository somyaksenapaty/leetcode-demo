#include <stdio.h>
#include <string.h>

char mergeAlternately(char word1, char word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int i, j, k;
    
    for (i = 0, j = 0, k = 0; i < len1 || j < len2;){
        if (i < len1) {
            result[k++] = word1[i++];
        }
        if (j < len2) {
            result[k++] = word2[j++];
        }
    }
    return result;
}

int main() {
    char word1[] = "abc";
    char word2[] = "pqrstu";
    printf("%s\n", mergeAlternately(word1, word2));

    return 0;
}
