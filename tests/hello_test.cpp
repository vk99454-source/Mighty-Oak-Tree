#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE( "node stores a squirrel" ) {
    Squirrel cheeks("Cheeks");
    Node root(cheeks);
    REQUIRE(root.getSquirrel().getName() == "Cheeks");
    REQUIRE(root.left() == nullptr);
    REQUIRE(root.right() == nullptr);
}
TEST_CASE( "can set left and right children" ) {
    Squirrel cheeks("Cheeks");
    Squirrel squeaks("Squeaks");
    Squirrel fluffy("Mr. Fluffy Butt");
    Node root(cheeks);
    Node leftNode(squeaks);
    Node rightNode(fluffy);
    root.setLeft(&leftNode);
    root.setRight(&rightNode);
    REQUIRE(root.left() == &leftNode);
    REQUIRE(root.right() == &rightNode);
}
TEST_CASE( "can move through tree from root to children" ) {
    Squirrel cheeks("Cheeks");
    Squirrel squeaks("Squeaks");
    Squirrel fluffy("Mr. Fluffy Butt");
    Node root(cheeks);
    Node leftNode(squeaks);
    Node rightNode(fluffy);
    root.setLeft(&leftNode);
    root.setRight(&rightNode);
    REQUIRE(root.left()->getSquirrel().getName() == "Squeaks");
    REQUIRE(root.right()->getSquirrel().getName() == "Mr. Fluffy Butt");
}