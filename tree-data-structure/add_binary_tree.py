class Node:
    def __init__(self, val=None, left=None, right=None):
        self.val = int(val)
        self.left = left
        self.right = right


def pre_order(root_node):
    if root_node:
        print(root_node.val)
        pre_order(root_node.left)
        pre_order(root_node.right)


def add_binary_trees(node_1, node_2):
    if not node_1 and not node_2:
        return -1

    # Prepare root for current subtree. If any candidate is None then pick 0 as value
    current_node = Node((0 if not node_1 else node_1.val) + (0 if not node_2 else node_2.val))

    # Decide left subtrees for both candidates
    left_node_1 = node_1.left if node_1 else None
    left_node_2 = node_2.left if node_2 else None

    # Open up a position for the recursive call's value to get attached, recursively work on left subtrees
    current_node.left = add_binary_trees(left_node_1, left_node_2)
    # We are returning -1 if both subtrees are None hence set left child as None
    current_node.left = None if current_node.left == -1 else current_node.left

    # Decide right subtrees for both candidates
    right_node_1 = node_1.right if node_1 else None
    right_node_2 = node_2.right if node_2 else None

    # Open up a position for the recursive call's value to get attached, recursively work on right subtrees
    current_node.right = add_binary_trees(right_node_1, right_node_2)
    # We are returning -1 if both subtrees are None hence set right child as None
    current_node.right = None if current_node.right == -1 else current_node.right

    # Return root of current subtree so that if can be attached at previous recursion call's open position
    return current_node


if __name__ == '__main__':
    input_str = input("Enter nodes for first tree (space separated): ")
    input_str = input_str.split(' ')

    if not input_str:
        exit(0)

    node_list = []

    for idx, node_val in enumerate(input_str):
        if idx == 0:
            root1 = Node(input_str[0])
            node_list.append(root1)
            continue

        parent = int((idx - 1) / 2)

        is_left = idx == (2 * parent) + 1

        node = Node(node_val)

        node_list.append(node)

        if is_left:
            node_list[parent].left = node
        else:
            node_list[parent].right = node

    input_str = input("Enter nodes for second tree (space separated): ")
    input_str = input_str.split(' ')

    if not input_str:
        exit(0)

    node_list = []

    for idx, node_val in enumerate(input_str):
        if idx == 0:
            root2 = Node(input_str[0])
            node_list.append(root2)
            continue

        parent = int((idx - 1) / 2)

        is_left = idx == (2 * parent) + 1

        node = Node(node_val)

        node_list.append(node)

        if is_left:
            node_list[parent].left = node
        else:
            node_list[parent].right = node

    print('Tree 1 \n')
    pre_order(root1)
    print('\n\n Tree 2 \n')
    pre_order(root2)

    if not root1 and not root2:
        print("Both trees are empty")
        exit(0)

    result_root = add_binary_trees(root1, root2)

    print('\n\n Resultant Tree \n')
    pre_order(result_root)
