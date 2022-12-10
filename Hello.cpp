#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main(int argc, char** argv)
{
// check if the correct number of arguments is passed
if (argc != 2)
{
cout << "Invalid number of arguments" << endl;
return 0;
}

// check if the passed argument is "start"
if (string(argv[1]) != "start")
{
    cout << "Invalid argument passed" << endl;
    return 0;
}

while(true)
{
    // print message on each iteration
    cout << "Hello World!" << endl;

    // delay for 1 second using chrono and thread library
    this_thread::sleep_for(1s);
}

return 0;
}