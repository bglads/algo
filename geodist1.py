'''
The probability that a machine produces a defective product is 1/3 . What is the probability that the 1st defect is found during the 5th inspection?

IP
1 3
5

'''

a=list(map(int,input().strip().split()))
b=int(input().strip())
a=float(a[0])/a[1]
print("{:.3f}".format(pow(1-a,4)*a))
