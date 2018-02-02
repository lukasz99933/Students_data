#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

struct Student
{
	string forename;
	string surname;
	int number_index;
};
bool compareBynumberindex(const Student &a,const Student &b)
{
	return a.number_index < b.number_index;
}

void remove(int a,vector<Student> &b)
{
	int i=0;
	if(i<b.size())
	{
		do
		{
			i++;
		}while(b[i].number_index == a);
		b.erase(b.begin()+i);
	}
}

int main()
{
	vector<Student> data;
	Student* person1 = new Student; 
	person1->forename = "Mirosław";
	person1->surname = "Łęcina";
	person1->number_index = 226531;
	Student* person2 = new Student;
       	person2->forename = "Dominik";
	person2->surname = "Jahaś";
	person2->number_index = 226321;
	Student* person3 = new Student;
	person3->forename = "Kapitan";
	person3->surname = "Bomba";
	person3->number_index = 226555;
	data.push_back(*person1);
	data.push_back(*person2);
	data.push_back(*person3);
	sort(data.begin(), data.end(), compareBynumberindex);
	cout << data[0].forename << endl;
	cout << data[1].forename << endl;
	cout << data[2].forename << endl;
	remove(226555,data);
	return 0;

}


