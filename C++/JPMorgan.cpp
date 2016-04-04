/*
 * JPMorgan.cpp
 *
 *  Created on: 29/02/2016
 *      Author: oscar
 */

#include "JPMorgan.h"
#include "CommonStock.h"
#include "PreferredStock.h"

#include "StockTradeSymbolRecord.h"

JPMorgan::JPMorgan()
{
    CommonStock tea(Stock::TEA, 0, 100);
    CommonStock pop(Stock::POP, 9, 100);
    CommonStock ale(Stock::ALE, 23, 60);
    PreferredStock gin(Stock::GIN, 8, 2, 100);
    CommonStock joe(Stock::JOE, 13, 250);

    StockTrade teaStrockTrade1(tea,);

    StockTradeSymbolRecord teaStockRecord;
    teaStockRecord.addStockRecord(teaStockTrade1);
    m_stockTradeRecord.addStockTradeSymbol(Stock::TEA, );
}

JPMorgan::~JPMorgan()
{
    // TODO Auto-generated destructor stub
}

