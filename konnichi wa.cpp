#include <bits/stdc++.h>
using namespace std;

string KonnichiWa (string nombre , string aux);

int main(){

string name , axu ;
cout<<"ingrese un nombre: ";
getline(cin,name);

cout<<KonnichiWa( name , axu);
return 0;
}
string KonnichiWa (string nombre , string aux){
	string i , f, c;
	for(int i=0;i<nombre.size();i++){
		
		if(nombre[i]!='a'&&nombre[i]!='e'&&nombre[i]!='i'&&nombre[i]!='o'&&nombre[i]!='u'&&nombre[i]!=' '){
			aux+=nombre[i];
			if(i < nombre.size() + 1 &&nombre[i+1]!='a'&&nombre[i+1]!='e'&&nombre[i+1]!='i'&&nombre[i+1]!='o'&&nombre[i+1]!='u'&&nombre[i+1]!=' ' ){
					aux+='u';
			}
		
	}else {
            aux += nombre [i];
        }}
	
i="Konnichi Wa  "	;
f="-san";
c=i+aux+f;

return c;	
}
