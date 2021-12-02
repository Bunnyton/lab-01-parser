// Copyright 2021 Galaktionov Andrey <galaktionovaa@student.bmstu.ru>

#include "print.h"
#include <gtest/gtest.h>

using json = nlohmann::json;

std::string test(std::string &jsonPath) {
  std::ifstream file{jsonPath};
  if (!file) {
    throw std::runtime_error{"unable to open json: " + jsonPath};
  }

  json data;
  file >> data;

  std::vector<Student> students;
  for (auto const& item : data.at("items")) {
    Student student;
    from_json(item, student);  // = item.get<Student>();
    students.push_back(student);
  }

  std::stringstream ss;
  print(students, ss);
  return ss.str();
}

TEST(first_lab, table_test) {
    EXPECT_TRUE(true);
    std::string true_res =
        R"(|      name     |  group |    avg   |   debt  |
|---------------|--------|----------|---------|
|  Ivanov Petr  |    1   |   4.25   |   null  |
|---------------|--------|----------|---------|
|  Sidorov Ivan |   31   |     4    |   C++   |
|---------------|--------|----------|---------|
| Pertov Nikita | IU8-31 | 3.330000 | 3 items |
|---------------|--------|----------|---------|)";
    std::string jsonPath = "../json_files/students.json";
    std::string out = test(jsonPath);
    EXPECT_STRCASEEQ(true_res.c_str(), out.c_str());


    true_res = R"(|        name        |   group   |    avg   |     debt    |
|--------------------|-----------|----------|-------------|
| Shalagin Enakentiy | 100000001 | 4.250000 |   3 items   |
|--------------------|-----------|----------|-------------|
|   Konstantin Dark  |  Infinity |     5    | Manuscripts |
|--------------------|-----------|----------|-------------|
|    Petrova Dasha   |   IU8-38  | 4.500000 |   2 items   |
|--------------------|-----------|----------|-------------|)";
    jsonPath = "../json_files/students2.json";
    out = test(jsonPath);
    EXPECT_STRCASEEQ(true_res.c_str(), out.c_str());
}
