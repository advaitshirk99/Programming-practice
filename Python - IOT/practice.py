def readint(prompt,min, max):
    t=False
    while not t:
        try:
            value=int(input(prompt))
            t=True
        except ValueError:
            print("Error: Wrong Input")
        if value>-10 and value<10:
            return value;
        else:            
            print("Error: the value is not permitted range({},{})".format(min,max))
            value=readint("Re-enter a number:",-10,10)
v=readint("Enter a number from -10 to 10: ", -10,10)
print("The number is:",v)
