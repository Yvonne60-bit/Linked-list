#include <stdio.h>
//Yvonne David
#include "list.c"

int main() {
    list_t *number;
    number=list_alloc();
    list_add_to_back(number, 5);
    list_add_to_back(number, 13);
    list_add_to_back(number, 11);
    list_add_to_front(number, 10);
    list_add_at_index(number, 12,3);
    list_is_in(number, 5);
    list_get_elam_at(number, 4);
    list_print(number);
    list_remove_from_back(number);
    list_remove_from_front(number);
    list_remove_from_index(number, 2);
    list_length(number);
    list_free(number);
  printf("Tests for linked list implementation\n");
  return 0;
}
