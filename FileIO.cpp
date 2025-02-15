#include <iostream>
#include <fstream>
#include <sstream>

int main (){

	std::ifstream inFile;
	std::stringstream converter;
	std::string currentLine;
	int num1, num2;


inFile.open("data.csv"); 
while (getline(inFile, currentLine)) {
	converter.clear();
       	converter.str(currentLine);

	getline(converter, sNum1, ',');
	getline(converter, sNum2, ',');
	getline(converter, text);

	converter.clear();
	converter.str("");
	converter << sNum1 << " "<< sNum2;
	converter >> num1 >> num2; 

	int sum = num1 + num2;

	std::cout << " Sum of " << num1 <<  " and " << num2 << " is: " << sum << std::end1;


	for (int i = 0; i <sum; i++) {
		std::cout << text << " ";
	}
	std::cout << std::end1;

}

	inFile.close();

	return 0;
}
