#include <iostream>
#include <fstream>
#include <string.h>

using std::cin;
using std::cout;
using std::string;
using std::ifstream;
using std::ofstream;
using std::endl;

int lineCount(string fIn)
{
    int i = 0;
    ifstream A;
    A.open(fIn);

    string temp;
    while(getline(A, temp))
    {
       i++;
    }
    A.close();

    return i;
}

int main()
{
    cout << "   ____  __________  ______" << endl;
    cout << "  / __ \\/ ____/ __ \\/ ____/" << endl;
    cout << " / / / / / __/ /_/ / __/   " << endl;
    cout << "/ /_/ / /_/ / _, _/ /___  " << endl;
    cout << "\\____/\\____/_/ |_/_____/ " << endl;

    cout << "(c) 2022 Nathan Gomez." <<  endl;
	cout << "Licenced under the GNU General Public License" << endl;
    cout << endl << endl;
    cout << "Welcome to the Operation-a G-code Reviser and Editor!" << endl;
    cout << endl;
    cout << "This program Requires 2 files: " << endl;
    cout << "\tYour input file (3D printing .gcode file)" << endl;
    cout << "\tData.txt (this is included within the same directory as this executable)" << endl;
    cout << endl;
    cout << "These files must be inside the same directory (folder) as this program in order to operate" << endl;
    cout << "After executing, a new gcode file will be created using the name of your input file but with" << endl;
    cout << " '_Op-A' appended to it." << endl;
    cout << "Each line within Data.txt will be added to the start of each new layer of your input file as" << endl;
    cout << "text for the LCD screen of the printer to display" << endl;
    cout << "You may write anything you want inside of this file" << endl;
    cout << endl << endl;
    cout << "Please enter the name of the input file without the file extension: ";
    string inFile;
    cin >> inFile;


    string outFile = inFile + "_Op-A.gcode";
    inFile = inFile + ".gcode";
    string dataFile = "Data.txt";

    cout << endl;
    cout << "Reading file: " << inFile << endl;
    int lines = lineCount(inFile);
    if(lines == 0)
    {
        cout << "ERROR: file is empty" << endl;
        return 1;
    }

    ifstream A;
    ofstream B;
    ifstream C;
    A.open(inFile);
    B.open(outFile);
    C.open(dataFile);


    int j = 0;
    cout << "\tNumber of lines: " << lines;
    cout << endl << endl;

    cout << "Please enter GCODE command that corresponds with your target printer" << endl;
    cout << "The table below includes LCD display commands" << endl << endl;
    cout << "Printer         Command" << endl;
    cout << "-----------------------" << endl;
    cout << "Taz Pro         M117   " << endl;
    cout << "Taz Workhorse   M117   " << endl;

    cout << endl;
    cout << "Command: ";
    string command;
    cin >> command;
    cout << endl << endl;

    cout << "Running parser";

    int curLine = 0;
    string temp;
    while(getline(A, temp))
    {
        curLine++;
        B << temp << "\n";
        string temp2 = temp.substr(0, 7);
        if(temp2 == ";LAYER:")
        {
            string dataString;
            getline(C, dataString);
            if(dataString != "")
            {
                B << command << " " << dataString << "           ; Added by OGRE aka Operation-A ;)" << endl;
                j++;
            }
        }
        if(curLine%25000 == 0)
        {
            cout << ".";
        }
    }
    cout << endl << endl;

    A.close();
    B.close();
    C.close();

    cout << "Process Complete!" << endl << endl;
    cout << "Gcode has been written to the file: " << outFile << endl;
    cout << j << " lines have been added" << endl << endl;

    cout << endl;
    cout << endl;
    cout << "Program execution complete. You may now close this window." << endl;

    string deadbeef;
    cin >> deadbeef;

    return 0;
}
