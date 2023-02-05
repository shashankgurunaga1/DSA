#Stack

def isEmpty(stack):
    if (len(stack)==0):
        return True
    else:
        return False
def appendi(stack,itm):
    stack.append(itm)
    top=len(stack)-1
def pop(stack):
   
    if isEmpty(stack):
        return "Not possible"
    else:
        itm=stack.pop()
        if(len(stack)==0):
            top=None
        else:
            top=len(stack)-1
    return itm
def peek(stack):
    if isEmpty(stack):
        return "Nothing"
    else:
        top=len(stack)-1
        return top


def display(stack):
    if isEmpty(stack):
        print("Stack is Empty")
    else:
        top=len(stack)-1
        print("Top->",stack[top])
        for i in range(len(stack)-1,-1,-1):
            print(stack[i])
#_____main_____
stack=[]
top=None
while True:
    print("STACK OPERATIONS")
    print("1. PUSH/APPEND")
    print("2. POP")
    print("3. Peek")
    print("4. Display the stack")
    print("5. Exit")
    option=int(input("Enter the choice"))
    if(option==1):
        item=int(input("Enter the number you want to put in the stack"))
        appendi(stack,item)
    elif(option==2):
        output=pop(stack)
        if(output=="Not possible"):
            print("Stack is Empty")
        else:
            print("The popped element is ",output)
    elif(option==3):
        output=peek(stack)
        if (output=="Nothing"):
            print("Stack is Empty")
        else:
            print("The top element of the stack is ",output)
    elif(option==4):
        display(stack)
    elif(option==5):
        break
    else:
        print("Wrong Choice! Enter again")





