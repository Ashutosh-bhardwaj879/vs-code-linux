import unittest
#from Package1.TC_LoginTest import LoginTest #import class
#from Package1.TC_SignupTest import Signuptest #import class

from Package2.TC_PaymentTest import PaymentTest #import class
from Package2.TC_PaymentReturnTest import PaymentReturnTest #import class
#get all tsets
tc1 = unittest.TestLoader().loadTestsFromTestCase(LoginTest)
tc2 = unittest.TestLoader().loadTestsFromTestCase(SignupTest)
tc3 = unittest.TestLoader().loadTestsFromTestCase(PaymentTest)
tc4 = unittest.TestLoader().loadTestsFromTestCase(PaymentReturnTest)
#creating testsuites
sanityTestSuite = unittest.TestSuite([tc1,tc2])
unittest.TextTestRunner().run(sanityTestSuite)

