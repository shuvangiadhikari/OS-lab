#!/bin/bash

# Display the list of processes
ps

# Prompt the user to enter a PID
echo "Enter the PID:"
read pid

# Send a SIGKILL signal to the specified PID
kill -9 $pid

# Display a message indicating the operation is finished
echo "Finished"
