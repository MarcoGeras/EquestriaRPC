#include <sstream>
#include <iostream>
#include <windows.h>
#include <regex>
#include <fstream>
#include <algorithm>

//Initialize Possible Properties For The Presence
std::string clientID = "000"; //change!
std::string state = "Chatting with ponies";
std::string details = "In the Manehattan"; 
std::string smallImage = "verified";
std::string largeImage = "manehattan";
std::string largeImageText = "Manehattan is a metropolitan city";
std::string smallImageText = "This pony having official program";


//Check and Set The Global Presence Variables
bool setPresenceVariables(std::string configPath)
{

    //Check Certian Variables Against The Same(?) Regex as discord
    std::string checkableValues[2] = {largeImage, smallImage};
    return true;
}

//Print Values For The Current Settings From The Config File
void printVariables()
{
	std::cout << "\nEQUESTRIA SPACE PROGRAM COLONISATION INITIALISED" << std::endl;
	std::cout << "\nHAVE A NICE DAY! (c) Jengas" << std::endl;
}

//Check If Config File Updated
bool configFileChanged(std::string configPath)
{
    std::string vars[7] = {clientID, state, details, largeImage, smallImage, smallImageText, largeImageText};
    if (setPresenceVariables(configPath))
    {
        std::string possibleUpdatedVars[7] = {clientID, state, details, largeImage, smallImage, smallImageText, largeImageText};
        for(int i = 0; i < 7; i++)
        {
            if (vars[i] != possibleUpdatedVars[i])
                return true;
        }
    }
    return false;
}








