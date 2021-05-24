#include "doctest.h"
#include "sources/BinaryTree.hpp"
#include <istream>
#include <string>

using namespace std;
using namespace ariel;

TEST_CASE("int tree")
{
    BinaryTree<int> bt;
    CHECK_NOTHROW(
        bt.add_root(3)
            .add_left(3, 7));
    CHECK_NOTHROW(bt.add_left(3, 5));

    CHECK_THROWS(bt.add_left('Z', 'G'));
    CHECK_THROWS(bt.add_root(9).add_right('B', 'E').add_right('A', 'C'));
}
TEST_CASE("string tree")
{
    BinaryTree<string> tree_of_strings; //bad build
    CHECK_NOTHROW(BinaryTree<string> tree_of_strings);
    CHECK_NOTHROW(tree_of_strings.add_root("aa"));
    CHECK_THROWS(tree_of_strings.add_left("AB", "CD"));
    CHECK_THROWS(tree_of_strings.add_right("IJ", "KL"));
    CHECK_THROWS(tree_of_strings.add_right("MN", "OP"));
    CHECK_THROWS(tree_of_strings.add_left("ST", "QR"));
    CHECK_THROWS(tree_of_strings.add_left("EF", "GH"));

    BinaryTree<string> tree_of_strings1; //build well

    CHECK_NOTHROW(tree_of_strings1.add_root("33"));
    CHECK_NOTHROW(tree_of_strings1.add_left("33", "9"));
    CHECK_NOTHROW(tree_of_strings1.add_left("3", "9"));
    CHECK_NOTHROW(tree_of_strings1.add_right("3", "5"));
    CHECK_NOTHROW(tree_of_strings1.add_right("1", "5"));
    CHECK_NOTHROW(tree_of_strings1.add_left("1", "2"));
}
TEST_CASE("char tree")
{
    BinaryTree<char> tree_of_chars1;//bad build
    CHECK_THROWS(tree_of_chars1.add_root('A'));
    CHECK_THROWS(tree_of_chars1.add_left('B', 'c'));
    CHECK_THROWS(tree_of_chars1.add_left('P', '4'));
    CHECK_THROWS(tree_of_chars1.add_right('t', '5'));
    CHECK_THROWS(tree_of_chars1.add_right('q', '7'));
    CHECK_THROWS(tree_of_chars1.add_left('1', '2'));

    BinaryTree<char> tree_of_chars;//build well
    CHECK_NOTHROW(tree_of_chars.add_root('A'));
    CHECK_NOTHROW(tree_of_chars.add_left('A', 'B'));
    CHECK_NOTHROW(tree_of_chars.add_left('B', 'C'));
    CHECK_NOTHROW(tree_of_chars.add_right('C', 'D'));
    CHECK_NOTHROW(tree_of_chars.add_right('D', 'E'));
    CHECK_NOTHROW(tree_of_chars.add_left('E', 'F'));
}
