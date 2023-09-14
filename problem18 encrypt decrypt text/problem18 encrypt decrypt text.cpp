#include <iostream>
#include <string>
using namespace std;



string readText()
{
	string text = "";

	cout << "Please enter a text to encrypt?\n";
	getline(cin, text);

	return text;
}

int getLength(string str)
{
	int length = 0;
	int counter = 0;

	while (str[counter])
	{
		length++;
		counter++;
	}

	return length;
}

string EncryptText(string text)
{
	int EncryptionKey = 2;
	int length = getLength(text);

	for (int i = 0; i < length; i++)
	{
		text[i] = (int)text[i] + EncryptionKey;
	}

	return text;
}

string DecryptText(string text)
{
	int EncryptionKey = 2;
	int length = getLength(text);

	for (int i = 0; i < length; i++)
	{
		text[i] = (int)text[i] - EncryptionKey;
	}

	return text;
}



int main()
{
	string text = readText();
	string EncryptedText = EncryptText(text);
	string decryptedText = DecryptText(EncryptedText);

	cout <<"================================================"<< endl;
	cout << "Text before encryption: " << text << endl;
	cout << "Text after encryption: " << EncryptedText << endl;
	cout << "Text after decryption: " << decryptedText << endl;
	cout <<"================================================"<< endl;

	return 0;
}



//string readPassword()
//{
//	string pass;
//	cout << "please enter a text to encrypt ?\n";
//	getline(cin, pass);
//
//	return pass;
//}
//
//string encryptPassword(string text) 
//{
//	//string letters = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
//	string CapitalLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	string smallLetters = "abcdefghijklmnopqrstuvwxyz";
//	string sp = "1234567890";
//	string secret = "my secret";
//	string hashedPassword = "";
//
//	char temp = 't';
//
//	for (int i = 1; i <=1; i++)
//	{
//		for (int x = i; x <= i; x++)
//		{
//			for (int y = 0; y <= 1; y++)
//			{
//				hashedPassword += CapitalLetters[i];
//				hashedPassword += pass[i];
//				hashedPassword += smallLetters[x];
//				hashedPassword += pass[x];
//				hashedPassword += sp[x];
//				hashedPassword += pass[x];
//				hashedPassword += CapitalLetters[y];
//				hashedPassword += pass[y];
//				hashedPassword += sp[y];
//				hashedPassword += pass[y];
//				hashedPassword += smallLetters[x];
//				hashedPassword += pass[x];
//				hashedPassword += sp[y];
//				hashedPassword += pass[y];
//				hashedPassword += secret[y];
//				hashedPassword += secret[y];
//			}
//		}
//	}
//	//cout << hashedPassword << endl;
//	return hashedPassword;
//}
//
//
//void decryptPassWord(string hashedPass)//aoaoAgaoaoao string hashedPass
//{
//	string CapitalLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	string smallLetters = "abcdefghijklmnopqrstuvwxyz";
//	string formedPassword = "";
//
//		for (int i = 0; i < 26; i++)
//		{
//			for (int x = 0; x < 26; x++)
//			{
//				for (int y = 0; y < 26; y++)
//				{
//					for (int z = 0; z < 26; z++)
//					{
//						for (int h = 0; h < 26; h++)
//						{
//							formedPassword += CapitalLetters[i];
//							formedPassword += smallLetters[x];
//							formedPassword += smallLetters[y];
//							formedPassword += smallLetters[z];
//							formedPassword += smallLetters[h];
//
//							//cout << formedPassword << endl;
//
//							if (encryptPassword(formedPassword) == hashedPass)
//							{
//								cout << "===========================================\n";
//								cout << "Password Before Encrypt =  " << formedPassword << endl;
//								cout << "===========================================\n";
//								cout << "Password After Encrypt =  " << hashedPass << endl;
//								cout << "===========================================\n";
//								cout << "Password After Decrypt =  " << formedPassword << endl;
//								cout << "===========================================\n";
//								return;
//							}
//							formedPassword = "";
//						}
//					}
//				}
//				cout << endl;
//			}
//		}
//	}
//
//int main()
//{
//	//string pass = readPassword();
//	//string hashed = encryptPassword(pass);//Gomaa aoaoAGaoaoao
//	//encryptPassword(pass);
//	//decryptPassWord(hashed);
//	//encryptPassword(encryptPassword(pass););
//
//	decryptPassWord("11b1A112m2b1m2BBb1A1y1b1y1A1y111");
//
//	return main();
//}