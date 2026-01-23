# sudo docker run --rm   -e PICO_SDK_PATH=/pico-sdk   -v /home/aa/pico/micro_ros_pico_dev:/project   -v /home/aa/pico/pico-sdk:/pico-sdk   microros_pico_lib

FROM ros:humble-ros-base

ENV DEBIAN_FRONTEND=noninteractive \
    ROS_DISTRO=humble \
    ROS_PYTHON_VERSION=3

RUN apt-get update && apt-get install -y \
    software-properties-common \
    python3-colcon-common-extensions \
    python3-vcstool \
    python3-rosdep \
    git \
    wget \
    rsync \
    sudo \
    build-essential \
    && rm -rf /var/lib/apt/lists/*

RUN add-apt-repository universe

RUN apt-get update && apt-get install -y flex bison && rm -rf /var/lib/apt/lists/*

RUN rosdep init || true && rosdep fix-permissions && rosdep update

# Install micro_ros_setup from source (apt package may be unavailable on humble)
RUN mkdir -p /uros_ws/src && \
    cd /uros_ws/src && \
    git clone https://github.com/micro-ROS/micro_ros_setup.git && \
    cd /uros_ws && \
    . /opt/ros/$ROS_DISTRO/setup.sh && \
    rosdep update && \
    apt-get update && \
    rosdep install --from-paths src --ignore-src -y --rosdistro $ROS_DISTRO && \
    colcon build

WORKDIR /project/microros_static_library/library_generation

ENTRYPOINT ["bash", "/project/microros_static_library/library_generation/library_generation.sh"]
