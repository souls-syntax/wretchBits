# Promodoro or whatever it;s spelled as

It launches a backgroud deamon which, calls a notification after the specified amount of time.

## Usages

./promo [x] [y]

where 
x = No. of iteration deamon will run
y = Length of each session in minutes

default 
x = 1
y = 25 min

## Building 

**Linux**
make

for cleaning

make clean

**Windows**
Fuck off

## How to kill it

find if it is running first

```bash
pgrep promo
```

then 

```bash
pkill promo
```
