#ifndef HOMEWORK1_H
#define HOMEWORK1_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1 задание
int massIndex(int m, float h)
{
    puts("FIRST QUEST\n");
    puts("Enter your weight(in kilograms): ");
    scanf("%d", &m);
    puts("Enter your growth(in meters): ");
    scanf("%f", &h);
    if(m > 0 && h > 0)
    {
        float i;
        i = m;
        i /= (h * h);
        printf("Your body mass index: %f\n", i);
    }

    else
    {
        puts("Something's wrong");
    }

    return 0;
}
//3 задание
int exchangeValues(int a, int b)
{
    puts("THIRD QUEST\n");
    puts("Enter a: ");
    scanf("%d", &a);
    puts("Enter b: ");
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("We reversed the a and b values: a = %d, b = %d\n", a, b);

    return 0;
}
//4 задание

//6 задание
int years(int input)
{
    puts("SIXTH QUEST\n");
    puts("Enter your age(From 1 to 150 years): ");
    scanf("%d", &input);
    if(input == 1 || input == 21 || input == 31 || input == 41 || input == 51 || input == 61 || input == 71
       || input == 81 || input == 91 || input == 101 || input == 121 || input == 131 || input == 141)
    {
        printf("Vam %d god", input);
    }

    else if((input >= 2 && input <= 4) || (input >= 22 && input <= 24) || (input >= 32 && input <= 34)
            || (input >= 42 && input <= 44) || (input >= 52 && input <= 54) || (input >= 62 && input <= 64)
            || (input >= 72 && input <= 74) || (input >= 82 && input <= 84) || (input >= 92 && input <= 94)
            || (input >= 102 && input <= 104) || (input >= 122 && input <= 124) || (input >= 132 && input <= 134)
            || (input >= 142 && input <= 144))
    {
        printf("Vam %d goda", input);
    }

    else if(input == 0 || (input >= 5 && input <= 20) || (input >= 25 && input <= 30) || (input >= 35 && input <= 40)
            || (input >= 45 && input <= 50) || (input >= 55 && input <= 60) || (input >= 65 && input <= 70)
            || (input >= 75 && input <= 75) || (input >= 85 && input <= 90) || (input >= 95 && input <= 95)
            || (input >= 105 && input <= 120) || (input >= 125 && input <= 130) || (input >= 135 && input <= 140)
            || (input >= 145 && input <= 150))
    {
        printf("Vam %d let", input);
    }

    else
    {
       puts("Something's wrong!");
    }
    return 0;
}
//7 задание НЕ РАБОТАЕТ
int chess(int x1, int y1, int x2, int y2)
{
    puts("SEVENTH QUEST\n");
    puts("Enter first x coordinate(A = 1; B = 2; C = 3...): ");
    scanf("%d", &x1);
    puts("Enter first y coordinate(digit): ");
    scanf("%d", &y1);
    puts("Enter second x coordinate(A = 1; B = 2; C = 3...): ");
    scanf("%d", &x2);
    puts("Enter second y coordinate(digit): ");
    scanf("%d", &y2);
    if(y1 % 2 && y2 % 2 && (x1 % 2 && x2 % 2))
    {
        puts("Both cells are black");
    }

    return 0;
}
//9 задание

//10 задание
int tenthQuest(int N)
{
    puts("TENTH QUEST\n");
    puts("Enter value of N: ");
    scanf("%d", &N);
    int newN = 0;
    while(N > 0)
    {
        newN *= 10;
        newN += N % 2;
        N /= 10;
    }

    if(newN % 2 != 0)
    {
        puts("\nFalse!");
    }

    else if(newN == 0)
    {
        puts("\nTrue!");
    }

    return 0;
}

#endif // HOMEWORK1_H //
