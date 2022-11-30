//
//#include <iostream>
//
//
//int get_int(std::string message)
//{
//	int ret = 0;
//	std::cout << "How big?(betwen 1 and 8)" << std::endl;
//	std::cin >> ret;
//	return ret;
//}
//
//
//
//
//
//
//
//
//
//
//#include <stdio.h>
//
//
//
//void deseneaza_brute_force()
//{
//	//brute force
//	printf(" ");
//	printf(" ");
//	printf("#");
//
//	printf("\n");
//
//	printf(" ");
//	printf("#");
//	printf("#");
//
//	printf("\n");
//
//	printf("#");
//	printf("#");
//	printf("#");
//}
//
//
//void draw(int height) {
//
// 	int rand = 1;
//
//	while (rand < height) {
//		//draw the current line
//			//1.Draw the spaces
//			for(int i = 0;i< height - rand;i++)
//			{
//				printf(" ");
//			}
//			//2.Draw the #s
//			for (int j = 0; j < rand; j++) 
//			{
//				printf("#");
//			}
//			//3.Draw new line
//			printf("\n");
//
//			rand++;
//	}
//}
//
//int main()
//{
//	//deseneaza_brute_force();
//	
//	int h = 0;
//	std::cout << "How high?\n";
//	std::cin  >> h;
//
//	draw(h);
//	return 0;
// }
