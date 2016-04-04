/*
 * JPMorgan.h
 *
 *  Created on: 29/02/2016
 *      Author: oscar
 */

#ifndef JPMORGAN_H_
#define JPMORGAN_H_

#include "Stock.h"
#include "StockTradeRecord.h"

class JPMorgan
{
public:
    JPMorgan();
    virtual
    ~JPMorgan();

    double
    getDividendYield(Stock::Symbol symbol, unsigned price) const;

    double
    getPERatio(Stock::Symbol symbol, unsigned price) const;

protected:
    StockTradeRecord m_stockTradeRecord;
};

#endif /* JPMORGAN_H_ */
