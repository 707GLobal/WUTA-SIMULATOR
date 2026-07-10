import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/starry1n/WUTA/WUTA-SIM/install/vehicle_model'
