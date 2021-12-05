#ifndef LAB_01_PARSER_PRINT_HPP
#define LAB_01_PARSER_PRINT_HPP

#define STUD_PARAM_LENGTH 4

#include <iostream>

#include "student.hpp"

//-----------------BASE PRINT FUNCTIONS-----------------------------------------
void print(std::ostream& os, std::string* str, int maxlength);
void print_pass(std::ostream& os, const int* maxlength);
void print_header(std::ostream& os, int* maxlength);
void print(const Student& student, std::ostream& os, int* maxlength);
//--------------------------------GET TABLE SIZE--------------------------------
void length_compare(std::string* str, int* length);
int* get_column_size(const std::vector<Student>& students);
//-------------------------------PRINT FUNCTION---------------------------------
void print(const std::vector<Student>& students, std::ostream& os);

#endif  // LAB_01_PARSER_PRINT_HPP