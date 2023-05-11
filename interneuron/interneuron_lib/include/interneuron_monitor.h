/*
 * @Description: 
 * @Author: Sauron
 * @Date: 2023-05-10 16:33:52
 * @LastEditTime: 2023-05-11 11:03:23
 * @LastEditors: Sauron
 */
#include "rclcpp/rclcpp.hpp"
#include "interneuron_msgs/msg/interneuron_header.hpp"
#include <vector>
#include <string>

namespace interneuron{
bool init_timepoint(rclcpp::Node& node, const std::string & topic_name, std::vector<std::string>& sensor_names);
int64_t start_time(interneuron_msgs::msg::InterneuronHeader& header);
}
