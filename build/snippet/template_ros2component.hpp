#ifndef _HEADER_FILE_NAME_HPP_
#define _HEADER_FILE_NAME_HPP_

//-----------------------------
// include
//-----------------------------
// STL
#include <thread>
#include <memory>
#include <mutex>

// ROS2
#include <rclcpp/rclcpp.hpp>

//-----------------------------
// Namespace & using
//-----------------------------

//-----------------------------
// Class
//-----------------------------
/**
 * @brief Project Name
 * 
 */
namespace NAME_SPACE {
/**
 * @brief Component Definition
 * 
 */
class CLASS_NAME: public rclcpp::Node {
public:
    CLASS_NAME(rclcpp::NodeOptions options = rclcpp::NodeOptions());
    ~CLASS_NAME();
private:
    std::unique_ptr<std::thread> thread;
    void run();
};
}

#endif // _HEADER_FILE_NAME_HPP_

//-----------------------------------------------------------------------------------
// end of file
//-----------------------------------------------------------------------------------