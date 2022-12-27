/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:55:58 by gmasid            #+#    #+#             */
/*   Updated: 2022/12/27 17:12:15 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"

#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
  this->_amount = initial_deposit;
}

Account::~Account() {
  this->_amount = 0;
}

void Account::makeDeposit(int deposit) {
  this->_amount += deposit;
}

bool Account::Account::makeWithdrawal(int withdrawal) {
  this->_amount -= withdrawal;
  return true;
}

void Account::displayAccountsInfos(void) {
  std::cout << "index:" << _nbAccounts << ";";
}

void Account::displayStatus(void) const {
  std::cout << "index:" << _nbAccounts << ";";
}
