#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///////////////////////////////////////////////////////////////////////////////
#include "openssl/stack.h"




typedef struct Student_st {
    char *name;
    int age;
    char *otherInfo;
} Student;
//


Student *Student_Malloc() {
    Student *s = (Student *)malloc(sizeof(Student));

    s->name = (char *)malloc(20);
    strcpy(s->name, "iaiting");

    s->otherInfo = (char *)malloc(20);
    strcpy(s->otherInfo, "no info");

    return s;
}

void Student_Free(Student *s) {
    free(s->name);
    free(s->otherInfo);
    free(s);
}

int main(int argc, char *argv[]) {
    printf("This is %s testing...", __FILE__);

    OPENSSL_STACK *ss1, *ss2;

    Student *s1, *s2;

    ss1 = OPENSSL_sk_new_null();

    s1 = Student_Malloc();

}