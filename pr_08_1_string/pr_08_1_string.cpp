#include <iostream>
#include <string>
using namespace std;

bool ContainsWhileLetters(const string& s) {
    const string target = "while";
    for (char ch : target) {
        if (s.find(ch) == string::npos) {
            return false;
        }
    }
    return true;
}

string ReplaceWhile(string& s)
{
    size_t pos = 0;
    while ((pos = s.find("while", pos)) != string::npos) {
        s.replace(pos, 5, "**");
        pos += 2;
    }
    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    bool containsAll = ContainsWhileLetters(str);
    cout << "All letters from 'while': " << (containsAll ? "Yes" : "No") << endl;

    string dest = ReplaceWhile(str);
    cout << "Modified string: " << str << endl;

    return 0;
}
