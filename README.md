# jsk_visualization for ROS2

[![BuildTest](https://github.com/Kotakku/jsk_visualization/actions/workflows/BuildTest.yaml/badge.svg?branch=feat%2Fros2)](https://github.com/Kotakku/jsk_visualization/actions/workflows/BuildTest.yaml)

jsk visualization ros package.

See [read the docs](http://jsk-visualization.readthedocs.org/en/latest/).


# Gallery

### [jsk_rviz_plugins](http://jsk_visualization.readthedocs.io/en/latest/jsk_rviz_plugins)

[![](.readme/gallery_jsk_rviz_plugins.jpg)](http://jsk_visualization.readthedocs.io/en/latest/jsk_rviz_plugins)

### [jsk_rqt_plugins](http://jsk_visualization.readthedocs.io/en/latest/jsk_rqt_plugins)

[![](.readme/gallery_jsk_rqt_plugins.jpg)](http://jsk_visualization.readthedocs.io/en/latest/jsk_rqt_plugins)

# Development environment
- Ubuntu 20.04(ROS2 Foxy)
- Ubuntu 20.04(ROS2 Galactic)

# Implementation status
## jsk_rviz_plugins
### Display
| Plugin | Begin | Build | Op Check | Remarks |
| :----- | :----- | :----- | :----- | :----- |
| Plotter2D | ✅ | ✅ | ✅ |
| PieChart | ✅ | ✅ | ✅ |
| String | ✅ | ✅ | ✅ |
| OverlayText | ✅ | ✅ | ✅ |
| OverlayDiagnostic | ✅ | ✅ | ✅ |
| OverlayMenu | ✅ | ✅ | ✅ |
| BoundingBox | ✅ | ✅ | ✅ |
| OverlayImage | ✅ | ✅ | |
| TwistStamped | ✅ | ✅ | ✅ |
| BoundingBoxArray | ✅ | ✅ | |
| Footstep | ✅ | ✅ | |
| HumanSkeltonArray | ✅ | ✅ | |
| NormalDisplay | ✅ | ✅ | |
| Pictogram | ✅ | ✅ | |
| PictogramArray | ✅ | ✅ | |
| TorusArrayDisplay | ✅ | ✅ | |
| SegmentArray | ✅ | ✅ | |
| TFTrajectory | ✅ | ✅ | |
| TargetVisualizer | ✅ | ✅ | |
| Diagnostics | ✅ | ✅ | |
| LinearGauge | ✅ | ✅ | ✅ | |
| CameraInfo |  |  |  |
| PoseArray | | | | (default pluginに実装済み?) |
| OverlayCamera | | | | (Panelを含む? )|
| PeoplePositionMeasuermentArray | | | | (msg未実装) |
| RvizScenePublisher  | | | | (#include <opencv2/opencv.hpp>) |
| QuietInteractiveMarker  | | | | (ROS2にinteractive_markerがない?) |
| AmbientSound  | | | | |
| VideoCapture  | | | | (#include <opencv2/opencv.hpp>) |
| PolygonArray  | | | | (#include "jsk_recognition_utils/geo/polygon.hpp") |
| SimpleOccupancyGridArray  | | | | (#include "jsk_recognition_utils/geo/plane.h") |

### Panel
| Plugin | Begin | Build | Op Check | Remarks |
| :----- | :----- | :----- | :----- |  :----- | 
| ObjectFitOperatorAction | ✅ | ✅ | | |
| RecordAction | ✅ | ✅ | | |
| YesNoButton | ✅ | ✅ | | |
| PublishTopic | ✅ | ✅ | | |
| CancelAction | ✅ | ✅ | | |
| TabletControllerPanel | | | | |
| SelectPointCloudPublishAction | | | | |
| RobotCommandInterfaceAction | | | | |
| EmptyServiceCallInterfaceAction | | | | |
| TransformableMarkerOperatorAction | | | | |

### Tool
| Plugin | Begin | Build | Op Check | Remarks |
| :----- | :----- | :----- | :----- | :----- | 
| CloseAll | ✅ | ✅ | ✅ | |
| OpenAll | ✅ | ✅ | ✅ | |
| ScreenshotListener | ✅ | ✅ | | |
| OverlayPickerTool | ✅ | ✅ | ✅ | |

### ViewController
| Plugin | Begin | Build | Op Check | Remarks |
| :----- | :----- | :----- | :----- | :----- |
| TabletViewController | | | | |

## jsk_rqt_plugins
| Plugin | Begin | Build | Op Check | Remarks |
| :----- | :----- | :----- | :----- | :----- |
| rqt_2d_plot | | | | |
| rqt_3d_plot | | | | |
| rqt_drc_mini_maxwell | | | | |
| rqt_histogram_plot | | | | |
| rqt_image_view2 | | | | |
| rqt_service_buttons | | | | |
| rqt_service_radio_buttons | | | | |
| rqt_status_light | | | | |
| rqt_string_label | | | | |
| rqt_yn_btn | | | | |