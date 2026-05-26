a = str(input())
b = a.split(' ')
s = int(b[0])
v = int(b[1])
m = (s+v-1) // v + 10
tm=480
sm=tm - m
if sm< 0:
    sm += 1440
start_hour = sm // 60
start_minute = sm % 60
print(f"{start_hour:02d}:{start_minute:02d}")