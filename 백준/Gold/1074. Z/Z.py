import sys

N, r, c = map(int, sys.stdin.readline().strip().split())

answer = 0

while N != 0:
	N -= 1
    
	if r < 2 ** N and c < 2 ** N:
		answer += ( 2 ** N ) * ( 2 ** N ) * 0
	elif r < 2 ** N and c >= 2 ** N:
		answer += ( 2 ** N ) * ( 2 ** N ) * 1
		c -= ( 2 ** N )
         
	elif r >= 2 ** N and c < 2 ** N: 
		answer += ( 2 ** N ) * ( 2 ** N ) * 2
		r -= ( 2 ** N )
           
	else:
		answer += ( 2 ** N ) * ( 2 ** N ) * 3
		r -= ( 2 ** N )
		c -= ( 2 ** N )

print(answer)