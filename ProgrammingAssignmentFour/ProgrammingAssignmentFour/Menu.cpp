//  =================================================================
//  Program:              ProgrammingAssignmentFour
//  File:                 Menu.cpp
//  Software Engineer:    Jonas Sharron
//  Date:                 28-October-2017
//  =================================================================

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

//  =================================================================
    Menu::Menu() {    
		userMenuSelection = Quit;
	}  //  constructor Menu

    Menu::~Menu() {
    }  //  destructor ~Menu
//  =================================================================

//  =================================================================
	MenuChoices Menu::Get() {

		return userMenuSelection;

	}  //  member-function Get()
//  =================================================================

//  =================================================================
	void Menu::Set(MenuChoices newValue) {

		userMenuSelection = newValue;

	}  //  member-function Set()
//  =================================================================

//  =================================================================
	void Menu::Display() {

		cout << "==================================================" << endl;
		cout << "1:  Quit           2: DestroyList" << endl;
		cout << "3:  IntializeList  4: InsertFirst" << endl;
		cout << "5:  InsertLast     6: Insert" << endl;
		cout << "7:  Print          8: ReversePrint" << endl;
		cout << "9:  DeleteFirst" << endl;
		cout << "10: DeleteLast" << endl;
		cout << "11: Delete" << endl;
		cout << "==================================================" << endl;


	}  // member-function Display()
//  =================================================================

//  =================================================================
	void Menu::QueryUser() {

		int selection;

		cout << "Enter Menu Selection: ";
		cin >> selection;

		switch (selection) {

		case 1: 
			userMenuSelection = Quit;
			break;

		case 2:
			userMenuSelection = DestroyList;
			break;

		case 3:
			userMenuSelection = InitializeList;
			break;

		case 4:
			userMenuSelection = InsertFirst;
			break;

		case 5:
			userMenuSelection = InsertLast;
			break;

		case 6:
			userMenuSelection = Insert;
			break;

		case 7:
			userMenuSelection = Print;
			break;

		case 8:
			userMenuSelection = ReversePrint;
			break;

		case 9:
			userMenuSelection = DeleteFirst;
			break;

		case 10:
			userMenuSelection = DeleteLast;
			break;

		case 11:
			userMenuSelection = Delete;
			break;

		default:
			userMenuSelection = ReversePrint;

		}  // switch

	}  //  member-function QueryUser()
//  =================================================================

//  =================================================================
	bool Menu::Continue() {

		return userMenuSelection != Quit;

	}  //  member-function Continue()
//  =================================================================

//  =================================================================
	void Menu::ProcessCommand(SinglyLinkedList& list) {

		int integerValue;
		int location;


		if (userMenuSelection != Quit) {

			switch (userMenuSelection) {

			case DestroyList:
				list.DestroyList();
				break;

			case InitializeList:
				list.IntializeList();
				break;

			case InsertFirst:
				cout << "Enter a value to add to the beginning of the list: ";
				cin >> integerValue;
				list.InsertFirst(integerValue);
				break;

			case InsertLast:
				cout << "Enter a value to insert at the end of the list: ";
				cin >> integerValue;
				list.InsertLast(integerValue);
				break;

			case Insert:
				cout << "Enter a value to insert into the list: ";
				cin >> integerValue;
				cout << "Enter a node location for the insertion: ";
				cin >> location;
				list.Insert(integerValue, location);
				break;

			case Print:
				list.Print();
				break;

			case ReversePrint:
				list.ReversePrint();
				break;

			case DeleteFirst:
				if (list.IsEmpty())
					cout << "Can not delete first, the list is empty." << endl;
				
				//  inform user they are not only deleting the first list value,
				//  they are deleting the only list value
				else if (list.Length() == 1) {
					cout << "Deleting first (and only) list value ( " 
					     << list.DeleteFirst() << " )" << endl;
				}  // else if
				
				else
					cout << "List first value ( " << list.DeleteFirst() << " ) deleted." << endl;
				break;

			case DeleteLast:
				if (list.IsEmpty())
					cout << "Can not delete last, the list is empty." << endl;
				
				//  force user to acknowledge they are attempting to not only delete the
				//  last list value, but also, the first and only list value
				else if (list.Length() == 1)
					cout << "There is only one value in the list, please select"
					<< " DeleteFirst if this is what you want to do." << endl;
				else
					cout << "List last value ( " << list.DeleteLast() << " ) deleted." << endl;
				break;

			case Delete:
				if (list.IsEmpty())
					cout << "Can not delete, the list is empty." << endl;
				
				//  force user to acknowledge they are attempting to not only delete the
				//  last list value, but also, the first and only list value
				else if (list.Length() == 1)
					cout << "There is only one value in the list, please select"
					<< " DeleteFirst if this is what you want to do." << endl;
				else {
					cout << "Enter a node location to delete: ";
					cin >> location;
					cout << "List value " << list.Delete(location) << " deleted." << endl;
				}  //  else
				break;

			default:
				cout << "Invalid selection." << endl;
				cout << "ProcessCommand member-fuction invoked." << endl;
				list.Print();
				break;

			}  // switch
		}  // if then
		
	}  //  member-function ProcessCommand()
//  =================================================================