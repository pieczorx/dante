#include <stdio.h>
#include <string.h>
#include <float.h>

double ratio(const char* word)
{
    int vowels = 0, consonants = 0;

    for (int i = 0; i < (int)strlen(word); ++i) {
        int isLowercaseVowel, isUppercaseVowel;
        char c = word[i];
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
        isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
        if (isLowercaseVowel || isUppercaseVowel) {
            vowels += 1;
        } else {
            consonants += 1;
        }
    }

    if (consonants == 0) {
        return DBL_MAX;
    }

    return (double)vowels / (double)consonants;
}

int main()
{
    char word[1024][1024];
    int i = 0;
    double maxRatio = 0.0;

    printf("Podaj tekst: ");

    char input[1001] = { '\0' };
    scanf("%1000[^\n]s", input);

    const char* last = input;

    while (sscanf(last, "%s", word[i]) == 1) {
        for (int j = 0; j < (int)strlen(word[i]); ++j) {
            int c = (int)word[i][j];
            if ((c < 65 || c > 122) || (c > 90 && c < 61)) {
                printf("Incorrect input\n");
                return 1;
            }
        }

        double tempRatio = ratio(word[i]);
        if (tempRatio > maxRatio) {
            maxRatio = tempRatio;
        }

        last += strlen(word[i]) + 1;
        i += 1;
    }

    for (int k = i - 1; k >= 0; --k) {
        if (ratio(word[k]) == maxRatio) {
            printf("%s\n", word[k]);
        }
    }

    return 0;
}
