
def  fibonacci(n,n1,l,counter):
    if(counter==5):
        #print(l)
        return l
     
    else:
       sum1=n+n1
       n=n1
       n1=sum1
       l.append(sum1)
       counter+=1
       return fibonacci(n,n1,l,counter)
n=0
n1=1
counter=0
l=[]
l.append(n)
l.append(n1)
a=[]  
a=fibonacci(n,n1,l,counter)
print(a)
for i in range(len(a)):
        print(a[i])


     

     
     
