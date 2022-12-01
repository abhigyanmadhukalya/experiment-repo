import time
from rich.progress import track

my_time = int(input("Enter time in seconds: "))

for _ in range(my_time, 0, -1):
    seconds = _ % 60
    minutes = int(_ / 60) % 60
    hours = int(_ / 3600) % 24
    days = int(_ / 86400)
    print(f"\r{days:02}:{hours:02}:{minutes:02}:{seconds:02}", end="")
    time.sleep(1)
