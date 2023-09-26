#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <iostream>

class String {

public:
  char *data;
  int length;

  String(const char *str) {

    length = strlen(str);
    data = new char[length + 1];
    strcpy(data, str);
    std::cout << "one parm constractar" << std::endl;
  }

  String(const String &other) {

    length = other.length;
    data = new char[other.length + 1];
    strcpy(data, other.data);
  }

  String &operator=(const String &other) {

    if (this != &other) {

      if (this->data) {
        delete[] data;
      }
      length = other.length;
      data = new char[other.length + 1];
      strcpy(data, other.data);
    }
    return *this;
  }

  String(String &&other) {

    length = other.length;
    data = other.data;
    other.length = 0;
    other.data = nullptr;
  }

  String &operator=(String &&other) {
    if (this != &other) {

        if(this->data){
            delete [] data;
        }

        length=other.length;
        data=other.data;
        other.length=0;
        other.data=nullptr;
    }
    return *this;
  }

    int len(const char *ptr){

        int count=0;
        while (*ptr != '\0') {
        ptr++;   
        count++;
        }
        return count;

    }

  ~String() { delete[] data; }
};

int main(int argc, const char **argv) {

  String s1("mazen");
  String s2("sadek");
//   s2 = std::move(s1);
  // String s2(std::move(s1));

  // String s2(s1);
  // String s2("sadek");  // data s1 10000  data s2 1000
  // s2=s1;
  // strcpy(s2.data, "haaaaaaaaaaaaa");
  // std::cout << s1.data << std::endl;
    s2.len("mazen");
//   std::cout << s2.data << std::endl;
//   std::cout << s1.data << std::endl;
  std::cout << s2.len("mazen") << std::endl;

  return 0;
}