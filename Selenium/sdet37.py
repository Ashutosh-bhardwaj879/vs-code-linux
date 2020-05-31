#assertGreater
#assertGreaterEqual
#assertLess
#assertLessEqual

import unittest
class test(unittest.TestCase):
    def testName(self):        
        #self.assertGreater(100,10)#pass 100>10
        #self.assertGreaterEqual(100,100)#pass 100 = 100 or 110>100 pass
        #self.assertLess(10,100)#pass ecause 10<100
        self.assertLessEqual(10,10)#pass because 10=10 or 10<20 

if __name__ == "__main__":
    unittest.main()

























