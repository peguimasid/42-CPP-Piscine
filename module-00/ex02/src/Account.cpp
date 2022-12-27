/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:55:58 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/27 17:39:13 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"

#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
  this->_amount = initial_deposit;
  this->_accountIndex = _nbAccounts;
  this->_totalAmount += initial_deposit;
  _nbAccounts++;
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "created" << std::endl;
}

Account::~Account() {
  this->_amount = 0;
}

void Account::makeDeposit(int deposit) {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "p_amount:" << this->_amount << ";";
  std::cout << "deposit:" << deposit << ";";
  std::cout << "amount:" << this->_amount + deposit << ";";
  std::cout << "nb_deposits:" << this->_nbDeposits + 1 << ";";
  std::cout << std::endl;

  this->_amount += deposit;
  this->_nbDeposits++;

  _totalAmount += deposit;
  _totalNbDeposits++;
}

bool Account::Account::makeWithdrawal(int withdrawal) {
  this->_amount -= withdrawal;
  return true;
}

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";";
  std::cout << "total:" << _totalAmount << ";";
  std::cout << "deposits:" << _totalNbDeposits << ";";
  std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << this->_accountIndex << ";";
  std::cout << "amount:" << this->_amount << ";";
  std::cout << "deposits:" << this->_nbDeposits << ";";
  std::cout << "withdrawals:" << this->_nbWithdrawals << ";";
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
