/**
 * @file linked_list.h
 * @author Ben Rosenberg (you@domain.com)
 * @brief Structure and function declarations for a singly linked-list
 * @version 0.1
 * @date 2023-05-17
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ListNode ListNode;

/**
 * @brief A linked-list node structure
 */
struct ListNode {
    int val;
    ListNode* next;
};

/**
 * @brief Heap allocates the head of a new linked list
 * 
 * @return ListNode* 
 */
ListNode* list_new();

/**
 * @brief Heap allocates a new linked list node
 * 
 * @param val The integer value of the new node
 * @return ListNode* 
 */
ListNode* list_create_node(int val);

/**
 * @brief Appends a new node to the end of a list
 * 
 * @param head The head of the linked-list being appended to
 * @param val The value of the new node
 */
void list_append(ListNode* head, int val);

/**
 * @brief Appends multiple new values to the end of a list
 * 
 * @param head The head of the linked-list being appended to
 * @param vals The integer array of new values
 * @param vals_size The number of new values in vals
 */
void list_append_multiple(ListNode* head, const int* vals, size_t vals_size);

/**
 * @brief Gets the length of a linked-list
 * 
 * @param head 
 * @return size_t 
 */
size_t list_length(const ListNode* head);

/**
 * @brief Prints the values in a linked-list 
 */
void list_print(ListNode*);

#endif