/*
 * Stock.h
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#ifndef STOCK_H_
#define STOCK_H_

class Stock
{
public:
    enum Symbol
    {
        TEA, POP, ALE, GIN, JOE
    };

    Stock(Symbol symbol, unsigned lastDividend, unsigned parValue);
    virtual
    ~Stock();

    virtual double
    getDividend() const = 0;

    virtual double
    getDividendYield(unsigned price) const;

    virtual double
    getPERation(unsigned price) const;

protected:
    Symbol m_symbol;
    unsigned m_lastDividend;
    unsigned m_parValue;

private:
    Stock();
};

#endif /* STOCK_H_ */
