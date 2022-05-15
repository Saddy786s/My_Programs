#include <stdio.h>
#include <stdlib.h>
struct StudentInfo
{
    char name[100];
    int marks[5];
    int sum;
    int max;
} s[2];
int main()
{
    int sum = 0;
    int max = 0;
    struct StudentInfo temp;
    for (int i = 0; i < 2; i++)
    {
        printf("Input name: ");
        scanf("%s", s[i].name);
        for (int j = 0; j < 5; j++)
        {
            printf("Marks[%d]", j + 1);
            scanf("%d", &s[i].marks[j]);
            sum += s[i].marks[j];
            if (s[i].marks[j] > max)
            {
                max = s[i].marks[j];
            }
        }
        s[i].sum = sum;
        sum = 0;
        s[i].max = max;
        max = 0;
    }
    // sorting
    for (int i = 0; i <= 2 - 1; i++)
    {
        for (int j = 0; j <= 2 - 1; j++)
        {
            if (s[j].sum < s[j + 1].sum)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("\nSorted List\n");
    for (int j = 0; j <= 2; j++)
    {
        printf("%s\t%d\n\n", s[j].name, s[j].sum);
    }
    printf("\n\n\nOutput!");
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        printf("Name: %s\n", s[i].name);
        printf("Total Marks : %d\n", s[i].sum);
        printf("The highest marks scored : %d\n", s[i].max);

        printf("...................................................\n\n\n");
    }
}