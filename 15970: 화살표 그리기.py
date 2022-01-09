N = int(input()) #"N값을 입력하세요"
dot_list = {}

for a in range (1, N + 1):

    loc, col = map(int, input().split()) #"위치와 색깔을 순서대로 입력하시요."
    dot_list[loc] = col

loc_list = list(dot_list.keys())
loc_list.sort()
total_dist = 0

for loc1 in range (0, N):

    dist = 0

    for loc2 in range (0, N):

        if loc1 != loc2:
            
            if (dot_list[loc_list[loc1]] == dot_list[loc_list[loc2]]):
            
                if (dist == 0) | (dist >= abs(loc_list[loc1] - loc_list[loc2])):
                
                    dist = abs(loc_list[loc1] - loc_list[loc2])

    total_dist += dist

print(total_dist)
