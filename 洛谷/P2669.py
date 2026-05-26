k=int(input())
total_coins=0
current_stage=1
day=0
while day+current_stage<k:
    total_coins+=current_stage*current_stage
    day+=current_stage
    current_stage+=1
remaining_days=k-day
total_coins+=current_stage*remaining_days
print(total_coins)