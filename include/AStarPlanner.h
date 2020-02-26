/**
 * @file AStarPlanner.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-02-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include "Node.h"
#include <vector>

/**
 * @brief AStar Planner class. This class implements the A* algorithm 
 * 
 */
class AStarPlanner
{

    std::vector<std::vector<int>> plan_;
    bool is_node_valid_(Node node);
    bool is_destination_();

public:

    void make_plan();


};