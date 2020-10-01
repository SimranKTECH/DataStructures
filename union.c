#include <stdio.h>

typedef union custom_union
{
    int a;
    char b;
}custom_union;

void print_union(custom_union c)
{
    printf("\nInteger a is : %d", c.a);
    printf("\nCharacter b is %c\n", c.b);
}

int main()
{
    custom_union u;
    printf("\nBefore assignment :");
    print_union(u);

    int choice;
    printf("\nEnter 1 to input integer, 2 for character\n");
    scanf("%d", &choice);
    printf("\nEnter data: ");
    if (choice == 1)
    {
        scanf("%d", &u.a);        
    }
    else if (choice == 2){
        scanf("%c", &u.b);
    }

    printf("\nAfter Assignment");
    print_union(u);

    return 0;
}
