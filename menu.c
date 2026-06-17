#include <stdio.h>
int main()
{
    char choice,ch;
    printf("Welcome to our Restaurant!\n");
    printf("Please select a item from the menu:\n");
    printf("1. Starter\n2. Main Course\n3. Dessert\n4. Excit\n");
    scanf("%c", &choice);
//hi
//how are you
    switch(choice)
    {
        case '1':
        printf("You have selected Starter.\n");
        printf("Please select a Starter:\n");
        printf("1. Salad\n2. Soup\n3. Paneer pakkoda\n4. Peri Peri Chicken\n");
        scanf(" %c", &ch);
        switch(ch)
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
            
            default:
            printf("Invalid choice! Please select a valid menu item.\n");
        }
        break;
        case '2':
        printf("You have selected Main Course.\n");
        printf("Please select a Main Course:\n");
        printf("1. Chicken Biriyani\n2. Mutton Biriyani\n3. Veg Biriyani\n4. Egg Biriyani\n");
        scanf(" %c", &ch);
        switch(ch)
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
            
            default:
            printf("Invalid choice! Please select a valid menu item.\n");
        }
        break;
        case '3':
        printf("You have selected Dessert.\n");
        printf("Please select a Dessert:\n");
        printf("1. Ice Cream\n2. Lava cake\n3. Milk shakes\n4. Ice Cake\n");
        scanf(" %c", &ch);
        switch(ch)
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

            default:
            printf("Invalid choice! Please select a valid menu item.\n");
        }
        break;
        case '4':
        printf("Thank you for visiting our restaurant! Have a great day!\n");
        break;

        default:
        printf("Invalid choice! Please select a valid menu item.\n");
    }
}