#include "Zombie.hpp"

int main() {
	int N = 10; 
	Zombie* horde = zombieHorde(N, "Zombie");
	if (horde) {
		for (int i = 0; i < N; ++i) {
			horde[i].announce();

		}
		delete[] horde;
	} else {
		std::cerr << "Failed to create zombie horde." << std::endl;
	}
	return 0;
}