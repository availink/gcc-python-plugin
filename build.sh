export PATH=/usr/local/gcc-9.3.0/bin/:$PATH
export LD_LIBRARY_PATH=/usr/local/gcc-9.3.0/lib64/:$LD_LIBRARY_PATH
export CC=gcc
make PYTHON=python3 PYTHON_CONFIG=python3-config clean
make PYTHON=python3 PYTHON_CONFIG=python3-config plugin
