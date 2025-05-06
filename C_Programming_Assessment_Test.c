#include <stdio.h>
int main() {
    int code, quantity;
    char choice;
    float total = 0;
    printf("Code\tItem\t\tPrice\n");
    printf("1\tPizza\t\tRs. 150\n");
    printf("2\tBurger\t\tRs. 80\n");
    printf("3\tPasta\t\tRs. 120\n");
    printf("4\tSandwich\tRs. 50\n");
    printf("5\tCoffee\t\tRs. 40\n");
    do {
        printf("Enter item code (1-5): ");
        scanf("%d", &code);
        switch (code) {
            case 1:
                printf("Enter quantity for Pizza: ");
                scanf("%d", &quantity);
                total += 150 * quantity;
                break;
            case 2:
                printf("Enter quantity for Burger: ");
                scanf("%d", &quantity);
                total += 80 * quantity;
                break;
            case 3:
                printf("Enter quantity for Pasta: ");
                scanf("%d", &quantity);
                total += 120 * quantity;
                break;
            case 4:
                printf("Enter quantity for Sandwich: ");
                scanf("%d", &quantity);
                total += 50 * quantity;
                break;
            case 5:
                printf("Enter quantity for Coffee: ");
                scanf("%d", &quantity);
                total += 40 * quantity;
                break;
            default:
                printf("Invalid code! Please choose from 1 to 5.\n");
                break;
        }
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("\n----- Final Bill -----\n");
    printf("Total Amount to Pay: Rs. %.2f\n", total);
    printf("----------------------\n");
    return 0;
}