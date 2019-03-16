//  =================================================================
//  Program:              ProgrammingAsignmentFour
//  File:                 Menu.h
//  Software Engineer:    Jonas Sharron
//  Date:                 28-October-2017
//  =================================================================

#pragma once
#include<string>
using namespace std;

//  =================================================================
    class Menu {

        public:
	    
			Menu();
	        ~Menu();

			MenuChoices Menu::Get();
			void Menu::Set(MenuChoices);
			void Menu::Display();
			void Menu::QueryUser();
			bool Menu::Continue();
			void Menu::ProcessCommand(SinglyLinkedList&);


	    private:

			MenuChoices userMenuSelection;	
	
	};  //  class Menu

//  =================================================================

