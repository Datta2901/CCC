def solve(nums):
    pair_dict = {}
    stack = []
    for i, num in enumerate(nums):
        while stack and num > nums[stack[-1]]:
            j = stack.pop()
            gap = i-j
            num_possible_starting_point = j-stack[-1] if stack else j+1
            pair_dict[gap] = max(pair_dict.get(gap, 0), num_possible_starting_point)
        stack.append(i)
 
    return sum(pair_dict.values())
N = int(input())
nums = list(map(int, input().split()))
print(solve(nums))