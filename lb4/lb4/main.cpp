#include <iostream>
#include <string>

using namespace std;

class Rarity {
public:
    int rarityImprovementType;
    int rarityNumber;
    string rarityName;
    string rarityType;
    bool rarityAvailability;
};
struct RarityItem {
public:
    float itemDropChance;
    string itemName;
    string itemType;
    int itemNumber;
};
class showInfo {
public:
    void rarityInfo(Rarity ra) {
        cout << "Name treasure: " + ra.rarityType + " " + ra.rarityName << endl;
        if (ra.rarityAvailability == true) {
            cout << "Number: " << ra.rarityNumber << endl;
            cout << "Rarity improvement type is: " << ra.rarityImprovementType << endl;
        }
        else {
            cout << "You have no rare items!(((" << endl;
        }
    }
    void itemInfo(RarityItem ri) {
        cout << "Name item: " + ri.itemName << endl;
        cout << "Type: " + ri.itemType << endl;
        cout << "Chance: " << ri.itemDropChance << "%" << endl;
        cout << "Number item: " << ri.itemNumber << endl;
    }
};
int main() {

    Rarity ra;
    ra.rarityType = "Immortal";
    ra.rarityName = "Eagle";
    ra.rarityImprovementType = 7;
    ra.rarityAvailability = true;
    ra.rarityNumber = 4;

    RarityItem ri;
    ri.itemType = "Tresuare";
    ri.itemDropChance = 0.33;
    ri.itemName = "Crust";
    ri.itemNumber = 3;

    showInfo show;
    show.rarityInfo(ra);
    show.itemInfo(ri);
    return 0;
}
