#include<iostream>		// Includes the input/output stream library for functions like cin and cout
using namespace std;	// Avoids prefixing standard library names with std::

struct info              // STRUCTURE DECLARATION
{
	string name;
	long long int phone;
};

void seatbooked (int&, int, int, int);              //FUNCTION 1 PROTOTYPE
void totalprice (int&, int, int, int);           // FUNCTION 2 PROTOTYPE
int main()
{
	info buyer;                   // 'buyer' is an 'info' structure

    int seat=0, adult=0, child=0, teenager=0, total=0; // Variables for number of empty seats and passengers based on 3 age groups
    char flag;

   do
   {
       cout << "______________________________________________________" << endl;	// Welcome message
       cout << "|             Welcome to ABC Cinema                  | " << endl;
       cout << "|        Top Valley Shopping Mall, Jerum             | " << endl;
       cout << "|____________________________________________________|" << endl;
        cout<<"Name of the buyer: ";
        cin>> buyer.name;
        cout<<"Phone no: ";
		cin>> buyer.phone;
		
		
		cout << "\nEnter number of adult customers    (Unit price is RM 14): ";		// Unit price for adults can be modified here
        cin >> adult;
        cout<<  "Enter number of teenager customers (Unit price is RM 10): ";		// Unit price for teenagers can be modified here
        cin>>teenager;
        cout << "Enter number of child customers     (Unit price is RM 4): ";		// Unit price for children can be modified here
        cin >> child;
        
        int i;
	    string Rampage, Dolittle, It, Munafik, Godzilla, Kong;
	    string movie[]={"Rampage", "Dolittle", "It", "Munafik", "Inception", "Frozen" };  // ARRAY DECLARATION
	
	    cout << "\n        Now Showing           . Film Classification  " << endl;
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
        cout << "      Children - RM " << child * 4 << endl;
		cout << "      Teenager - RM " << teenager * 10 << endl;
        
        cout << "_____________________________________________________" << endl;
        cout << "\n";
        if(seat<=20)        //Using CONDITIONAL STATEMENT to check number of remaining seats (Default initial value = 20)
        {
        	cout << "The total amount of sales so far is RM " << total;
        	cout<<"\nThere are "<<(20-seat)<<" seats remaining"<<endl;
			cout << "\nEnter 'y' to continue entering records or 'n' to exit" << endl;
            cin >> flag;
            if(flag=='n')
            {
			   	cout << "The total amount of sales today is RM " << total;
			   	return 0;
			}
		}
        else
        {
           cout << "Reached maximum capacity in the cinema!!!" << endl;		// Warning message shown when all the seats have been booked
			cout << "The total amount of sales today is RM " <<total;
           cout << "\nSystem exit..." << endl;
           return 0;
        }
        
    }
    while(seat != 20 || flag == 'y'|| flag=='n');	// Flag to control the termination of the program

    return 0;
}

void seatbooked (int &sl, int a, int t, int c)    //FUNCTION 1 DEFINITION
{
	sl = sl + a + t + c;	// Adds the number of booked seats and customers
}

void totalprice (int &tp, int a, int t, int c)       // FUNCTION 2 DEFINITION
{
    tp = tp + (a*14) + (t*10) + (c*4);	// Calculates total amount of sales
}  
