from setuptools import find_packages
from setuptools import setup

setup(
    name='picas_msgs',
    version='1.2.1',
    packages=find_packages(
        include=('picas_msgs', 'picas_msgs.*')),
)
