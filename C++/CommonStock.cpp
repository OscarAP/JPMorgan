/*
 * CommonStock.cpp
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#include "CommonStock.h"

CommonStock::CommonStock(Symbol symbol, unsigned lastDividend, unsigned parValue) :
        Stock(symbol, lastDividend, parValue)
{
}

CommonStock::~CommonStock()
{
}

double
CommonStock::getDividend() const
{
    return m_lastDividend;
}

