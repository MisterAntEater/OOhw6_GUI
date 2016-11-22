/*
    Robbie Robot Shop v1.0 beta, (c) 2016 by Professor George F. Rice.

    This file is part of Robbie Robot Shop (RRS), an example solution
    to Project #5 for UTA CSE 1325. 

    Permission is expressly DENIED to students in this class to include
    ANY of this code in a submitted Homework #5 solution during any semester 
    of this class. This restriction supercedes the license granted below,
    and use of this code for Homework #5 will be deemed an Honor Code Violation 
    regardless of disclosure.
    
    Permission is expressly GRANTED to students in this class to include
    this code, or any derivatives thereof, in Project #6 of the same class,
    providing that this header is not removed.
    
    RRS is otherwise free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    RRS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with RRS.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "controller.h"
#include <iostream>
#include <sstream>
#include <string>
#include <climits>
using namespace std;

//gui menu functions
void main_menu(Shop& shop);
void pm_menu(Shop& shop);
void bc_menu(Shop& shop);
void sa_menu(Shop& shop);
void pb_menu(Shop& shop);
void make_part(Shop& shop);
void make_model(Shop& shop);
void view_parts(Shop& shop);
void view_models(Shop& shop);

//menus
void main_menu(Shop& shop) {
	Fl_Window main_menu( 500,400,"Robbie Robot Shop" );
    main_menu.begin();
		Fl_Text_Display text_welcome(250, 100, 0, 0, "Welcome to Robbie Robot Shop! Who are you?");
    	Fl_Button but_pm( 150, 200, 200, 30, "A Product Manager" );
    	Fl_Button but_bc( 150, 250, 200, 30, "A Beloved Customer" );
    	Fl_Button but_sa( 150, 300, 200, 30, "A Sales Associate" );
    	Fl_Button but_pb( 150, 350, 200, 30, "The Boss" );
    main_menu.end();
		but_pm.callback( Controller::but_pm_cb, (void*)&shop );
    	but_bc.callback( Controller::but_bc_cb, (void*)&shop );
		but_sa.callback( Controller::but_sa_cb, (void*)&shop );
		but_pb.callback( Controller::but_pb_cb, (void*)&shop );
    main_menu.show();
	Fl::run();
} 

void pm_menu(Shop& shop) {
	Fl_Window pm_menu( 500,400,"Product Manager" );
    pm_menu.begin();
		Fl_Text_Display text_welcome(250, 100, 0, 0, "Welcome Product Manager");
    	Fl_Button but_makepart( 150, 200, 200, 30, "Make Part" );
    	Fl_Button but_makemodel( 150, 250, 200, 30, "Make Model" );
    	Fl_Button but_viewparts( 150, 300, 200, 30, "View Parts" );
    	Fl_Button but_viewmodels( 150, 350, 200, 30, "View Models" );
    	Fl_Button but_return( 10, 350, 100, 30, "<-Main Menu" );
    pm_menu.end();
		but_makepart.callback( Controller::but_makepart_cb, (void*)&shop );
    	but_makemodel.callback( Controller::but_makemodel_cb, (void*)&shop );
		but_viewparts.callback( Controller::but_viewparts_cb, (void*)&shop );
		but_viewmodels.callback( Controller::but_viewmodels_cb, (void*)&shop );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    pm_menu.show();
	Fl::run();
}

void bc_menu(Shop& shop) {
	Fl_Window pm_menu( 500,300,"Beloved Customer" );
    pm_menu.begin();
		Fl_Text_Display text_welcome(250, 100, 0, 0, "Welcome Beloved Customer");
    	Fl_Button but_viewparts( 150, 200, 200, 30, "View Parts" );
    	Fl_Button but_viewmodels( 150, 250, 200, 30, "View Models" );
    	Fl_Button but_return( 10, 250, 100, 30, "<-Main Menu" );
    pm_menu.end();
		but_viewparts.callback( Controller::but_viewparts_cb, (void*)&shop );
		but_viewmodels.callback( Controller::but_viewmodels_cb, (void*)&shop );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    pm_menu.show();
	Fl::run();
}

void sa_menu(Shop& shop) {
	Fl_Window pm_menu( 500,400,"Sales Associate" );
    pm_menu.begin();
		Fl_Text_Display text_welcome(250, 100, 0, 0, "Welcome Sales Associate");
    	Fl_Button but_makeorder( 150, 200, 200, 30, "Make Order" );
    	Fl_Button but_vieworders( 150, 250, 200, 30, "View Orders" );
    	Fl_Button but_viewparts( 150, 300, 200, 30, "View Parts" );
    	Fl_Button but_viewmodels( 150, 350, 200, 30, "View Models" );
    	Fl_Button but_return( 10, 350, 100, 30, "<-Main Menu" );
    pm_menu.end();
		but_viewparts.callback( Controller::but_viewparts_cb, (void*)&shop );
		but_viewmodels.callback( Controller::but_viewmodels_cb, (void*)&shop );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    pm_menu.show();
	Fl::run();
}

void pb_menu(Shop& shop) {
	Fl_Window pm_menu( 500,500,"The Boss" );
    pm_menu.begin();
		Fl_Text_Display text_welcome(250, 100, 0, 0, "Welcome Boss");
    	Fl_Button but_makecustomer( 150, 200, 200, 30, "Make Customer" );
    	Fl_Button but_makeassociate( 150, 250, 200, 30, "Make Associate" );
    	Fl_Button but_viewcustomers( 150, 300, 200, 30, "View Customers" );
    	Fl_Button but_viewassociates( 150, 350, 200, 30, "View Associates" );
    	Fl_Button but_viewparts( 150, 400, 200, 30, "View Parts" );
    	Fl_Button but_viewmodels( 150, 450, 200, 30, "View Models" );
    	Fl_Button but_return( 10, 450, 100, 30, "<-Main Menu" );
    pm_menu.end();
		but_viewparts.callback( Controller::but_viewparts_cb, (void*)&shop );
		but_viewmodels.callback( Controller::but_viewmodels_cb, (void*)&shop );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    pm_menu.show();
	Fl::run();
}

void make_part(Shop& shop) {
	Fl_Window makepart_menu( 1050,600,"Part Creation" );
    makepart_menu.begin();
		Fl_Text_Display text_welcome(250, 100, 0, 0, "What would you like to create?");
    	Fl_Choice choice_parttype( 150, 150, 200, 30, "What type of part?" );
			choice_parttype.add("Head");
			choice_parttype.add("Torso");
			choice_parttype.add("Battery");
			choice_parttype.add("Arm");
			choice_parttype.add("Leg");
    	Fl_Input in_name( 150, 200, 200, 30, "Part Name" );
    	Fl_Input in_sn( 150, 250, 200, 30, "Part Number" );
    	Fl_Input in_desc( 150, 300, 200, 30, "Part Description" );
    	Fl_Input in_weight( 150, 350, 200, 30, "Part Weight" );
    	Fl_Input in_cost( 150, 400, 200, 30, "Part Cost" );
		Fl_Text_Display text_alspec(850, 175, 0, 0, "---Arm & Leg Specific Info---");
    	Fl_Input in_speed( 825, 200, 200, 30, "Part Speed" );
    	Fl_Input in_draw( 825, 250, 200, 30, "Part Draw" );
		Fl_Text_Display text_batspec(500, 175, 0, 0, "---Battery Specific Info---");
    	Fl_Input in_charge( 500, 200, 200, 30, "Battery Charge" );
		Fl_Text_Display text_torspec(500, 325, 0, 0, "---Torso Specific Info---");
    	Fl_Input in_numbats( 500, 350, 100, 30, "Number of Batteries" );
    	Fl_Button but_finish( 150, 500, 100, 30, "Create Part" );
    	Fl_Button but_return( 10, 550, 100, 30, "<-Main Menu" );
    makepart_menu.end();
		but_finish.callback( Controller::but_finishpart_cb, (void*)&shop );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    makepart_menu.show();
	Fl::run();
}

void make_model(Shop& shop) {
	Fl_Window make_model_menu( 550,500,"Model Creation" );
    make_model_menu.begin();
		Fl_Text_Display text_welcome(300, 50, 0, 0, "What parts would you like to use?\n(Open Part catalog in seperate window for detailed descriptions of parts)");
    	Fl_Choice* choice_head = new Fl_Choice( 175, 100, 200, 30, "Choose Head" );
    	Fl_Choice but_maketorso( 175, 150, 200, 30, "Choose Torso" );
    	Fl_Choice but_makebat( 175, 200, 200, 30, "Choose Battery" );
    	Fl_Choice but_makearms( 175, 250, 200, 30, "Choose Arms" );
    	Fl_Choice but_makelegs( 175, 300, 200, 30, "Choose Legs" );
		Fl_Button but_finish( 175, 350, 200, 30, "Create this Model" );
    	Fl_Button but_return( 10, 400, 100, 30, "<-Main Menu" );
    make_model_menu.end();
		but_finish.callback( Controller::but_finishmodel_cb, (void*)&shop);
		but_return.callback( Controller::mm_cb, (void*)&shop);
    make_model_menu.show();
	Fl::run();
}

void view_models(Shop& shop) {
	Fl_Window model_view( 500,500,"Model Catalog" );
    model_view.begin();
    	Fl_Button but_return( 10, 450, 100, 30, "<-Main Menu" );
    	Fl_Scroll models(100, 100, 300, 300, "Here is a list of available models:");
		models.type(Fl_Scroll::VERTICAL_ALWAYS);
    model_view.end();
		but_return.callback( Controller::mm_cb, (void*)&shop);
    model_view.show();
	Fl::run();
}

void view_parts(Shop& shop) {
	Fl_Window part_view( 500,500,"Part Catalog" );
    part_view.begin();
    	Fl_Button but_return( 10, 450, 100, 30, "<-Main Menu" );
    	Fl_Scroll parts(100, 100, 300, 300,"Here is a list of available parts:");
		parts.type(Fl_Scroll::VERTICAL_ALWAYS);
    part_view.end();
		but_return.callback( Controller::mm_cb, (void*)&shop);
    part_view.show();
	Fl::run();
}
//callbacks
void Controller::but_viewparts_cb(Fl_Widget* o, void* shop) {
	view_parts((Shop&)shop);
}

void Controller::but_viewmodels_cb(Fl_Widget* o, void* shop) {
	view_models((Shop&)shop);
}

void Controller::but_finishpart_cb(Fl_Widget* o, void* shop) {
	Fl_Button* b=(Fl_Button*)o;
	b->label("Part Stored");
}

void Controller::but_finishmodel_cb(Fl_Widget* o, void* shop) {
	Fl_Button* b=(Fl_Button*)o;
	b->label("Model Stored");
}

void Controller::but_makemodel_cb(Fl_Widget* o, void* shop) {
	make_model((Shop&) shop);	
}

void Controller::but_makepart_cb(Fl_Widget* o, void* shop) {
	make_part((Shop&) shop);
}

void Controller::mm_cb(Fl_Widget* o, void* shop) {
	main_menu((Shop&) shop);
}

void Controller::but_pm_cb(Fl_Widget* o, void* shop) {
	pm_menu((Shop&) shop);
}

void Controller::but_bc_cb(Fl_Widget* o, void* shop) {
	bc_menu((Shop&) shop);
}

void Controller::but_sa_cb(Fl_Widget* o, void* shop) {
	sa_menu((Shop&) shop);
}

void Controller::but_pb_cb(Fl_Widget* o, void* shop) {
	pb_menu((Shop&) shop);
}

//initialize gui
void Controller::gui() {
	main_menu(Controller::shop);
}

string Controller::get_string(string prompt) {
    cout << prompt << " ";
    string s;
    getline(cin, s);
    return s;
}

int Controller::get_int(string prompt) {
    string s = get_string(prompt);
    return atoi(s.c_str());
}

double Controller::get_double(string prompt) {
    string s = get_string(prompt);
    return atof(s.c_str());
}

Customer& Controller::get_customer(string prompt) {
    for (int i=0; i < shop.customers().size(); ++i) {
        cout << i << ") " << shop.customers()[i] << endl;
    }
    cout << endl;
    return shop.customers()[get_int(prompt)];
}

Sales_associate& Controller::get_sa(string prompt) {
    for (int i=0; i < shop.sales_associates().size(); ++i) {
        cout << i << ") " << shop.sales_associates()[i] << endl;
    }
    cout << endl;
    return shop.sales_associates()[get_int(prompt)];
}


Robot_model& Controller::get_model(string prompt) {
    for (int i=0; i < shop.models().size(); ++i) {
        cout << i << ") " << shop.models()[i] << endl;
    }
    cout << endl;
    return shop.models()[get_int(prompt)];
}

Torso& Controller::get_torso(string prompt) {
    for (int i=0; i < shop.torsos().size(); ++i) {
        cout << i << ") " << shop.torsos()[i] << endl;
    }
    cout << endl;
    return shop.torsos()[get_int(prompt)];
}

Arm& Controller::get_arm(string prompt) {
    for (int i=0; i < shop.arms().size(); ++i) {
        cout << i << ") " << shop.arms()[i] << endl;
    }
    cout << endl;
    return shop.arms()[get_int(prompt)];
}

Head& Controller::get_head(string prompt) {
    for (int i=0; i < shop.heads().size(); ++i) {
        cout << i << ") " << shop.heads()[i] << endl;
    }
    cout << endl;
    return shop.heads()[get_int(prompt)];
}

Locomotor& Controller::get_locomotor(string prompt) {
    for (int i=0; i < shop.locomotors().size(); ++i) {
        cout << i << ") " << shop.locomotors()[i] << endl;
    }
    cout << endl;
    return shop.locomotors()[get_int(prompt)];
}

Battery& Controller::get_battery(string prompt) {
    for (int i=0; i < shop.batteries().size(); ++i) {
        cout << i << ") " << shop.batteries()[i] << endl;
    }
    cout << endl;
    return shop.batteries()[get_int(prompt)];
}
