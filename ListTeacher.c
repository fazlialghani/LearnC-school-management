#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "User.c"

//create node
TeacherListNode *createTeacher(teacher user)
{
    TeacherListNode *q = (TeacherListNode *)calloc(1, sizeof(teacher));
    if (q == NULL) return NULL;

    //or
    TeacherListNode *p = (TeacherListNode *)malloc(sizeof(teacher));
    if (p == NULL) return NULL;

    strcpy(p->teacheruser.firstname, "");
    strcpy(p->teacheruser.middlename, "");
    strcpy(p->teacheruser.lastname, "");
    strcpy(p->teacheruser.teacherid, "");

    return p;
}

//count # teacher
int countTeacher(TeacherListNode *head)
{
    if (head == NULL) return 0;

    TeacherListNode *p = head;
    int count = 0;

    while (p != NULL) {
        count += 1;
        p = p->next;
    }

    return count;
}

//swap
void swapTeacherNode(TeacherListNode *head, TeacherListNode *n1, TeacherListNode *n2)
{
    if (head == NULL || n1 == NULL || n2 == NULL) return;

    if (n1->next == n2 && n2->next == NULL) {
        n2->next = n1;
        n1->next = NULL;
        return;
    } else if (n2->next == n1 && n1->next == NULL) {
        n1->next = n2;
        n2->next = NULL;
        return;
    }

    TeacherListNode *p = head;

    TeacherListNode *prev1 = NULL;
    TeacherListNode *prev2 = NULL;

    TeacherListNode *next1 = NULL;
    TeacherListNode *next2 = NULL;

    while (p != NULL) {
        if (p->next == n1) {
            prev1 = p;
        } else if (p->next == n2) {
            prev2 = p;
        } else if (p->next == n1->next) {
            next1 = p->next;
        } else if (p->next == n2->next) {
            next2 = p->next;
        }
        p = p->next;
    }

    if (prev1 == NULL)
        prev2->next = n1;
    else if (prev2 == NULL)
        prev1->next = n2;
    else {
        prev1->next = n2;
        prev2->next = n1;
    }

    n1->next = next2;
    n2->next = next1;
}

//remove a node
TeacherListNode *removeTeacherNode(TeacherListNode *head, TeacherListNode *target)
{
    if (head == NULL || target == NULL) return NULL;

    TeacherListNode *p = head;
    if (p == target) {
        head = p->next;
        free(p);
        return head;
    }

    while (p != NULL) {
        if (p->next == target) {
            TeacherListNode *tmp;
            tmp = target->next;
            free(target);
            p->next = tmp;
            break;
        }
        p = p->next;
    }

    return head;
}

//reverse
TeacherListNode *reverseTeacherList(TeacherListNode *head)
{
    if (head == NULL) return NULL;

    if (head->next == NULL) return head;

    TeacherListNode *p = head;
    TeacherListNode *tmp;

    while (p->next != NULL) {
        tmp = p->next->next;
        p->next->next = p;
        p->next = tmp;
    }

    head->next = NULL;
    head = p;

    return head;
}

//insert
TeacherListNode *insertonhead(TeacherListNode *head, TeacherListNode *input)
{
    if (head == NULL || input == NULL) return NULL;

    input->next = head;
    head = input;
    return head;
}

TeacherListNode *insertontail(TeacherListNode *head, TeacherListNode *input)
{
    if (head == NULL || input == NULL) return NULL;

    TeacherListNode *p = head;

    while (p->next != NULL)
        p->next = p->next->next;
    
    p->next = input;
    return head;
}

//append two different linked list
TeacherListNode *appendTwoTeacherLinkedList (TeacherListNode *head1, TeacherListNode *head2)
{
    if (head1 == NULL || head2 == NULL) return NULL;

    TeacherListNode *p = head1;

    while (p->next != NULL)
        p->next = p->next->next;

    p->next = head2;

    return head1;
}
