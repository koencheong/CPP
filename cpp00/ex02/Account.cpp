#include <iostream>

class Account
{
	public:
		// Account(int amount, int *array, int i)
		// 	array[i] = amount;
		Account(int amount, int i)
		{
			this->amount = amount;
			std::cout << "index:" << i << ";";
			std::cout << "amount:" << amount << ";";
			std::cout << "created" << std::endl;
		}
		// displayAccountsInfos();
		// displayStatus();
	private:
		int	amount;
		// int *array;
};

// Account::displayAccountsInfos()
// {

// }
int	main()
{
	Account account1(42, 1),
			account2(54, 2),
			account3(957, 3),
			account4(432, 4),
			account5(1234, 5),
			account6(0, 6),
			account7(754, 7),
			account8(16576, 8);

	// accounts[1](42);
	// accounts[1].amount = 42;
	// accounts[2].amount = 54;
	// accounts[3].amount = 957;
	// accounts[4].amount = 432;
	// accounts[5].amount = 1234;
	// accounts[6].amount = 0;
	// accounts[7].amount = 754;
	// accounts[8].amount = 16576;
}