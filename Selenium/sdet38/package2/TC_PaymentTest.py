import unittest
class PaymentTest(unittest.TestCase):
    def test_paymentindollar(self):
        print("This is payment in dollar")
        self.assertTrue(True)
    def test_paymentindinar(self):
        print("This is payment in dinar")
        self.assertTrue(True)
if __name__ == "__main__":
    unittest.main()