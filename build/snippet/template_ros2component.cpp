//-----------------------------
// include
//-----------------------------
// STL
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <thread>

// ROS2 library
#include <rclcpp/rclcpp.hpp>

//-----------------------------
// Namespace
//-----------------------------


/**
 * @brief Project Name
 * 
 */
namespace NAME_SPACE{
/**
 * @brief Component Definition
 * 
 */
class CLASS_NAME: public rclcpp::Node {
public:
    CLASS_NAME(rclcpp::NodeOptions options = rclcpp::NodeOptions());
    ~CLASS_NAME();
private:
    void Execute();
};

/**
 * @brief Construct a new class object
 * 
 * @param options 
 */
CLASS_NAME::CLASS_NAME(rclcpp::NodeOptions options) : rclcpp::Node("node_name", options)
{
    // create thread
    std::thread{
        std::bind(CLASS_NAME::Execute, this)
    }.detach();
}

/**
 * @brief Destroy the class object
 * 
 */
CLASS_NAME::~CLASS_NAME()
{

}

/**
 * @brief Execute method
 * 
 */
void CLASS_NAME::Execute()
{
    // Main process loop setting
    rclcpp::WallRate loop(1);		// loop freq.[Hz]

    // Main loop
    while(rclcpp::ok()){
        
        loop.sleep();
    }
}

}

#include <rclcpp_components/register_node_macro.hpp>
RCLCPP_COMPONENTS_REGISTER_NODE(NAME_SPACE::CLASS_NAME)

//-----------------------------------------------------------------------------------
// end of file
//-----------------------------------------------------------------------------------