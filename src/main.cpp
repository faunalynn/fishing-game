#include <iostream>
#include "../includes/Fish.hpp"

int main(void)
{
       std::vector<Dialogue> testLines;

    Dialogue d1;
    d1.speaker = "Fish";
    d1.text = "Ha... tu m'as eu...";
    testLines.push_back(d1);

    Dialogue d2;
    d2.speaker = "Fish";
    d2.text = "J'ai eu une belle vie de toute facon.";
    testLines.push_back(d2);

    Fish myFish(1, "Poisson Test", COMMON, SAD_RIVER, testLines);

    std::cout << "Nom: " << myFish.getName() << std::endl;
    std::cout << "Trouve: " << myFish.getFound() << std::endl;
    std::cout << "Ligne actuelle (avant unlock): \"" << myFish.getCurrentLine() << "\"" << std::endl;

    myFish.unlockNextLine();
    std::cout << "Ligne actuelle (apres 1er unlock): " << myFish.getCurrentLine() << std::endl;

    myFish.unlockNextLine();
    std::cout << "Ligne actuelle (apres 2e unlock): " << myFish.getCurrentLine() << std::endl;

    std::cout << "Fully unlocked? " << myFish.isFullyUnlocked() << std::endl;

    bool unlocked = myFish.unlockNextLine();
    std::cout << "Tentative de 3e unlock (devrait echouer): " << unlocked << std::endl;

    myFish.markFound();
    std::cout << "Trouve apres markFound: " << myFish.getFound() << std::endl;

    return (0);
}