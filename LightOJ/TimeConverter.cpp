#include <iostream>
#include <ctime>

int main() {
    // The UNIX timestamp you want to convert
    std::time_t timestamp = 1695306900;

    // Convert the timestamp to a readable format
    std::tm* timeInfo = std::localtime(&timestamp);

    // Print the time in a human-readable format
    std::cout << "Readable Time: " << std::asctime(timeInfo);

    return 0;
}
