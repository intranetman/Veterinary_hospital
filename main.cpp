#include <iostream>


using namespace std;


struct doc{
	char name[46];
	int age;
	int id;
	char specailizatiobn
};

struct animal{
	
};




















/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void headline(){
	cout<<"				  **** Welcome to the Veterinary Hospital Managemnet System ****        "<<"\n\n\n";
}


void doc_function(int choice){
	doctor doc;
	switch(choice)
   {
      case 1:
       system("cls");
       doc.add_doc_info();
       break;
       
       case 2:
           doc.Display();
           cout<<"\n";
        break;

       case 3:
           system("cls");
           doc.doctor_detail();
           break;

       case 4:
           doc.tot_no_of_doc();
        break;

        case 5:
            return ;
            break;

       default:
        cout<<"invalid";
    }
	
	
}

int main(int argc, char** argv) {
	bool repeat = true;
	int ch1, ch2, ch3, ch4;
	//doctor  doc;
	//patoent animal;
	
	cout <<"\n\n";
	headline();
	cout<<"					   1. Menu :     "<<"\n\n";
	cout<<"					   2. Exit :     "<<"\n\n\n\n";
	cout<<"Enter your Choice : ";
	cin>>ch1;
	
	if(ch1==1) {
         system("cls");
         cout<<"\n\n";
         headline();
         cout<<"   1.   Enter  into Doctor's    DataBase   "<<endl;
         cout<<"   2.   Enter  into Patient's (Animal)   DataBase   "<<endl;
         cout<<"   3.   Generate    Patient's (Animal)   Report     "<<endl;
         cout<<"   4.   Generate    Patient's (Animl)  Bill       "<<endl;
         cout<<"   5.   EXIT                               "<<"\n";
         cout<<"Please  Enter Your choice  :"<<" ";
         cin>>ch2;
         
         while(repeat==true) {
           system("cls");
           switch(ch2){
	           case 1:
	               cout<<"\n\n";
	               headline();
	               cout<<   "  \t       1. Add New Doctor's Information              "<<endl;
	               cout<<   "  \t       2. Display Doctor's Information              "<<endl;
	               cout<<   "  \t       3. Detail OF ALL The Doctors In The Hospital "<<endl;
	               cout<<   "  \t       4. Total Number of Doctor's  in Hospital     "<<endl;
	               cout<<   "  \t       5. EXIT                                      "<<"\n";
	
	               cout<<"Please Enter your choice :"<<" ";
	               cin>>ch3;
	           
	          		break;
	            case 2:
	            	cout<<"\n\n";
	               headline();
	               cout<<       "1. Add New Patient's Information              "<<endl;
	               cout<<       "2. Display Patient's Information              "<<endl;
	               cout<<       "3. Detail OF ALL The Patient In The Hospital "<<endl;
	               cout<<       "4. Total Number of Patient's  in Hospital     "<<endl;
	               cout<<       "5. EXIT                                      "<<"\n";
	
	               cout<<"Please Enter your choice :"<<" ";
	               cin>>ch4;
	            	
	            	break;
	            case 3:
	            	break;
	            case 4:
	            	break;
        	}
       }
         
     }
	 else if(ch1==2)
	 {
	     return 0;
	 }
	 else
	 {
	     cout<<"Wrong Input"<<endl;
	 }
     
	return 0;
}
