#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee{
    int id, salary;
    char name[25], designation[15];
    struct employee *next;
}employee;

void insert_employee(employee *node){
    employee *new_node; 
    if (node == NULL){
        node->next = new_node;
        new_node->next = NULL;
    }
    else{
        new_node = (employee*)malloc(sizeof(employee));
        while(node != NULL){
            node = node->next;
        }
        node->next = new_node;
        new_node->next = NULL;
    }
    printf("\nEnter the employee's ID: ");
    scanf("%d", &new_node->id);
    printf("\nEnter the employee's Name: ");
    scanf("%s", new_node->name);
    printf("\nEnter the employee's Salary: ");
    scanf("%d", &new_node->salary);
    printf("\nEnter the employee's designation: ");
    scanf("%s", new_node->designation);
}

void search_employee(employee *node, int id){
    while(node != NULL){
        if(node->id == id){
            printf("\nEmployee ID: %d", node->id);
            printf("\nEmployee name: %s", node->name);
            printf("\nEmployee designation: %s", node->designation);
            printf("\nEmployee salary: %d\n", node->salary);
            return;
        }
        else node = node->next;
    }
}

float average_manager_salary(employee *node){
    float average = 0; 
    int count;
    while(node != NULL){
        if(strcmp(node->designation, "manager")==0 || strcmp(node->designation, "Manager")==0){
            average += node->salary;
            count++;
        }
    }
    average /= count;
    return average; 
}