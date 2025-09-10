#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[100];
    float salary;
};

int main() {
    int n;
    printf("how many you wanna add : ");
    scanf("%d", &n);
    struct Employee *p1 = malloc(n * sizeof(struct Employee));

    for (int i = 0; i < n; i++) {
        printf("Name : ");
        scanf(" %[^\n]", p1[i].name);
        printf("salary :");
        scanf("%f", &p1[i].salary);
    }

    for (int i = 0; i < n; i++)
        printf("%s: %.2f$\n", p1[i].name, p1[i].salary);

    free(p1);
    return 0;
}
