import unittest
from CommonStock import CommonStock
from PreferredStock import PreferredStock

class TestStockMethods(unittest.TestCase):
    def test_getDividendYield(self):
        commonStock = CommonStock("TEA", 0, 100)
        self.assertEqual(commonStock.getDividendYield(100), 0)

if __name__ == '__main__':
    unittest.main()
