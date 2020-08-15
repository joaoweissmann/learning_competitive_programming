import copy

t = int(input())
for i in range(t):
    n_cars = int(input())
    max_speed_count = 0
    speed_lim = 10**10
    car_speeds = input()
    for car_speed in car_speeds.split():
        curr_speed = int(car_speed)
        if curr_speed <= speed_lim:
            max_speed_count += 1
        if curr_speed < speed_lim:
            speed_lim = copy.copy(curr_speed)
    print (max_speed_count)