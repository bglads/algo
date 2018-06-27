'''
IP
6
6 12 8 10 20 16
5 4 3 2 1 5

OP
9.0
'''

input()
a,f =list(map(int,input().strip().split())), list(map(int,input().strip().split()))
len=sum(f)
## Find the element from [(element,frequency),...] given the list and index of median
def  find(x,l):
    i=0
    count=0
    l=l+1
    while(l>count):
        count+=x[i][1]
        i+=1
    return x[i-1][0]

## If length is even median is the average of the two middle elements. If length is odd median is the middle element
median=lambda x,l: (find(x,l//2)+find(x,l//2-1))/2 if(l%2==0) else find(x,l//2)
a=sorted(zip(a,f))
print("{:.1f}".format(median(a[::-1],len//2)-median(a,len//2)))
