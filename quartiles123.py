'''
IP
9
3 7 8 5 12 14 21 13 18

OP
6
12
16

'''

input()
a=list(map(int,input().strip().split()))
a.sort()
l=len(a)
if(l%2==0):
    q2=(a[l//2]+a[l//2-1])/2
    q1=0
    q3=0
    print('{}\n{}\n{}'.format(q1,q2,q3))
else:
    q1=0
    q2=0
    q3=0
    print('{}\n{}\n{}'.format(q1,q2,q3))
    
