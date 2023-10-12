#include<iostream>
#include<string>
using namespace std;

class MovieTicket
{
public:
	int seat = 0, seated = 0;
	int totalCost = 0; // Renamed totalcost to totalCost
	string movie[5];
	int seatNumber[100];
	int moviePrice[5] = { 1000, 2000, 3000, 4000, 5000 };
	string selectedMovie;
	void MovieList()
	{
		movie[0] = "Pirate of Carribean";
		movie[1] = "Batman The Dark Knight";
		movie[2] = "Inception";
		movie[3] = "Interstellar";
		movie[4] = "Avengers";

		cout << "The List of Movies Are"<<endl;
		for (int size = 0; size < 5; size++)
			cout << movie[size]<<endl;
	}
	void Seat() {
		cout << "Enter the seat number: ";
		cin >> seated;

		if (seated >= 1 && seated <= 100) {
			if (seatNumber[seated - 1] == 1) {
				cout << "Seat Number: " << seated << " is Taken" << endl;
			}
			else {
				seatNumber[seated - 1] = 1; // Mark the seat as taken
				cout << "Seat Number: " << seated << " is Available" << endl;
			}
		}
		else {
			cout << "Invalid seat number. Please enter a number between 1 and 100." << endl;
		}
	}

    void Booking() {
        bool movieFound = false;

        cout << "Select which movie ticket you want: ";
		cin >> selectedMovie;

        for (int i = 0; i < 5; i++) {
            if (selectedMovie == movie[i]) {
                movieFound = true;
                break;
            }
        }
        if (movieFound)
            cout << "Movie Selected: " << selectedMovie << endl;
        else
            cout << "Select a movie from the movie list!" << endl;
 

		if (selectedMovie == movie[0])
			cout << "Your Total price is 1000";

		else if (selectedMovie == movie[0])
			cout << "Your Total price is 2000";

		else if (selectedMovie == movie[0])
			cout << "Your Total price is 3000";

		else if (selectedMovie == movie[0])
			cout << "Your Total price is 4000";

		else if (selectedMovie == movie[0])
			cout << "Your Total price is 5000";

	}
};

void main()
{
	MovieTicket Ticket;
	Ticket.MovieList();
	Ticket.Booking();
	Ticket.Seat();
}



