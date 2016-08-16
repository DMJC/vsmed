#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//Campaign Editor
class campaign {
	public:
	string name;
	string description;
//	universal_variables;
//	linked_list nodes;
	void delete_node();
};

enum mis_type {MISSION, CUTSCENE};

class node {
	public:
	mis_type type; //mission/cutscene
	string file; //mission/cutscene
	node *previous_mission;
//	win_condition;
		node *win_next_mission;
//	lose_condition;
		node *lose_next_mission;
};

int main(){
	campaign new_campaign;
	cout << "Please enter a campaign name" << endl;
	cin >> new_campaign.name;

	char stop_loop = 'y';
	cout << "Would you like to add a mission to this campaign? y/n" << endl;
	cin >> stop_loop;
	while (stop_loop != 'n'){
		node new_node;
		cout << "Please enter a mission/cutscene type" << endl;
		char mistype;
		cin >> mistype;
		if( mistype == 'm' ) {
			new_node.type = MISSION;
		}else{
			new_node.type = CUTSCENE;
		}
		cout << "Please enter a mission/cutscene file" << endl;
		cin >> new_node.file;
		cout << "Would you like to add a mission to this campaign? y/n" << endl;
		cin >> stop_loop;
	}



	cout << "campaign created!" << endl;
return 0;
}
