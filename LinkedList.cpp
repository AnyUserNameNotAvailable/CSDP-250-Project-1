//
//  LinkedList.cpp
//  LinkedList Project
//
//  Created by Femi Adebisi on 10/3/23.
//Linked list Functions

#include "LinkedList.hpp"
#include <iostream>

void Studentlist::appendStudentNode(int studentid, double gradePointAvg ){
    StudentNode* newNode;
    StudentNode* nodePtr;
      
    newNode = new StudentNode;
    newNode->id = studentid;
    newNode->gpa = gradePointAvg;
    newNode->next = nullptr;
    if(!head) {
            head = newNode;
        }
    else {
         nodePtr = head;
         while(nodePtr->next) {
             nodePtr = nodePtr->next;
         }
         
         nodePtr->next = newNode;
     }

}
void Studentlist::insertStudentNode(int studentid, double gradePointAvg){
    StudentNode* newNode;
    StudentNode* nodePtr;
    StudentNode* prevNode;
    
    newNode = new StudentNode;
    newNode->id = studentid;
    newNode->gpa = gradePointAvg;
    
    
    if(!head) {
        head = newNode;
    }
    else {
        nodePtr = head;
        prevNode = nullptr;
        
        while(nodePtr->id < studentid && nodePtr != nullptr) {
            prevNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        
        if(!prevNode) {
              head = newNode;
              newNode->next = nodePtr;
        }
        else {
              prevNode->next = newNode;
              newNode->next = nodePtr;
        }
    }
}
void Studentlist::deleteStudentNode(int studentid, double gradePointAvg){
    StudentNode* nodePtr;
    StudentNode* prevPtr = nullptr;
       
       if(!head) {
           std::cout << "\nCannot Delete An Empty List\n";
           return;
       }
       if(head->id == studentid) {
           nodePtr = head->next;
           delete head;
           head = nodePtr;
       }
       else {
           nodePtr = head;
           
           while(nodePtr->id != studentid && nodePtr->next != nullptr) {
               prevPtr = nodePtr;
               nodePtr =nodePtr->next;
           }
           if(nodePtr) {
               prevPtr->next = nodePtr->next;
               delete nodePtr;
           }
       }
}
void Studentlist::displayList() const{
    StudentNode* nodePtr;
    nodePtr = head;
    while(nodePtr) {
        std::cout << nodePtr->id << std::endl;
        std::cout << nodePtr->gpa << std::endl;
        nodePtr = nodePtr->next;
        }

}
