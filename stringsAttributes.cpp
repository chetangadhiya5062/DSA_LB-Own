#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1) Basic inspection
    string s = "Jay Swaminarayan";
    cout << "Original string: " << s << "\n";
    cout << "Length: "        << s.length() << "\n";
    cout << "Is empty? "      << boolalpha << s.empty() << "\n";
    cout << "Char at 0: "     << s.at(0)   << "\n";
    cout << "Front: "         << s.front() << "\n";
    cout << "Back: "          << s.back()  << "\n\n";

    // 2) Append
    string a1 = "Love";
    string a2 = "Babbar";
    cout << "Before append:\n  a1 = " << a1 << "\n  a2 = " << a2 << "\n";
    a1.append(a2);
    cout << "After append:\n  a1 = " << a1 << "\n\n";

    // 3) Erase
    string e = "This is a car";
    cout << "Before erase: " << e << "\n";
    e.erase(5, 3);  // remove "is "
    cout << "After erase:  " << e << "\n\n";

    // 4) Insert
    string ins = "Love Babbar";
    cout << "Before insert: " << ins << "\n";
    ins.insert(5, "Kumar ");
    cout << "After insert:  " << ins << "\n\n";

    // 5) push_back / pop_back
    string pp = "love";
    cout << "Original pp: " << pp << "\n";
    pp.push_back('R');
    cout << "After push_back: " << pp << "\n";
    pp.pop_back();
    cout << "After pop_back:  " << pp << "\n\n";

    // 6) find
    string f1 = "yaar tera super star desi kalakar";
    string f2 = "star";
    cout << "Searching \"" << f2 << "\" in f1... ";
    if (f1.find(f2) != string::npos)// string shows the class. or header. 
    //it is the another method to use the attributes form not 
    //implemented header file in code file.
        cout << "Found!\n\n";
    else
        cout << "Not found\n\n";

    // 7) compare
    string c1 = "babbar";
    string c2 = "Love";
    cout << "Compare \"" << c1 << "\" vs \"" << c2 << "\": ";
    if (c1.compare(c2) == 0)
        cout << "Matching\n\n";
    else
        cout << "Not matching\n\n";

    // 8) substr
    string sub = "this is a car, big daddy of all SUVs";
    cout << "Original: " << sub << "\n";
    cout << "substr(10, 3): " << sub.substr(10, 3) << "\n";
    cout << "substr(19, 5): " << sub.substr(19, 5) << "\n";

    return 0;
}
