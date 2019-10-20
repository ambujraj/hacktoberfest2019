class Node:
    def __init__(self, val=None, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def inorder(root):
    if root:
        inorder(root.left)
        print(root.val)
        inorder(root.right)


def preorder(root):
    if root:
        print(root.val)
        inorder(root.left)
        inorder(root.right)


def postorder(root):
    if root:
        inorder(root.left)
        inorder(root.right)
        print(root.val)


if __name__ == '__main__':
    input_str = input()

    input_str = input_str.split(' ')

    if not input_str:
        exit(0)

    node_list = []

    for idx, node_val in enumerate(input_str):
        if idx == 0:
            root = Node(input_str[0])
            node_list.append(root)
            continue

        parent = int((idx - 1) / 2)

        is_left = idx == (2 * parent) + 1

        node = Node(node_val)

        node_list.append(node)

        if is_left:
            node_list[parent].left = node
        else:
            node_list[parent].right = node

    inorder(root)
    preorder(root)
    postorder(root)
