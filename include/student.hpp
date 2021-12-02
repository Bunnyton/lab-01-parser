// Copyright 2021 Galaktionov Andrey <galaktionovaa@student.bmstu.ru>

#ifndef LAB_01_PARSER_STUDENT_HPP
#define LAB_01_PARSER_STUDENT_HPP

#include <iostream>
#include <nlohmann/json.hpp>
#include <any>
#include <fstream>

struct Student {
  std::string name;
  std::any group;
  std::any avg;
  std::any debt;
};

void from_json(const nlohmann::json& j, Student& s);

#endif  // LAB_01_PARSER_STUDENT_HPP