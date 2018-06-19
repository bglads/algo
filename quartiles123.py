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
quartile = lambda a: (a[len(a)//2]+a[len(a)//2-1])/2 if(len(a)%2==0) else int(a[len(a)//2])

if(l%2==0):
    q2=quartile(a)
    # length of the q1 is total_length//2
    q1_len=l//2
    q1=quartile(a[:q1_len])
    q3=quartile(a[l//2:])
    print('{:.0f}\n{:.0f}\n{:.0f}'.format(q1,q2,q3))
else:
    # the middle element
    q2=a[l//2]
    # the index of the middle element is the size of the 1st quartile
    q1_len=l//2
    q1=quartile(a[:q1_len])
    # q3 start index is the index of the middle element plus one
    q3_start_index=l//2+1
    q3=quartile(a[q3_start_index:])
    print('{0:.0f}\n{1}\n{2:.0f}'.format(q1,q2,q3))
