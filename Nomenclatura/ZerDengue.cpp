#include <stdio.h>
#include <stdlib.h>
#include <iostream>

typedef struct
{
    int i = 0;
    int array[20];
} Row;

typedef struct
{
    char name[256];
    char city[64];
    char adress[256];
    char phone[14];
    char cpf[11];
    int age;
    Row solicitation;
} User;

void createUser(User *u)
{
    printf("Type the name of the user: ");
    fgets((*u).name, 256, stdin);
    printf("Type the name of the city: ");
    fflush(stdin);
    fgets((*u).city, 256, stdin);
    printf("Type the adress: ");
    fflush(stdin);
    fgets((*u).adress, 256, stdin);
    printf("Type the phone: ");
    fflush(stdin);
    fgets((*u).phone, 256, stdin);
    printf("Type the CPF: ");
    fflush(stdin);
    fgets((*u).cpf, 256, stdin);
    printf("Type the age: ");
    int age;
    fflush(stdin);
    scanf("%d", &age);
    (*u).age = age;
}

void printUser(User u)
{
    printf("\n\n");
    printf("User: %s", u.name);
    printf("City: %s", u.city);
    printf("Adress: %s", u.adress);
    printf("Phone: %s", u.phone);
    printf("CPF: %s", u.cpf);
    printf("Age: %d", u.age);
    printf("\n\n");
}

void insert(User *u)
{
    if ((*u).solicitation.i < 20)
    {
        printf("Type the value of the solicitaion: ");
        fflush(stdin);
        int value;
        scanf("%d", &(*u).solicitation.array[(*u).solicitation.i]);
        (*u).solicitation.i = (*u).solicitation.i + 1;
    }
    else
    {
        printf("There are no space to insert.\n");
    }
}

void remove(User *u)
{
    int i = (*u).solicitation.i;
    int removed = (*u).solicitation.array[0];
    if (i >= 0)
    {
        for (int j = 0; j < i - 1; j++)
        {
            (*u).solicitation.array[j] = (*u).solicitation.array[j + 1];
        }
        (*u).solicitation.i = (*u).solicitation.i - 1;
        printf("Value %d was been removed\n", removed);
    }
    else
    {
        printf("There are no value to remove\n");
    }
}

void printRow(User *u)
{
    printf("Row\n");
    for (int i = 0; i < (*u).solicitation.i; i++)
    {
        printf("%d\t", (*u).solicitation.array[i]);
    }
    printf("\n");
}

void menu()
{
    User user;
    createUser(&user);
    printUser(user);
    bool again = true;
    do
    {
        int op;
        printf("Type the op: \n1: Insert \n2: Remove: \n3: Print row \n4: Print User \n0: Exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            printf("Bye\n");
            again = false;
            break;
        case 1:
            insert(&user);
            break;

        case 2:
            remove(&user);
            break;
        case 3:
            printRow(&user);
            break;
        case 4:
            printUser(user);
            break;
        default:
            printf("Invalid option");
            break;
        }

    } while (again);
}

int main()
{
    menu();
    return 0;
}
