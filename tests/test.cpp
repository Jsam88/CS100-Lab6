#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(RectangleTest, areaOnly){
        Rectangle* rec = new Rectangle();
        EXPECT_EQ(rec->area(), 0);
        delete rec;
}

TEST(RectangleTest, PerimeterOnly){
        Rectangle* rec = new Rectangle();
        EXPECT_EQ(rec->perimeter(), 0);
        delete rec;
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
        EXPECT_EQ(rec->perimeter(),14);
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
