#assert true
#assert false
import unittest
from selenium import webdriver
class Test(unittest.TestCase):
    def testName(self):
        driver = webdriver.Chrome(executable_path="/home/divya/Documents/cdn")
        driver.get("https://www.google.com/")
        titleofWebpage = driver.title
        #self.assertTrue(titleofWebpage=="Google")#true  true passs
        #self.assertFalse(titleofWebpage=="Google")#false true fail
        #self.assertTrue(titleofWebpage=="Google123")#true false fail
        self.assertFalse(titleofWebpage=="Google123")#false  false pass

if __name__ == "__main__":
    unittest.main()
        





