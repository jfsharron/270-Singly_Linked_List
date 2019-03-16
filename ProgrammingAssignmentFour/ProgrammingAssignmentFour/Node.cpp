//  =================================================================
//  Program:              ProgrammingAssignmentFour
//  File:                 Node.cpp
//  Software Engineer:    Jonas Sharron
//  Date:                 28-October-2017
//  =================================================================

#include "stdafx.h"
#include <iostream>
using namespace std;

//  =================================================================
    Node::Node() {
		ConstructorBanner();
		datum = 0;
		next = NULL;
	}  // constructor Node()

	Node::Node(int listElement, Node* nodePtr) {
		ConstructorBanner();
		datum = listElement;
		next = nodePtr;
	}  //  constructor Node(int, Node*)

    Node::~Node() {
		DestructorBanner();
    }  // destructor ~Node
//  =================================================================

//  =================================================================
	void Node::ConstructorBanner() {

		cout << "=========================" << endl;
		cout << "Constructor Node invoked." << endl;
		cout << "=========================" << endl;
		cout << endl;
		
	}  //  member-function ConstructorBanner()
//  =================================================================

//  =================================================================
	void Node::DestructorBanner() {

		cout << "=========================" << endl;
		cout << "Destructor ~Node invoked." << endl;
		cout << "=========================" << endl;
		cout << endl;

	}  // member-function DestructorBanner()
//  =================================================================

