/**
 * @(#) Meeting.cpp
 */


#include "Meeting.h"

void Meeting::createNewMeeting( )
{
    //new Meeting;            //Ich geh davon aus, dass das anders erstellt werden muss but idk how
}


void Meeting::setDuration( int duration )
{
    meetingDuration = duration;
}

void Meeting::setCatering( bool isCater )
{
    catering.hasCatering = isCater;
}

void Meeting::setTheme( string theme )
{
    meetingTheme = theme;
}

void Meeting::setTime( int hour, int minute )
{
    meetingHour = hour;
    meetingMinute = minute;
}

void Meeting::setEquipment( vector<bool> equipList )
{
    equipment.stuffs = equipList;
}

void Meeting::setInvites(const vector<string> inviteList){
    /*
     * Muss manuel durchgegangen werden damit ich neu hinzugefügte einladungen auf die
     *schon existierende einladungsliste pushen kann, also einfach
     * einladung.liste = inviteList geht nicht, weil da wird vorheriges mit überschrieben
     */
    
    int loop = inviteList.size();
    for(int i = 0; i < loop; i++){
        einladung.namelist.push_back(inviteList.at(i));
    }
}

void Meeting::displayMeetingInfo(){
    
    cout << endl << "The meeting about: " << endl << setw(4) << meetingTheme;
    cout << endl << "Will take place at: " << endl << setw(4) << meetingHour << ":" << meetingMinute;
    cout << endl << "Will last about: " << endl << setw(4) << meetingDuration << " minutes";
    cout << endl << "Will take place in Building: " << endl << setw(4) << room.gebaeude;
    cout << endl << "In Room: " << endl << setw(4) << room.nummer << endl;
    //Equipment
    cout << "Equipment: ";
    for(int i = 0; i < 3; i++){
        switch(i){
            case 0:
                cout << endl <<  "Projector: ";
                break;
            case 1:
                cout << endl <<  "Flipchart: ";
                break;
            case 2:
                cout << endl << "Extra Seating: ";
                break;
            default:
                cout << endl << "Error in Switch case equipment" << endl;
                break;
        }
        if(equipment.stuffs.at(i) == true){
            cout << "yes";
        } else {
            cout << "no";
        }
        
    }
    //Catering
    if(catering.hasCatering == true){
        cout << endl << endl << "Catering?: " << endl << setw(4) << "yes" << endl;
    } else {
        cout << endl << "Catering?: " << endl << setw(4) << "no";
    }
    //People Invited
    cout << endl << "People Invited: ";
    for(int i = 0; i < einladung.namelist.size(); i++){
        cout << endl << einladung.namelist.at(i) << endl;
    }
        
}

void Meeting::setRoom(int meetingBuilding, int meetingRoom){
    room.gebaeude = meetingBuilding;
    room.nummer = meetingRoom;
}

