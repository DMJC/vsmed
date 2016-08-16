vsfred:
	clang++ -std=c++11 `pkg-config --libs --cflags gtkmm-3.0` main.cpp src/gui.cpp src/preferences.cpp src/display.cpp src/view.cpp src/scene.cpp -o vsfred 

clean:
	rm vsfred
