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
    RCLCPP_INFO(this->get_logger(), "Complete! Parameters have been initialized.");

    // Initialize subscriber
    RCLCPP_INFO(this->get_logger(), "Initialize subscribers...");
    RCLCPP_INFO(this->get_logger(), "Complete! Subscribers have been initialized.");

    // Initialize publisher
    RCLCPP_INFO(this->get_logger(), "Initialize publishers...");
    RCLCPP_INFO(this->get_logger(), "Complete! Publishers have been initialized.");

    // Initialize Service-Server
    RCLCPP_INFO(this->get_logger(), "Initialize service-server...");
    RCLCPP_INFO(this->get_logger(), "Complete! Service-server have been initialized.");

    // Initialize Service-Client 
    RCLCPP_INFO(this->get_logger(), "Initialize service-client...");
    RCLCPP_INFO(this->get_logger(), "Complete! Service-client have been initialized.");

    // Main loop processing
    thread = std::make_unique<std::thread>(&CLASS_NAME::Run, this);
    thread->detach();
}

/**
 * @brief Destroy the class object
 * 
 */
CLASS_NAME::~CLASS_NAME()
{
    thread->detach();
}

/**
 * @brief Execute method
 * 
 */
void CLASS_NAME::Run()
{
    RCLCPP_INFO(this->get_logger(), "%s has started. thread id = %0x", this->get_name(),std::this_thread::get_id());
    
    // Main process loop setting
    rclcpp::WallRate loop(1);		// loop freq.[Hz]

    // Main loop
    while(rclcpp::ok()){
        
        loop.sleep();
    }

    RCLCPP_INFO(this->get_logger(), "%s has stoped.", this->get_name());
}
}

#include <rclcpp_components/register_node_macro.hpp>
RCLCPP_COMPONENTS_REGISTER_NODE(NAME_SPACE::CLASS_NAME)

//-----------------------------------------------------------------------------------
// end of file
//-----------------------------------------------------------------------------------