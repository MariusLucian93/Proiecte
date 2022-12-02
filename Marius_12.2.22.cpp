////Scrabble
//#include <string>
//#include <iostream>
//using namespace std;
//
//namespace standard {
//	void func() {
//		printf("ceva, dar din namespaceul standard\n");
//	}
//}
//
//namespace specific {
//	void func() {
//		printf("ceva, dar din namespaceul specific\n");
//	}
//
//}
//
//
////using namespace specific;
//
//
//string get_string()
//{
//	string ret;
//	printf("Introduceti string: ");
//	cin >> ret;
//	return ret;
//}
//
//int POINTS[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 
//			5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
//
//
//int get_letter_score(char letter);
//inline int get_score(string word);
//
//
//
//void main()
//{
//	string word1 = get_string();
//	string word2 = get_string();
//
//
//	//printf("word1 = %s\n", word1.c_str());
//	//printf("word2 = %s", word2.c_str());
//
//
//	int score_player1 = get_score(word1);
//	int score_player2 = get_score(word2);
//
//	if (score_player1 > score_player2)
//	{
//		printf("Player1 wins(%s vs %s)\n", word1.c_str(), word2.c_str());
//	}
//	else if (score_player2 > score_player1)
//	{
//		printf("Player2 wins(%s vs %s)\n", word2.c_str(), word1.c_str());
//	}
//	else//(score_player2 == score_player1)//redundant
//	{
//		printf("Toie wins(%s vs %s)\n", word2.c_str(), word1.c_str());
//	}
//
//}
//
//
////to convert lowercase to uppercase -> add 32
//int get_score(string word)
//{
//	int ret = 0;
//
//	for (int i = 0; i < word.length(); i++)
//	{
//		char letter = word[i];//current
//
//		if (letter >= 97 && letter <= 22)
//		{//it is lower case
//			
//		}
//		
//	}
//}
//
//
////supports only lowercase letters
//int get_letter_score(char letter)
//{
//	return 0;
//}
//
