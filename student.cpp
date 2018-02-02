#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

struct Student
{
	Student(string a,string b, int c) :
		forename(a),
		surname(b),
		number_index(c)
	{}

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
	Student* person1 = new Student("Mirosław","Łęcina",226531); 
	Student* person2 = new Student("Dominik","Jahaś",226321);
	Student* person3 = new Student("Kapitan","Bomba",226555);
	data.push_back(*person1);
	data.push_back(*person2);
	data.push_back(*person3);
	sort(data.begin(), data.end(), compareBynumberindex);
	cout << data[0].forename << endl;
	cout << data[1].forename << endl;
	cout << data[2].forename << endl;
	remove(226555,data);
	delete person1;
	delete person2;
	delete person3;
	return 0;

}


