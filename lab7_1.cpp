#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
string text,textRe;
    cout << "Input text: ";
    cin >> text;
    textRe = func1(text);
    cout << "Reversed text: " << textRe;
      
      if(func2(text)==func2(textRe) && func3(text)==func3(textRe)){
                cout << "\nPalindrome: Yes";
            }else{
                cout << "\nPalindrome: No";
                }
    return 0;
}
