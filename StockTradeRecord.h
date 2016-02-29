/*
 * StockTradeRecord.h
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#ifndef STOCKTRADERECORD_H_
#define STOCKTRADERECORD_H_

#include <map>
#include "Stock.h"
#include "StockTrade.h"
#include "StockTradeSymbolRecord.h"

class StockTradeRecord
{
public:
    typedef std::map<Stock::Symbol, const StockTradeSymbolRecord*> StockTradeRecordType;

    StockTradeRecord();
    virtual
    ~StockTradeRecord();

    void
    addStockTradeSymbol(Stock::Symbol symbol, const StockTradeSymbolRecord& stockTradeSymbolRecord);

protected:
    StockTradeRecordType m_stockTradeRecordMap;
};

#endif /* STOCKTRADERECORD_H_ */
