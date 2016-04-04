/*
 * StockTradeSymbolRecord.cpp
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#include "StockTradeSymbolRecord.h"

StockTradeSymbolRecord::StockTradeSymbolRecord()
{
}

StockTradeSymbolRecord::~StockTradeSymbolRecord()
{
}

void
StockTradeSymbolRecord::addStockRecord(const StockTrade& stockTrade)
{
    m_stockTradeSymbol[stockTrade.getTimeStamp()] = &stockTrade;
}
