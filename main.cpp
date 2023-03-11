
#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>

/*
stuwing = the string you wanted to replace
seauwch = the words you wanted to replace
replawce = what you wanted to replace with

*/
void OwOingString(std::string* stuwing, std::string seauwch, 
    std::string replawce, int pwiowity = 0) {
    int eofChecker = stuwing->find(seauwch);

    while (eofChecker != EOF)
    {
        stuwing->replace(eofChecker, seauwch.size(), replawce);
        eofChecker = stuwing->find(seauwch, eofChecker + replawce.size());
    }

}

/*
Main function of the program. (very useful info!)
*/
int main()
{
    //input string
    std::string wowowds;

    std::getline(std::cin, wowowds);
    //--uwuifyification--

    //sywwabwes and wowrds
    OwOingString(&wowowds, "the ", "da ");
    OwOingString(&wowowds, "th", "d");

    OwOingString(&wowowds, "ough ", "oe ");

    OwOingString(&wowowds, "you ", "yu "); //wait do I use yu or chu here i must know

    OwOingString(&wowowds, "are ", "arw ");
    
    OwOingString(&wowowds, "thing", "ding");

    OwOingString(&wowowds, "ot", "at");
    OwOingString(&wowowds, "on", "an");

    OwOingString(&wowowds, "one", "wan");

    OwOingString(&wowowds, "what", "wat");
    OwOingString(&wowowds, "cheese", "chesels");

    OwOingString(&wowowds, "r", "w");
    OwOingString(&wowowds, "l", "w");
    OwOingString(&wowowds, "o ", "aw ");
    OwOingString(&wowowds, "f ", "fw ");

    //muwti-wowd
    OwOingString(&wowowds, "t of ", "tta ");
 
    //OwOs and UwUs
    OwOingString(&wowowds, "oo", "OwO");
    //OwOingString(&wowowds, "o", "OwO");

    OwOingString(&wowowds, "ue", "UwU");
    OwOingString(&wowowds, "uu", "UwU");
    //OwOingString(&wowowds, "u", "UwU");

    //--uwuifyification--
    
    std::cout << wowowds << '\n';
    size_t strngLen{ wowowds.size() };
    HGLOBAL hg = GlobalAlloc(GMEM_MOVEABLE, strngLen);
    memcpy(GlobalLock(hg), (wowowds.c_str()), strngLen);
    GlobalUnlock(hg);
    OpenClipboard(NULL);
    EmptyClipboard();
    SetClipboardData(CF_TEXT, hg);
    CloseClipboard();
    return 0;
}
