#include "Zombie.hpp"
#include <sstream>

std::string ft_toString(int num){
	std::stringstream ss;
	ss << num;
	return ss.str();
}

Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0) {
		std::cerr << "Error: Number of zombies must be positive." << std::endl;
		return (NULL);
	}
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		horde[i].setName(name + ft_toString(i + 1));
	}
	return horde;
}