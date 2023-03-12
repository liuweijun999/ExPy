from distutils.core import setup, Extension
import os
import sys
src_path = os.path.dirname(os.path.abspath(__file__))
old_path = os.getcwd()
os.chdir(src_path)
sys.path.insert(0, src_path)
src_path = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(src_path, "build"))
module1 = Extension('my',
                    sources = ['mymodule.c'])

setup (name = 'My',
       version = '1.0',
       description = 'This is My package',
       ext_modules = [module1])