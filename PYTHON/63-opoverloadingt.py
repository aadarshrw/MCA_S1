class Time:
    def __init__(self, hour, minute, second):
        self.hour = hour
        self.minute = minute
        self.second = second

    def __add__(self, other):
        total_seconds = (self.hour * 3600 + self.minute * 60 + self.second) + (other.hour * 3600 + other.minute * 60 + other.second)
        hours = total_seconds // 3600
        minutes = (total_seconds % 3600) // 60
        seconds = total_seconds % 60
        return Time(hours, minutes, seconds)


time1 = Time(10, 20, 30)
time2 = Time(5, 15, 45)

total_time = time1 + time2

print(f"Sum of time: {total_time.hour}:{total_time.minute}:{total_time.second}")
