#include <iostream>
#include <string>
#include <vector>
#include "Customer.h"
using namespace std;

int main()
{
	int size{ 1 };
	cout << "Enter #customers: ";
	cin >> size;
	vector<Customer> customers(size);
	string time;
	unsigned int item;
	string payment;
	for (int i{ 0 }; i < size; i++) {
		cout << "Input arrival time ex(15:21.53): ";
		cin >> time;
		customers[i].setArrivalTime(time);
		cout << "Input #items: ";
		cin >> item;
		customers[i].setItems(item);
		cout << "Input payment type (cash, debit, cheque): ";
		cin >> payment;
		customers[i].setPayment(payment);
	}

	cout << "\nArrival time" << "\tItems" << "\tPayment type" << "\tCheckout time" << endl;
	for (int i{0}; i < size; i++) {
		cout << customers[i].getArrivalTime() << "\t\t";
		cout << customers[i].getItems() << "\t";
		cout << customers[i].getPaymentType() << "\t\t";
		cout << customers[i].getCheckoutTime() << endl;
	}
}