void delete_next_node(Student* head, char* name) {
    Student* current = head;

    while (current != NULL && current->next != NULL) {
        if (strcmp(current->name, name) == 0) {
            Student* temp = current->next;
            current->next = current->next->next;
            free(temp);
            return;
        }
        current = current->next;
    }
}
