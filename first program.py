#Get the name of the file
name=input('Enter file: ')
handle=open(name, 'r')

#count word frequency

count=dict()
for lines in handle:
    words=line.split()
    for words in words:
        count[words]=counts.get(word,0)+1

#find the most common words

bigcount = none
bigword=none
for word,count in counts.items():
    if bigcount is none or count > bigcount:
        bigword=word
        bigcount=count

#All done
print(bigword, bigcount)
