#assertin -one elemnet is present in second element
#assertnotin- one element is not present in another element\
#can be used in list tuple
import unittest
class Test(unittest.TestCase):
    def testName(self):
        list = ["python","selenium","java"]
        #self.assertIn("python",list)#pass
        #self.assertIn("ruby",list)#fail
        #self.assertNotIn("python",list)#fail
        self.assertNotIn("ruby",list)#pass
if __name__ == "__main__":
    unittest.main()
     


















