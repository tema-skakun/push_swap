# push_swap

![my implementation](https://github.com/tema-skakun/push_swap/blob/master/push_swap.gif)

**push_swap** is a 42 school algorithm project where we must sort a given list of random numbers with a limited set of instructions, using the lowest possible number of actions.

   - We start with two stacks called A and B.
   - A is filled with some random integers (without duplicates) and B is empty.
   - We can perform a limited set of instructions on these stacks and the goal is to sort all these integers using the lowest possible number of actions.

The limited set of instructions are:

| Operation|Description|
|:-------------:|-------------|
| sa | swap A - swap the first 2 elements at the top of stack A |
| sb | swap B - swap the first 2 elements at the top of stack B |
| ss | sa and sb at the same time |
| pa  | push A - take the first element at the top of b and put it at the top of A  |
|  pb |  push B - take the first element at the top of a and put it at the top of B |
|  ra |  rotate A - shift up all elements of stack A by 1. The first element becomes the last one |
|  rb |  rotate B - shift up all elements of stack B by 1. The first element becomes the last one |
|  rr |  ra and rb at the same time |
|  rra | reverse rotate A - shift down all elements of stack A by 1. The last element becomes the first one  |
| rrb  |  reverse rotate B - shift down all elements of stack B by 1. The last element becomes the first one |
|  rrr |  rra and rrb at the same time |


## Testing
You must use bash terminal

### on linux OS
```
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```
### on Mac OS
```
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_Mac $ARG
```
