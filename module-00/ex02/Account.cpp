/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:55:58 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/27 18:11:14 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
  this->_amount = initial_deposit;
  this->_totalAmount += initial_deposit;
  this->_accountIndex = _nbAccounts;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;

  this->_nbAccounts++;

  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "created" << std::endl;
}

Account::~Account() {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(void) {
  return _nbAccounts;
}

int Account::getTotalAmount(void) {
  return _totalAmount;
}

int Account::getNbDeposits(void) {
  return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
  return _totalNbWithdrawals;
}

int Account::checkAmount(void) const {
  return this->_amount;
}

void Account::makeDeposit(int deposit) {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "p_amount:" << this->checkAmount() << ";";
  std::cout << "deposit:" << deposit << ";";
  std::cout << "amount:" << this->_amount + deposit << ";";
  std::cout << "nb_deposits:" << this->_nbDeposits + 1;
  std::cout << std::endl;

  this->_amount += deposit;
  this->_nbDeposits++;

  this->_totalAmount += deposit;
  this->_totalNbDeposits++;
}

bool Account::Account::makeWithdrawal(int withdrawal) {
  _displayTimestamp();
  if (this->_amount - withdrawal < 0) {
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->checkAmount() << ";";
    std::cout << "withdrawal:";
    std::cout << "refused" << std::endl;
    return false;
  }
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "p_amount:" << this->checkAmount() << ";";
  std::cout << "withdrawal:" << withdrawal << ";";
  std::cout << "amount:" << this->checkAmount() - withdrawal << ";";
  std::cout << "nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
  this->_amount -= withdrawal;
  this->_totalAmount -= withdrawal;
  this->_nbWithdrawals++;
  this->_totalNbWithdrawals++;
  return true;
}

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";";
  std::cout << "total:" << getTotalAmount() << ";";
  std::cout << "deposits:" << getNbDeposits() << ";";
  std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->checkAmount() << ";";
  std::cout << "deposits:" << this->_nbDeposits << ";";
  std::cout << "withdrawals:" << this->_nbWithdrawals;
  std::cout << std::endl;
}

void Account::_displayTimestamp(void) {
  time_t t;
  struct tm *tm;

  t = time(0);
  tm = localtime(&t);
  std::cout << "[" << tm->tm_year + 1900;
  std::cout << std::setfill('0') << std::setw(2) << tm->tm_mon + 1;
  std::cout << std::setfill('0') << std::setw(2) << tm->tm_mday << "_";
  std::cout << std::setfill('0') << std::setw(2) << tm->tm_hour;
  std::cout << std::setfill('0') << std::setw(2) << tm->tm_min;
  std::cout << std::setfill('0') << std::setw(2) << tm->tm_sec;
  std::cout << "] ";
}
