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
a=sorted(list(map(int,input().strip().split())))
l=len(a)
median = lambda a: (a[len(a)//2]+a[len(a)//2-1])/2 if(len(a)%2==0) else int(a[len(a)//2])

if(l%2==0):
    print('{:.0f}\n{:.0f}\n{:.0f}'.format(median(a[:l//2]),median(a),median(a[l//2:])))
else:
    # q3 start index is the index of the middle element plus one
    #q3_start_index=l//2+1
    #q3=median(a[q3_start_index:])
    print('{0:.0f}\n{1}\n{2:.0f}'.format(median(a[:l//2]),median(a),median(a[l//2+1:])))
