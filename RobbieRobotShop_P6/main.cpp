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
#include "shop.h"

int main() {
  Shop shop{"Robbie Robot Shop"};
  Controller controller(shop);
	shop.create_head("Example head 1", "10001", 42.0, 100.0, "An example head weighing 42 lbs and worth 100$.");
	shop.create_head("Example head 2", "10002", 200.0, 350.75, "Another example head weighing 200 lbs and worth 350.75$.");
//	Torso torso_ex1 = Torso();
//	Torso torso_ex2 = Torso();
	Battery bat_ex1 = Battery("Example battery 1", "30001", 10.0, 50.0, 120, "battery");
//	Battery bat_ex2 = Battery();
//	Battery bat_ex3 = Battery();
	Arm arm_ex1 = Arm("Example arm 1", "20001", 15.0, 35.0, 50, "An example arm weighing 15 lbs and worth 35$. Draws 50kwH. Descriptions are unique.");
	Arm arm_ex2 = Arm("Example arm 2", "20002", 25.0, 80.0, 75, "A different example arm weighing 25 lbs and worth 80$. Draws 75kwH. Descriptions are generated by the user at runtime, not the program.");
//	Locomotor leg_ex1 = Locomotor();
//	Locomotor leg_ex2 = Locomotor();
  controller.gui();
}
