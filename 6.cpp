#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string text = "�����, ���, ��������, �����, ����";

	string word;
	for (int i = 0;i<text.length();i++){
		if (text[i] != ' '&&text[i] != ','&& text[i] != '.'&& text[i] != '!'&& text[i] != '?') {
			word+=text[i];
		}
		else {
			if (word.length() > 0 && (word[0] == '�' or word[0]== '�')) {
				cout<<word<<endl;
				 
			}
			word = "";
		}
		
	}
	return 0;
}

 HEAD
// Change from new-feature branch

// Change from hotfix branch
 hotfix
