// Name:  Jess Myer
// Date: 9/05/2025
// Purpose: Say hello world in c++

#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
    vector<string> msg {"Hello World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

//Adding another comment to see if I can get a commit