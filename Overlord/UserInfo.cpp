#include "pch.h"
#include <string>
#include <iostream>

std::string GetTextFromUser(std::string x) {
	for (int i = 0; i < x.length(); ++i) {
		x[i] = toupper(x[i]);
	}
	return x;
}

int GetNumbersFromUser(std::string x) {
	int num_input = std::stoi(x);
	return num_input;
}

void greeting() {
	std::cout << "Welcome, Brave Soldier, to \n\n";
	std::cout << "\n     OOOOOOOOO     VVVVVVVV           VVVVVVVVEEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRRR   LLLLLLLLLLL                  OOOOOOOOO     RRRRRRRRRRRRRRRRR   DDDDDDDDDDDDD        \n   OO:::::::::OO   V::::::V           V::::::VE::::::::::::::::::::ER::::::::::::::::R  L:::::::::L                OO:::::::::OO   R::::::::::::::::R  D::::::::::::DDD     \n OO:::::::::::::OO V::::::V           V::::::VE::::::::::::::::::::ER::::::RRRRRR:::::R L:::::::::L              OO:::::::::::::OO R::::::RRRRRR:::::R D:::::::::::::::DD   \nO:::::::OOO:::::::OV::::::V           V::::::VEE::::::EEEEEEEEE::::ERR:::::R     R:::::RLL:::::::LL             O:::::::OOO:::::::ORR:::::R     R:::::RDDD:::::DDDDD:::::D  \nO::::::O   O::::::O V:::::V           V:::::V   E:::::E       EEEEEE  R::::R     R:::::R  L:::::L               O::::::O   O::::::O  R::::R     R:::::R  D:::::D    D:::::D \nO:::::O     O:::::O  V:::::V         V:::::V    E:::::E               R::::R     R:::::R  L:::::L               O:::::O     O:::::O  R::::R     R:::::R  D:::::D     D:::::D\nO:::::O     O:::::O   V:::::V       V:::::V     E::::::EEEEEEEEEE     R::::RRRRRR:::::R   L:::::L               O:::::O     O:::::O  R::::RRRRRR:::::R   D:::::D     D:::::D\nO:::::O     O:::::O    V:::::V     V:::::V      E:::::::::::::::E     R:::::::::::::RR    L:::::L               O:::::O     O:::::O  R:::::::::::::RR    D:::::D     D:::::D\nO:::::O     O:::::O     V:::::V   V:::::V       E:::::::::::::::E     R::::RRRRRR:::::R   L:::::L               O:::::O     O:::::O  R::::RRRRRR:::::R   D:::::D     D:::::D\nO:::::O     O:::::O      V:::::V V:::::V        E::::::EEEEEEEEEE     R::::R     R:::::R  L:::::L               O:::::O     O:::::O  R::::R     R:::::R  D:::::D     D:::::D\nO:::::O     O:::::O       V:::::V:::::V         E:::::E               R::::R     R:::::R  L:::::L               O:::::O     O:::::O  R::::R     R:::::R  D:::::D     D:::::D\nO::::::O   O::::::O        V:::::::::V          E:::::E       EEEEEE  R::::R     R:::::R  L:::::L         LLLLLLO::::::O   O::::::O  R::::R     R:::::R  D:::::D    D:::::D \nO:::::::OOO:::::::O         V:::::::V         EE::::::EEEEEEEE:::::ERR:::::R     R:::::RLL:::::::LLLLLLLLL:::::LO:::::::OOO:::::::ORR:::::R     R:::::RDDD:::::DDDDD:::::D  \n OO:::::::::::::OO           V:::::V          E::::::::::::::::::::ER::::::R     R:::::RL::::::::::::::::::::::L OO:::::::::::::OO R::::::R     R:::::RD:::::::::::::::DD   \n   OO:::::::::OO              V:::V           E::::::::::::::::::::ER::::::R     R:::::RL::::::::::::::::::::::L   OO:::::::::OO   R::::::R     R:::::RD::::::::::::DDD     \n     OOOOOOOOO                 VVV            EEEEEEEEEEEEEEEEEEEEEERRRRRRRR     RRRRRRRLLLLLLLLLLLLLLLLLLLLLLLL     OOOOOOOOO     RRRRRRRR     RRRRRRRDDDDDDDDDDDDD        ";
}