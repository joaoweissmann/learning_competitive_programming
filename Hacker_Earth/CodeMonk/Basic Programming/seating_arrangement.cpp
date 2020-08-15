#include <iostream>
#include <string>

using namespace std;

int main()
{
	int lines, seatin, seatout;
    //char seattype[2];
    string seattype;

    cin >> lines;
    for (int i=0; i<lines; i++){
        cin >> seatin;
        
        if (seatin%12==0){
            seatout = 1 + ((seatin/12)-1)*12;
        } else {
            seatout = (13-(seatin%12)) + (seatin/12)*12;
        }

        if (seatin%12==1 || seatin%12==0 || seatin%12==6 || seatin%12==7){
            //seattype[0] = 'W';
            //seattype[1] = 'S';
            seattype = "WS";
        } else if (seatin%12==2 || seatin%12==11 || seatin%12==5 || seatin%12==8) {
            //seattype[0] = 'M';
            //seattype[1] = 'S';
            seattype = "MS";
        } else {
            //seattype[0] = 'A';
            //seattype[1] = 'S';
            seattype = "AS";
        }
        cout << seatout << " " << seattype << endl;
    }

	return 0;
}