//circle.cpp
//Aaron Nicanor
//anicanor

#include<iostream>

#include<vector>
#include "circle.h"

using namespace std;

//Constructor
Circle::Circle(int x, int y) : Shape(x,y){
}

//Drawing out the circle
void Circle::draw(Grid &grid){

  grid.set(m_x + 1,m_y,'o');
  grid.set(m_x + 2,m_y, 'o');
  grid.set(m_x , m_y + 1, 'o');
  grid.set(m_x + 3 , m_y + 1, 'o');
  grid.set(m_x , m_y + 2, 'o');
  grid.set(m_x + 3,  m_y + 2, 'o');
  grid.set(m_x + 1, m_y + 3, 'o');
  grid.set(m_x + 2, m_y + 3, 'o');
}

