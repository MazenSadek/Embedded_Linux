#include <iostream>

class String {

public:
  char *str;
  int len = 0;
  String(const char *s) {
    for (size_t i = 0; (s[i] != '\0'); i++) {
      
      len++;
    }

    str = new char[len + 1];
    for (size_t i = 0; i < len; i++) {
      str[i] = s[i];
    }
  }

  int getlength() { return len; }

  const char *getstring() { return str; }

  ~String(){ delete[] str;}
};
  int main(int argc, const char **argv) {

    const char *name = "mazen sadek";
    String s1(name) ;
    std::cout << "Length of the string: " << s1.getlength() << std::endl;

    std::cout << "string: " << s1.getstring() << std::endl;
    return 0;
  }
