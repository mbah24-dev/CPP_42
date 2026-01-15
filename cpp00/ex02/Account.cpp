/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 03:10:02 by mbah              #+#    #+#             */
/*   Updated: 2026/01/15 03:10:05 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

/* ************************************************************************** */
/*                          Static variable definitions                       */
/* ************************************************************************** */

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* ************************************************************************** */
/*                              Static Helpers                                */
/* ************************************************************************** */

void Account::_displayTimestamp(void) {
	std::time_t now = std::time(NULL);
	std::tm *t = std::localtime(&now);

	std::cout << "["
			  << (t->tm_year + 1900)
			  << (t->tm_mon + 1 < 10 ? "0" : "") << t->tm_mon + 1
			  << (t->tm_mday < 10 ? "0" : "") << t->tm_mday
			  << "_"
			  << (t->tm_hour < 10 ? "0" : "") << t->tm_hour
			  << (t->tm_min < 10 ? "0" : "") << t->tm_min
			  << (t->tm_sec < 10 ? "0" : "") << t->tm_sec
			  << "] ";
}

/* ************************************************************************** */
/*                          Constructors / Destructor                         */
/* ************************************************************************** */

Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts),
	  _amount(initial_deposit),
	  _nbDeposits(0),
	  _nbWithdrawals(0) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;

	++_nbAccounts;
	_totalAmount += _amount;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";closed" << std::endl;

	--_nbAccounts;
	_totalAmount -= _amount;
}

/* ************************************************************************** */
/*                              Static Methods                                */
/* ************************************************************************** */

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

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			  << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits
			  << ";withdrawals:" << _totalNbWithdrawals
			  << std::endl;
}

/* ************************************************************************** */
/*                              Member Methods                                */
/* ************************************************************************** */

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";deposit:" << deposit;

	_amount += deposit;
	++_nbDeposits;
	++_totalNbDeposits;
	_totalAmount += deposit;

	std::cout << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits
			  << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount;

	if (withdrawal > _amount) {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	++_nbWithdrawals;
	++_totalNbWithdrawals;
	_totalAmount -= withdrawal;

	std::cout << ";withdrawal:" << withdrawal
			  << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals
			  << std::endl;

	return true;
}

int Account::checkAmount(void) const {
	return _amount;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals
			  << std::endl;
}
