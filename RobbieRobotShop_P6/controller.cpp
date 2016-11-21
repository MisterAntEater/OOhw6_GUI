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
    	but_makemodel.callback( Controller::but_makemodel_cb, &pm_menu );
		//but_viewparts.callback( Controller::but_viewparts_cb, &pm_menu );
		//but_viewmodels.callback( Controller::but_viewmodels_cb, &pm_menu );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    pm_menu.show();
	Fl::run();
}

void bc_menu(Shop& shop) {
	Fl_Window pm_menu( 500,400,"Beloved Customer" );
    pm_menu.begin();
		Fl_Text_Display text_welcome(250, 100, 0, 0, "Welcome Beloved Customer");
    	Fl_Button but_viewparts( 150, 300, 200, 30, "View Parts" );
    	Fl_Button but_viewmodels( 150, 350, 200, 30, "View Models" );
    	Fl_Button but_return( 10, 350, 100, 30, "<-Main Menu" );
    pm_menu.end();
		//but_makepart.callback( Controller::but_makepart_cb, (void*)&shop );
    	//but_makemodel.callback( Controller::but_makemodel_cb, &pm_menu );
		//but_viewparts.callback( Controller::but_viewparts_cb, &pm_menu );
		//but_viewmodels.callback( Controller::but_viewmodels_cb, &pm_menu );
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
		//but_makepart.callback( Controller::but_makepart_cb, (void*)&shop );
    	//but_makemodel.callback( Controller::but_makemodel_cb, &pm_menu );
		//but_viewparts.callback( Controller::but_viewparts_cb, &pm_menu );
		//but_viewmodels.callback( Controller::but_viewmodels_cb, &pm_menu );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    pm_menu.show();
	Fl::run();
}

void pb_menu(Shop& shop) {
	Fl_Window pm_menu( 500,400,"The Boss" );
    pm_menu.begin();
		Fl_Text_Display text_welcome(250, 100, 0, 0, "Welcome Boss");
    	Fl_Button but_makecustomer( 150, 200, 200, 30, "Make Customer" );
    	Fl_Button but_makeassociate( 150, 250, 200, 30, "Make Associate" );
    	Fl_Button but_viewcustomers( 150, 200, 200, 30, "View Customers" );
    	Fl_Button but_viewassociates( 150, 250, 200, 30, "View Associates" );
    	Fl_Button but_viewparts( 150, 300, 200, 30, "View Parts" );
    	Fl_Button but_viewmodels( 150, 350, 200, 30, "View Models" );
    	Fl_Button but_return( 10, 350, 100, 30, "<-Main Menu" );
    pm_menu.end();
		//but_makepart.callback( Controller::but_makepart_cb, (void*)&shop );
    	//but_makemodel.callback( Controller::but_makemodel_cb, &pm_menu );
		//but_viewparts.callback( Controller::but_viewparts_cb, &pm_menu );
		//but_viewmodels.callback( Controller::but_viewmodels_cb, &pm_menu );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    pm_menu.show();
	Fl::run();
}

void make_part(Shop& shop) {
	Fl_Window pm_menu( 500,400,"Part Creation" );
    pm_menu.begin();
		Fl_Text_Display text_welcome(250, 100, 0, 0, "What would you like to create?");
    	Fl_Button but_makehead( 150, 150, 200, 30, "Make Head" );
    	Fl_Button but_maketorso( 150, 200, 200, 30, "Make Torso" );
    	Fl_Button but_makebat( 150, 250, 200, 30, "Make Battery" );
    	Fl_Button but_makearms( 150, 300, 200, 30, "Make Arms" );
    	Fl_Button but_makelegs( 150, 350, 200, 30, "Make Legs" );
    	Fl_Button but_return( 10, 350, 100, 30, "<-Main Menu" );
    pm_menu.end();
		//but_makepart.callback( Controller::but_makepart_cb, (void*)&shop );
    	//but_makemodel.callback( Controller::but_makemodel_cb, &pm_menu );
		//but_viewparts.callback( Controller::but_viewparts_cb, &pm_menu );
		//but_viewmodels.callback( Controller::but_viewmodels_cb, &pm_menu );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    pm_menu.show();
	Fl::run();
}

void make_model(Shop& shop) {
	int i;
	Fl_Window pm_menu( 500,500,"Model Creation" );
    pm_menu.begin();
		Fl_Text_Display text_welcome(250, 50, 0, 0, "What parts would you like to use?");
    	Fl_Choice* choice_head = new Fl_Choice( 150, 100, 200, 30, "Choose Head" );
			//vector<Head> heads = shop.heads();
			/*for(i=0; i<(int)shop.heads().size(); i++) {
				choice_head->add(shop.heads()[i].name().c_str());
			}*/
    	Fl_Choice but_maketorso( 150, 150, 200, 30, "Choose Torso" );
    	Fl_Choice but_makebat( 150, 200, 200, 30, "Choose Battery" );
    	Fl_Choice but_makearms( 150, 250, 200, 30, "Choose Arms" );
    	Fl_Choice but_makelegs( 150, 300, 200, 30, "Choose Legs" );
		Fl_Button but_finish( 150, 300, 200, 30, "Create this Model" );
    	Fl_Button but_return( 10, 400, 100, 30, "<-Main Menu" );
    pm_menu.end();
		//but_makepart.callback( Controller::but_makepart_cb, (void*)&shop );
    	//but_makemodel.callback( Controller::but_makemodel_cb, &pm_menu );
		//but_viewparts.callback( Controller::but_viewparts_cb, &pm_menu );
		//but_viewmodels.callback( Controller::but_viewmodels_cb, &pm_menu );
		but_return.callback( Controller::mm_cb, (void*)&shop);
    pm_menu.show();
	Fl::run();
}

void Controller::but_makemodel_cb(Fl_Widget* o, void* shop) {
	Fl_Button* b=(Fl_Button*)o;
	make_model((Shop&) shop);	
}

void Controller::but_makepart_cb(Fl_Widget* o, void* shop) {
	Fl_Button* b=(Fl_Button*)o;
	make_part((Shop&) shop);
}

void Controller::mm_cb(Fl_Widget* o, void* shop) {
	Fl_Button* b=(Fl_Button*)o;
	main_menu((Shop&) shop);
}

void Controller::but_pm_cb(Fl_Widget* o, void* shop) {
	Fl_Button* b=(Fl_Button*)o;
	pm_menu((Shop&) shop);
}

void Controller::but_bc_cb(Fl_Widget* o, void* shop) {
	Fl_Button* b=(Fl_Button*)o;
	bc_menu((Shop&) shop);
}

void Controller::but_sa_cb(Fl_Widget* o, void* shop) {
	Fl_Button* b=(Fl_Button*)o;
	sa_menu((Shop&) shop);
}

void Controller::but_pb_cb(Fl_Widget* o, void* shop) {
	Fl_Button* b=(Fl_Button*)o;
	pb_menu((Shop&) shop);
}

void main_menu(Shop& shop) {
	Fl_Window main_menu( 500,400,"Robbie Robot Shop" );
	//windows->add(&main_menu);
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

void Controller::gui() {
	main_menu(Controller::shop);
}


/*
void Controller::execute_cmd(int cmd) {
	switch(cmd) {
	    case MENU_SHOW_MENU:
	        main_menu();
	        break;
	    case MENU_LIST_ORDERS: 
	        cout << "Orders" << endl;
	        cout << "------" << endl;
	        for (Order o: shop.orders()) cout << o << endl;
	        break;
	    case MENU_LIST_PEOPLE: 
	        cout << "Customers" << endl;
	        cout << "---------" << endl;
	        for (Customer c: shop.customers()) cout << c << endl;
	        cout << endl;
	        cout << "Sales Associates" << endl;
	        cout << "----------------" << endl;
	        for (Sales_associate s: shop.sales_associates()) cout << s << endl;
	        cout << endl;
	        break;
	    case MENU_LIST_MODELS:
	        cout << "Robot Models" << endl;
	        cout << "------------" << endl;
	        for (Robot_model r: shop.models()) cout << r << endl;
	        break;
  	  case MENU_LIST_PARTS:
    	    cout << "Torsos" << endl;
    	    cout << "------" << endl;
    	    for (Torso t: shop.torsos()) cout << t << endl;
    	    cout << endl;
    	    cout << "Arms" << endl;
    	    cout << "----" << endl;
    	    for (Arm a: shop.arms()) cout << a << endl;
    	    cout << endl;
    	    cout << "Heads" << endl;
    	    cout << "-----" << endl;
    	    for (Head h: shop.heads()) cout << h << endl;
    	    cout << endl;
    	    cout << "Locomotors" << endl;
    	    cout << "----------" << endl;
    	    for (Locomotor l: shop.locomotors()) cout << l << endl;
    	    cout << endl;
    	    cout << "Batteries" << endl;
    	    cout << "---------" << endl;
    	    for (Battery b: shop.batteries()) cout << b << endl;
    	    cout << endl;
    	    break;
    	case MENU_CREATE_ORDER:
    	    shop.create_order(
    	        get_string("Order number?"),
    	        get_string("Date of sale?"),
    	        get_model("Select Robot Model by index?"),
    	        get_customer("Select Customer by index?"),
    	        get_sa("Select Sales Associate by index?")
    	    );
    	    break;
    	case MENU_CREATE_CUSTOMER:
    	    shop.create_customer(
    	        get_string("Customer name?"),
    	        get_string("Customer number?")
    	    );
    	    break;
    	case MENU_CREATE_SA:
    	    shop.create_sales_associate(
    	        get_string("Sales Associate name?"),
    	        get_string("Employee number?")
    	    );
    	    break;
    	case MENU_CREATE_MODEL:
    	    shop.create_model(
    	        get_string("Model name?"),
    	        get_string("Model number?"),
    	        get_double("Price?"),
    	        get_torso("Torso?"),
    	        get_head("Head?"),
    	        get_arm("Left arm?"),
    	        get_arm("Right arm?"),
    	        get_locomotor("Locomotor?"),
    	        get_battery("Battery 1?"),
    	        get_battery("Battery 2?"),
    	        get_battery("Battery 3?")
    	    );
    	    break;
    	case MENU_CREATE_TORSO:
    	    shop.create_torso(
    	        get_string("Name?"),
    	        get_string("Part Number?"),
    	        get_double("Weight?"),
    	        get_double("Cost?"),
    	        get_int("Number of battery slots?"),
    	        get_string("Description?")
    	    );
    	    break;
    	case MENU_CREATE_ARM:
    	    shop.create_arm(
    	        get_string("Name?"),
    	        get_string("Part Number?"),
    	        get_double("Weight?"),
    	        get_double("Cost?"),
    	        get_int("Max power consumed (W)?"),
    	        get_string("Description?")
    	    );
    	    break;
    	case MENU_CREATE_HEAD:
    	    shop.create_head(
    	        get_string("Name?"),
    	        get_string("Part Number?"),
    	        get_double("Weight?"),
    	        get_double("Cost?"),
    	        get_string("Description?")
    	    );
    	    break;
    	case MENU_CREATE_LOCOMOTOR:
    	    shop.create_locomotor(
    	        get_string("Name?"),
    	        get_string("Part Number?"),
    	        get_double("Weight?"),
    	        get_double("Cost?"),
    	        get_int("Max power consumed (W)?"),
    	        get_int("Max speed (mph)?"),
    	        get_string("Description?")
    	    );
    	    break;
    	case MENU_CREATE_BATTERY:
    	    shop.create_battery(
    	        get_string("Name?"),
    	        get_string("Part Number?"),
    	        get_double("Weight?"),
    	        get_double("Cost?"),
    	        get_int("Max energy stored (kWh)?"),
    	        get_string("Description?")
    	    );
    	    break;
    	case MENU_EXIT:
    	    break;
    	default:
    	    cout << "Invalid command" << endl;
    	    break;
	}
}	
*/
