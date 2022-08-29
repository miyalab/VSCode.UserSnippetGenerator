//-----------------------------
// include
//-----------------------------
// STL
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// ROS2
#include <rclcpp/rclcpp.hpp>

//-----------------------------
// Prototype declaration
//-----------------------------


//-----------------------------
// Namespace
//-----------------------------


//-----------------------------
// Global values declaration
//-----------------------------

/**
 * @brief Main function
 * 
 * @param argc Number of command line arguments
 * @param argv A string array of command line arguments
 * @return int: Exit code
 */
int main(int argc, char **argv)
{
	// Process initialize
	rclcpp::init(argc, argv);		// ROS2 initialize

	// Main loop
	for(rclcpp::WallRate loop(1); rclcpp::ok(); loop.sleep()){
		
	}
	
	// process end
	rclcpp::shutdown();
	return 0;
}

//-----------------------------------------------------------------------------------
// end of file
//-----------------------------------------------------------------------------------