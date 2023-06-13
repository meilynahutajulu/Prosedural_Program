// 12S22031 - Ioka Purba
// 12S22039 - Meilyna Hutajulu

#include "academic.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *grade_to_text(enum grade_t _grade) { 
    // fungsi grade_to_text bertujuan untuk mengubah data dari enum grade dan merubah menjadi grade dalam bentuk text.
    //
    char *txt; // variabel tambahan untuk menyimpan grade dalam bentuk text.
    if(_grade == GRADE_NONE){
       txt = "None";
    }
    else if(_grade == GRADE_T){
       txt = "T";
    }
    else if(_grade == GRADE_E){ 
       txt = "E";
    }
    else if(_grade == GRADE_D){
       txt = "D";
    }
    else if(_grade == GRADE_C){
       txt = "C";
    }
    else if(_grade == GRADE_BC){
       txt = "BC";
    }
    else if(_grade == GRADE_B){
       txt = "B";
    }
    else if(_grade == GRADE_AB){
       txt = "AB";
    }
    else if(_grade == GRADE_A){
       txt = "A";
    }
    
    return txt; 
    }

float calculate_performance(enum grade_t _grade, unsigned short _credit)
{ // fungsi untuk menilai performa mahasiswa dengan cara mengalikan grade dengan jumlah sks
    float prf;
    if(_grade == 0){
        prf = 0.00;
    }
    if(_grade == 1){
        prf = 0.00;
    }
    if(_grade == 2){
        prf = 0.00;
    }
    if(_grade == 3){
        prf = 1.00;
    }
    if(_grade == 4){
        prf = 2.00;
    }
    if(_grade == 5){
        prf = 2.50;
    }
    if(_grade == 6){
        prf = 3.00;
    }
    if(_grade == 7){
        prf = 3.50;
    }
    if(_grade == 8){
        prf = 4.00;
    }
    prf = prf * _credit;

    return prf;
}

void print_course(struct course_t _course)
{
   printf("%s|%s|%hu|", _course.code, _course.name, _course.credit);
   printf("%s\n", grade_to_text(_course.passing_grade));
}

void print_student(struct student_t _student)
{
 printf("%s|%s|%s|%s\n", _student.id, _student.name, _student.year, _student.study_program);
}

void print_enrollment(struct enrollment_t _enrollment)
{
 printf("%s|%s|", _enrollment.course.code, _enrollment.student.id);
 printf("%s", grade_to_text(_enrollment.grade));
 printf("|%.2f\n", calculate_performance(_enrollment.grade, _enrollment.course.credit));
}

struct course_t create_course(char *_code, char *_name, unsigned short _credit,
                              enum grade_t _passing_grade)
{   
    struct course_t crs;
    strcpy(crs.code, _code);
    strcpy(crs.name, _name);
    crs.credit = _credit;
    crs.passing_grade = _passing_grade;
    return crs;
}

struct student_t create_student(char *_id, char *_name, char *_year,
                                char *_study_program)
{
    struct student_t std;

    strcpy(std.id, _id);
    strcpy(std.name, _name);
    strcpy(std.year, _year);
    strcpy(std.study_program, _study_program);

    return std;
}

struct enrollment_t create_enrollment(struct course_t _course,
                                      struct student_t _student, char *_year,
                                      enum semester_t _semester)
{
    struct enrollment_t emt;
    emt.course = _course;
    emt.student = _student;
    strcpy(emt.year, _year);
    emt.semester = _semester;
    emt.grade = 0.00;
    return emt;
}