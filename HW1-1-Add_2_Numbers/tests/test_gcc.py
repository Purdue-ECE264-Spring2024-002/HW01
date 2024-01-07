import unittest
from gradescope_utils.autograder_utils.decorators import weight
from gradescope_utils.autograder_utils.files import check_submitted_files
import os

class test_gcc(unittest.TestCase):
    @weight(10)
    def test_gcc(self):
        """Run gcc"""
        compiled = os.system(f"gcc -g -Wall prog4.c add.c sub.c -o prog4")
        if (compiled != 0):
            print('Compile fail')
        self.assertEqual(compiled, 0)
        print('gcc passed')
