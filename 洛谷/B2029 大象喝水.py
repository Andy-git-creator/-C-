s=str(input())
p=s.split(' ')
h=int(p[0])
r=int(p[1])
v=3.14*r*r*h
n=20000/v+1
print(int(n))