months=[2200,2350,2600,2130,2190]
month=['January','February','March','April','May']
print("Extra dollars spent in February in comparision to January: ",months[1]-months[0])
print("Expense in first quarter: ",months[0]+months[1]+months[2])
for i in range(0,5):
    if months[i] == 2000:
        print(month[i])
    else:
        print("No month")
    break
months.insert(5,1980)
month.insert(5,'June')
print(months, month)
