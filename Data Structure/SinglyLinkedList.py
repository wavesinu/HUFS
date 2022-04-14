class Node:
    def __init__(self, item=None, link=None):
        self.item, self.link = item, link


class LinkedList:
    def __init__(self):
        self.head = None

    def print_list(self):
        node = self.head
        print('h->', end="")
        while node is not None:
            print("{}->".format(node.item), end="")
            node = node.link
        print(None)

    def insert_node(self, p, new_node):
        if self.head is None:
            self.head = new_node
        elif p is None:
            new_node.link = self.head
            self.head = new_node
        else:
            new_node.link = p.link
            p.link = new_node

    def delete_node(self, p, removed):
        if removed == self.head:
            self.head = removed.link
        else:
            p.link = removed.link
        del removed

    def insert_first(self, item):  # insert before head
        new_node = Node(item)
        self.insert_node(p=None, new_node=new_node)

    def insert_last(self, item):  # insert after tail
        new_node = Node(item)
        p = self.head

        while p is not None and p.link is not None:  # p.link가 None이라면, p가 tail 이라는 의미
            p = p.link
        self.insert_node(p=p, new_node=new_node)

    def search(self, item):  # returns the node holding item
        node = self.head
        while node is not None:
            if node.item == item:
                return node
            node = node.link
        return None

    def search_prev(self, item):  # returns the node holding item and the previous node
        p = None
        node = self.head
        while node is not None:
            if node.item == item:
                return node, p
            p = node
            node = node.link
        return None, p

    def delete(self, item):


        
        # 먼저 item에 해당하는 node를 search -> search_prev
        # delete_node로 삭제
        removed, p = self.search_prev(item)
        if removed is None:
            print("Item not found")

        self.delete_node(p=p, removed=removed)

    def reverse(self):
        pass


L = LinkedList()
while True:
    cmd = input()
    if cmd == "exit":
        break
    elif cmd == "print":
        L.print_list()
    elif cmd == "reverse":
        L.reverse()
    else:
        cmd, param = cmd.split()
        if cmd == "ins_first":
            L.insert_first(int(param))
        elif cmd == "ins_last":
            L.insert_last(int(param))
        elif cmd == "find":
            node = L.search(int(param))
            if node is None:
                print('Item Not Found')
            else:
                print("{} Found".format(node.item))
        elif cmd == "del":
            L.delete(int(param))
