#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[50];
};

int main() {
    struct employee facebook[3]; // Adjusted array size to 3 for three employees

    for (int i = 0; i < 3; i++) {
        printf("Enter the code of employee %d: \n", i + 1);
        scanf("%d", &facebook[i].code);
        printf("Enter the salary of employee %d: \n", i + 1);
        scanf("%f", &facebook[i].salary);
        printf("Enter the Name of employee %d: \n", i + 1);
        scanf("%s", facebook[i].name);
    }

    for (int j = 0; j < 3; j++) {
        printf("The Name of employee %d is: %s\n", j + 1, facebook[j].name);
        printf("The salary of employee %d is: %.2f\n", j + 1, facebook[j].salary);
        printf("The code of employee %d is: %d\n", j + 1, facebook[j].code);
    }

    return 0;
}
