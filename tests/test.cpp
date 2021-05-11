#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(RectangleTest, AreaTest1){
        Rectangle* rec = new Rectangle(1,5);
        EXPECT_EQ(rec->area(),5);
        delete rec;
}

TEST(RectangleTest, AreaTest2){
        Rectangle* rec = new Rectangle(3,4);
        EXPECT_EQ(rec->area(),12);
        delete rec;
}

TEST(RectangleTest, AreaTest3){
        Rectangle* rec = new Rectangle(0,4);
        EXPECT_EQ(rec->area(),0);
        delete rec;
}

TEST(RectangleTest, AreaTest4){
        Rectangle* rec = new Rectangle(6,0);
        EXPECT_EQ(rec->area(),0);
        delete rec;
}

TEST(RectangleTest, PerimeterTest1){
        Rectangle* rec = new Rectangle(1,5);
        EXPECT_EQ(rec->perimeter(),12);
        delete rec;
}

TEST(RectangleTest, PerimeterTest2){
        Rectangle* rec = new Rectangle(3,4);
        EXPECT_EQ(rec->perimeter(),14);
        delete rec;
}
TEST(RectangleTest, PerimeterTest3){
        Rectangle* rec = new Rectangle(1,4);
        EXPECT_EQ(rec->perimeter(),10);
        delete rec;
}

TEST(RectangleTest, PerimeterTest4){
        Rectangle* rec = new Rectangle(6,1);
        EXPECT_EQ(rec->perimeter(),14);
        delete rec;
}

TEST(ConstructorTest, DefaultConstructorWidth){
        Rectangle* test = new Rectangle(0, 0);
        EXPECT_EQ(test->get_width(), 0);
}

TEST(ConstructorTest, DefaultConstructorHeight){
        Rectangle* test = new Rectangle(0, 0);
        EXPECT_EQ(test->get_height(), 0);
}

TEST(ConstructorTest, ParameterConstructorWidth){
        Rectangle* test = new Rectangle(2, 3);
        EXPECT_EQ(test->get_width(), 2);
}

TEST(ConstructorTest, ParameterConstructorHeight){
        Rectangle* test = new Rectangle(2, 3);
        EXPECT_EQ(test->get_height(), 3);
}
