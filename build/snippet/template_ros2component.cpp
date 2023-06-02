//-----------------------------
// include
//-----------------------------
// STL
#include <memory>
#include <thread>
#include <functional>

// ROS2
#include <rclcpp/rclcpp.hpp>

#include "template_ros2component.hpp"

//-----------------------------
// Namespace & using
//-----------------------------

//-----------------------------
// Methods
//-----------------------------
/**
 * @brief Project name
 * 
 */
namespace NAME_SPACE{
/**
 * @brief Construct a new class object
 * 
 * @param options 
 */
CLASS_NAME::CLASS_NAME(rclcpp::NodeOptions options) : rclcpp::Node("node_name", options)
{
    // Using placeholders
    using std::placeholders::_1;
    using std::placeholders::_2;
    using std::placeholders::_3;

    // Initialize parameters
    RCLCPP_INFO(this->get_logger(), "Initialize parameters...");
    this->forceSet(&this->RATE, this->declare_parameter("node.rate", 30));
    RCLCPP_INFO(this->get_logger(), "Complete! Parameters were initialized.");

    // Initialize subscriber
    RCLCPP_INFO(this->get_logger(), "Initialize subscribers...");
    RCLCPP_INFO(this->get_logger(), "Complete! Subscribers were initialized.");

    // Initialize publisher
    RCLCPP_INFO(this->get_logger(), "Initialize publishers...");
    RCLCPP_INFO(this->get_logger(), "Complete! Publishers were initialized.");

    // Initialize Service-Server
    RCLCPP_INFO(this->get_logger(), "Initialize service-servers...");
    RCLCPP_INFO(this->get_logger(), "Complete! Service-servers were initialized.");

    // Initialize Service-Client 
    RCLCPP_INFO(this->get_logger(), "Initialize service-clients...");
    RCLCPP_INFO(this->get_logger(), "Complete! Service-clients were initialized.");

    // Main loop processing
    this->thread = std::make_unique<std::thread>(&CLASS_NAME::run, this);
    this->thread->detach();
}

/**
 * @brief Destroy the class object
 * 
 */
CLASS_NAME::~CLASS_NAME()
{
    this->thread.release();
}

/**
 * @brief Execute method
 * 
 */
void CLASS_NAME::run()
{
    RCLCPP_INFO_STREAM(this->get_logger(), this->get_name() << " has started. thread id = " << std::this_thread::get_id());
    
    // Main loop
    for(rclcpp::WallRate loop(1); rclcpp::ok(); loop.sleep()){
        
    }

    RCLCPP_INFO(this->get_logger(), "%s has stoped.", this->get_name());
}
}

#include <rclcpp_components/register_node_macro.hpp>
RCLCPP_COMPONENTS_REGISTER_NODE(NAME_SPACE::CLASS_NAME)

//-----------------------------------------------------------------------------------
// end of file
//-----------------------------------------------------------------------------------