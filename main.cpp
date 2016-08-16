#include <iostream>
#include <gtkmm.h>

#include "include/preferences.h"
#include "include/mg2.h"
#include "include/scene.h"
#include "include/view.h"
#include "include/gui.h"

using namespace std;

int main(){
cout <<"Welcome to MG2 Modeller C++ Edition ;)\n";

cout <<"\nEntering Main\n" ;
	preferences prefs;
	prefs.load_preferences("preferences.ini");

	view new_view;
	new_view.create_view(PERSPECTIVE);

	scene new_scene;
	new_scene.create_scene();
	/*load the GUI*/
	gui new_gui;
	new_gui.make_gui();
return 0;
}
