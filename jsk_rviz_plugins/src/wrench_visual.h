#ifndef WRENCHSTAMPED_VISUAL_H
#define WRENCHSTAMPED_VISUAL_H

#include <geometry_msgs/WrenchStamped.h>

namespace Ogre
{
    class Vector3;
    class Quaternion;
}

namespace rviz
{
    class Arrow;
    class BillboardLine;
}

namespace jsk_rviz_plugin
{


// Each instance of WrenchStampedVisual represents the visualization of a single
// sensor_msgs::WrenchStamped message.  Currently it just shows an arrow with
// the direction and magnitude of the acceleration vector, but could
// easily be expanded to include more of the message data.
class WrenchStampedVisual
{
public:
    // Constructor.  Creates the visual stuff and puts it into the
    // scene, but in an unconfigured state.
    WrenchStampedVisual( Ogre::SceneManager* scene_manager, Ogre::SceneNode* parent_node );

    // Destructor.  Removes the visual stuff from the scene.
    virtual ~WrenchStampedVisual();

    // Configure the visual to show the data in the message.
    void setMessage( const geometry_msgs::WrenchStamped::ConstPtr& msg );

    // Set the pose of the coordinate frame the message refers to.
    // These could be done inside setMessage(), but that would require
    // calls to FrameManager and error handling inside setMessage(),
    // which doesn't seem as clean.  This way WrenchStampedVisual is only
    // responsible for visualization.
    void setFramePosition( const Ogre::Vector3& position );
    void setFrameOrientation( const Ogre::Quaternion& orientation );

    // Set the color and alpha of the visual, which are user-editable
    // parameters and therefore don't come from the WrenchStamped message.
    void setForceColor( float r, float g, float b, float a );
    void setTorqueColor( float r, float g, float b, float a );
    void setScale( float s );
    void setWidth( float w );

private:
    // The object implementing the wrenchStamped circle
    rviz::Arrow* arrow_force_;
    rviz::Arrow* arrow_torque_;
    rviz::BillboardLine* circle_torque_;
    rviz::Arrow* circle_arrow_torque_;
    float scale_, width_;

    // A SceneNode whose pose is set to match the coordinate frame of
    // the WrenchStamped message header.
    Ogre::SceneNode* frame_node_;

    // The SceneManager, kept here only so the destructor can ask it to
    // destroy the ``frame_node_``.
    Ogre::SceneManager* scene_manager_;

};

} // end namespace jsk_rviz_plugin

#endif // WRENCHSTAMPED_VISUAL_H
