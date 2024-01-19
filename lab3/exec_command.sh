#!/bin/bash

echo "Program for executing UNIX command using shell programming"
echo "Welcome"

# List processes
ps

# Execute wc command with  a c program file
exec wc -l process_creation.c

echo "This line will not be executed if exec is used"

