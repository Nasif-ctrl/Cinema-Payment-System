#include<iostream>
using namespace std;

struct info              // STRUCTURE DECLARATION
{
	string name;
	int phone;
};

void seatbooked (int&, int, int, int);              //FUNCTION 1 PROTOTYPE
void totalprice (int&, int, int, int);           // FUNCTION 2 PROTOTYPE
int main()
{
	info buyer;                   // 'buyer' is an 'info' structure

    int seat=0, adult=0, child=0, total=0, teenager=0 ;
    char flag;

   do
   {
       cout << "______________________________________________________" << endl;
       cout << "|             Welcome to ABC Cinema                  | " << endl;
       cout << "|        Top Valley Shopping Mall, Jerum             | " << endl;
       cout << "|____________________________________________________|" << endl;
        cout<<"Name of the buyer: ";
        cin>> buyer.name;
        cout<<"Phone no: ";
		cin>> buyer.phone;
		
		
		cout << "\nEnter number of adult customers   (Unit price is RM 14) : ";
        cin >> adult;
        cout<<  "Enter number of teenager customers (Unit price is RM 10): ";
        cin>>teenager;
        cout << "Enter number of child customers   (Unit price is RM 4)  : ";
        cin >> child;
        
        int i;
	    string Rampage, Dolittle, It, Munafik, Godzilla, Kong;
	    string movie[]={"Rampage", "Dolittle", "It", "Munafik", "Inception", "Frozen" };  // ARRAY DECLARATION
	
	    cout << "\n        Now Showing          . Film Classification  " << endl;
	    cout <<	"....................................................." << endl;
	    cout << " 1.        Rampage             .        PG-13         ." << endl;
	    cout << " 2.        Dolittle            .         PG           ." << endl;
	    cout << " 3.          It                .         18           ." << endl;
	    cout << " 4.        Munafik             .        Horror        ." << endl;
	    cout << " 5.       Inception            .        PG-13         ." << endl;
	    cout << " 6.        Frozen              .         PG           ." << endl;
	
	    cout<<"\n Enter the Serial no of movie you want to watch: ";
	    cin>> i;                                              //Determining subscript of the array element to be shown
	    
        seatbooked(seat, adult, teenager, child);               // Calling FUNCTION 1
        cout << "\n\n";
        
        totalprice(total, adult, teenager, child);            // Calling FUNCTION 2
        
        cout<<"Buyer's info---\n";
        cout<<"      Name        : " << buyer.name <<endl;
        cout<<"      Phone number: " << buyer.phone;
		cout <<"     Movie selected: '" << movie[i-1] <<"' \n\n";  //Showing element from array
        
		cout << "Payment details---\n";
		cout << "      Adult    - RM " << adult * 14 << endl;
        cout << "      Teenager - RM " << teenager * 10 << endl;
        cout << "      Children - RM " << child * 4 << endl;
        
        cout << "_____________________________________________________" << endl;
        cout << "\n";
        if(seat<=20)                          //Using CONDITIONAL STATEMENT to check number of remaining seats
        {
        	cout << "The total amount of sales today is RM " << total;
        	cout<<"\nThere are "<<(20-seat)<<" seats remaining"<<endl;
        	cout <<"\nPlease enter the exact remaining number or the system will take the money "
			     << "as their income and exit permanently"<<endl;
			cout << "Please exit if no seat is remaining "<<endl;
        	cout << "\nEnter 'y' to continue or 'n' to exit" << endl;
            cin >> flag;
            if(flag=='n')
            {
			   	cout << "The total amount of sales today is RM " << total;
			   	return 0;
			}
		}
        else
        {
           cout << "Reached maximum capacity in the cinema!!!" << endl;
		   cout << "The system has swallowed your money!!!" << endl;
		    cout << "The total amount of sales today is RM " <<total;
           cout << "\nSystem exit..." << endl;
           return 0;
        }
        
    }
    while(seat != 20 || flag == 'y'|| flag=='n');

    return 0;
}

void seatbooked (int &sl, int a, int t, int c)    //FUNCTION 1 DEFINITION
{
	sl = sl + a + t + c;
}

void totalprice (int &tp, int a, int t, int c)       // FUNCTION 2 DEFINITION
{
    tp = tp + (a*14) + (t*10) + (c*4);
} 
