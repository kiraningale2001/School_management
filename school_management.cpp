#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class School_management{
	private:
		int marks[20];
		int roll_number[20];
		string name[20];
		float fees_paid[20];
		int counter;
	public:
		School_management(){
			cout<<"------------------------------------------------------------------------------"<<endl;
			cout<<"Hello, I am Kiran Ingale, this is the basic C++ school management system project. \nwhich is run on command. please perform following all operations and check how it will works."<<endl;
		    cout<<"------------------------------------------------------------------------------"<<endl;
		}
		
		void Counter(void){
			counter=0;
		}
		void setData(void);
		void getData(void);
		void updateData(void);
		void PargetData(void);
		void delData(void);
		void delTable(void);
		
		
};
//delete table
void School_management:: delTable(void){
	counter*=0;
}
void School_management:: setData(void){
	cout<<"-----------------------------Store Information---------------------------------------"<<endl;
	cout<<"Enter a Name of the student:";
	cin>>name[counter];
	cout<<"Enter a roll number of the student:";
	cin>>roll_number[counter];
	cout<<"Enter a total marks of the student:";
	cin>>marks[counter];
	cout<<"Enter a fees paid of the student:";
	cin>>fees_paid[counter];
	counter++;	
	cout<<"-----------------------------Store Information---------------------------------------"<<endl;
}

void School_management:: getData(void){
	if (counter!=0){
	
	for(int i=0; i<counter;i++){
	cout<<"-----------------------------Collected Information---------------------------------------"<<endl;
		
	cout<<"Name :"<<name[i]<<endl;
	cout<<"Roll Number:"<<roll_number[i]<<endl;
	cout<<"Total Marks:"<<marks[i]<<endl;
	cout<<"Fees Paid:"<<fees_paid[i]<<".00/-"<<endl;
    cout<<"---------------------------------Collected Information-----------------------------------"<<endl;
		
	}
	}
	else{
		cout<<"Database is Empty"<<endl;
	}

}

void School_management:: PargetData(void){
	
	if (counter!=0){
	int roll;
	cout<<"Enter a Student Roll Number";
	cin>>roll;
	int index; 
	for(int i=0;i<counter;i++){
		if(roll_number[i]==roll){
			index=i;
			cout<<"---------------------------Details of Particuler roll number:("<<roll<<")------------------------------------"<<endl;
         	cout<<"Name :"<<name[index]<<endl;
	        cout<<"Roll Number:"<<roll_number[index]<<endl;
	        cout<<"Total Marks:"<<marks[index]<<endl;
	        cout<<"Fees Paid:"<<fees_paid[index]<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
		}
		
		
		
	}
	
}
else{
	cout<<"Database is Empty"<<endl;
}
		


}
void School_management:: updateData(void)
{
	if (counter!=0){
	int roll;  
	cout<<"-----------------------------Upadte Data Counter--------------------------------"<<endl;	
	cout<<"Enter a Student Roll Number";
	cin>>roll;
	int index;
	int option; 
	for(int i=0;i<counter;i++){
		if(roll_number[i]==roll){
			index=i;
			cout<<"---------------------------Details of this roll number:"<<roll<<"------------------------------------"<<endl;
	        cout<<"Name :"<<name[index]<<endl;
	        cout<<"Roll Number:"<<roll_number[index]<<endl;
	        cout<<"Total Marks:"<<marks[index]<<endl;
	        cout<<"Fees Paid:"<<fees_paid[index]<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            //--------------------------
            cout<<"What do you want to update(name-1,marks-2,fees-3,no-4)-->";
    cin>>option;
    switch(option){
    	case 1:
    		cout<<"Enter a new name:";
    		cin>>name[index];
    		break;
    	case 2:
    		cout<<"Enter a new Marks:";
    		cin>>marks[index];
    		break;
    	case 3:
    		cout<<"Enter a updated fees:";
    		cin>>fees_paid[index];
    		break;
    	case 4:
    		cout<<"Don't worry, your data is safe!!'"<<endl;
    		break;
    	default:
    		break;
	}
            
		}
	
	}


}
else{
	cout<<"Database is Empty!"<<endl;
}
	
}

void School_management :: delData(void)
{
	if (counter!=0){
	int roll;  
	cout<<"-----------------------------Delete Data Counter--------------------------------"<<endl;	
	cout<<"Enter a Student Roll Number";
	cin>>roll;
	int index;
	int option; 
	for(int i=0;i<counter;i++){
		if(roll_number[i]==roll){
			index=i;
			fees_paid[index]=0;
			marks[index]=0;
			name[index]="0";
			roll_number[index]=0;
			
	
	//swap data
    for(int loc=index;loc<counter-1;loc++){
    	int t_marks;
		int t_roll_number;
		string t_name;
		float t_fees_paid;
		// name swaped
		t_name=name[loc];
		name[loc]=name[loc+1];
		name[loc+1]=t_name;
		
		//marks swaped
		t_marks=marks[loc];
		marks[loc]=marks[loc+1];
		marks[loc+1]=t_marks;
		
		//roll number swaped
		
		t_roll_number=roll_number[loc];
		roll_number[loc]=roll_number[loc+1];
		roll_number[loc+1]=t_roll_number;
		
		// fees paid swaped
		t_fees_paid=fees_paid[loc];
		fees_paid[loc]=fees_paid[loc+1];
		fees_paid[loc+1]=t_fees_paid;
		
		
		

	}
	counter--;
	
			
			
	
       }
    }
    
    
    
    
}
else{
		cout<<"Database is Empty!"<<endl;
}
}

int main(){
	School_management School;
	School.Counter();
	while (true){
		int option;
		cout<<"|---------------------------Option board------------------------------|"<<endl;
		cout<<"| Add New Information--> 1"<<endl;
		cout<<"| Display All Data--> 2"<<endl;
		cout<<"| Display Particular Data--> 3"<<endl;
		cout<<"| Update Data--> 4"<<endl;
		cout<<"| Delete Data--> 5"<<endl;
		cout<<"| Delete All Data--> 6"<<endl;
		cout<<"| Exit--> 0"<<endl;
		cout<<"|---------------------------Option board------------------------------|"<<endl;
		cout<<"Enter a correct option:";
		cin>>option;
		switch(option){
			case 1:
				School.setData();
				break;
			case 2:
				School.getData();
				break;
			case 3:
				School.PargetData();
				break;
			case 4:
				
				School.updateData();
				break;
			case 5:
				School.delData();
				break;
			case 6:
				School.delTable();
				break;
			case 0:
				exit(0);
			default:
				cout<<"Enter a Correct option!!"<<endl;
			
		}
		
		
	}

	return 0;
	
}
