#include <iostream>
#include <map>
#include <string>
// Fork this repo
// Read: https://www.geeksforgeeks.org/cpp/multimap-associative-containers-the-c-standard-template-library-stl/
// If you have question about the code, please ask to the TA
// Implement a multimap to store student IDs and their names. A multimap allows multiple values for the same key,
//  which is useful in this case since multiple students can have the same ID.
// You can see more information: https://cplusplus.com/reference/map/multimap/
// Add a comment before main about what was the most easy and challenging part
// After you finish, type in the terminaL:
// git add .
// git commit -m "Implement multimap for student IDs and names"
// git push origin main


#include <iostream>
#include <map>
#include <string>

/*
 * Most Easy Part: Adding the specific student names using the .insert() method.
 * Most Challenging Part: Understanding that std::multimap automatically sorts by Key (ID) 
 * but keeps the values in the order they were inserted for that specific key.
 */

int main() {
    // Create a multimap: Key is student ID (int), Value is student name (string)
    std::multimap<int, std::string> studentMap;

    // Insert the requested students with their IDs
    // I've assigned some matching IDs to demonstrate the multimap capability
    studentMap.insert(std::make_pair(10, "Milos"));
    studentMap.insert(std::make_pair(20, "Marko"));
    studentMap.insert(std::make_pair(10, "Sarp"));      // Duplicate ID 10
    studentMap.insert(std::make_pair(30, "Planinar"));
    studentMap.insert(std::make_pair(20, "Eli"));       // Duplicate ID 20

    // Display all students sorted by their student IDs
    std::cout << "Student Records (Sorted by ID):" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    for (auto it = studentMap.begin(); it != studentMap.end(); ++it) {
        std::cout << "ID: " << it->first << " | Name: " << it->second << std::endl;
    }

    return 0;
}
