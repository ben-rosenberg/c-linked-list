/**
 * @file main.c
 * @author Ben Rosenberg
 * @brief Tests the functionality of the linked-list structure and functions
 * @version 0.1
 * @date 2023-05-17
 */

#include <stdio.h>
#include "linked_list.h"

int main(int argc, char* argv[]) {
    ListNode* head = list_new();
    head->val = 5;
    int node_vals[4] = {13, 3, 8, 7};

    list_append_multiple(head, node_vals, 4);

    /* for (size_t n = 0; n < 4; ++n)
        list_append(head, node_vals[n]); */

    list_print(head);
    printf("length: %d\n", list_length(head));
    return 0;
}


// gcc -o main main.c linked_list.c