from Stock import Stock

class CommonStock(Stock):
    """Common stock"""
    def __init__(self, symbol, lastDividend, parValue):
        Stock.__init__(self, symbol, lastDividend, parValue)
        
    def getDividendYield(self, price):
        return self.lastDividend / price

        
