/**
 * @file /qlistener/listener.hpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef LISTENERV_NODE_HPP_
#define LISTENERV_NODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/
/*
#include <ros/ros.h>
//#include <string>
//#include <std_msgs/String.h>
#include "qnode.hpp"
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cv.h>
*/
/*****************************************************************************
** Class
*****************************************************************************/
/*
class Listenerv : public QNode {
	 Q_OBJECT
public:
	Listenerv(int argc, char** argv);
	virtual ~Listenerv() {}
	//void run();
	void ros_comms_init();
       // void subimage();
Q_SIGNALS:
	void Update_Image1(const QPixmap* image1);
private:

	image_transport::Subscriber image_sub_;
//	void chatterCallback(const std_msgs::String::ConstPtr &msg);
	void chatterCallback(const sensor_msgs::ImageConstPtr& msg1);
	QImage cvtCvMat2QImage(const cv::Mat & image);
	//ros::Subscriber chatter_subscriber;
};
*/
#endif /* LISTENER_NODE_HPP_ */
