# CAPLDLL_ENT
CAPLDLL calling ENT, includs DLL solution, ENT src, and CANoe configuration.

12/9/2024£º
CANoe crashed, removed calculation steps then change to ENT_SimpleTest, result the same, possible reason:
	1. input_array should initialize;
	2. double type not correct.
	Solution: generate another 2 CAPL.dll for test.