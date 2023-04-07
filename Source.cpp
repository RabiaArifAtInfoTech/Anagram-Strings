#include<iostream>

using namespace std;

int lengthWithoutSpaces(string my_string)
{
	int length_without_spaces = 0;

	for (int i = 0; i < my_string.length(); i++) {
		if (my_string[i] != ' ') {
			length_without_spaces++;
		}
	}

	return length_without_spaces;
}
bool isAnagram(string str1, string str2)
{
	str1.erase(std::remove(str1.begin(), str1.end(), ' '), str1.end());
	str2.erase(std::remove(str2.begin(), str2.end(), ' '), str2.end());
	

	bool flag = false;

	//int count1 = lengthWithoutSpaces(str1), count2 = lengthWithoutSpaces(str2);
	int count1 = str1.length(), count2 = str2.length();
	//cout<< "\n " << count1 << " " << count2;
	int countFinal = 0;

	char char1 = str1[0];
	char char2 = str2[0];
		
		int j = 0;
		for (int i = 0; i < count1; i++)
		{
			
				while (j <=count2)
				{
					char1 = str1[i];

					/*if (char1 == ' ')
					{

						break;
					}*/
					char2 = str2[j];

					/*if (char2 == ' ')
					{
						break;
					}*/

					if (char1 == char2)
					{
						countFinal++;
						break;
					}
					j++;
				}
				j = 0;
			
		}
		if (countFinal == count2)
			flag = true;



	return flag;
}


int main()
{

	

	string str1 = "listen";
	string str2 = "silent";
	
	cout << "\n\n" << isAnagram(str1, str2);
	cout << "\n\n" << isAnagram("a gentleman", "elegant man");
	cout << "\n\n" << isAnagram("a geentleman", "elegant man");

	cout << "\n\n" << isAnagram("school student", "tends to slouch");
	cout << "\n\n" << isAnagram("asteroid threats", "disaster to earth");

	

	cout << "\n\n\n";
	return 0;
}
