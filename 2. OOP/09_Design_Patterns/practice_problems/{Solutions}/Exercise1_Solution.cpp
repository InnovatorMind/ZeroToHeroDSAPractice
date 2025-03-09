// Exercise1_Solution.cpp

#include <iostream>
#include <string>
using namespace std;

class Logger {
private:
    static Logger* instance;
    Logger() {
        cout << "Logger instance created." << endl;
    }

public:
    // Delete copy constructor and assignment operator
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    static Logger* getInstance() {
        if (!instance) {
            instance = new Logger();
        }
        return instance;
    }

    void logMessage(const string &msg) {
        cout << "Log: " << msg << endl;
    }
};

// Initialize static member
Logger* Logger::instance = nullptr;

int main() {
    Logger* logger1 = Logger::getInstance();
    Logger* logger2 = Logger::getInstance();

    // Test that logger1 and logger2 are the same instance
    if (logger1 == logger2) {
        logger1->logMessage("First message.");
        logger2->logMessage("Second message.");
    }

    return 0;
}
