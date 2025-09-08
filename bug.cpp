#include <bits/stdc++.h>
#include <cstring>

void vulnerableFunction(const char* input)
{
    char buffer[10]; // Fixed-size buffer of 10 bytes
    // Copy without ensuring null-termination
    strncpy(buffer, input, sizeof(buffer)); 
    std::cout << "Buffer content: " << buffer << std::endl;
}

int main()
{
    const char* largeInput = "ThisStringIsWayTooLongForTheBuffer"; 
    vulnerableFunction(largeInput); 
    return 0;
}
