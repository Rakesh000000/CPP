#include<iostream>
#include<fstream>
using namespace std;


class student{
	private:
		char name[20];
		int roll;
		float marks,  Marray[10];
		
	public:
		void show()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll: "<<roll<<endl;
			cout<<"Marks: "<<marks<<endl;
		}
		void write_to_file()
		{
			fstream infile("student_data.dat", ios::binary | ios::app);
			cout<<"Name: "; cin>>name;
			cout<<"Roll number: "; cin>>roll;
			cout<<"Marks: "; cin>>marks;
			infile.write(reinterpret_cast<char*>(this), sizeof(*this));
			infile.close();
		}
		
		void read_from_file()
		{
			int i=0;
			ifstream outfile("student_data.dat", ios::binary);
			outfile.seekg(0);
			while(!outfile.eof())
			{
				if(outfile.read(reinterpret_cast<char*>(this), sizeof(*this))>0)
				{
					Marray[i]= marks;
					i++;
				}
			}
			outfile.close();
		}
		
		void sorting_array_descending()
		{
			int i,j;
			for (i=0;i<10;i++)
			{
				for(j=0;j<10;j++)
				{
					if(Marray[i]<Marray[j])
					{
						float temp;
						temp= Marray[j];
						Marray[j]= Marray[i];
						Marray[i]= temp;
					}
				}
			}
		}
		void show_array()
		{
			for(int i=0; i<10;i++)
			{
				cout<<Marray[i]<<endl;
			}
		}
		void show_data_descending()
		{
			ifstream outfile("student_data.dat", ios::binary);
			int i=0;
			while(i<10)
			{
				outfile.seekg(0);
				while(!outfile.eof())
				{
					if (outfile.read(reinterpret_cast<char*>(this), sizeof(*this))>0)
					{
						if (marks == Marray[i])
						{
							show();
							i++;
						}
					}
				}
			}
		}
};

int main()
{
	int i;
	student s;
	for (i=0;i<10;i++)
	{
		cout<<"student dat "<<i+1<<endl;
		s.write_to_file();
	}
	s.show_array();
	s.read_from_file();
	cout<<"Data in descending order of marks:"<<endl;
	s.show_data_descending();
	return 0;
}
