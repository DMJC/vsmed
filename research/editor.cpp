#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct speech
{
	string name;
	string text;
	string wav_file;
};

struct conversation
{
	speech speeches; //or linked list.
};

/*void class mission {


};*/


class campaign {
	public:
	void campaign_new()
	{
	string filename;
	cout << "Please enter a filename" << endl;
	cin >> filename;
	ofstream mission_file;
	mission_file.open (filename, ios::out );
	mission_file << "<mission>" << endl;
	mission_file << "\t<settings>" << endl;
	mission_file << "\t\t<origin  planet=\"earth\" x=\"0000\" y=\"100\" z=\"000.0\"/>" << endl;
	mission_file << "\t</settings>" << endl << endl;;
	mission_file << "\t<variables>" << endl;
	mission_file << "\t\t<var name=\"credits\" value=\"3000\"/>" << endl;
	mission_file << "\t\t<var name=\"defaultplayer\" value=\"blue\"/>" << endl;
	mission_file << "\t\t<var name=\"mission_name\" value=\"Privateer Mission\" />" << endl;
	mission_file << "\t\t<var name=\"difficulty\" value=\".05\"/><!--good starting difficulty here-->" << endl;
	mission_file << "\t\t<var name=\"system\" value=\"Gemini/Troy\" />" << endl;
	mission_file << "\t\t<var name=\"description\" value=\"" << "Welcome to the Wing Commander: Privateer mod of Vega Strike." << "\" />" << endl;
	mission_file << "\t\t<var name=\"savegame\" value=\"explore_wcuniverse\" />" << endl;
	mission_file << "\t</variables>" << endl;
	mission_file << "\t<flightgroups>" << endl;
	mission_file << "\t\t<flightgroup name=\"Privateer\" faction=\"privateer\" type=\"tarsus.begin\" ainame=\"default\" waves=\"1\" nr_ships=\"1\">" << endl;
	mission_file << "\t\t\t<pos x=\"18068.451\" y=\"-60.189\" z=\"-371.339\" />" << endl;
	mission_file << "\t\t\t<rot x=\"180.0\" y=\"180.0\" z=\"180.0\"/>" << endl;
	mission_file << "\t\t\t<order order=\"tmptarget\" target=\"omikron\"/>" << endl;
	mission_file << "\t\t\t<order priority=\"0\" order=\"superiority\" target=\"enemy\"/>" << endl;
	mission_file << "\t\t\t<order priority=\"1\" order=\"bomber\" target=\"omikron\"/>" << endl;
	mission_file << "\t\t\t<order priority=\"2\" order=\"escort\" target=\"blue\"/>" << endl;
	mission_file << "\t\t</flightgroup>" << endl;
	mission_file << "\t</flightgroups>" << endl;
	mission_file << "<python>" << endl;
	mission_file << "from privateer import privateer" << endl;
	mission_file << "my_obj=privateer(3000,5000,500,3,2,.6,.25,.1,850000,2000)" << endl;
	mission_file << "</python>" << endl;
	mission_file << "</mission>" << endl;
	}
};

/*create_conversation*/int main(){
	campaign test;
	test.campaign_new();
	string filename;
	cout << "Please enter a filename" << endl;
	cin >> filename;
	ofstream mission_file;
	mission_file.open (filename, ios::out );
	cout << "What type of mission would you like to create?" << endl;
	int mission_type;
	cin >> mission_type;
	
	if (mission_type == 1){
		cout << "Privateer style" << endl;
		cout << "Please enter a character's name" << endl;
		speech new_speech;
		cin >> new_speech.name;
		cin.ignore();
		cout << "Please enter a character's speech text" << endl;
		getline (std::cin,new_speech.text);
		cout << "Please enter a wave filename" << endl;
		cin >> new_speech.wav_file;
 		mission_file << "\"Name: " << new_speech.name << "\"" << endl;
 		mission_file << "\"Speech: " << new_speech.text << "\"" << endl;
 		mission_file << "\"Wave: " << new_speech.wav_file << "\"" << endl;

	}else{
		cout << "Wing Commander style" << endl;
		cout << "Please enter a character's name" << endl;
		speech new_speech;
		cin >> new_speech.name;
		cin.ignore();
		cout << "Please enter a character's speech text" << endl;
		getline (std::cin,new_speech.text);
		cout << "Please enter a wave filename" << endl;
		cin >> new_speech.wav_file;
 		mission_file << "\"Name: " << new_speech.name << "\"" << endl;
 		mission_file << "\"Speech: " << new_speech.text << "\"" << endl;
 		mission_file << "\"Wave: " << new_speech.wav_file << "\"" << endl;

	mission_file.close();
	}
	return 0;
}



