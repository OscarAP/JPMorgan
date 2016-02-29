/*
 * CommonStock.h
 *
 *  Created on: 28/02/2016
 *      Author: oscar
 */

#ifndef COMMONSTOCK_H_
#define COMMONSTOCK_H_

#include "Stock.h"

class CommonStock : public Stock
{
public:
    CommonStock(Symbol symbol, unsigned lastDividend, unsigned parValue);
    virtual
    ~CommonStock();

    virtual double
    getDividend() const;

private:
    CommonStock();

};

#endif /* COMMONSTOCK_H_ */
