// PSAP lab 8 (19 March 2024)
//  S division Batch 2
//  Aftab Naik Roll_no 26
//  PRN 12311771
//  Problem Statement: Print all the possible permutation of a given string

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int counter = 1;
void shuffle(char *word, int start, int end)
{

    // printf("%s\n", word);
    // return;
    if (start == end)
    {
        printf("%d %s\t", counter++, word);
        return;
    }
    int diff = end - start + 1;
    for (int i = start; i < end + 1; i++)
    {
        swap(word + start, word + i);
        shuffle(word, start + 1, end);
        swap(word + start, word + i);
    }
}

int main()
{
    char temp[10];
    printf("Enter the string: ");
    scanf(" %s", temp);
    int length = strlen(temp);
    length--;
    shuffle(temp, 0, strlen(temp) - 1);
    // while (length--)
    // {
    //     // printf("%s\n", temp);
    // }
}

// output 1
// Enter the string: map
// 1 map
// 2 mpa
// 3 amp
// 4 apm
// 5 pam
// 6 pma

// output 2
// Enter the string: Aftab
// 1 Aftab 2 Aftba 3 Afatb 4 Afabt 5 Afbat 6 Afbta 7 Atfab 8 Atfba 9 Atafb 10 Atabf        11 Atbaf        12 Atbfa        13 Aatfb        14 Aatbf        15 Aaftb 16 Aafbt 17 Aabft        18 Aabtf        19 Abtaf        20 Abtfa        21 Abatf        22 Abaft        23 Abfat        24 Abfta        25 fAtab        26 fAtba 27 fAatb 28 fAabt        29 fAbat        30 fAbta        31 ftAab        32 ftAba        33 ftaAb        34 ftabA        35 ftbaA        36 ftbAa        37 fatAb 38 fatbA 39 faAtb        40 faAbt        41 fabAt        42 fabtA        43 fbtaA        44 fbtAa        45 fbatA        46 fbaAt        47 fbAat        48 fbAta 49 tfAab 50 tfAba        51 tfaAb        52 tfabA        53 tfbaA        54 tfbAa        55 tAfab        56 tAfba        57 tAafb        58 tAabf        59 tAbaf 60 tAbfa 61 taAfb        62 taAbf        63 tafAb        64 tafbA        65 tabfA        66 tabAf        67 tbAaf        68 tbAfa        69 tbaAf        70 tbafA 71 tbfaA 72 tbfAa        73 aftAb        74 aftbA        75 afAtb        76 afAbt        77 afbAt        78 afbtA        79 atfAb        80 atfbA        81 atAfb 82 atAbf 83 atbAf        84 atbfA        85 aAtfb        86 aAtbf        87 aAftb        88 aAfbt        89 aAbft        90 aAbtf        91 abtAf        92 abtfA 93 abAtf 94 abAft        95 abfAt        96 abftA        97 bftaA        98 bftAa        99 bfatA        100 bfaAt       101 bfAat       102 bfAta       103 btfaA104 btfAa        105 btafA       106 btaAf       107 btAaf       108 btAfa       109 batfA       110 batAf       111 baftA       112 bafAt       113 baAft       114 baAtf 115 bAtaf       116 bAtfa       117 bAatf       118 bAaft       119 bAfat       120 bAfta