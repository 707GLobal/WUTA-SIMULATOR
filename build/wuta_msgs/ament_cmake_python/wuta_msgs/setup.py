from setuptools import find_packages
from setuptools import setup

setup(
    name='wuta_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('wuta_msgs', 'wuta_msgs.*')),
)
