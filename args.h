#include <vector>
#include <cctype>
#include <string>
#include <map>

using namespace std;

/*To put in int main()
vector<string> cmd=getWords(argc,argv);
print(cmd);
*/

void args()
{
    cout <<"getWords()"<<endl;
    cout <<"print()"<<endl;
    cout <<"lower()"<<endl;
    cout <<"strToInt()"<<endl;
}

vector<string> getWords(int argc, char *argv[])
{
	string word;
	vector <string> l;  //latin
	for(int i=1;i<argc;i++) {
		l.push_back(argv[i]);
	}
	return l;
}

/*string getWords(int argc, char *argv[])
{
	return argv[i];
	
}*/

template<typename T>
void print(T a)
{
    cout <<a<<endl;
}
template<typename T>
void print(vector<T> a, string b=" ")
{
    vector<string>::iterator it = a.begin();
    while(it != a.end()){
        cout << *it << b;//
        it++;
    }
    cout << endl;
}

vector <string> lower(vector<string>&a)
{
    for(int i=0;i<a.size();i++){
        string l=a[i],l1="";
        for(int j=0;j<l.length();j++){
            l1+=tolower(l[j]);
        }
        a[i]=l1;
    }
    return a;
}

int strToInt(string text)
{
	return atoi(text.c_str());
}
