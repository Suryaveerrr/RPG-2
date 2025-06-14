#ifndef UTILITY_HPP
#define UTILITY_HPP

class Utility
{
public:
    // Clears the console screen
    static void clearConsole();

    // Waits for the user to press Enter
    static void waitForEnter();

    // Clears the input buffer to avoid input glitches
    static void clearInputBuffer();
};

#endif // UTILITY_HPP
