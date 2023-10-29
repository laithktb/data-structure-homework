void print_longest_name(Student* head) {
    Student* current = head;
    Student* longest_name_student = NULL;
    int max_length = 0;

    while (current != NULL) {
        int length = strlen(current->name);
        if (length > max_length) {
            max_length = length;
            longest_name_student = current;
        }
        current = current->next;
    }

    if (longest_name_student != NULL) {
        printf("Student with the longest name:\n");
        printf("Student Number: %d\n", longest_name_student->number);
        printf("Name: %s\n", longest_name_student->name);
        printf("Age: %d\n", longest_name_student->age);
    } else {
        printf("No students in the list.\n");
    }
}
