//#include<iostream>
//using namespace std;
//class plant
//{
//public:
//	virtual void grow() = 0;
//};
//
//class flower :public plant
//{
//	float days=30;
//	float growth_rate=0.5;
//	float height;
//	void grow() override
//	{
//		height = days * growth_rate;
//		cout<<"The flower has grown to a height of "<<height<<" cm in "<<days<<" days."<<endl;
//	}
//};
//
//class tree :public plant
//{
//public:
//	float days=30;
//	float growth_rate = 0.2;
//	float height;
//	void grow() override
//	{
//		height = days * growth_rate;
//		cout << "The tree has grown to a height of " << height << " cm in " << days << " days." << endl;
//	}
//};
//
//class bush : public plant
//{
//public:
//
//	float days=30;
//	float growth_rate = 0.7;
//	float height;
//	void grow() override
//	{
//		height = days * growth_rate;
//		cout << "The bush has grown to a height of " << height << " cm in " << days << " days." << endl;
//	}
//};
//
//void calculateheight( plant& plant)
//{
//	plant.grow();
//}
//
//void start_program()
//{
//	int choice;
//	cout<<"Calculate Height Of : \n1. Flower\n2. Tree\n3. Bush\n";
//	cout<<"Enter your choice : ";
//	cin >> choice;
//	if (choice == 1)
//	{
//		flower flower1;
//		calculateheight(flower1);
//	}
//	else if (choice == 2)
//	{
//		tree tree1;
//		calculateheight(tree1);
//	}
//	else if (choice == 3)
//	{
//		bush bush1;
//		calculateheight(bush1);
//	}
//	else
//	{
//		cout << "Invalid Choice\n";
//	}
//}
//
//int main()
//{
//	start_program();
//}