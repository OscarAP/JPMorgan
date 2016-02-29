/*
 * StockTradeRecord.cpp
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#include "StockTradeRecord.h"

StockTradeRecord::StockTradeRecord()
{
}

StockTradeRecord::~StockTradeRecord()
{
}

void
StockTradeRecord::addStockTradeSymbol(Stock::Symbol symbol, const StockTradeSymbolRecord& stockTradeSymbolRecord)
{
    m_stockTradeRecordMap[symbol] = &stockTradeSymbolRecord;
}

