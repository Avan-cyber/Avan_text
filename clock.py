# To find the nearest time for the next palindromic time display to appear.
times = input()
time = times.split()
h = int(time[0])
m = int(time[1])
if 0 <= h < 5:
    if m < 10*h:
        next_time = f"{h:02}:{10*h}"
    else:
        next_time = f"{h+1:02}:{10*(h+1)}"
elif h == 5:
    if m < 10*h:
        next_time = f"{h:02}:{10*h}"
    else:
        next_time = "10:01"
elif 5 < h <10:
    next_time = "10:01"
elif 10 <= h < 15:
    if m < 1+10*(h-10):
        next_time = f"{h}:{1+10*(h-10)}"
    else:
        next_time = f"{h+1}:{1+10*(h-9)}"
elif h == 15:
    if m < 1+10*(h-10):
        next_time = f"{h}:{1+10*(h-10)}"
    else:
        next_time = "20:02"
elif 15 < h < 20:
    next_time = "20:02"
elif 20 <= h < 23:
    if m < 2+10*(h-20):
        next_time = f"{h}:{2+10*(h-20)}"
    else:
        next_time = f"{h+1}:{2+10*(h-19)}"
elif h == 23:
    if m < 2+10*(h-20):
        next_time = f"{h}:{2+10*(h-20)}"
    else:
        next_time = "00:00"
print(next_time)
