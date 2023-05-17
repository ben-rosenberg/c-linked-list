/**
 * @file linked_list.c
 * @author Ben Rosenberg
 * @brief Definitions for linked list functions
 * @version 0.1
 * @date 2023-05-17
 */

#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

ListNode* list_new() {
    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    head->next = NULL;
    return head;
}

ListNode* list_create_node(const int val) {
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

void list_append(ListNode* head, const int val) {
    ListNode* runner = head;

    while (runner->next != NULL)
        runner = runner->next;

    runner->next = list_create_node(val);
}

void list_append_multiple(ListNode* head, const int* vals, const size_t vals_size) {
    if (vals_size == 0)
        return;
    
    ListNode* runner = head;

    while (runner->next != NULL)
        runner = runner->next;
    
    size_t i = 0;

    for (size_t i = 0; i < vals_size; ++i) {
        runner->next = list_create_node(vals[i]);
        runner = runner->next;
    }
}

size_t list_length(const ListNode* head) {
    size_t length = 0;

    for (const ListNode* runner = head; runner != NULL; runner = runner->next)
        ++length;
    
    return length;
}

void list_print(ListNode* head) {
    if (head == NULL) {
        printf("empty");
    }

    printf("%d", head->val);
    ListNode* runner = head->next;

    while (runner != NULL) {
        printf(", %d", runner->val);
        runner = runner->next;
    }

    printf("\n");
}