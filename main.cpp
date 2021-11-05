#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

	int gold, wood, food, iron, stone, mithril, pipeweed, wine;
    int faction_details[3] = {0, 0, 0}; // faction_race faction_heir faction resource buildings
    int buildings[4] = {0, 0, 0, 0}; // farms lumber_camps mines markets 
    string faction_name, faction_race;
    string positions[] = {"First","Second","Third","Fourth","Fifth","Sixth","Seventh","Eight","Ninth","Tenth"};
    int goldmi, goldma;
    int unit_type, unit_cost, unit_amount;
    int unit_goldcost, unit_foodcost;
    
int main() {
	
	cout << "AME DAILY CALCULATOR\n";
	cout << "Enter the factions Name: ";
	cin >> faction_name;
	cout << "Enter the factions Race: \n";
	cout << "Pick one of the following and type exactly how it's provided as\n";
	cout << "Dwarves/Elves/Men/Orcs/Hobbits\n";
	cin >> faction_race;
	cout << "Enter number of farms built: ";
	cin >> buildings[0];
	cout << "Enter number of lumber camps built: ";
	cin >> buildings[1];
	cout << "Enter number of mines built: ";
	cin >> buildings[2];
	cout << "Enter number of markets built: ";
	cin >> buildings[3];
	cout << "Enter the total types of units the faction has recruited presently: ";
	cin >> unit_type;
	
	food = buildings[0] * 25;
	wood = buildings[1] * 25;
	iron = buildings[2] * 25;
	stone = buildings[2] * 25;
	goldmi = buildings[2] * 25;
	goldma = buildings[3] * 25;
	gold = goldma + goldmi;
	
	system("cls");
	
	while (unit_type > 0){
		
		int i = 0;
		
		cout << "Enter cost of the " << positions[i] << " unit: \n";
		cin >> unit_cost;
		cout << "Enter the total amount of these units: \n";
		cin >> unit_amount;
		
		unit_goldcost = unit_cost / 2;
		unit_foodcost = unit_cost / 2;
		unit_goldcost = unit_goldcost * unit_amount;
		unit_foodcost = unit_foodcost * unit_amount;
		
		unit_type = unit_type - 1;
		i = i + 1;
	} 
	
	
	if(faction_race == "Dwarves"){
		goldmi = goldmi * 2;
		cout << "Is a Dwarven Mine built? Type 1 for yes, 0 for no.\n";
		cin >> faction_details[2];
		if (faction_details[2] = 1)
		    {
			goldmi = goldmi * 2;
			iron = iron * 2;
			stone = stone * 2;
			mithril = buildings[2] * 1;
			}
	} else if(faction_race == "Elves"){
		food = food * 2;
		cout << "Are Elven Farms built? Type 1 for yes, 0 for no.\n";
		cin >> faction_details[2];
		if (faction_details[2] = 1)
		    {
			food = food * 2;
			wine = buildings[0] * 1;
			}
	} else if(faction_race == "Men"){
		goldma = goldma * 4;
		cout << "Is a merchant bank built? Type 1 for yes, 0 for no.\n";
		cin >> faction_details[2];
		if (faction_details[2] = 1)
		    {
			gold = gold * 2;
			}
	} else if (faction_race == "Orcs"){
		
		cout << "Is a orc pit built? Type 1 for yes, 0 for no.\n";
		cin >> faction_details[2];
		if (faction_details[2] = 1)
		    {
			unit_goldcost = unit_goldcost / 2;
			unit_foodcost = unit_foodcost / 2;
			}
		
		
	} else if(faction_race == "Hobbits"){
	wood = wood * 2;
		cout << "Is a merchant bank built? Type 1 for yes, 0 for no.\n";
		cin >> faction_details[2];
		if (faction_details[2] = 1)
		    {
			wood = wood * 2;
			pipeweed = buildings[1] * 1;
			} 
	}
	
	gold = gold - unit_goldcost;
	food = food - unit_foodcost;
	
	system ("cls");
	
	cout << "Faction Name:" << faction_name << "\n";
	cout << "Faction Race: " << faction_race << "\n";
	cout << "Gold: " << gold << "\n";
	cout << "Wood: " << wood << "\n";
	cout << "Food: " << food << "\n";
	cout << "Iron: " << iron << "\n";
	cout << "Stone: " << stone << "\n";
	cout << "Mithril: " << mithril << "\n";
	cout << "Pipeweed: " << pipeweed << "\n";
	cout << "Wine: " << wine << "\n";
	
	
	system ("Pause");
	return 0;
}
