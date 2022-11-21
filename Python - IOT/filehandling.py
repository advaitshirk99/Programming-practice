#Creating a file 
new_file = open("Python - IOT/new_txt.txt", "w")
new_file.write("This is a new file.\nChristmas is coming\n")
new_file.close()

#Reading from a file and printing it to the console
read_file = open("Python - IOT/new_txt.txt", "r")
data = read_file.read()
print(data)
read_file.close()

#writing/appending data from one file to another
read_file = open("Python - IOT/new_txt.txt", "r")
second_file = open("Python - IOT/secondfile.txt", "a")
for line in read_file:
    for word in line.split():
        second_file.write(word + "\n")
read_file.close()
second_file.close()