#ifndef HOMEWORK1_H
#define HOMEWORK1_H

int massIndex(int m, int h)
{
    puts("First quest\n");
    puts("Enter your weight: ");
    scanf("%d", &m);
    puts("Enter your growth: ");
    scanf("%d", &h);
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

#endif // HOMEWORK1_H
