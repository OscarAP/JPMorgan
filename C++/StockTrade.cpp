/*
 * StockTrade.cpp
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#include "StockTrade.h"

StockTrade::StockTrade(const Stock& stock, const std::time_t& timeStamp, unsigned stockCount, TradeType tradeType,
                       unsigned price) :
        m_stock(stock), m_timeStamp(timeStamp), m_stockCount(stockCount), m_tradeType(tradeType), m_price(price)
{
}

StockTrade::~StockTrade()
{
}

