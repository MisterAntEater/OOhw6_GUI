# Author:
Gabriel Comer, 1001069520

# Projecct Name: OOhw6_GUI
GUI version of Robbie Robot Shop.

# Compilation Instructions:
 - Open Terminal
 - Enter the directory labelled RobbieRobotShop_P6
 - Type 'make clean'
 - Type 'make'
 - Type './rrs'

# Use Instructions:
The program is button heavy, each button selection normally opens a new menu, with more features inside. Follows design pattern of a cli but with buttons clicks instead of text inputs. The project is currently just a GUI skeleton. The menus of all the features are implemented, however, do to memory management issues, parts and models are not created via GUI. All the Project 5 implementation (minus the cli) is still there, it just can't be used by the GUI.

# BUGS (features):
 - Windows do not close automatically. Program depends on user cleaning up after themselves (closing windows behind them as they advance through menus). This is helpful however, because it allows users to view part description via the "view parts" window while they are making a model.
