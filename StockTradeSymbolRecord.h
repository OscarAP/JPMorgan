/*
 * StockTradeSymbolRecord.h
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#ifndef STOCKTRADESYMBOLRECORD_H_
#define STOCKTRADESYMBOLRECORD_H_

#include "StockTrade.h"
#include <map>
#include <ctime>

class StockTradeSymbolRecord
{
public:
    typedef std::map< std::time_t, const StockTrade* > StockTradeSymbolType;

    StockTradeSymbolRecord();
    virtual
    ~StockTradeSymbolRecord();

    void
    addStockRecord(const StockTrade& stockTrade);

protected:
    StockTradeSymbolType m_stockTradeSymbol;
};

#endif /* STOCKTRADESYMBOLRECORD_H_ */
