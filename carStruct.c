#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car {
    int numberOfDoors;
    int seats;
    char color[20];
};

int main() {
    struct car* car1;
    struct car* car2;

    // Dynamically allocate memory for car1
    car1 = (struct car*)malloc(sizeof(struct car));
    if (car1 == NULL) {
        printf("Memory allocation failed for car1\n");
        return 1;
    }

    // Dynamically allocate memory for car2
    car2 = (struct car*)malloc(sizeof(struct car));
    if (car2 == NULL) {
        printf("Memory allocation failed for car2\n");
        free(car1);
        return 1;
    }

    printf("Enter values for member elements of car 1:\n");
    scanf("%d", &(car1->numberOfDoors));
    scanf("%d", &(car1->seats));
    getchar(); // Clear the newline character from the previous input
    fgets(car1->color, sizeof(car1->color), stdin);
    car1->color[strcspn(car1->color, "\n")] = '\0'; // Remove the trailing newline character

    printf("\nEnter values for member elements of car 2:\n");
    scanf("%d", &(car2->numberOfDoors));
    scanf("%d", &(car2->seats));
    getchar(); // Clear the newline character from the previous input
    fgets(car2->color, sizeof(car2->color), stdin);
    car2->color[strcspn(car2->color, "\n")] = '\0'; // Remove the trailing newline character

    printf("\nValues you gave for car 1:\n");
    printf("Doors: %d\n", car1->numberOfDoors);
    printf("Seats: %d\n", car1->seats);
    printf("Color: %s\n", car1->color);

    printf("\nValues you gave for car 2:\n");
    printf("Doors: %d\n", car2->numberOfDoors);
    printf("Seats: %d\n", car2->seats);
    printf("Color: %s\n", car2->color);

    // Free the dynamically allocated memory
    free(car1);
    free(car2);

    return 0;
}
