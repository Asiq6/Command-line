#include <iostream>
#include <unistd.h> // for sleep() function

int main(int argc, char** argv) {
  if (argc < 2) {
    std::cerr << "Error: missing command line argument" << std::endl;
    return 1;
  }

  std::string action = argv[1];

  if (action == "start") {
    while (true) {
      std::cout << "Running loop with 1 second delay" << std::endl;
      sleep(1); // delay for 1 second

      // check for the stop command line argument
      if (argc >= 3 && std::string(argv[2]) == "stop") {
        break;
      }
    }

    std::cout << "Exiting loop" << std::endl;
  } else if (action == "stop") {
    std::cout << "Received stop command. Exiting program" << std::endl;
  } else {
    std::cerr << "Error: invalid command line argument" << std::endl;
    return 1;
  }

  return 0;
}