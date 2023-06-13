// NIM - Name
// NIM - Name

#include "todo.h"

void print_students(struct student_t *_students,
                    unsigned short int _student_size)
{   
    
    
    for(int i = 0; i < _student_size; i++){
  if(_students[i].gender == 0){
  printf("%s|%s|%s|male\n", _students[i].id, _students[i].name, _students[i].year);
  } 
  if(_students[i].gender == 1){
  printf("%s|%s|%s|female\n", _students[i].id, _students[i].name, _students[i].year);
  }
    }
}