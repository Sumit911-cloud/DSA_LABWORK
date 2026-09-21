//PROGRAM TO IDENTIFY TYPE OF DATA STRUCTURE
#include <stdio.h>
int main() 
{
    int choice;
    
    printf("Enter 1 for Array, 2 for Linked List, 3 for Tree, 4 for Graph\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Non Primitive, Linear, Static Data Structure\n");
            break;
        case 2:
            printf("Non Primitive, Linear, Dynamic Data Structure\n");
            break;
        case 3:
            printf("Non Primitive, Non-Linear, Dynamic Data Structure\n");
            break;
        case 4:
            printf("Non Primitive, Non-Linear, Dynamic Data Structure\n");
            break;
        default:
            printf("Wrong Choice\n");
    }
    
    return 0;
}
