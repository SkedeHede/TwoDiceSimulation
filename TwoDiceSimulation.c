#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum rolls {
    R1 = 1,
    R2 = 2,
    R3 = 3,
    R4 = 4,
    R5 = 5,
    R6 = 6,
    R7 = 7,
    R8 = 8,
    R9 = 9,
    R10 = 10,
    R11 = 11,
    R12 = 12
};

int rolls_amount = 50000;

int rolls[11] = {0};


int main() {

    srand(time(NULL));

    for (int i = 0; i < rolls_amount; i++) {
        int a = (rand() % 6) + 1;
        int b = (rand() % 6) + 1;
        int roll = a + b;
        rolls[roll - 2]++;


        for (int j = 0; j < sizeof(rolls) / sizeof(rolls[0]); j++) {
            if (roll == rolls[j]) {
                rolls[j]++;
            }
        }
    }

    for (int i = 0; i < sizeof(rolls) / sizeof(rolls[0]); i++) {
        printf("%2d: %d\n", i + 2, rolls[i]);
    }

}