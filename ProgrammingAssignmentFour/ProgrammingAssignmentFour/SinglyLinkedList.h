//  =================================================================
//  Program:              ProgrammingAssignmentFour
//  File:                 SinglyLinkedList.h
//  Software Engineer:    Jonas Sharron
//  Date:                 28-October-2017
//  =================================================================

#pragma once

//  =================================================================
    class SinglyLinkedList {
		
	    public:
	    
			SinglyLinkedList();
	        ~SinglyLinkedList();

			int  SinglyLinkedList::DeleteFirst();
			int  SinglyLinkedList::DeleteLast();
			int  SinglyLinkedList::Delete(int);
			void SinglyLinkedList::DestroyList();
			Node* GetFirst();
			void SinglyLinkedList::IntializeList();
			void SinglyLinkedList::InsertFirst(int);
			void SinglyLinkedList::InsertLast(int);
			void SinglyLinkedList::Insert(int, int);
			bool SinglyLinkedList::IsEmpty();
			int  SinglyLinkedList::Length();
			void SinglyLinkedList::Print();
			void SinglyLinkedList::ReversePrintData(Node*);
			void SinglyLinkedList::ReversePrint();

	    private:

			Node* first;
			Node* last;

			void ConstructorBanner();
			void DestructorBanner();	
	
	};  //  class SinglyLinkedList
//  =================================================================

