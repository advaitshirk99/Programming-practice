#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>

#define MAX_NAME 256
#define TABLE_SIZE 10
#define DELETED_NODE (person*)(0xFFFFFFFFFFFFFFFF)

typedef struct person{
    char name[MAX_NAME];
    int age;
}person;

person *hash_table[TABLE_SIZE];
/*The hash function van be as random as possible, the objective
is to assign distinct values to different inputs*/
unsigned int hash(char *name){
    int length  = strnlen(name, MAX_NAME);
    unsigned hash_value=0;
    for(int i=0; i<length; i++){                                
        hash_value += name[i];                          //Random hashing formula
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}

void init_hash_table(){
    int i;
    for(i=0; i<TABLE_SIZE; i++){
        hash_table[i] = NULL;       //NULL value at a spot indicates the spot is empty
    }
}

void print_table(){
    int i;
    printf("\tStart table\n");
    for(i=0; i<TABLE_SIZE; i++){        
        if(hash_table[i] == NULL){  
            printf("\t%i\t---\n", i);
        }
        else if(hash_table[i] == DELETED_NODE){
            printf("\t%i\t<deleted>\n", i);         //Specifically specifies if a spot is deleted or is null from the start
        }
        else{
            printf("\t%i\t%s\n", i, hash_table[i]->name);
        }
    }
    printf("\tEnd table\n");
}

bool hash_table_insert(person *p){
    if(p == NULL) return false;
    int index = hash(p->name);
    for(int i=0; i<TABLE_SIZE; i++){                //Linear probing - keep on checking next empty location
        int try = (i + index) % TABLE_SIZE;
        if(hash_table[try] == NULL || hash_table[try] == DELETED_NODE){     //Check for both NULL and deleted node values for empty spots
            hash_table[try] = p;
            return true;
        }
    }
    return false;
}

person *hash_table_lookup(char *name){
    int index = hash(name);
    for(int i=0; i<TABLE_SIZE; i++){
        int try = (i + index) % TABLE_SIZE;
        if(hash_table[try] == NULL) return false;   //This spot has been empty, and hence name is not found, and no point in searching for it anymore
        if(hash_table[try] == DELETED_NODE) continue;   //This spot was used up and then deleted, hence there's a chance that the next empty location aftet this one might have the name we are looking for
        if(strncmp(hash_table[try]->name, name, TABLE_SIZE)==0){  //Check the name stored in that spot with the name we want to find
            return hash_table[try];                     
        }
    }
    return NULL;
}

person *hash_table_delete(char *name){
    int index = hash(name);
    for(int i=0; i<TABLE_SIZE; i++){
        int try = (i + index) % TABLE_SIZE;
        if(hash_table[try] == NULL) return NULL;    //This spot has been empty, and hence name is not found, and no point in searching for it anymore
        if(hash_table[try] == DELETED_NODE) continue;   //This spot was used up and then deleted, hence there's a chance that the next empty location aftet this one might have the name we are looking for
        if(strncmp(hash_table[try]->name, name, TABLE_SIZE)==0){    //Check the name stored in that spot with the name we want to delete
            person *temp = hash_table[try];          //If found, place the DELETE_NODE value in this spot
            hash_table[try] = DELETED_NODE;
            return temp;
        }
    }
    return NULL;
}

int main(){
    init_hash_table();
    //print_table();

    person advait = {.name="Advait", .age=23};
    person arjun = {.name="Arjun", .age=25};
    person raksha = {.name="Raksha", .age=20};
    person ananya = {.name="Ananya", .age=22};
    person tanay = {.name="Tanay", .age=24};
    person rahil = {.name="Rahil", .age=24};
    person arya = {.name="Arya", .age=22};
    person shweta = {.name="Shweta", .age=25};

    hash_table_insert(&advait);
    hash_table_insert(&arjun);
    hash_table_insert(&ananya);
    hash_table_insert(&tanay);
    hash_table_insert(&raksha);
    hash_table_insert(&rahil);
    hash_table_insert(&arya);
    hash_table_insert(&shweta);
    print_table();
    printf("\n");

    hash_table_delete("Arya");
    print_table();

    return 0;
}