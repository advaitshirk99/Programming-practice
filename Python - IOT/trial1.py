word=input("Enter the word:")
fr=[]
lt=[]
def odd_or_even():
    if len(word)%2==0:
        single_elem=0
    else:
        single_elem=1
for i in range(0, (int(len(word)/2)+1)):
    for j in range(i+1, (len(word)-1)):
        if (word[i]==word[j]):
            fr=word[i]+fr
            lt=lt+word[j]
print(fr+lt)
