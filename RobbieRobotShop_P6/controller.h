#ifndef __CONTROLLER_H
#define __CONTROLLER_H 201610
 
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

#include "head.h"
#include "arm.h"
#include "locomotor.h"
#include "battery.h"
#include "torso.h"
#include "model.h"
#include "customer.h"
#include "sa.h"
#include "order.h"
#include "shop.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Choice.H>

using namespace std;

class Controller {
  public:
    Controller (Shop& p_shop) : shop{p_shop} { }

    //void main_menu();
	//void pm_menu(Fl_Window* prev);
	//void bc_menu(Fl_Window* prev);
	//void sa_menu(Fl_Window* prev);
	//void pb_menu(Fl_Window* prev);

    string get_string(string prompt);
    int get_int(string prompt);
    double get_double(string prompt);

    Customer& get_customer(string prompt);
    Sales_associate& get_sa(string prompt);
    Robot_model& get_model(string prompt);
    Torso& get_torso(string prompt);
    Arm& get_arm(string prompt);
    Head& get_head(string prompt);
    Locomotor& get_locomotor(string prompt);
    Battery& get_battery(string prompt);

    void gui();

	//callbacks
	static void but_pm_cb(Fl_Widget* o, void* shop);
	static void but_bc_cb(Fl_Widget* o, void* shop);
	static void but_sa_cb(Fl_Widget* o, void* shop);
	static void but_pb_cb(Fl_Widget* o, void* shop);

	static void but_makepart_cb(Fl_Widget* o, void* shop);
	static void but_makemodel_cb(Fl_Widget* o, void* shop);
	static void but_viewparts_cb(Fl_Widget* o, void* shop);
	static void but_viewmodels_cb(Fl_Widget* o, void* shop);
	static void but_viewcustomers_cb(Fl_Widget* o, void* shop);
	static void but_viewassociates_cb(Fl_Widget* o, void* shop);
	static void but_addcustomer_cb(Fl_Widget* o, void* shop);
	static void but_addassociate_cb(Fl_Widget* o, void* shop);
	static void but_createorder_cb(Fl_Widget* o, void* shop);
	static void but_vieworders_cb(Fl_Widget* o, void* shop);

	static void mm_cb(Fl_Widget* o, void* shop);
  private:
    Shop& shop;
};
#endif
