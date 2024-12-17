#include <stdio.h>
#include <string.h>

struct CarStructure
{
    char name[50];
    float price;
};

union CarUnion
{
    char name[50];
    float price;
};

int main()
{

    struct CarStructure carStruct[5];
    union CarUnion carUnion;

    printf("Enter the details of 5 cars:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nCar %d Name: ", i + 1);
        scanf("%s", carStruct[i].name);
        printf("Car %d Price: ", i + 1);
        scanf("%f", &carStruct[i].price);
    }

    printf("\nDetails of 5 Cars using Structure:");
    for (int i = 0; i < 5; i++)
    {
        printf("\nCar %d Name: %s", i + 1, carStruct[i].name);
        printf("\nCar %d Price: %.2f", i + 1, carStruct[i].price);
    }

    printf("\n\nSize of Structure: %zu bytes", sizeof(struct CarStructure));
    printf("\nSize of Union: %zu bytes", sizeof(union CarUnion));

    return 0;
}
