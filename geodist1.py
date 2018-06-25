a=list(map(int,input().strip().split()))
b=int(input().strip())
a=float(a[0])/a[1]
print("{:.3f}".format(pow(1-a,4)*a))
