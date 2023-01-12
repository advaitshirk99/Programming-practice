#include<stdio.h>
#include "header.h"

int main(){
    int choice;
    employee *head;
    int id;
    float avg_salary;
    head->next = NULL;
    while(1){
        printf("1 ---> Insert employee details\n2 ---> Search employee by ID\n3 ---> Display average salary of all Managers\n4 ---> Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter the employee details:\n");
            insert_employee(head);
            break;
            case 2:
            printf("Enter the ID that has to be found: ");
            scanf("%d", &id);
            search_employee(head, id);
            break;
            case 3:
            avg_salary = average_manager_salary(head);
            printf("The average salary of employees of Manager designation is: %d\n", avg_salary);
            break;
            case 4: 
            exit(0);
            default:
            printf("Incorrect choice, try again");
        }
    }
}