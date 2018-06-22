'''
A manufacturer of metal pistons finds that, on average, 12% of the pistons they manufacture are rejected 
because they are incorrectly sized. What is the probability that a batch of 10 pistons will contain:

    No more than 2 rejects?
    At least 2 rejects?

IP
12 10

OP
0.891
0.342
'''


a=list(map(float,input().strip().split())
#probability of rejects
p=float(a[0])/100
#total trials
n=int(a[1])
total=0.0
fact = lambda n :1 if n<=1 else n*fact(n-1)
comb = lambda x, n: fact(n)/(fact(x)*fact(n-x))
for i in range(3):## is same as range(0,3)
    total+=comb(i,n)*(p**i)*((1-p)**(n-i))
print(round(total,3))
total=0
for i in range(2):
    total+=comb(i,n)*(p**i)*((1-p)**(n-i))
##1-(probability of 0 or 1 rejects)
print(round(1-sum([comb(i,10)*(p**i)*((1-p)**(n-i)) for i in range(2)]),3))
