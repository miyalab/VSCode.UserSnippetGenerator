#ifndef __HEADER_FILE_NAME_HPP__
#define __HEADER_FILE_NAME_HPP__

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
    const int LOOP_RATE = -1;
    template<typename T, typename U>void forceSet(const T *value, const U &set_value){*((T*)value)=set_value;}
    std::unique_ptr<std::thread> thread;
    void run();
};
}

#endif // _HEADER_FILE_NAME_HPP_

//-----------------------------------------------------------------------------------
// end of file
//-----------------------------------------------------------------------------------