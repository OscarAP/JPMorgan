/*
 * PreferredStock.h
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#ifndef PREFERREDSTOCK_H_
#define PREFERREDSTOCK_H_

#include "Stock.h"

class PreferredStock : public Stock
{
public:
    PreferredStock(Symbol symbol, unsigned lastDividend, unsigned parValue, unsigned fixedDividend);
    virtual
    ~PreferredStock();

    virtual double
    getDividend() const;

protected:
    unsigned m_fixedDividend;

private:
    PreferredStock();

};

#endif /* PREFERREDSTOCK_H_ */
