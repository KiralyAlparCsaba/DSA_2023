#include <stdio.h>
#include <constant.h>
#include "functions.h"








int main() {
    if(!(freopen("date.in","r",stdin))){
        printf(FILE_OPEN_ERROR_MESSAGE);
        return FILE_OPEN_ERROR_CODE;
    }
    Student student1;
    readStudentDetails(&student1);
    printStudent(student1);
    Student student2={"Jani Jancsika","3FRGSH","Sopi",1,9,{2003,07,10}};
    printStudent(student2);


}
