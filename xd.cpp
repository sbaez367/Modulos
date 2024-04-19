#include <iostream>
#include <string>

using namespace std;

int main (){
/*
string palabra = "Hola Mundo ";

cout<< "con length devuelve " << palabra.length() << endl;

cout<< "con size devuelve " << palabra.size() << endl;
*/
/*
string userName = "fdkhj";
/*
if (userName.empty()){
  cout<< "sos re boludo";
}else{
  cout<< "hola " << userName << endl;
}
*/
/*
cout<< "Esta vacio userName?? " <<(userName.empty() ? "sos re boludo" : "hola ") << userName;
*/

string fraseIncompleta = "Hola me llamo dante orsetti y simon baez es re boludo ";
/*
fraseIncompleta.append("Mundo");
cout << fraseIncompleta;
*/
fraseIncompleta.insert(fraseIncompleta.length(), "y pelotudo");
cout << fraseIncompleta;
return 0;
}

