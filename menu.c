#include <stdio.h>
int main()
{
    char choice;
    do
    {
        printf("\n==================================================\n");
        printf("          WELCOME TO SWETHA's RESTAURANT\n");
        printf("==================================================\n");
        printf("| 1. Starter                                     |\n");
        printf("| 2. Main Course                                 |\n");
        printf("| 3. Dessert                                     |\n");
        printf("| 4. Exit                                        |\n");
        printf("==================================================\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

    switch(choice)
    {
        case '1':
        printf("\n--------------- STARTER MENU ----------------\n");
        printf("1. Salad               Rs.120\n");
        printf("2. Soup                Rs.150\n");
        printf("3. Paneer Pakoda       Rs.180\n");
        printf("4. Peri Peri Chicken   Rs.280\n");
        printf("5. Back to main menu\n");
        printf("---------------------------------------------\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        switch(choice)
        {
            case '1':
            printf("You have selected Salad.\n");
            break;
            
            case '2':
            printf("You have selected Soup.\n");
            break;
            
            case '3':
            printf("You have selected Paneer pakkoda.\n");
            break;
            
            case '4':
            printf("You have selected Peri Peri Chicken.\n");
            break;
            
            case '5':
            printf("Returning to Main Menu.\n");
            break;

            default:
            printf("Invalid choice! Please select a valid menu item.\n");
        }
        break;
        case '2':
        printf("\n------------- MAIN COURSE MENU --------------\n");
        printf("1. Chicken Biriyani    Rs.250\n");
        printf("2. Mutton Biriyani     Rs.320\n");
        printf("3. Veg Biriyani        Rs.180\n");
        printf("4. Egg Biriyani        Rs.200\n");
        printf("5. Back to main menu\n");
        printf("---------------------------------------------\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        switch(choice)
        {
            case '1':
            printf("You have selected Chicken Biriyani.\n");
            break;
            
            case '2':
            printf("You have selected Mutton Biriyani.\n");
            break;
            
            case '3':
            printf("You have selected Veg Biriyani.\n");
            break;
            
            case '4':
            printf("You have selected Egg Biriyani.\n");
            break;
            
            case '5':
            printf("Returning to Main Menu.\n");
            break;

            default:
            printf("Invalid choice! Please select a valid menu item.\n");
        }
        break;
        case '3':
        printf("\n--------------- DESSERT MENU ----------------\n");
        printf("1. Ice Cream          Rs.80\n");
        printf("2. Lava Cake          Rs.150\n");
        printf("3. Milk Shake         Rs.120\n");
        printf("4. Ice Cake           Rs.180\n");
        printf("5. Back to main menu\n");
        printf("---------------------------------------------\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        switch(choice)
        {
            case '1':
            printf("You have selected Ice Cream.\n");
            break;
            
            case '2':
            printf("You have selected Lava cake.\n");
            break;
            
            case '3':
            printf("You have selected Milk shakes.\n");
            break;
            
            case '4':
            printf("You have selected Ice Cake.\n");
            break;
            
            case '5':
            printf("Returning to Main Menu.\n");
            break;

            default:
            printf("Invalid choice! Please select a valid menu item.\n");
        }
        break;
        case '4':
        printf("\n=========================================\n");
        printf(" Thank you for visiting our Restaurant\n");
        printf("      Have a Delicious Day!\n");
        printf("=========================================\n");
        break;

        default:
        printf("Invalid choice! Please select a valid menu item.\n");
    }
}while(choice != '4');
    
    return 0;

}