#include <stdio.h>

struct entry{
    int value;
    struct entry *next;
};


void insertEntry(struct entry *toIn, struct entry *lastEnt)
{
    lastEnt->next = toIn;

    toIn->next = (struct entry *) 0;
}

int main(void)
{
    struct entry n1, n2, n3, n4;
    struct entry *list_pointer = &n1, *newEnt = &n4;

    n1.value = 1;
    n1.next = &n2;

    n2.value = 2;
    n2.next = &n3;

    n3.value = 3;
    n3.next = (struct entry *) 0;

    n4.value = 4;

    while(list_pointer->next != (struct entry *) 0)
        list_pointer = list_pointer->next;

    insertEntry(newEnt, list_pointer);

    list_pointer = &n1;

    while(list_pointer != (struct entry *) 0) {
        printf("%i\n", list_pointer->value);
        list_pointer = list_pointer->next;
    }

    return 0;

}