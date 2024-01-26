#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // strlen: String Length
    char str[] = "Hello";
    int length = strlen(str);
    cout << "Length of string: " << length << endl;     // 5

    // strcat: Concatenate strings
    char source[] = " World";
    char destination[20] = "Hello";
    strcat(destination, source);
    cout << "Concatenated string: " << destination << endl;     // Hello World

    // strncat: Concatenate with limited characters
    char source2[] = " Universe";
    strncat(destination, source2, 4); // Concatenate only the first 4 characters of source2
    cout << "Partially concatenated string: " << destination << endl;   // Hello World Uni

    // strcpy: Copy string
    char source3[] = "Copy";
    char destination2[20];
    strcpy(destination2, source3);
    cout << "Copied string: " << destination2 << endl;      // Copy

    // strncpy: Copy string with limited characters
    char source4[] = "Partial Copy";
    char destination3[20];
    strncpy(destination3, source4, 7); // Copy only the first 7 characters of source4
    cout << "Partially copied string: " << destination3 << endl;    // Partial

    // strstr: Find substring
    char mainStr[] = "Hello World";
    char subStr[] = "World";
    if (strstr(mainStr, subStr) != NULL) {
        cout << "Substring found!" << endl;     // Substring found!
    } else {
        cout << "Substring not found." << endl;
    }

    // strchr: Find character occurrence
    char searchChar = 'o';
    char* charPtr = strchr(mainStr, searchChar);
    if (charPtr != NULL) {
        cout << "Character found at position: " << (charPtr - mainStr) << endl;     // 4
    } else {
        cout << "Character not found." << endl;
    }

    // strcmp: Compare strings
    char str1[] = "Hello";
    char str2[] = "World";
    int comparisonResult = strcmp(str1, str2);
    cout << "Comparison result: " << comparisonResult << endl;      // -1

    // strtol: String to long int
    char str3[] = "123";
    long intResult = strtol(str3, NULL, 10);
    cout << "String to long int: " << intResult << endl;    // 123

    // strtof: String to float
    char str4[] = "3.14";
    float floatResult = strtof(str4, NULL);
    cout << "String to float: " << floatResult << endl;     // 3.14

    // Example for strtok
    char str5[] = "key1=value1;key2=value2";
    char* token = strtok(str5, "=;");
    while (token != NULL) {
        cout << "Token: " << token << endl;     // Token: key1 
        token = strtok(NULL, "=;");             // Token: value1 .....
    }

    return 0;
}


/*Output:

Length of string: 5
Concatenated string: Hello World
Partially concatenated string: Hello World Uni
Copied string: Copy
Partially copied string: Partial♥☺ñ■a
Substring found!
Character found at position: 4
Comparison result: -1
String to long int: 123
String to float: 3.14
Token: key1
Token: value1
Token: key2
Token: value2

*/