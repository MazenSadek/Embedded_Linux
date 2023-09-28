#include <algorithm> // for std::find
#include <cctype>
#include <iostream>
#include <vector>


int main(int argc, const char **argv) {

std::string input;
std::vector<std::string> book;

  while (1) {

    std::cout << "---------------------------" << std::endl;
    std::cout << "welcome to your favourite address book " << std::endl;
    std::cout << "what do you want to do  " << std::endl;
    std::cout << "| List            | list all users" << std::endl;
    std::cout << "| Add             | add an user" << std::endl;
    std::cout << "| Delete          | Delete an user" << std::endl;
    std::cout << "| Delete_All      | Delete all users" << std::endl;
    std::cout << "| Search          | Search an user" << std::endl;
    std::cout << "| Close           | Close the address book" << std::endl;
    std::cin >> input;

    for (auto &x : input) {
      x = tolower(x);
    }
    std::cout << input << std::endl;

    if (input == "list") {

      if (book.empty()) {
        std::cout << "no contacts found" << std::endl;
      }

      else {

        for (auto i : book) {
          //
          std::cout << " the address book :" << i << std::endl;
        }
      }

    }

    else if (input == "add") {
      std::string add_book;
      std::cout << "enter your address book" << std::endl;
      std::cin >> add_book;
      book.push_back(add_book);
    }

    else if (input == "delete") {
      std::string dele_book;
      std::cout << "enter your address book" << std::endl;
      std::cin >> dele_book;
      auto it = std::find(book.begin(), book.end(), dele_book);

      if (it != book.end()) {
        // Erase the element from the vector
        book.erase(it);
        std::cout << "Element erased successfully!\n";
      } else {
        std::cout << "Element not found in the vector.\n";
      }

    }

    else if (input == "delete_all") {
      book.clear();

    }

    else if (input == "search") {
      std::string search_book;
      std::cout << "enter your address book" << std::endl;
      std::cin >> search_book;
      auto it = std::find(book.begin(), book.end(), search_book);
      if (it != book.end()) {
        // Calculate the index using std::distance
        int index = std::distance(book.begin(), it);
        std::cout << "Index of "<<search_book<< ": " << index << std::endl;
      } else {
        std::cout << search_book<< " not found in the vector." << std::endl;
      }

      // std::cout << it << std::endl;
      // std::cout << "index of search_book is ::" << it << std::endl;

    }

    else if (input == "close") {
      break;

    }

    else {
      std::cout << "you're entered wrong parameter" << std::endl;
      break;
    }
  }

  return 0;
}
