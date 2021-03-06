#include "../include/gui.h"
#include "../include/display.h"
#include <gtkmm.h>
#include <gtkmm/glarea.h>
#include <GL/gl.h>
#include <iostream>


void gui::make_gui()
{
	cout << "Opening Glade File: " << endl;
	auto app = Gtk::Application::create("VSFRED");

	Glib::RefPtr<Gtk::Builder> builder = 	Gtk::Builder::create_from_file("vsfred.gtkbuilder");

	cout << "File opened, now testing contents: " << endl;

	Gtk::Window* main_window = nullptr;
	Gtk::Window* ship_editor_window = nullptr;
	Gtk::Grid* view_grid = nullptr;
		builder->get_widget("main_window", main_window);
		builder->get_widget("ship_editor_window", ship_editor_window);
		builder->get_widget("main_view_grid", view_grid);

		Gtk::GLArea view;
		view.set_hexpand();
		view.set_vexpand();
		view_grid->add(view);
		cout << "Display Added to Grid" << endl;

	main_window->show();
	view_grid->show();
	view.show();

	int show_ship_editor = 0;

	if (show_ship_editor == 0){
		ship_editor_window->show();
	}
	app->run(*main_window);
}


gui::~gui()
{

}


