from setuptools import find_packages
from setuptools import setup

setup(
    name='ex4',
    version='0.0.0',
    packages=find_packages(
        include=('ex4', 'ex4.*')),
)
