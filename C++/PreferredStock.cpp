/*
 * PreferredStock.cpp
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#include "PreferredStock.h"

PreferredStock::PreferredStock(Symbol symbol, unsigned lastDividend, unsigned parValue, unsigned fixedDividend) :
        Stock(symbol, lastDividend, parValue), m_fixedDividend(fixedDividend)
{
}

PreferredStock::~PreferredStock()
{
}

double
PreferredStock::getDividend() const
{
    return m_fixedDividend * m_parValue;
}
