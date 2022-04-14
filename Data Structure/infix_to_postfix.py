class Stack:
    def __init__(self):
        self.data = []

    def size(self):
        return len(self.data)

    def is_empty(self):
        return self.size() == 0

    def push(self, elem):
        self.data.append(elem)

    def pop(self):
        if self.is_empty():
            return "error"
        return self.data.pop()

    def top(self):
        if self.is_empty():
            return "error"
        return self.data[-1]


infix = "1*2+3*(4-5)*6"
postfix = []
s = Stack()

prec = {'+': 0, '-': 0, '*': 1, '/': 1, '(': 2}

for ch in infix:
    if ch in '+-*/(':
        while not s.is_empty() and prec[ch] <= prec[s.top()]:
            if s.top() == '(':
                break
            op = s.pop()
            postfix.append(op)

        s.push(ch)

    elif ch == ')':
        while not s.is_empty() and s.top() != '(':
            op = s.pop()
            postfix.append(op)
        s.pop()
    else:
        postfix.append(ch)

while not s.is_empty():
    op = s.pop()
    postfix.append(op)

postfix = "".join(postfix)
print(postfix)
