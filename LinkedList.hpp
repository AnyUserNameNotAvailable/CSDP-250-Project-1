//
//  LinkedList.hpp
//  LinkedList Project
//
//  Created by Femi Adebisi on 10/3/23.
//

#ifndef LinkedList_hpp


#define LinkedList_hpp

#include <stdio.h>
#include <iostream>

class Studentlist{
private:
    struct StudentNode {
        int id;
        double gpa;
        StudentNode *next;
        
    };
    StudentNode *head;
public:
    Studentlist( ) {
            head = nullptr;
        };
    ~Studentlist( ) { };

    void appendStudentNode(int, double);
    void deleteStudentNode(int, double);
    void insertStudentNode(int, double);
    void displayList( ) const;
};

#endif /* LinkedList_hpp */
