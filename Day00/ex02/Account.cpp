#include <ctime>
#include <iostream>
#include "Account.hpp"

using std::cout;
using std::time_t;
using std::cin;
using std::endl;

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}
int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}
int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}
int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

int Account::checkAmount(void) const
{
    return Account::_amount;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    cout << " accounts:" << Account::_nbAccounts;
    cout << ";total:" << Account::_totalAmount;
    cout << ";deposits:" << Account::_totalNbDeposits;
    cout << ";withdrawals:" << Account::_totalNbWithdrawals;
    cout << endl;
}

void Account::makeDeposit(int deposit)
{
    int p_amount;

    p_amount = Account::_amount;
    Account::_amount += deposit;
    Account::_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;

    _displayTimestamp();
    cout << " index:" << Account::_accountIndex;
    cout << ";p_amount:" << p_amount;
    cout << ";deposit:" << deposit;
    cout << ";amount:" << Account::_amount;
    cout << ";nb_deposits:" << Account::_nbDeposits;
    cout << endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    cout << " index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";closed" << endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    int p_amount;
    bool flag;

    p_amount = Account::_amount;
    if (p_amount < withdrawal)
        flag = true;
    else
    {
       flag = false;
       Account::_amount -= withdrawal;
       Account::_nbWithdrawals++;
       Account::_totalNbWithdrawals++;
       Account::_totalAmount -= withdrawal;
    }
    _displayTimestamp();
    cout << " index:" << Account::_accountIndex << ";p_amount:" << p_amount;
    if (flag)
        cout << ";withdrawal:refused" << endl;
    else
        cout <<  ";withdrawal:" << withdrawal << ";amount:" << Account::_amount << ";nb_withdrawals:" << Account::_nbWithdrawals << endl;
    return !flag;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    cout << " index:" << Account::_accountIndex;
    cout << ";amount:" << Account::_amount;
    cout << ";deposit:" << Account::_nbDeposits;
    cout << "withdrawals:" << Account::_nbWithdrawals;
    cout << endl;
}

Account::Account(int initial_deposit)
{
    Account::_accountIndex = Account::_nbAccounts;
    Account::_amount = initial_deposit;
    Account::_totalAmount += Account::_amount;
    Account::_nbWithdrawals = 0;
    Account::_nbDeposits = 0;
    Account::_nbAccounts++;
    _displayTimestamp();
    cout << " index:" << Account::_accountIndex;
    cout << ";amount:" << Account::_amount;
    cout << ";created" << endl;
}


void Account::_displayTimestamp(void)
{
    time_t time = std::time(&time);
    std::tm* timer = std::localtime(&time);
    char    string[18];

    std::strftime(string, 18, "%Y%m%d_%H%M%S", timer);
    cout << "[" << string << "]";
}
