# utils

Utilities

## catspeed

Basic cat, but also roughly simulate different terminal baud rates.

### Usage
./catspeed 300 | 1200 | 2400 | 9600 | 14400 | 28800 | 33600 | 56000 etc < file.txt

For instance, 300 baud:
./catspeed 300 < file.txt

### Building
gcc -Wall -Wextra catspeed.c -o catspeed 
