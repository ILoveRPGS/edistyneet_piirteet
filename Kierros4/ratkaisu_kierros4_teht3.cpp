#include <iostream>
#include <fstream>
using namespace std;


int main(){
    fstream html;
    html.open("index.html", ios::out);
    if(html.fail()){
        cout << "File not found" << endl;
        return 0;
    }
    string nimi;
    cout << "Anna nimesi: ";
    getline(cin, nimi);
    string kertomus;
    cout << "Kirjoita jotain itsestäsi: ";
    getline(cin, kertomus);
    html << "<!DOCTYPE html>" << endl;
    html << "<html>" << endl;
    html << "<head>" << endl;
    html << "</head>" << endl;
    html << "<body>" << endl;
    html << "<center>" + nimi + "</center>" << endl;
    html << "<hr />" + kertomus + "<hr />" << endl;
    html << "</body>" << endl;
    html << "</html>" << endl;
    html.close();
    

    
    

    return 0;
}