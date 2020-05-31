#assert equal if condition same then run else fail
#assert not equal if condition same fail else run
import unittest
from selenium import webdriver
class Test(unittest.TestCase):
    def testname(self):
        driver = webdriver.Chrome(executable_path="/home/divya/Documents/cdn")
        driver.get("https://www.google.com/")
        titledriver = driver.title
        #assertequal
        #self.assertEqual("Google",titledriver,"Webpage name changed")
        self.assertNotEqual("Gooogle",titledriver,"Webpage name same")


if __name__ == "__main__":
    unittest.main()






