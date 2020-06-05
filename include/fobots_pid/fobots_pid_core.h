#ifndef SR_FOBOTS_PID_CORE_H
#define SR_FOBOTS_PID_CORE_H

#include "ros/ros.h"
#include "ros/time.h"

// Custom message includes. Auto-generated from msg/ directory.
#include <fobots_msgs/PID.h>

// Dynamic reconfigure includes.
#include <dynamic_reconfigure/server.h>
// Auto-generated from cfg/ directory.
#include <fobots_pid/fobotsPIDConfig.h>

class FobotsPID
{
public:
  FobotsPID();
  ~FobotsPID();
  void configCallback(fobots_pid::fobotsPIDConfig &config, double level);
  void publishMessage(ros::Publisher *pub_message);
  void messageCallback(const fobots_msgs::PID::ConstPtr &msg);

  double p_;
  double d_;
  double i_;

};
#endif
