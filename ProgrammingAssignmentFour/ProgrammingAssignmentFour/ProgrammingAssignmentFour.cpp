//  =================================================================
//  Program:              ProgrammingAssignmentFour
//  File:                 ProgrammingAssignmentFour.cpp
//  Software Engineer:    Jonas Sharron
//  Date:                 28-October-2017
//  Purpose:              The purpose of this program is to implement
//                        a Singly Linked List add allow the user to 
//                        add or delete values from various locations
//                        within the list.  The user may also print 
//                        the list in forward or reverse order.
//  =================================================================

    #include "stdafx.h"
    #include <iostream>
    using namespace std;

//  =================================================================
	int main() {

		Menu menu;
		SinglyLinkedList listA;


		do {

			menu.Display();
			menu.QueryUser();
			menu.ProcessCommand(listA);

		} while (menu.Continue());  //  do while loop

    return 0;
    }  // function main()

//  =================================================================

