'''
IP
The probability that a machine produces a defective product is 1/3. What is the probability that the 1st defect is found during the first 5 inspections?

1 3
5

'''

a=list(map(float,input().strip().split()))
p=float(a[0])/a[1]
n=int(input())
i=1
ans=0.0
while(i<=n):
    ans+=p*((1-p)**(n-i))
    i+=1
print("{:.3f}".format(round(ans,3)))
