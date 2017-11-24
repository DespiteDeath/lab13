#include "yaml-cpp/yaml.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

struct Email {
  string nickname;
  string server;
};

struct Person {
  string  first_name;
  string  last_name;
  Email        email;
  size_t       age;
  string  phone;
};

Person getInfo() {
	struct Person file;
	file.first_name = "Nikita";
	file.last_name = "Kogut";
	file.email.nickname = "kogut_nikita@mail.ru";
	file.age = 54;
	file.phone = "8(800)555-55-55";
	return file;
}


int main(int argc, char* argv[]) {
  try {
    string Path = argv[1];
    Person file = getInfo();

    YAML::Node node;
    node["person"]["First name"] = file.first_name;
    node["person"]["Last name"] = file.last_name;
    node["person"]["Email"] = file.email.nickname;
    node["person"]["Age"] = file.age;
    node["person"]["Phone"] = file.phone;
    ofstream fout(Path);
    fout << node;

    return 0;
  }
  catch(const exception& e) {
    cout << e.what() << endl;
  }
}
