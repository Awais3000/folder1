#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size of Array "<<endl<<"	";
	cin>>size;
	int array[size];
	cout<<"Enter Array's Elements"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>array[i];
	}
   /*	Now started sorting the array in accending order */
    for(int i=1; i<size; i++)
    {
    	int current_element=array[i];
    	int j=i-1;
    	while(array[j]<current_element && j>=0)
    	{
    		array[j+1]=array[j];
    		j--;
		}
    	
    	array[j+1]=current_element;
	}

	cout<<endl<<endl<<"Sorted Array in deccending order is given below"<<endl<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<"	"<<array[i];
	}
	cout<<endl;
}
