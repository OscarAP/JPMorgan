/*
 * Stock.cpp
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#include "Stock.h"

Stock::Stock(Stock::Symbol symbol, unsigned lastDividend, unsigned parValue) :
        m_symbol(symbol), m_lastDividend(lastDividend), m_parValue(parValue)
{
}

Stock::~Stock()
{
}

double
Stock::getDividendYield(unsigned price) const
{
    return getDividend() / price;
}

double
Stock::getPERation(unsigned price) const
{
    return price / getDividend();
}
