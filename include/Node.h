/**
 * @file Node.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-02-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */

/**
 * @brief Node class to describe a configuration in a space which is represented as a graph;
 * 
 */
class Node
{
    
public:
    int y;
    int x;
    int parent_x;
    int parent_y;
    float g_cost;
    float h_cost; 
    float f_cost;

};