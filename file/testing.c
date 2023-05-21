#include <cstdlib>
int main() {
    // Command to be executed
    const char* command = "dir";  // Example command: "dir" (lists files in the current directory)

    // Execute the command
    int result = system(command);

    // Check the return value
    if (result == 0) {
        // Command executed successfully
        // Handle success if necessary
    } else {
        // Command failed to execute
        // Handle failure if necessary
    }
    printf("%d", result);
    return 0;
}