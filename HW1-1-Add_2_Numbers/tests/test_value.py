import unittest
from gradescope_utils.autograder_utils.decorators import weight
from gradescope_utils.autograder_utils.files import check_submitted_files
import os
import random
import test_gcc

class test_value(unittest.TestCase):
    @weight(90)
    def test_value(self):
        """call test_gcc"""
        test_gcc.test_gcc()
        """add two numbers"""
        for iter in range(10):
            v1 = random.randrange(10000)
            v2 = random.randrange(10000)
            f = open('input', 'w')
            twonumbers = str(v1) + ' ' + str(v2)
            print(twonumbers)
            f.write(twonumbers)
            f.close()
            command = f"./prog4 < input > output"
            print(command)
            runrtv = os.system(command)
            if (runrtv != 0):
                print("Execution fail")
            # print(os.listdir("./"))
            self.assertEqual(runrtv, 0)
            f = open('output', 'r')
            value = int(f.readline())
            print(value)
            self.assertEqual(value, v1 + v2)
            value = int(f.readline())
            print(value)
            self.assertEqual(value, v1 - v2)
            f.close()
