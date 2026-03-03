#include <iostream>
#include <string>

//for now time is input using 24h time (ex 14:38.14)
//checkout time is calculated everytime the #items or payment type changes

//sets max random time in seconds
int random = 30;

class Customer {
public:
	Customer(std::string time_="00:00.00", unsigned int item=0, std::string pay="") : items{item} {
		srand(static_cast<unsigned int>(time(0)));
		
		//coverts input time to arrival time in seconds
		time_ = time_.substr(0, 2) + time_.substr(3, 2) + time_.substr(6, time_.length());
		unsigned int num = std::stoi(time_);
		arrival = (num/10000)*60*60+((num/100)%100)*60+num%100;

		//ensures proper payment type and returns error otherwise
		if (pay == "cash" || pay == "debit" || pay == "cheque") {
			paymentType = pay;
		}
		else {
			paymentType = "Invalid type.";
		}
		if (pay == "cash") {
			paymentTime = 60;
		}
		else if (pay == "debit") {
			paymentTime = 120;
		}
		else if (pay == "cheque") {
			paymentTime = 150;
		}

		checkoutTime = paymentTime+items*5+rand()%random;
	}

	void setArrivalTime(std::string time_) {
		time_ = time_.substr(0, 2) + time_.substr(3, 2) + time_.substr(6, time_.length());
		int num = std::stoi(time_);
		arrival = (num / 10000) * 60 * 60 + ((num / 100) % 100) * 60 + num % 100;
	}

	int getArrivalTime() {
		return arrival;
	}

	void setItems(unsigned int item) {
		items = item;
		checkoutTime = paymentTime + items * 5 + rand() % random;
	}

	unsigned int getItems(){
		return items;
	}

	void setPayment(std::string pay) {
		if (pay == "cash" || pay == "debit" || pay == "cheque") {
			paymentType = pay;
		}
		else {
			paymentType = "Invalid type.";
		}
		if (pay == "cash") {
			paymentTime = 60;
		}
		else if (pay == "debit") {
			paymentTime = 120;
		}
		else if (pay == "cheque") {
			paymentTime = 150;
		}
		else {
			paymentTime = 0;
		}
		checkoutTime = paymentTime + items * 5 + rand() % random;
	}

	std::string getPaymentType() {
		return paymentType;
	}

	unsigned int getCheckoutTime() {
		return checkoutTime;
	}

private:
	unsigned int arrival{0};
	unsigned int items{ 0 };
	std::string paymentType;
	unsigned int paymentTime{ 0 };
	unsigned int checkoutTime{0};
};