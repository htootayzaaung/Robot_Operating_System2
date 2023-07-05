from setuptools import find_packages
from setuptools import setup

setup(
    name='client_server',
    version='0.0.0',
    packages=find_packages(
        include=('client_server', 'client_server.*')),
)
