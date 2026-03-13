#!/bin/sh

# You will implement this exercise with a shell script that contains some awk commands.
# In subsequent exercises, the solution file will contains only awk code.
#
# You have 4 tasks to solve.
# Replace the `{exit}` action with awk code to solve the task.

## task 1
awk 'BEGIN { FS = ":"}
    { print $1 }' ./passwd

## task 2
awk '{ print NR }' ./passwd

## task 3
    #!(startsWith($6, "/root") || startsWith($6, "/home")) {print}
awk '
    BEGIN { FS = ":" }
    $6 !~ /^\/root|\/home/ { print }
' ./passwd

## task 4
awk '
    BEGIN { FS = ":"} 
    $6 ~ /\/root|\/home/ && $7 == "/bin/bash" { print }
' ./passwd
