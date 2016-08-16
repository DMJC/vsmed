#include <iostream>
#include <fstream>
using namespace std;

class briefing{
	public:
	void add_speech(string character_name, string speech_text);
	void add_speech_line(string character_name, string speech_text);
	void end_speech();

};

void briefing::add_speech (string character_name, string speech_text){
//	sandovalspeech={"intro":[
	cout << "sandovalspeech=" << "={\"" << "intro" << "\":[";
	cout << "(\"" << character_name << "\")," << "\"" << speech_text << "\"),"<< endl;
}

void briefing::add_speech (string character_name, string speech_text){
//	sandovalspeech={"intro":[
	cout << "\"" << "reject1" << "\":[";
	cout << "(\"" << character_name << "\")," << "\"" << speech_text << "\"),"<< endl;
}

void briefing::add_speech (string character_name, string speech_text){
//	sandovalspeech={"intro":[
	cout << "\"" << "reject2" << "\":[";
	cout << "(\"" << character_name << "\")," << "\"" << speech_text << "\"),"<< endl;
}

void briefing::add_speech (string character_name, string speech_text){
//	sandovalspeech={"intro":[
	cout << "\"" << "accept" << "\":[";
	cout << "(\"" << character_name << "\")," << "\"" << speech_text << "\"),"<< endl;
}

void briefing::add_speech (string character_name, string speech_text){
//	sandovalspeech={"intro":[
	cout << "\"" << "accept2" << "\":[";
	cout << "(\"" << character_name << "\")," << "\"" << speech_text << "\"),"<< endl;
}

void briefing::add_speech (string character_name, string speech_text){
//	sandovalspeech={"intro":[
	cout << "\"" << "reject2" << "\":[";
	cout << "(\"" << character_name << "\")," << "\"" << speech_text << "\"),"<< endl;
}

void briefing::add_speech (string character_name, string speech_text){
//	sandovalspeech={"intro":[
	cout << "\"" << "failure" << "\":[";
	cout << "(\"" << character_name << "\")," << "\"" << speech_text << "\"),"<< endl;
}

void briefing::add_speech (string character_name, string speech_text){
//	sandovalspeech={"intro":[
	cout << "\"" << "reminder" << "\":[";
	cout << "(\"" << character_name << "\")," << "\"" << speech_text << "\"),"<< endl;
}


void briefing::add_speech_line (string character_name, string speech_text){
	character_name = "reconsider";
	cout << "\t\t(\"" << character_name << "\")," << "\"" << speech_text << "\"),"<< endl;
}

void briefing::end_speech (){
	cout << "\t\t\"]," << endl;
}

int main(){
	briefing new_briefing;
	new_briefing.add_speech("burrows", "hey there I'm a privateer");
	new_briefing.add_speech_line("sandoval", "you son of a whore I'm going to get you!");
	new_briefing.end_speech();
	cout << "created briefing!" << endl;
return 0;
}

