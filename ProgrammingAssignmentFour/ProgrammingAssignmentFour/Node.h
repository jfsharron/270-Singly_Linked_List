//  =================================================================
//  Program:              ProgrammingAssignmentFour
//  File:                 Node.h
//  Software Engineer:    Jonas Sharron
//  Date:                 28-October-2017
//  =================================================================

#pragma once

//  =================================================================
    class Node {
		
		friend class SinglyLinkedList;
	
	    public:
		
		    Node();
		    Node(int, Node*);
		    ~Node();

	    private:

			void ConstructorBanner();
			void DestructorBanner();

			int datum;
			Node* next;

    };  //  class Node
//  =================================================================

