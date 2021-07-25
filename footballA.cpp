#include <iostream>
#include <string>

bool isDangerous(std::string str) {
	int max = 1;
	char prev = str[0];
	for(int i=1; i<str.size(); i++) {
		if (prev == str[i]) {
			max++;
		} else {
			max=1;
		}
		if (max >= 7) {
			return true;
		}
		prev = str[i];
	}
	return false;
}


int main() {

	std::string str;

	std::cin >> str;
	if (isDangerous(str)) {
		std::cout << "YES\n";
	} else {
		std::cout << "NO\n";

	}
	return 0;	
}
