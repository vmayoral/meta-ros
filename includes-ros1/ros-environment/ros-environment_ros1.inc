# Copyright (c) 2019 LG Electronics, Inc.

do_configure_prepend_class-target() {
    sed -i -e 's,@(PYTHON_EXECUTABLE),${bindir}/env python${ROS_PYTHON_VERSION},' ${S}/env-hooks/1.ros_package_path.sh.em
}