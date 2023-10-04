//
//  main.cpp
//  LinkedList Project
//
//  Created by Femi Adebisi on 10/3/23.
//

#include <iostream>
#include "LinkedList.hpp"

int main() {
    Studentlist list;
    std::cout << "\n*********************\n";
    
    list.appendStudentNode(11321898, 3.65);
    list.appendStudentNode(1356786, 2.75);
    list.appendStudentNode(1234567, 4.0);
    list.appendStudentNode(11321898, 3.75);
    list.appendStudentNode(12314564, 1.55);
    list.appendStudentNode(53414355, 4.0);
    list.appendStudentNode(0323452, 2.5);
    list.appendStudentNode(2451232, 3.60);
    list.appendStudentNode(1245223, 3.76);
    list.appendStudentNode(1234324, 3.97);
    
    std::cout << "\n*********************\n";
    
    list.insertStudentNode(1324253, 3.00);
    list.insertStudentNode(1435345, 3.56);
    list.insertStudentNode(1354675, 3.98);
    list.displayList();
    
    std::cout << "\n*********************\n";

    list.deleteStudentNode(1234324, 3.97);
    list.displayList();

}
