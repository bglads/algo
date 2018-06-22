'''
IP
The ratio of boys to girls for babies born in Russia is 1.09:1
If there is 1 child born per birth, what proportion of Russian families with exactly 6 children will have at least 3 boys?

1.09 1

OP
0.696

Expln:
g=p
b=1.09p

6c3b3g3+6c4b4g2+6c5b5g1+6c6b6g0

1.09x+x=1
x(2.09)=1
g=1/2.09
b=1.09/2.09

'''


n = list(map(float,input().strip().split()))
g=1/(n[0]+n[1])
b=n[0]*g
total=0
def fact(n):
    if n==1 or n==0:
        return 1
    else:
        return n*fact(n-1)

for i in range(3,7):
    total += (fact(6)/(fact(i)*fact(6-i)))*pow(b,i)*pow(g,6-i)
print('{:.3f}'.format(total))
