//  =================================================================
//  Program:              ProgrammingAssignmentFour
//  File:                 SinglyLinkedList.cpp
//  Software Engineer:    Jonas Sharron
//  Date:                 28-October-2017
//  =================================================================

#include "stdafx.h"
#include <iostream>
using namespace std;

//  =================================================================
    SinglyLinkedList::SinglyLinkedList() {
		ConstructorBanner();
		first = last = NULL;
	}  //  constructor SinglyLinkedList

    SinglyLinkedList::~SinglyLinkedList() {
		DestructorBanner();
		DestroyList();
    }  //  destructor ~SinglyLinkedList
//  =================================================================

//  =================================================================
	int SinglyLinkedList::DeleteFirst() {

		int value;
		Node* ptr;
		
		value = first->datum;
		ptr = first;
		first = first->next;
		delete ptr;

		return value;

	}  //  member-function DestroyFirst()
//  =================================================================

//  =================================================================
	int SinglyLinkedList::DeleteLast() {

		int value;
		Node* temp = first;
		Node* temp2 = first;
		
		value = last->datum;
		
		while (temp2->next != NULL) {
			temp = temp2;
			temp2 = temp2->next;
		}

			last = temp;
			temp->next = NULL;
			
		return value;

	}  // member-function DeleteLast()
//  =================================================================

//  =================================================================
	int SinglyLinkedList::Delete(int location) {

		int value;
		int nodeCounter = 1;
		Node* ptr;
		Node* ptr2;

		ptr = this->first;

		while (nodeCounter < location - 1) {
			ptr = ptr->next;
			nodeCounter++;
		}  //  while
		
		value = ptr->next->datum;
		ptr2 = ptr->next;
		ptr->next = ptr2->next;
		delete ptr2;
		return value;

	} //  member-function Delete()
//  =================================================================

//  =================================================================
	void SinglyLinkedList::DestroyList() {

		Node* temp;

		while (first != NULL) {
			temp = first;
			first = first->next;
			delete temp;
		}  //while

		last = NULL;

	}  //  member-function DestroyList()
//  =================================================================

//  =================================================================
	Node* SinglyLinkedList::GetFirst() {

		return first;

	}  // member-function GetFirst()
//  =================================================================

//  =================================================================
	void SinglyLinkedList::IntializeList() {

		DestroyList();

	}  // member-function IntializeList()
//  =================================================================

//  =================================================================
	void SinglyLinkedList::InsertFirst(int value) {
	
		Node* newNode = new Node(value, first);
		first = newNode;
		
		    if (last == NULL)
			    last = first;
		
	}  //  member-function InsertFirst()
//  =================================================================

//  =================================================================
	void SinglyLinkedList::InsertLast(int value) {
	
		if (this->IsEmpty())
			this->InsertFirst(value);
		else {
			Node* newNodePtr = new Node(value, NULL);
			last->next = newNodePtr;
			last = newNodePtr;
		}  //  else
		
	}  //  member-function InsertLast()
//  =================================================================

//  =================================================================
	void SinglyLinkedList::Insert(int value, int location) {

		int nodeCounter;
		Node* ptr;

		if ((location > this->Length() + 1) || (location < 1)) {

			cout << endl;
			cout << "=================================" << endl;
			cout << "Member-function Insert() invoked." << endl;
			cout << "Insertion location is invalid. " << endl;
			cout << "Insert() terminating execution. " << endl;
			cout << "=================================" << endl;
			cout << endl;

		}  //  if

		else {  //  else 1
			if (location == 1)
				this->InsertFirst(value);
			else if (location == this->Length() + 1)
				this->InsertLast(value);
			else {  //  else 2
				nodeCounter = 1;
				ptr = this->first;
				while (nodeCounter < location - 1) {
					ptr = ptr->next;
					nodeCounter++;
				}  //  while
				Node* newNode = new Node(value, ptr->next);
				ptr->next = newNode;
			}  //else 2
		}  // else 1

	}  //  member-function Insert()
//  =================================================================

//  =================================================================
	bool SinglyLinkedList::IsEmpty() {

		return (first == NULL);

	}  //  member-function IsEmpty()
//  =================================================================

//  =================================================================
	int SinglyLinkedList::Length() {
		
		int nbNodes = 0;
		Node* ptr;
		
		ptr = this->first;
		while (ptr != NULL) {
			ptr = ptr->next;
			nbNodes++;
			
		} // while
		
		return nbNodes;
		
	}  //  member-function Length()
//  =================================================================

//  =================================================================
	void SinglyLinkedList::Print() {
		
		Node* current;
		
		cout << endl;
		cout << "=====================================" << endl;
		cout << "The list contains the following data." << endl;
		cout << endl;
		
		if (this->Length() == 0) {
			cout << "The list is empty." << endl;
			cout << endl;
			
		} // if
		else {
			cout << " Beginning" << endl;
			
			current = first;
			while (current != NULL) {
				cout << " " << current->datum << endl;
				current = current->next;
				
			} // while
			
			cout << " Ending" << endl;
			cout << "========" << endl;
			cout << endl;
			
		} // else
		
	}  //  member-function Print()
//  =================================================================

//  =================================================================
	void SinglyLinkedList::ReversePrint() {

		cout << endl;
		cout << "=====================================" << endl;
		cout << "The list contains the following data." << endl;
		cout << endl;
		cout << "Ending" << endl;

		if (this->Length() == 0) {
			cout << endl;
			cout << "The list is empty." << endl;
			cout << endl;
		}  // if

		else {
			ReversePrintData(GetFirst());
		}  //  else

		cout << "Begining" << endl;
		cout << "========" << endl;
		cout << endl;




	}  //  member-functionReversePrint()

//  =================================================================
	void SinglyLinkedList::ReversePrintData(Node* currentNode) {
		
		if (currentNode != NULL) {
			ReversePrintData(currentNode->next);
			cout << currentNode->datum << endl;
		} // then
				
	}  //  member-function ReversePrintData()
// ==================================================================

//  =================================================================
	void SinglyLinkedList::ConstructorBanner() {
		
		cout << endl;
		cout << "=========================================" << endl;
		cout << "The SinglyLinkedList constructor invoked." << endl;
		cout << "=========================================" << endl;
		cout << endl;
		
	}  //  member-fuction ConstructorBanner()
//  ==================================================================

//  =================================================================
	void SinglyLinkedList::DestructorBanner() {
		
		cout << endl;
		cout << "=========================================" << endl;
		cout << "The ~SinglyLinkedList destructor invoked." << endl;
		cout << "=========================================" << endl;
		cout << endl;
		
	}  //  member-fuction DestructorBanner()
//  =================================================================


