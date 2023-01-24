def mysplit(strng):
    lst=[]
    s_word=""
    print (strng, " ", len(strng))
    for i in range(len(strng)):
        if strng[i]!=" ":
            s_word+=strng[i]
            continue
        lst.append(s_word)    
        s_word=""
   # while("" in lst):
#       lst.remove("")
    return lst;
        
print(mysplit("To be or not to be, that is the question"))
print(mysplit("To be or not to be,that is the question"))
print(mysplit("   "))
print(mysplit(" abc "))
print(mysplit(""))
