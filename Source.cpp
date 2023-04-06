#include<iostream>

using namespace std;

bool isAnagram(string str1, string str2)
{
	bool flag = false;

	int count1 = str1.length(), count2 = str2.length();

	int countFinal = 0;

	char char1 = str1[0];
	char char2 = str2[0];
		
		int j = 0;
		for (int i = 0; i < count1; i++)
		{
			char1 = str1[i];
			while (j<=count2)
			{
				
				char2 = str2[j];
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
	//a gentleman – elegant man
	
	cout << isAnagram(str1, str2);
	cout << "\n\n" << isAnagram("a gentleaman", "elegant man");
	cout << "\n\n" << isAnagram("a gentleman", "elegant man");
	cout << "\n\n" << isAnagram("school student", "ktends to slouch");
	cout << "\n\n" << isAnagram("asteroid threats", "dimsaster to earth");

	
//	cout << (int)'\0';

	cout << "\n\n\n";
	return 0;
}
