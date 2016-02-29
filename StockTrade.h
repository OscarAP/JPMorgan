/*
 * StockTrade.h
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#ifndef STOCKTRADE_H_
#define STOCKTRADE_H_

#include <ctime>

class Stock;

class StockTrade
{
public:
    enum TradeType
    {
        Buy, Sell
    };
    StockTrade(const Stock& stock, const std::time_t& timeStamp, unsigned stockCount, TradeType tradeType, unsigned price);
    virtual
    ~StockTrade();

    std::time_t getTimeStamp() const
    {
        return m_timeStamp;
    }

protected:
    const Stock& m_stock;
    std::time_t m_timeStamp;
    unsigned m_stockCount;
    TradeType m_tradeType;
    unsigned m_price;

private:
    StockTrade();
};

#endif /* STOCKTRADE_H_ */
