from Stock import Stock

class PreferredStock(Stock):
    def __init__(self, symbol, lastDividend, fixedDividend, parValue):
        Stock.__init__(self, symbol, lastDividend, parValue)
        self.parValue = parValue
        
    def getDividendYield(self, price):
        return (self.fixedDividend * self.parValue) / self.price
        
