# micro-ROS website docs (combined)

_Generated: 2026-01-29_

This file concatenates micro-ROS website markdown content.
Each section starts with the source path to preserve provenance.

## Table of Contents
- [_docs/api/overview/index.md](#source-docs-api-overview-index-md)
- [_docs/api/rclc/index.md](#source-docs-api-rclc-index-md)
- [_docs/api/rmw/index.md](#source-docs-api-rmw-index-md)
- [_docs/api/utils/index.md](#source-docs-api-utils-index-md)
- [_docs/concepts/benchmarking/benchmarking/index.md](#source-docs-concepts-benchmarking-benchmarking-index-md)
- [_docs/concepts/benchmarking/concept/index.md](#source-docs-concepts-benchmarking-concept-index-md)
- [_docs/concepts/benchmarking/memo_prof/index.md](#source-docs-concepts-benchmarking-memo-prof-index-md)
- [_docs/concepts/benchmarking/results/index.md](#source-docs-concepts-benchmarking-results-index-md)
- [_docs/concepts/build_system/external_build_systems/index.md](#source-docs-concepts-build-system-external-build-systems-index-md)
- [_docs/concepts/build_system/index.md](#source-docs-concepts-build-system-index-md)
- [_docs/concepts/client_library/diagnostics/index.md](#source-docs-concepts-client-library-diagnostics-index-md)
- [_docs/concepts/client_library/embedded_tf/index.md](#source-docs-concepts-client-library-embedded-tf-index-md)
- [_docs/concepts/client_library/execution_management/index.md](#source-docs-concepts-client-library-execution-management-index-md)
- [_docs/concepts/client_library/features/index.md](#source-docs-concepts-client-library-features-index-md)
- [_docs/concepts/client_library/introduction/index.md](#source-docs-concepts-client-library-introduction-index-md)
- [_docs/concepts/client_library/lifecycle_and_system_modes/index.md](#source-docs-concepts-client-library-lifecycle-and-system-modes-index-md)
- [_docs/concepts/fiware_interoperability/index.md](#source-docs-concepts-fiware-interoperability-index-md)
- [_docs/concepts/middleware/IoT/index.md](#source-docs-concepts-middleware-iot-index-md)
- [_docs/concepts/middleware/memo_prof/index.md](#source-docs-concepts-middleware-memo-prof-index-md)
- [_docs/concepts/middleware/Micro_XRCE-DDS/index.md](#source-docs-concepts-middleware-micro-xrce-dds-index-md)
- [_docs/concepts/middleware/rosserial/index.md](#source-docs-concepts-middleware-rosserial-index-md)
- [_docs/concepts/rtos/comparison/index.md](#source-docs-concepts-rtos-comparison-index-md)
- [_docs/concepts/rtos/index.md](#source-docs-concepts-rtos-index-md)
- [_docs/imprint.md](#source-docs-imprint-md)
- [_docs/overview/comparison/index.md](#source-docs-overview-comparison-index-md)
- [_docs/overview/docker_ci_status/index.md](#source-docs-overview-docker-ci-status-index-md)
- [_docs/overview/ext_tools/index.md](#source-docs-overview-ext-tools-index-md)
- [_docs/overview/features/index.md](#source-docs-overview-features-index-md)
- [_docs/overview/hardware/index.md](#source-docs-overview-hardware-index-md)
- [_docs/overview/license/index.md](#source-docs-overview-license-index-md)
- [_docs/overview/ROS_2_feature_comparison/index.md](#source-docs-overview-ros-2-feature-comparison-index-md)
- [_docs/overview/rtos/index.md](#source-docs-overview-rtos-index-md)
- [_docs/overview/users_and_clients/index.md](#source-docs-overview-users-and-clients-index-md)
- [_docs/privacy.md](#source-docs-privacy-md)
- [_docs/tutorials/advanced/benchmarking/index.md](#source-docs-tutorials-advanced-benchmarking-index-md)
- [_docs/tutorials/advanced/create_custom_static_library/index.md](#source-docs-tutorials-advanced-create-custom-static-library-index-md)
- [_docs/tutorials/advanced/create_custom_transports/index.md](#source-docs-tutorials-advanced-create-custom-transports-index-md)
- [_docs/tutorials/advanced/create_dds_entities_by_ref/index.md](#source-docs-tutorials-advanced-create-dds-entities-by-ref-index-md)
- [_docs/tutorials/advanced/create_new_type/index.md](#source-docs-tutorials-advanced-create-new-type-index-md)
- [_docs/tutorials/advanced/handling_type_memory/index.md](#source-docs-tutorials-advanced-handling-type-memory-index-md)
- [_docs/tutorials/advanced/microxrcedds_rmw_configuration/index.md](#source-docs-tutorials-advanced-microxrcedds-rmw-configuration-index-md)
- [_docs/tutorials/advanced/overview/index.md](#source-docs-tutorials-advanced-overview-index-md)
- [_docs/tutorials/core/first_application_linux/index.md](#source-docs-tutorials-core-first-application-linux-index-md)
- [_docs/tutorials/core/first_application_rtos/freertos.md](#source-docs-tutorials-core-first-application-rtos-freertos-md)
- [_docs/tutorials/core/first_application_rtos/index.md](#source-docs-tutorials-core-first-application-rtos-index-md)
- [_docs/tutorials/core/first_application_rtos/nuttx.md](#source-docs-tutorials-core-first-application-rtos-nuttx-md)
- [_docs/tutorials/core/first_application_rtos/zephyr.md](#source-docs-tutorials-core-first-application-rtos-zephyr-md)
- [_docs/tutorials/core/overview/index.md](#source-docs-tutorials-core-overview-index-md)
- [_docs/tutorials/core/teensy_with_arduino/index.md](#source-docs-tutorials-core-teensy-with-arduino-index-md)
- [_docs/tutorials/core/zephyr_emulator/index.md](#source-docs-tutorials-core-zephyr-emulator-index-md)
- [_docs/tutorials/demos/combined_demos/index.md](#source-docs-tutorials-demos-combined-demos-index-md)
- [_docs/tutorials/demos/crazyflie_demo/index.md](#source-docs-tutorials-demos-crazyflie-demo-index-md)
- [_docs/tutorials/demos/demobox_demo/index.md](#source-docs-tutorials-demos-demobox-demo-index-md)
- [_docs/tutorials/demos/edgeimpulse/index.md](#source-docs-tutorials-demos-edgeimpulse-index-md)
- [_docs/tutorials/demos/fiware_demo/index.md](#source-docs-tutorials-demos-fiware-demo-index-md)
- [_docs/tutorials/demos/kobuki_demo/index.md](#source-docs-tutorials-demos-kobuki-demo-index-md)
- [_docs/tutorials/demos/moveit2_demo/index.md](#source-docs-tutorials-demos-moveit2-demo-index-md)
- [_docs/tutorials/demos/openmanipulator_demo/index.md](#source-docs-tutorials-demos-openmanipulator-demo-index-md)
- [_docs/tutorials/demos/overview/index.md](#source-docs-tutorials-demos-overview-index-md)
- [_docs/tutorials/demos/thumper_demo/index.md](#source-docs-tutorials-demos-thumper-demo-index-md)
- [_docs/tutorials/demos/tof_demo/index.md](#source-docs-tutorials-demos-tof-demo-index-md)
- [_docs/tutorials/old/6lowpan/index.md](#source-docs-tutorials-old-6lowpan-index-md)
- [_docs/tutorials/old/add_microros_config/index.md](#source-docs-tutorials-old-add-microros-config-index-md)
- [_docs/tutorials/old/debugging/index.md](#source-docs-tutorials-old-debugging-index-md)
- [_docs/tutorials/old/microros_nuttx_bsp/index.md](#source-docs-tutorials-old-microros-nuttx-bsp-index-md)
- [_docs/tutorials/old/nsh/index.md](#source-docs-tutorials-old-nsh-index-md)
- [_docs/tutorials/programming_rcl_rclc/executor/executor.md](#source-docs-tutorials-programming-rcl-rclc-executor-executor-md)
- [_docs/tutorials/programming_rcl_rclc/micro-ROS/micro-ROS.md](#source-docs-tutorials-programming-rcl-rclc-micro-ros-micro-ros-md)
- [_docs/tutorials/programming_rcl_rclc/node/node.md](#source-docs-tutorials-programming-rcl-rclc-node-node-md)
- [_docs/tutorials/programming_rcl_rclc/overview/index.md](#source-docs-tutorials-programming-rcl-rclc-overview-index-md)
- [_docs/tutorials/programming_rcl_rclc/parameters/parameters.md](#source-docs-tutorials-programming-rcl-rclc-parameters-parameters-md)
- [_docs/tutorials/programming_rcl_rclc/pub_sub/pub_sub.md](#source-docs-tutorials-programming-rcl-rclc-pub-sub-pub-sub-md)
- [_docs/tutorials/programming_rcl_rclc/qos/QoS.md](#source-docs-tutorials-programming-rcl-rclc-qos-qos-md)
- [_docs/tutorials/programming_rcl_rclc/service/services.md](#source-docs-tutorials-programming-rcl-rclc-service-services-md)


---

## Source: `_docs/api/overview/index.md`
<a id="source-docs-api-overview-index-md"></a>

* [**RMW Micro XRCE-DDS**](../rmw/)
* [**micro-ROS Utils**](../utils/)
* [**RCLC**](../rclc/)

---

## Source: `_docs/api/rclc/index.md`
<a id="source-docs-api-rclc-index-md"></a>

TODO

---

## Source: `_docs/api/rmw/index.md`
<a id="source-docs-api-rmw-index-md"></a>

{% include rmw_doc/Modules/group__rmw.md %}

---

## Source: `_docs/api/utils/index.md`
<a id="source-docs-api-utils-index-md"></a>

{% include utils_doc/Modules/group__typeutils.md %}
{% include utils_doc/Modules/group__stringutils.md %}
{% include utils_doc/Classes/structmicro__ros__utilities__memory__rule__t.md %}
{% include utils_doc/Classes/structmicro__ros__utilities__memory__conf__t.md %}

---

## Source: `_docs/concepts/benchmarking/benchmarking/index.md`
<a id="source-docs-concepts-benchmarking-benchmarking-index-md"></a>

## Table of contents

* [Introduction to Benchmarking](#introduction-to-benchmarking)
* [Our benchmarking tool framework](#our-benchmarking-tool-framework)
* [Trace Framework Abstraction](#trace-framework-abstraction)
* [Shadow Builder](#shadow-builder)
* [Binary generation for instrumented code](#binary-generation-for-instrumented-code)
  * [Receiving inputs](#receiving-inputs)
  * [Parse and Check](#parse-and-check)
  * [TFA Execution](#tfa-execution)
  * [Compilation](#compilation)
* [Step to start benchmarking](#step-to-start-benchmarking)



## Introduction to Benchmarking

Developing a working and stable application, from the scribbles to the final
executing binary, is a long and hard task. During this process, developers may come
across stability and perfomance issues. In addition to these issues, some
specified QoS might be difficult to quantify.  Solving those problems without the
proper tools might be frustrating, tedious tasks leading to reduce developers
efficiency. An adapted benchmarking tool could overcome all those development
obstacles and increase development time.  There are different KPI (Keep
Performance Indicators) that one might be interested into. In the framework of
micro-ROS, the KPI can be freely chosen by the developer. In this way, the
benchmarking tool will remain flexible and allow the community to constantly add
support for a lot of different KPI.

The problems we want to tackle are: 

 * Out there, many benchmarking tools exist, each of them targeting different KPIs. 
 * Different platforms (Linux/Nuttx/Baremetal et.c.).
 * Too few time/resources to code benchmarking tool for each.
 * Avoid code overhead: Keep code clarity.
 * Avoid execution overhead: Do not want to make execution slower when benchmarking.

## Our Benchmarking tool framework

The benchmarking tool under development is providing a framework to allow
developers to create their own benchmarking tool. Each part a developer wants to
benchmark can be added as a plugin using the provided framework. In this way
plugins can be shared and this improves re-usability as much as possible.


## Trace Framework Abstraction

The Shadow builder alone only parse comments from the application and pass it
along to the Trace Framework Abstraction (TFA) Core. The TFA core is aware of
the plugins that are available, all the plugins’ capabilities and platform
target. The process goes as explained below: 

 * The line containing the functionality Benchmarking::XX::YY will be checked
   against all the available plugins.
 * Plugins that are capable of handling functionality will respond with a piece of
   code that will be replaced with a piece of code.
 * Then the output file will be added in a folder corresponding to the platform
   type and benchmarking type.

Being generic is the key for this benchmarking tool. The plugins will in
contrary bring the specific implementation needed to benchmark  a specific
platform. Every plugin will provide information as  requested by the parser:

 * Provide a list of supported platforms. 
 * Provide a list of functions that are handled.
 * Provide snippet codes that will be added for benchmarking.
 * Provide a list of patches and/or patch code
 * Optional provide an end script to run and execute the benchmarks


## Shadow Builder

This section will introduce some concepts related to the shadow builder (SB).

The Shadow builder is a tool that will transparently instrument the code to
benchmark. The tools will be able to output an “instrumented code” that will be
later be compiled as a normal code. The following steps describe what the shadow
builder process flow:

 * Get configuration file from the user (Benchmarking Configuration File).
 * Get appropriate sources.
 * Execute Trace Framework Abstraction Configuration file.
 * Parse the sources file needed Injecting code.
 * Compile the targeted binary for different platforms.
 * If needed, depending what type benchmark is undertaken, compile another
   target binary benchmarking.

The SB (Shadow Builder) is meant to be as transparent as possible for the user.
And if the benchmarking is not activated, it should be bypassed.

The SB is in charge of getting the path/git repository to the source code that
needs to be benchmarking. The benchmarking. The sources are specified by the
user in the benchmarking configuration file.

In order to inject code, there are some tools that allow this. CLang AST tool
will allow to inject some code. 


## Binary generation for instrumented code 

The binary generation is the process of compiling the source code. In order to
benchmark, previously to compile the source code, it is necessary to instrument
the code. The code will be instrumented in a transparent way for the
programmer/user. Therefore, a configuration file provided by the programmer will
be parsed and code injected as described in a configuration file. 

### Receiving inputs

The binary generation's pipeline receives two inputs to work with:
 * Configuration Benchmarking file.
 * Source code to benchmark.

In short, the configuration describes:

 * What is benchmarked (sources).
 * Where to benchmark.
 * What type of benchmark.
 * Optionally against what base line to compare (base line source)

### Parse and Check

Once the input received the **Shadow Builder** parses the configuration
file. From the configuration file, the Shadow builder gets:

 * The different benchmarking to be achieved.
 * The targeted platforms.

In addition to parsing, the Shadow Builder is in charge of checking
capabilities and consistency within the configuration file and the different
TFA's plugins registered in the TFA module.

### TFA Execution

Once parsed and checked against the TFA module capabilities, the Shadow
Builder will be in charge of translating configuration into source code. The
translated sources will also be achieved in cooperation with the TFA module. The
detailed steps of the TFA can be found here. At the end of this step, the TFA
will generate the new forged source code ready for compilation. In addition to
patched source code, the TFA will generate scripts that will the benchmarks.

### Compilation

The compilation will happen for every kind of benchmarks and
platforms targeted. Depending on the kind of benchmark that is being executed,
there will be one or more binaries per benchmarks session. The number of binary
generated also depends on what plugins are provided by the user to the shadow
builder. The shadow builder will retrieve capabilities of the plugins and
request from the developer, match them and generated software according to the
matches.


## Step to start benchmarking

The shadow Builder will be executed as follow:

 * Software sources are passed to the Shadow Builder.
 * The source are passed and upon comments containing /*Benchmarking::XX::YY*/
   (a tag)  the code line is passed to the Trace Framework Abstraction module.
   Using comments is preferable → No includes needed.
 * All plugins that registered to the TFA the Benchmarking::XX::YY functionality
   will return a piece of code that will be added to the source.
 * Once all parsed, the shadow builder will compile for all the different
   platforms requested either by plugins or by user configuration.

---

## Source: `_docs/concepts/benchmarking/concept/index.md`
<a id="source-docs-concepts-benchmarking-concept-index-md"></a>

## Table of contents

* [Introduction to Benchmarking](#introduction-to-benchmarking)
* [Our benchmarking tool framework](#our-benchmarking-tool-framework)
* [Trace Framework Abstraction](#trace-framework-abstraction)
* [Shadow Builder](#shadow-builder)
* [Binary generation for instrumented code](#binary-generation-for-instrumented-code)
  * [Receiving inputs](#receiving-inputs)
  * [Parse and Check](#parse-and-check)
  * [TFA Execution](#tfa-execution)
  * [Compilation](#compilation)
* [Step to start benchmarking](#step-to-start-benchmarking)



## Introduction to Benchmarking

Developing working and stable application from the scribbles to the final
executing binary is long and hard tasks. During this process developers may come
across stabilities issues, perfomances issues. In addition to these issues, some
specified QoS might be difficult to quantify.  Solving those problems without the
proper tools might be frustrating, tedious tasks leading to reduce developers
efficiency. An adapted benchmarking tool could overcome all those development
obstacles and increase development time.  There are different KPI (Keep
Performance Indicators) that one might be interested into. In the framework of
this micro-ROS, the KPI can be freely chosen by the developer. In this way, the
benchmarking tool will remain flexible and allow the community to constantly add
some support for a lot of different KPI.

The problems we want to tackle are: 

 * Out there, many benchmarking tools exist. Each of targeting different KPIs. 
 * Different platforms (Linux/Nuttx/Baremetal et.c.).
 * Too few time/resources to code benchmarking tool for each.
 * Avoid code overhead: Keep code clarity.
 * Avoid execution overhead: Do not want to make execution slower when benchmarking.

## Our Benchmarking tool framework

The benchmarking tool under development is providing a framework to allow
developers to create their own benchmarking tool. Each part a developer wants to
benchmark can be added as a plugin using the provided framework. In this way
plugins can be shared and this improves re-usability as much as possible.


## Trace Framework Abstraction

The Shadow builder alone only parse comments from the application and pass it
along to the Trace Framework Abstraction (TFA) Core. The TFA core is aware of
the plugins that are available, all the plugins’ capabilities and platform
target. The process goes as explained below: 

 * The line containing the functionality Benchmarking::XX::YY will be checked
   against all the available plugins.
 * Plugins that are capable of handling functionality will respond with a piece of
   code that will be replaced with a piece of code.
 * Then the output file will be added in a folder corresponding to the platform
   type and benchmarking type.

Being generic is the key for this benchmarking tool. The plugins will in
contrary bring the specific implementation needed to benchmark  a specific
platform. Every plugin will provide information as  requested by the parser:

 * Provide a list of supported platforms. 
 * Provide a list of functions that are handled.
 * Provide snippets codes that will be added for benchmarking.
 * Provide a list of patches and/or patch code
 * Optional provide an end script to run and execute the benchmarks


## Shadow Builder

This section will introduce some concept related to the shadow builder (SB).

The Shadow builder is a tool that will transparently instrument the code to
benchmark. The tools will be able to output an “instrumented code” that will be
later be compiled as a normal code. The following steps describe what the shadow
builder process flow:

 * Get configuration file from the user (Benchmarking Configuration File).
 * Get appropriate sources.
 * Execute Trace Framework Abstraction Configuration file.
 * Parse the sources file needed Injecting code.
 * Compile the targeted binary for different platform.
 * If needed, depending what type benchmark is undertaken, compile another
   target binary benchmarking.

The SB (Shadow Builder) is meant to be as transparent as possible for the user.
And if the benchmarking is not activated, it should be bypassed.  Get
appropriate sources

The SB is in charge of getting the path/git repository to the source code that
needs to be benchmarking. The benchmarking. The sources are specified by the
user in the benchmarking configuration file.  Injecting code

In order to inject code, there are some tools that allow this. CLang AST tool
will allow to inject some code. 


## Binary generation for instrumented code 

The binary generation is the process of compiling the source code. In order to
benchmark, previously to compile the source code, it is necessary to instrument
the code. The code will be instrumented in a transparent way for the
programmer/user. Therefore, a configuration file provided by the programmer will
be parsed and code injected as described in a configuration file. 

### Receiving inputs

The binary generation's pipeline receives two inputs to work with:
 * Configuration Benchmarking file.
 * Source code to benchmark.

In short, the configuration describes:

 * What is benchmarked (sources).
 * Where to benchmark.
 * What type of benchmark.
 * Optionally against what base line to compare (base line source)

### Parse and Check

Once the input received the **Shadow Builder** parses the configuration
file. From the configuration file, the Shadow builder gets:

 * The different benchmarking to be achieved.
 * The targeted platforms.

In addition to parsing, the Shadow Builder is in charge of checking
capabilities and consistency within the configuration file and the different
TFA's plugins registered in the TFA module.

### TFA Execution

Once parsed and checked against the TFA module capabilities, the Shadow
Builder will be in charge of translating configuration into source code. The
translated sources will also be achieved in cooperation with the TFA module. The
detailed steps of the TFA can be found here. At the end of this step, the TFA
will generate the new forged source code ready for compilation. In addition to
patched source code, the TFA will generate scripts that will the benchmarks.

### Compilation

The compilation will happen for every kind of benchmarks and
platforms targeted. Depending on the kind of benchmark that is being executed,
there will be one or more binaries per benchmarks session. The number of binary
generated also depends on what plugins are provided by the user to the shadow
builder. The shadow builder will retrieve capabilities of the plugins and
request from the developer, match them and generated software according to the
matches.


## Step to start benchmarking

The shadow Builder will be executed as follow:

 * Software sources are passed to the Shadow Builder.
 * The source are passed and upon comments containing /*Benchmarking::XX::YY*/
   (a tag)  the code line is passed to the Trace Framework Abstraction module.
   Using comments is preferable → No includes needed.
 * All plugins that registered to the TFA the Benchmarking::XX::YY functionality
   will return a piece of code that will be added to the source.
 * Once all parsed, the shadow builder will compile for all the different
   platforms requested either by plugins or by user configuration.


---

## Source: `_docs/concepts/benchmarking/memo_prof/index.md`
<a id="source-docs-concepts-benchmarking-memo-prof-index-md"></a>

## Abstract

In this section, we analyze the memory footprint of the micro-ROS Client library. To perform the profiling, we have taken into account both applications of publishers/subscribers into/to ROS topics of known size and client/server type applications. We explored several different configurations by tuning key parameters such as message size, entity number, history size and transport protocol. Also, we discriminated between different types of memory. Indeed, while the [XRCE-DDS](https://micro-xrce-dds.docs.eprosima.com/en/latest/) Client is completely dynamic memory free, the micro-ROS Client makes use of both static and dynamic memory. It is therefore key to assess how much of each type of memory micro-ROS consumes, especially for what concerns real-timeness and determinism in the library behaviour. 

We performed the measurements for applications running on [FreeRTOS](https://www.freertos.org/index.md) and on an [ESP32](https://www.espressif.com/en/products/socs/esp32) board connected by UDP (via WiFi) to a micro-ROS Agent running on a Linux machine.

Results show that the total memory consumption of the Client is higher than that of the XRCE-DDS middleware, at least by using the default configuration parameters of the library. However, by opportunely adjusting some of these parameters (e.g., the MTU or the history size) to the needs of the specific application, it is possible to tune the total memory consumption to fit way better the limited resources of the target devices.

## Table of contents

* [Memory management of the micro-ROS stack](#memory-management-of-the-micro-ros-stack)
  * [Memory management of the XRCE-DDS library](#memory-management-of-the-xrce-dds-library)
  * [Memory management of the RMW](#memory-management-of-the-rmw)
  * [Additional considerations](#additional-considerations)
  * [Memory buffers](#memory-buffers)
* [Measurements and methodology](#measurements-and-methodology)
  * [Tested scenarios](#tested-scenarios)
  * [Results](#results)
    * [Pub-Sub apps](#pub-sub-apps)
    * [Client-Server apps](#client-server-apps)
  * [Conclusions](#conclusions)


## Memory management of the micro-ROS stack

micro-ROS’ [target devices](https://micro-ros.github.io/_docs/overview/hardware/) are low-to-mid range Microcontroller Units (MCUs) with highly constrained resources, so that it is critical to assess the Client’s memory consumption to help users selecting the optimal library configuration for their application and the adequate platform on which to run it.

Given the limited memory resources of these devices, the possibility to manipulate and tune its memory consumption is key. micro-ROS tries to address the memory management issue by prioritizing the use of static memory instead of dynamic memory as much as possible, and by optimizing the memory footprint of the applications by tuning a set of configuration parameters related with the memory resources at compile-time. 

This tuning can be done by acting on two different memory resources: those handled by the [Micro XRCE-DDS](https://github.com/eProsima/Micro-XRCE-DDS) library and those handled by its RMW implementation [rmw-microxrcedds](https://github.com/micro-ROS/rmw-microxrcedds). In this section, we resume the most relevant parameters that control these resources and how the user can manipulate the micro-ROS memory consumption by acting on each of these layers.

### Memory management of the XRCE-DDS library

The Micro XRCE-DDS Client is completely dynamic and static memory free, implying that all memory footprint depends only on how the stack grows during the execution. Handling of this resource is done at configuration time, when the user can enable or disable several profiles before compiling, thus allowing to fix the executable code size. As part of these profiles, the user can control the memory growth by manipulating the Maximum Transmission Unit (MTU) and the communication streams.

The MTU regulates the size of the communication streams and matches the available memory in the internal buffers of the transport layer, which is the memory block where the messages will be written and stored when exchanged.  It defaults to 512 B for all transports available in micro-ROS.

Communication streams regulate how messages flow between the Clients and the Agent and represent ordered flows of information. There are two kinds of streams, Best-Effort and Reliable. Best-Effort streams consist in a single data buffer where only one message at a time is handled. Because of this, Best-Effort streams send and receive data leaving the reliability to the transport layer, and the message size handled by such a stream must be less or equal than the MTU defined in the transport used. On the other hand, Reliable streams enable lossless communication, regardless of the transport layer and allow message fragmentation to send and receive messages longer than the MTU. The number of chunks allowed to store the fragmented messages is controlled by the XRCE-DDS history (also referred to as XRCE_history in the following sections), which defaults to 4 slots.

### Memory management of the RMW

The `rmw-microxrcedds` layer uses static memory for allocating the resources associated with the ROS client support libraries, such as nodes, publishers, subscribers etc. This memory is managed by static memory pools that are shared among all the entities of a given application. The number of pools is fixed by the RMW message history (also referred to as RMW_history in the rest of the text), a parameter which is chosen by the user as a CMake flag.
These RMW pools act as message queues where to keep the subscription messages before the user reads them. The size of each pool is given by the MTU &#215; XRCE_history.

### Additional considerations

It should be clear by now that the two history buffers involved in the Client-Agent communication are different in nature: the XRCE-DDS history is used to store chunks of fragmented messages if Reliable communication is implemented. Thanks to this, in Reliable mode one can send or receive up to MTU &#215; XRCE_history minus the memory reserved for headers, whereas Best-Effort communication streams can only exchange messages of size smaller or equal to the MTU.  The history of the RMW, in turn, controls the reception of data in the case of subscription and services. In this case, a buffer ring is generated in the RMW to store and cushion the data received from the XRCE-DDS library while handling the `take` calls received from the user’s interface to fetch the data and send them through the higher layers all the way up to the user’s application.

Notice that this reflects the different behaviours of the XRCE-DDS library and of the RMW under subscription. While the XRCE-DDS library functions with callbacks, by warning the user whenever a new message comes in, the RMW functions by polling: this library listens to the topics the user has subscribed to and stores them until they are explicitly requested.

Finally notice that the nature and size of the memory consumed by publications and subscriptions is quite different. The reason is that subscribers stockpile the data in pre-allocated memory buffers. This enables storage of messages in slots (whose number depends on the XRCE-DDS and RMW histories) for a twofold purpose: to avoid loss of data in the case Reliable communication has been opted for, and this is reflected by the XRCE-DDS history, and to allow a flexible message handling and asynchronous message passing between the various layers, which is reflected in the RMW_history. The case of services matches closely that of subscribers, since in a request/response pattern all entities involved need to receive, and thus store and handle, data.

The diagrams shown below address all the features discussed in this section in a graphical way.

<img alt="Pub/sub diagram" src="_docs/concepts/benchmarking/memo_prof/pubsub_diagram.png" class="center">
<p align="center">
  Fig. 1: Illustrative diagram of the memory management of the micro-ROS Client library in publishers and subscribers applications.
</p>

<img alt="Services diagram" src="_docs/concepts/benchmarking/memo_prof/services_diagram.png" class="center" width="50%">

<p align="center">
  Fig. 2: Illustrative diagram of the memory management of the micro-ROS Client library in service applications.
</p>

### Memory buffers

The total memory consumed by a micro-ROS application running on a MCU can be calculated as the direct sum of different chunks of memory, each devoted to a different function: static memory, stack and dynamic memory.

In this section we give a brief description on these kinds of memory used by the micro-ROS library.

*Static Memory*

The static memory has been calculated as the difference between the memory occupied by the .bss and .data sections with a non-zero number of entities, and the memory occupied by the same sections when no micro-ROS application is running, that is, the memory occupied by the rest of components of the RTOS and libraries. This allows discriminating between the memory effectively occupied by micro-ROS and the one that is not specific to it. Notice that we don’t take into consideration neither the constant data stored in flash memory (.text section) nor the data buffer, which is the buffer that stores the data before serialization, since it is specific to the user application and not directly related to the micro-ROS Client operations.

*Stack Memory*

The stack is the memory consumed by the functions used by the program, when executing. Whilst the static memory can be straightforwardly calculated by just analyzing the compiled binary objects, the stack is the chunk of memory one cannot know precisely before running the application. The stack consumed during the program execution is taken into account by means of a FreeRTOS specific function involved in the memory management capabilities offered by this RTOS, the uxTaskGetStackHighWaterMark() function. This function returns the amount of stack that remains unused when the stack consumed by the program is at its greatest value. By subtracting this figure to the total stack available, which is known, one can obtain the stack peak used by the app.

*Dynamic Memory*

This is the memory dynamically allocated by the program by calls to `calloc()` and `malloc()` functions in the C language. To measure it we have hijacked the call to dynamic memory related functions since the ROS 2 stack allows users to feed the program with custom memory allocators. 

To better understand micro-ROS’ use of dynamic memory, we need to differentiate between two stages of the micro-ROS operation. In the first stage micro-ROS is initialized, entities such as nodes, publishers and subscribers are created, and all layers get ready for operation. This is the configuration stage and micro-ROS performs all the dynamic memory operations here. The second is the operation stage, in which the actual publications, subscriptions and all other node operations occur. This stage is dynamic memory free in the whole micro-ROS stack. An optional third stage exists, in which the micro-ROS layers are closed and cleaned and all the dynamic memory allocated in the configuration stage is freed.

## Measurements and methodology

### Tested scenarios

In this section, we summarize the experimental setup and the different scenarios explored in order to provide a comprehensive review on the memory footprint of the micro-ROS library.

In general, our aim is to assess how both the total memory and its independent constituents (static, stack and dynamic) are affected by:

* The topic size (in the form of an array of bytes of variable size)
* The number of ROS entities (pub/sub and service/client)
* The communication stream type used (Reliable vs Best-Effort)

In the first setup, we analyse the total memory consumption of applications that publish or subscribe to topics of variable size while sweeping through the number of entities (publishers and subscribers) and employ UDP transport. We do so for the two different QoS types, Reliable and Best-Effort.

In the second setup, we report on how the total memory is distributed between static, stack and dynamic.

The third set of measurements was taken for one subscription only, for a fixed message size and varying the history cache of the RMW layer from 1 to 20 units.

In the fourth set of measurements we measure the footprint of applications of requesters/repliers that act according to a client/service pattern.

### Results

In this section, we detail the methodology employed for the memory profiling of the experimental configurations described above, and for each of them we present the results obtained.

The measurements are conducted on a micro-ROS Client application with a varying number of entities: either publishers/subscribers (from 1 to 15) or client/server (from 1 to 10).

All the tested apps run on top of FreeRTOS and inside of an ESP32 board. The board is connected by UDP transport (WiFi) to a micro-ROS Agent running on a Linux machine. As explained above, the choice of FreeRTOS has been by virtue of its memory management functionalities, which easily allow to compute the memory used by applications.

In order to provide an assessment as much realistic as possible, the following parameters have been set to their default values: the creation mode employed was by XML in all tested cases, the MTU was held fixed to its default value of 512 B, and the XRCE-DDS library history cache was always kept fixed to 4.

#### Pub-Sub apps

*Total memory as a function of entities number and message size*

In this section, we report the total memory used by either publisher or subscriber applications in both Best-Effort and Reliable modes, using UDP transport, an RMW history of 8 shared slots, an MTU of 512 B and an XRCE-DDS history of 4 slots. The total memory consumption is reported as a function of the entity number and message size.

The number of publishers/subscribers has been varied, which is equivalent to changing the number of topics, since in our design of the set-up we associate each publisher/subscriber with just one topic.

In principle, in the Reliable case one can occupy the generated buffers with message sizes up to MTU &#215; XRCE_history, whereas in the Best-Effort case it can be filled with messages with size up to MTU, which correspond respectively to to 512 B &#215; 4 = 2048 B and 512 B with our default chosen values. This is due to the absence of fragmentation in Best-Effort communication streams, while, thanks to fragmentation, an entity communicating in Reliable mode can send/receive a message opportunely chunked in a number of pieces equal to the XRCE_history, each of the size of the MTU. However, from table 1 one can see the message size only ranges from 0 and 1366 B in the case of Reliable entities, and between 0 and 490 B for entities in Best-Effort mode. This is due to the fact that in both cases some memory is consumed by headers and, most importantly, in the Reliable case, some is consumed by confirmation messages such as heartbeats and acknacks.

<img alt="Total memory" src="_docs/concepts/benchmarking/memo_prof/overall.png" class="center">

<p align="center">
  Fig 3: Total memory usage (in Bytes) of micro-ROS publisher and subscription applications in both Best-Effort and Reliable modes with UDP transport, default parameters and as a function of the entities number (x axis) and of the message size (legend).
</p>

From these plots, we can draw some conclusions and observe trends.

First of all it appears clear that the total memory consumption varies with the number of entities but not with the message size. The reason for this is that all message sizes explored fit into the static buffers pre-allocated by the program at compile-time. We therefore expect that the memory consumption would only vary with the message size when the total space occupied by the topic plus the confirmation messages (in the reliable case) and the overhead exceeds the buffer size. In the case of increasing the number of entities, instead, the overall memory grows (as we’ll see below, this is driven by an increase in both the static and the dynamic memories, while the stack is not affected).

By performing a simple calculation, we can see that the memory occupied by one publisher under the above experimental conditions is of ~ 400 B, while that occupied by one subscriber is ~ 500 B.
The fact that there is virtually no substantial difference between the memory usage of these two entities, notwithstanding the fact that subscribers have a RMW_history associated, is ascribable to the fact that the memory pools of the RMW are shared among all the entities participating in a given application, and therefore it doesn't mark a difference between subscribers (in need to store messages before they are fetched from the higher layers) and publishers.

Finally, we see that there is no substantial difference between Reliable and Best-Effort modes, exception made for the upper threshold of the message size that can be sent in these two modes, as explained at the beginning of this section.

*Memory breakdown*

To get a better insight on the type of memory consumed by these applications, below we provide the same data but broken down into its constituent memory chunks. We do so for just one message size (1 B), since, as we have seen, this number doesn’t affect the total memory consumed (nor its constituents).

<img alt="Memory breakdown" src="_docs/concepts/benchmarking/memo_prof/3mems.png" class="center">

<p align="center">
   Fig 4: Static, stack and dynamic memory usage (in Bytes) of micro-ROS publisher and subscription applications in both Best-Effort and Reliable modes with UDP transport, default parameters and fixed message size as a function of the entities number.
</p>

From these results we see that both the static and the dynamic memories change with the entity number, while the stack stays constant.

*Role of the RMW history*

In this scenario, we have measured the static memory consumed as a function of the RMW history, when this ranges from 1 to 20 units, for a single subscriber application and with a message of fixed size (again, as seen above this size doesn’t affect the memory consumption as long as it’s smaller than the pre-allocated buffer size), with UDP transport and an XRCE-DDS history of 4, using Reliable communication. The results are summarized in the plot below:

<img alt="RMW history" src="_docs/concepts/benchmarking/memo_prof/rmw_history.png" class="center" width="60%">

<p align="center">
   Fig 5: Static memory usage (in Bytes) of a micro-ROS subscription application in reliable mode with UDP transport, default parameters and fixed message size as a function of the RMW history.
</p>

From this plot, we see that the total static memory used changes by MTU &#215; RMW_history (which is equal to 512 &#215; 4 for the parameters employed) for each unit of RMW memory that we add to the application.

#### Client-Server apps

We now pass to investigate our last case-scenario, where in spite of pub/sub apps, we consider a different kind of ROS object, that of services, in which the communication between entities follow a request/reply pattern. See below the results for the memory consumed, for a number of servers and clients ranging from 1 to 10. Notice that we report both the behaviour and values of the individual consituents (static, stack, and dynamic) and of the total memory.

<img alt="Services" src="_docs/concepts/benchmarking/memo_prof/servcli.png" class="center">

<p align="center">
   Fig 6: Total memory usage (in Bytes) of micro-ROS service and clients applications as a function of the number of servers and clients.
</p>

As already done in the case of publishers and subscribers, we can calculate the total memory consumed by a single entity. From this calculation it results that the memory occupied by one server or one client is on the order of ~ 300 B. From this figure, we see that the memory occupied by a server and that occupied by a client is virtually identical, and it is on the same order of magnitude as that occupied by a publisher or subscriber application.

### Conclusions

To sum up, we have seen that:

* Memory consumption doesn’t vary with message size as long as the sum of the latter plus the overheads can be accommodated by the static buffer pre-allocated at compile-time.
* Static and Dynamic memories vary with the entity number, while the stack remains constant.
* A single publisher/subscriber app with default configuration parameters and with UDP transport consumes ~ 400-500 B of total memory.
* A single client/server app with default configuration parameters and with UDP transport consumes ~ 300 B of total memory, on the same order of magnitude of pub/sub applications.
* In the case of a single subscription, the total static memory used changes by MTU &#215; XRCE_history for each unit of RMW history that is added to the application.

<style type="text/css">

.center {
  display: block;
  margin-left: auto;
  margin-right: auto;
}

</style>


---

## Source: `_docs/concepts/benchmarking/results/index.md`
<a id="source-docs-concepts-benchmarking-results-index-md"></a>

## Table of contents

* [From tracing to benchmarking](#from-tracing-to-benchmarking)
* [Communication results](#communication-results)
* [Real-time results](#real-time-results)
* [Executions](#executions)
* [Function call statistics](#function-call-statistics)
* [Static memory usage](#static-memory-usage)
* [Dynamic memory usage](#dynamic-memory-usage)
* [Power consumption](#power-consumption)

## From tracing to benchmarking

The low-level RTOS (NuttX) was instrumented in a specific way that provides different categories of benchmarking measurements (memory, execution, etc...). The gathered data is following the [Common Trace Format](https://diamon.org/ctf/). The raw trace is later processed using the [Babeltrace API](https://babeltrace.org/) trace manipulation toolkit. The data interpretation is up to the user.

More information about benchmarks results and methodologies are dealt with within the following [document](https://github.com/micro-ROS/benchmarking-results/blob/master/pdfs/OFERA_55_D5.4_Micro-ROS_benchmarks_-_Final.pdf)

The results, on which the interpretation are done, are available in the [benchmarking_results](https://github.com/micro-ROS/benchmarking-results/tree/master/aug2020) repository.

### General methodology

Depending on what type of communication medium micro-ROS is set up with, the methodology may vary. Of course, the variations are small and related to the transport protocol.

In order to achieve benchmarking, the RTOS and the application were instrumented. Depending on the target assessment, different probes were placed in different parts of the RTOS. The data format follows a standard called Common Trace Format (V1.8). This standard is also used in Zephyr, one of the RTOSes supported by the micro-ROS project together with NuttX.
As a matter of fact, the CTF core was ported from Zephyr to NuttX.

Data are retrieved and analysed with babeltrace and the babeltrace python API.

All events are timed using an internal free-running timer (in the case of NuttX running on the Olimex STM32-E407 TIM2). Thanks to this the device can have timer clock offering a resolution of nearly 10 nanoseconds. The current configuration of the resolution is 100 nanoseconds, which is more than enough to assess communication perforances, considering that the minimal Ethernet (64bytes) frame at 100Mbps.
Each measurement is timestamped using the free-running timer mentionned earlier.

The software configuration is likely to change. However the software role will be kept the same:

 * Agent running on a PC
 * Subscriber running on one Olimex STM32-E407,
 * Publisher running on one Olimex STM32-E407.

At a hardware level the USB - CDC/ACM console is going to be used on the Olimex STM32-E407 boards for Ethernet and Serial benchmarkings. For 6LoWPAN the serial USART6 will be used as the console to reduce the memory footprint and execution impact. Hence the USB OTG1 of both Olimex STM32-E407 boards shall be connected to a computer. Additional hardware setup must performed but will depend on the type of topology (Ethernet / Serial / 6LoWPAN):

The results shown below are the fruit of a same application: The **publisher**.
Only the micro-ROS related functions were benchmarked. Hence, all the serial/IP/radio configuration parts of the code won't be taken into account.

Below the data processing is described. From the serialised binary CTF data to the output from the Babeltrace API:

![](_docs/concepts/benchmarking/results/images/bm_dataflow.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

## Communication results

Following is the communication bitrate RX/TX:

![](_docs/concepts/benchmarking/results/images/bm_com.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}


_Observations:_

  According to the data, the Ethernet performs the best, which is expected.

## Real-time results

Below we report the execution benchmarking

The data extracted from the Babeltrace show the following about the NuttX scheduler.
The additional information are:

 * The thread_id 0 is the idle thread
 * The thread_id 3 is the low priority work queue (RTOS kthread),
 * The thread_id 7 is the publisher.

```
[01:00:21.445833238] (+0.000009524) 0 thread_resume: { thread_id = 7 }
[01:00:21.445993047] (+0.000159809) 0 thread_suspend: { thread_id = 7 }
[01:00:21.446002761] (+0.000009714) 0 thread_resume: { thread_id = 3 }
[01:00:21.446051904] (+0.000049143) 0 thread_suspend: { thread_id = 3 }
[01:00:21.446061428] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446085428] (+0.000024000) 0 thread_suspend: { thread_id = 0 }
[01:00:21.446095428] (+0.000010000) 0 thread_resume: { thread_id = 3 }
[01:00:21.446133047] (+0.000037619) 0 thread_suspend: { thread_id = 3 }
[01:00:21.446142571] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446273523] (+0.000130952) 0 thread_suspend: { thread_id = 0 }
[01:00:21.446283523] (+0.000010000) 0 thread_resume: { thread_id = 3 }
[01:00:21.446335809] (+0.000052286) 0 thread_suspend: { thread_id = 3 }
[01:00:21.446345333] (+0.000009524) 0 thread_resume: { thread_id = 7 }
[01:00:21.446505333] (+0.000160000) 0 thread_suspend: { thread_id = 7 }
[01:00:21.446514952] (+0.000009619) 0 thread_resume: { thread_id = 3 }
[01:00:21.446564190] (+0.000049238) 0 thread_suspend: { thread_id = 3 }
[01:00:21.446573714] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446597714] (+0.000024000) 0 thread_suspend: { thread_id = 0 }
[01:00:21.446607714] (+0.000010000) 0 thread_resume: { thread_id = 3 }
[01:00:21.446645333] (+0.000037619) 0 thread_suspend: { thread_id = 3 }
[01:00:21.446654857] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446779047] (+0.000124190) 0 thread_suspend: { thread_id = 0 }
[01:00:21.446789142] (+0.000010095) 0 thread_resume: { thread_id = 3 }
[01:00:21.446841333] (+0.000052191) 0 thread_suspend: { thread_id = 3 }
[01:00:21.446850857] (+0.000009524) 0 thread_resume: { thread_id = 7 }
[01:00:21.447010571] (+0.000159714) 0 thread_suspend: { thread_id = 7 }
[01:00:21.447020285] (+0.000009714) 0 thread_resume: { thread_id = 3 }
```

_Observations:_

According to the results reported above, the software is running a deterministic way. Indeed, by looking closer, it is noticeable that the running sequence is the same.

Additionally, timing deltas between correlated events have a really low variation when switching between events (consecutive thread_suspend/thread_resume).

Moreover, the scheduler performs fast context switches, which on average, last 10 microseconds.

## Executions

Following is depicted the execution benchmarking. The amount of time spend on the CPU split into two parts (I/O operations, Subscriber operations):

![](_docs/concepts/benchmarking/results/images/bm_execution.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}


_Observations:_
    According to the data, most of the time was spent during I/O operations.

## Function call statistics

Below are reported the function calls count per each communication medium:

**Ethernet**
![](_docs/concepts/benchmarking/results/images/fusage_eth.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

**Serial**
![](_docs/concepts/benchmarking/results/images/fusage_serial.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

**6LoWPAN**
 ![](_docs/concepts/benchmarking/results/images/fusage_6lowpan.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

## Static memory usage

Below is the representation of the static memory analysis:

![](_docs/concepts/benchmarking/results/images/bm_max_static_memory.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

_Observations:_

The 6LoWPAN is the medium consuming most of the static memory as this protocol is running on top of IP version 6.

## Dynamic memory usage

The graphic below is showing the total number dynamic allocations. Each bin is split into group of chunk memory blocks. In each group lies different chunk sizes. The size of each group are comprise between a minimum size, which is the size of the previous group. And a maximum size, which is the size display in the legend.
For instance a block with the legend colored yellow represents all block that are greater than the previous group of chunk memory, here 16 bytes. But that the are lower or equal to 32 bytes.

![](_docs/concepts/benchmarking/results/images/bm_allocation_nbr.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

_Observations:_

Independently from the communication mediums, blocks allocated are not huge and not numerous.
The most of the allocations are happening during initialisation.


## Power consumption

Below is depicted energy consumption categorised by communication medium below:

![](_docs/concepts/benchmarking/results/images/bm_power.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

_Observations:_

The communication medium has a high impact on the throughput, which in turn has an impact on the power consumption. The Ethernet provides a high throughput, but at the price of a higher power consumption. In comparison, the serial communciation medium provides a low bitrate with the advantage to consuming a lot less energy.

---

## Source: `_docs/concepts/build_system/external_build_systems/index.md`
<a id="source-docs-concepts-build-system-external-build-systems-index-md"></a>

Once you have read about the official [**micro_ros_setup** tool](/_docs/concepts/build_system/), this page will present some other approaches for building micro-ROS as a module or component integrated into other build systems.

## micro-ROS component for ESP-IDF

The [micro-ROS component for ESP-IDF](https://github.com/micro-ROS/micro_ros_espidf_component) allows to integrate micro-ROS as a component in an Espressif ESP-IDF Build System. This component allows the user to integrate the micro-ROS API and utilities in an already created ESP-IDF project just by cloning or copying a folder.

Configuration of the micro-ROS library is based on the `colcon.meta` file. For more details visit the [Git repository](https://github.com/micro-ROS/micro_ros_espidf_component).

## micro-ROS module for Zephyr

The [micro-ROS module for Zephyr](https://github.com/micro-ROS/micro_ros_zephyr_module) allows to integrate micro-ROS as a module in a Zephyr-based project. In detail, it enables to integrate the micro-ROS API and utilities in an existing Zephyr project just by cloning or copying a folder.

The procedure for configuring the built micro-ROS library is based in `colcon.meta`. For more details visit the [Git repository](https://github.com/micro-ROS/micro_ros_espidf_component).

## micro-ROS for Arduino

The [micro-ROS for Arduino](https://github.com/micro-ROS/micro_ros_arduino) support package is a special port of micro-ROS provided as a set of precompiled libraries for specific platforms. The main reason for this approach is that Arduino does not allow the build of a complex library such as micro-ROS, so by using this approach a ready-to-use solution is provided to the Arduino users.

Along with this support package, there are [detailed instructions](https://github.com/micro-ROS/micro_ros_arduino#how-to-build-the-precompiled-library) for rebuilding the micro-ROS for Arduino libraries for users that need to tune the default configuration.

## micro-ROS for STM32CubeMX

The [micro-ROS for STM32CubeMX](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils) package is a set of utilities which enables the seamless configuration, set-up and integration of micro-ROS into an STM32 controller based project. As such, it allows micro-ROS to be virtually supported by the full set of boards offered by <a href="https://www.st.com/content/st_com/en.html">STMicroelectronics</a>.

Its usage is based on Dockers, via a prepared [Dockerfile](https://github.com/micro-ROS/docker/blob/humble/micro-ROS-static-library-builder/Dockerfile) which eases micro-ROS library generation outside of a ROS 2 environment.

---

## Source: `_docs/concepts/build_system/index.md`
<a id="source-docs-concepts-build-system-index-md"></a>

micro-ROS provides two ways of building a micro-ROS application for embedded platforms:
- _micro_ros_setup:_ integrates and hides the RTOS-specific build tools in few scripts provided as a ROS 2 package.
- _Platform-specific integrations:_ We have integrated micro-ROS with several platforms build tools. Click [here](/_docs/concepts/build_system/external_build_systems/) to learn more.

**micro_ros_setup** provides a standalone build system in the form of a ROS 2 package for use in any normal ROS 2 workspace. This tool is available in the [micro-ROS/micro_ros_setup](https://github.com/micro-ROS/micro_ros_setup) repository.

The **micro_ros_setup** tool allows compiling and generating images that contain micro-ROS apps for the [supported hardware](/_docs/overview/hardware/) boards and [RTOSes](/_docs/concepts/rtos/).

As the **micro_ros_setup** package can be installed like any other ROS 2 package, its usage will be through the ROS 2 CLI tool. Compiling, generating an image and flashing it on a board can be done just with four ROS 2 commands. A detailed description about the usage of this package can be found in the [tutorial section](/_docs/tutorials/core/first_application_rtos/).

### micro-ROS client

Once installed, the build system tool provides some utilities that can be used in order to prepare, build, flash and use a micro-ROS application. The micro-ROS build system is a four-step procedure. In the first step, the user can create a new micro-ROS application by configuring the target hardware and RTOS:

```bash
# Create step
ros2 run micro_ros_setup create_firmware_ws.sh [RTOS] [HARDWARE BOARD]
```

It is possible to obtain a list of the supported hardware by running the command without any argument. By doing so, it is possible to see that along with the RTOSes and hardware supported by micro-ROS this build system also provides with three extra options:
- By using `zephyr` as RTOS and `host` as hardware name, it is possible to obtain a Zephyr RTOS image with your micro-ROS app that runs in your host computer.
- By using just `host` as RTOS, micro-ROS will build a set of [micro-ROS demo applications](https://github.com/micro-ROS/micro-ROS-demos) natively in your host machine. These applications behave just like micro-ROS apps (using the same abstraction layers and middleware implementation) and allow the user to debug and test the applications on a PC.
- By using `generate_lib` as RTOS it is possible to configure the build system for generating static libraries (`.a`) and a set of headers (`include`) that can be linked in any other external tool. This option requires a valid CMake toolchain.

Once the build system has created the new firmware project, it is possible to configure it using:

```bash
# Configure step
ros2 run micro_ros_setup configure_firmware.sh [APP] [OPTIONS]
```

By running this command without any argument, it will output a list of example applications valid for the selected RTOS.
Common options available at this configuration step are:
  - `--transport` or `-t`: `udp`, `serial` or any hardware specific transport label
  - `--dev` or `-d`: agent string descriptor in a serial-like transport
  - `--ip` or `-i`: agent IP in a network-like transport
  - `--port` or `-p`: agent port in a network-like transport


Finally, it is possible to build and flash a micro-ROS app using:

```bash
# Build step
ros2 run micro_ros_setup build_firmware.sh

# Flash step
ros2 run micro_ros_setup flash_firmware.sh
```

### micro-ROS agent

The micro-ROS build system is also able to ease the compilation of the micro-ROS Agent in a ROS 2 workspace by using these commands:

```bash
# Download micro-ROS-Agent packages
ros2 run micro_ros_setup create_agent_ws.sh
ros2 run micro_ros_setup build_agent.sh
source install/local_setup.bash
ros2 run micro_ros_agent micro_ros_agent [OPTIONS]
```

**Tip 1:** To learn use of the micro_ros_setup build system hands-on, please see the [core tutorials](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/).

**Tip 2 :** Remember that the micro-ROS Agent can be also be used with this simple Docker command: `docker run -it --rm -v /dev:/dev --privileged --net=host microros/micro-ros-agent:$ROS_DISTRO [OPTIONS]`

---

## Source: `_docs/concepts/client_library/diagnostics/index.md`
<a id="source-docs-concepts-client-library-diagnostics-index-md"></a>

Although diagnostics is not part of the ROS 2 Client Library packages (i.e., rclcpp, rclpy), it definitely can be counted to the extended client library as it provides very generic and application-independent functionalities.

That's why the micro-ROS Client Library comes with basic diagnostics functionalities. These are compatible with ROS 2 diagnostics and comprise three features only:

* Diagnostic message types (optimized for Micro-XRCE-DDS - no dynamic arrays)
* Updater mechanisms for rclc
* Selected basic diagnostic monitors for microcontrollers

The micro-ROS diagnostics packages do not provide any aggregator as we assume that such aggregation takes place on a microprocessor running standard ROS 2. Hence, we assume the following typical architecture:

<img src="_docs/concepts/client_library/diagnostics/diagnostics_architecture.png" style="display:block; width:60%; margin-left:auto; margin-right:auto;"/>

In order for the standard ROS 2 diagnostic aggregator to aggregate micro-ROS diagnostic message types, the ROS 2 agent has to translate micro-ROS diagnostic messages to standard ROS 2 diagnostic messages (*tbd*).

For more information, please see [https://github.com/micro-ROS/micro_ros_diagnostics/](https://github.com/micro-ROS/micro_ros_diagnostics/). For further information on ROS 2 diagnostics, see [ROS 2 diagnostics](https://github.com/ros/diagnostics/tree/ros2-devel) and [ROS 2 diagnostic_msgs](https://github.com/ros2/common_interfaces/tree/master/diagnostic_msgs).

---

## Source: `_docs/concepts/client_library/embedded_tf/index.md`
<a id="source-docs-concepts-client-library-embedded-tf-index-md"></a>

## Introduction and Goal

The TF transform graph, with its support for both a temporal history, and distributed information sources, has been a novel tool for robotics frameworks when it was released in 2008. Functionally, it is based in scene graph concepts known from computer graphics [[Foote 2013]](https://ieeexplore.ieee.org/document/6556373), but these only rarely offer distribution, and did not offer temporal histories at all (mainly, because this is not needed for frame-based rendering applications like in computer graphics). Distributed scene graphs have become more widely available also in computer graphics. In robotics, work by de Laet et al. [[De Laet et al. 2013]](https://ieeexplore.ieee.org/document/6696693) has extended transforms graphs to also contain twist (i.e., angular motion) information, and to provide more compile-time error checking. This is currently not integrated with distribution mechanisms, but could be used on a single system.
One persistent issue with transform graphs has been their resource use. ROS TF works through replicated copies of the entire transform tree at every node that uses it, and is implemented through unicast TCP connections between nodes. In systems with many dynamic parts, this has sometimes been called the ``TF firehose``, because of the large stream of incoming messages.
micro-ROS will go beyond this state of the art by running the dynamic transform tree in an embedded device, while keeping resource use to a minimum based on an analysis of the spatial and temporal details actually necessary. Further, enabling real-time queries even in the face of concurrent updates through integration will be realized through integration with the micro-ROS real-time executor. It is also planned to integrate the embedded TF will with the node lifecycle to achieve further power-savings


## Roadmap

This task has been cancelled as discussed in the EU project review in September 2019.


## Acknowledgments

This activity has received funding from the European Research Council (ERC) under the European Union's Horizon 2020 research and innovation programme (grant agreement n° 780785).

---

## Source: `_docs/concepts/client_library/execution_management/index.md`
<a id="source-docs-concepts-client-library-execution-management-index-md"></a>

## Table of contents

*   [Introduction](#introduction)

*   [Analysis of rclcpp standard Executor](#analysis-of-rclcpp-standard-executor)
    * [Architecture](#architecture)
    * [Scheduling Semantics](#scheduling-semantics)

*   [Analysis of processing patterns](#analysis-of-processing-patterns)
    * [Sense-plan-act pipeline in robotics](#sense-plan-act-pipeline-in-robotics)
    * [Synchronization of multiple rates](#synchronization-of-multiple-rates)
    * [High-priority processing path](#high-priority-processing-path)
    * [Real-time embedded applications](#real-time-embedded-applications)
*   [rclc Executor](#rclc-executor)
    * [Features](#features)
      * [Trigger condition](#trigger-condition)
      * [Sequential execution](#sequential-execution)
      * [LET-Semantics](#let-semantics)
      * [Multi-threading and scheduling configuration](#multi-threading-and-scheduling-configuration)
    * [Executor API](#executor-api)
      * [Configuration phase](#configuration-phase)
      * [Running phase](#running-phase)
    * [Examples](#examples)
      * [Sense-plan-act pipeline in robotics example](#sense-plan-act-pipeline-in-robotics-example)
      * [Synchronization of multiple rates example](#synchronization-of-multiple-rates-example)
      * [High-priority processing path example](#high-priority-processing-path-example)
      * [Real-time embedded applications example](#real-time-embedded-applications-example)
      * [ROS 2 Executor Workshop Reference System](#ros-2-executor-workshop-reference-system)
    * [Future work](#future-work)
    * [Download](#download)

*   [Callback-group-level Executor](#callback-group-level-executor)
    *   [API Changes](#api-changes)
    *   [Test Bench](#test-bench)

*   [Related Work](#related-work)
    * [Fawkes Framework](#fawkes-framework)
*   [References](#references)
*   [Acknowledgments](#acknowledgments)


## Introduction

Predictable execution under given real-time constraints is a crucial requirement for many robotic applications. While the service-based paradigm of ROS allows a fast integration of many different functionalities, it does not provide sufficient control over the execution management. For example, there are no mechanisms to enforce a certain execution order of callbacks within a node. Also the execution order of multiple nodes is essential for control applications in mobile robotics. Cause-effect-chains comprising of sensor acquisition, evaluation of data and actuation control should be mapped to ROS nodes executed in this order, however there are no explicit mechanisms to enforce it. Furthermore, when data recordings collected in field tests as ROS-bags are re-played, then the results are often surprisingly different due to non-determinism of process scheduling.

Manually setting up a particular execution order of subscriptions and publishing topics as well as defining use-case specific priorities of the corresponding Linux processes is always possible. However, this approach is error-prone, difficult to extend and requires an in-depth knowledge of the deployed ROS 2 packages in the system.

Therefore the goal of the Executor in micro-ROS is to support roboticists with practical and easy-to-use real-time mechanisms which provide solutions for:
- Deterministic execution
- Real-time guarantees
- Integration of real-time and non real-time functionalities on one platform
- Specific support for RTOS and microcontrollers


In ROS 1 a network thread is responsible for receiving all messages and putting them into a FIFO queue (in roscpp). That is, all callbacks were called in a FIFO manner, without any execution management. With the introduction of DDS (data distribution service) in ROS 2, the messages are buffered in DDS. In ROS 2, an Executor concept was introduced to support execution management. At the rcl-layer, a _wait-set_ is configured with handles to be received and in a second step, the handles are taken from the DDS-queue. A handle is a generic term defined in rcl-layer for timers, subscriptions, services, clients and guard conditions.

The standard implementation of the ROS 2 Executor for the C++ API (rclcpp) has, however, certain unusual features, like precedence of timers over all other DDS handles, non-preemptive round-robin scheduling for non-timer handles and considering only one input data for each handle (even if multiple could be available). These features have the consequence, that in certain situations the standard rclcpp Executor is not deterministic and it makes guaranteeing real-time requirements very hard [[CB2019](#CB2019)]. We have not looked at the ROS 2 Executor implementation for Python Frontend (rclpy) because we consider a micro-controllers platform, on which typically C or C++ appliations will run.

Given the goals for a Real-Time Executor and the limitations of the ROS 2 standard rclcpp Executor, the challenges are:
- to develop an adequate and well-defined scheduling mechanisms for the ROS 2 framework and the real-time operating system (RTOS)
- to define an easy-to-use interface for ROS developers
- to model requirements (like latencies, determinism in subsystems)
- mapping of ROS 2 framework and operating system schedulers (semi-automated and optimized mapping is desired as well as generic, well-understood framework mechanisms)

Our approach is to provide a real-time-capable Executor for the rcl+rclc layer (as described in section [Introduction to Client Library](../).) in the C programming language.

As the first step, we propose the rclc Executor for the rcl-layer in C programming language with several new features to support real-time and deterministic execution: It supports 1.) user-defined static sequential execution, 2) conditional execution semantics, 3) multi-threaded execution with scheduling configuration, and 4) logical execution semantics (LET). Sequential execution refers to the runtime behavior, that all callbacks are executed in a pre-defined order independent of the arrival time of messages. Conditional execution is available with a trigger condition which enables typical processing patterns in robotics (which are analyzed in detail in section [Analysis of processing patterns](#analysis-of-processing-patterns). Configuration of scheduling parameters for multi-threaded application accomplishes prioritized execution. The logical execution time concept (LET) provides data synchronization for fixed periodic task scheduling of embedded applications. 

Beyond the advanced execution management mechanisms for micro-ROS, we also contributed to improving and extending the Executor concept in rclcpp for standard ROS 2: the callback group-level Executor. It is not a new Executor but rather a refinement of the ROS 2 Executor API allowing to prioritize a group of callbacks which is not possible with the ROS 2 default Executor in its current Iron release.


## Analysis of rclcpp standard Executor

ROS 2 allows to bundle multiple nodes in one operating system process. To coordinate the execution of the callbacks of the nodes of a process, the Executor concept was introduced in rclcpp (and also in rclpy).

The ROS 2 design defines one Executor (instance of [rclcpp::executor::Executor](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executor.hpp)) per process, which is typically created either in a custom main function or by the launch system. The Executor coordinates the execution of all callbacks issued by these nodes by checking for available work (timers, services, messages, subscriptions, etc.) from the DDS queue and dispatching it to one or more threads, implemented in [SingleThreadedExecutor](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executors/single_threaded_executor.hpp) and [MultiThreadedExecutor](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executors/multi_threaded_executor.hpp), respectively.

The dispatching mechanism resembles the ROS 1 spin thread behavior: the Executor looks up the wait sets, which notifies it of any pending callback in the DDS queue. If there are multiple pending callbacks, the ROS 2 Executor executes them in the order as they were registered at the Executor.

### Architecture

The following diagram depicts the relevant classes of the standard ROS 2 Executor implementation:

<center>
<img src="_docs/concepts/client_library/execution_management/png/executor_class_diagram.png" alt="ROS 2 Executor class diagram" width="100%" />
</center>

Note that an Executor instance maintains weak pointers to the NodeBaseInterfaces of the nodes only. Therefore, nodes can be destroyed safely, without notifying the Executor.

Also, the Executor does not maintain an explicit callback queue, but relies on the queue mechanism of the underlying DDS implementation as illustrated in the following sequence diagram:

<center>
<img src="_docs/concepts/client_library/execution_management/png/executor_to_dds_sequence_diagram.png" alt="Call sequence from executor to DDS" width="100%" />
</center>

The Executor concept, however, does not provide means for prioritization or categorization of the incoming callback calls. Moreover, it does not leverage the real-time characteristics of the underlying operating-system scheduler to have finer control on the order of executions. The overall implication of this behavior is that time-critical callbacks could suffer possible deadline misses and a degraded performance since they are serviced later than non-critical callbacks. Additionally, due to the FIFO mechanism, it is difficult to determine usable bounds on the worst-case latency that each callback execution may incur.

### Scheduling Semantics

In a recent paper [[CB2019](#CB2019)], the rclcpp Executor has been analyzed in detail and a response time analysis of cause-effect chains has been proposed under reservation-based scheduling. The Executor distinguishes four categories of callbacks: _timers_, which are triggered by system-level timers, _subscribers_, which are triggered by new messages on a subscribed topic, _services_, which are triggered by service requests, and _clients_, which are triggered by responses to service requests. The Executor is responsible for taking messages from the input queues of the DDS layer and executing the corresponding callback. Since it executes callbacks to completion, it is a non-preemptive scheduler, However it does not consider all ready tasks for execution, but only a snapshot, called readySet. This readySet is updated when the Executor is idle and in this step it interacts with the DDS layer updating the set of ready tasks. Then for every type of task, there are dedicated queues (timers, subscriptions, services, clients) which are processed sequentially. The following undesired properties were pointed out:

* Timers have the highest priority. The Executor processes _timers_ always first.  This can lead to the intrinsic effect, that in overload situations messages from the DDS queue are not processed.
* Non-preemptive round-robin scheduling of non-timer handles. Messages arriving during the processing of the readySet are not considered until the next update, which depends on the execution time of all remaining callbacks. This leads to priority inversion, as lower-priority callbacks may implicitly block higher-priority callbacks by prolonging the current processing of the readySet.
* Only one message per handle is considered. The readySet contains only one task instance, For example, even if multiple messages of the same topic are available, only one instance is processed until the Executor is idle again and the readySet is updated from the DDS layer. This aggravates priority inversion, as a backlogged callback might have to wait for multiple processing of readySets until it is considered for scheduling. This means that non-timer callback instances might be blocked by multiple instances of the same lower-priority callback.

Due to these findings, the authors present an alternative approach to provide determinism and to apply well-known schedulability analyses to a ROS 2 systems. A response time analysis is described under reservation-based scheduling.

## Analysis of processing patterns
The development of an execution management mechanism for micro-ROS is based on an analysis of processing patterns commonly used in robotics and embedded systems. First, typical processing patterns in mobile robotics are presented which are used to implement deterministic behavior. Then, the processing patterns in the real-time embedded systems are analyzed, in which, as a main difference, the time-triggered paradigm is applied to accomplish real-time behavior. 

### Sense-plan-act pipeline in robotics
Now we describe common software design patterns which are used in mobile robotics to achieve deterministic behavior. For each design pattern we describe the concept and the derived requirements for a deterministic Executor.

**Concept:**

A common design paradigm in mobile robotics is a control loop, consisting of several phases: A sensing phase to aquire sensor data, a plan phase for localization and path planning and an actuation-phase to steer the mobile robot. Of course, more phases are possible, here these three phases shall serve as an example. Such a processing pipeline is shown in Figure 1.

<center>
<img src="_docs/concepts/client_library/execution_management/png/sensePlanActScheme.png" alt="Sense Plan Act Pipeline" width="60%"/>
</center>
<center>
Figure 1: Multiple sensors driving a Sense-Plan-Act pipeline.
</center>

Typically multiple sensors are used to perceive the environment. For example an IMU and a laser scanner. The quality of localization algorithms highly depend on how old such sensor data is when it is processed. Ideally the latest data of all sensors should be processed. One way to achive this is to execute first all sensor drivers in the sense-phase and then process all algorithms in the plan-phase.

Currently, such a processing order cannot be defined with the default Executor of rclcpp. One could in principle design a data-driven pipeline, however if e.g. the Laser scan is needed by some other callback in the sense-phase as well as in the plan-phase, the processing order of these subscribers is arbitrary.

For this sense-plan-act pattern, we could define one executor for each phase. The plan-phase would be triggered only when all callbacks in the sense-phase have finished.

**Derived requirements:**
- triggered execution

### Synchronization of multiple rates

**Concept:**

Often multiple sensors are being used to sense the environment for mobile robotics. While an IMU sensor provides data samples at a very high rate (e.g., 500 Hz), laser scans are availabe at a much slower frequency (e.g. 10Hz) determined by the revolution time. Then the challenge is, how to deterministically fuse sensor data with different frequencies. This problem is depicted in Figure 2.

<center>
<img src="_docs/concepts/client_library/execution_management/png/sensorFusion_01.png" alt="Sychronization of multiple rates" width="30%" />
</center>
<center>
Figure 2: How to deterministically process multi-frequent sensor data.
</center>

Due to scheduling effects, the callback for evaluating the laser scan might be called just before or just after an IMU data is received. One way to tackle this is to write additional synchronization code inside the application. Obviously, this is a cumbersome and not-portable solution.

An Alternative would be to evalute the IMU sample and the laser scan by synchronizing their frequency. For example by processing always 50 IMU samples with one laser scan. This approach is shown in Figure 3. A pre-processing callback aggregates the IMU samples and sends an aggregated message with 50 samples at 10Hz rate. Now both messages have the same frequency. With a trigger condition, which fires when both messages are available, the sensor fusion algorithm can expect always synchronized input data.

<center>
<img src="_docs/concepts/client_library/execution_management/png/sensorFusion_02.png" alt="Sychnronization with a trigger" width="40%" />
</center>
<center>
Figure 3: Synchronization of multiple input data with a trigger.
</center>

In ROS 2, this is currently not possible to be modeled because of the lack of a trigger concept in the Executors of rclcpp and rclpy. Message filters could be used to synchronize input data based on the timestamp in the header, but this is only available in rclcpp (and not in rcl). Further more, it would be more efficient to have such a trigger concept directly in the Executor.

Another idea would be to actively request for IMU data only when a laser scan is received. This concept is shown in Figure 4. Upon arrival of a laser scan mesage, first, a message with aggregated IMU samples is requested. Then, the laser scan is processed and later the sensor fusion algorithm. An Executor, which would support sequential execution of callbacks, could realize this idea.

<center>
<img src="_docs/concepts/client_library/execution_management/png/sensorFusion_03.png" alt="Sychronization with sequence" width="30%" />
</center>
<center>
Figure 4: Synchronization with sequential processing.
</center>

**Derived requirements:**
- triggered execution
- sequential procesing of callbacks

### High-priority processing path
**Concept**
Often a robot has to fullfill several activities at the same time. For example following a path and avoiding obstacles. While path following is a permanent activity, obstacle avoidance is trigged by the environment and should be immediately reacted upon. Therefore one would like to specify priorities to activities. This is depicted in Figure 5:

<center>
<img src="_docs/concepts/client_library/execution_management/png/highPriorityPath.png" alt="HighPriorityPath" width="50%" />
</center>
<center>
Figure 5: Managing high priority path with sequential order.
</center>

Assuming a simplified control loop with the activities sense-plan-act, the obstacle avoidance, which might temporarily stop the robot, should be processed before the planning phase. In this example we assume that these activites are processed in one thread.

**Derived requirements:**
- sequential processing of callbacks


### Real-time embedded applications
In embedded systems, real-time behavior is approached by using the time-triggered paradigm, which means that the processes are periodically activated. Processes can be assigned priorities to allow pre-emptions. Figure 6 shows an example, in which three processes with fixed periods are shown. The middle and lower process are preempted multiple times depicted with empty dashed boxes.

<center>
<img src="_docs/concepts/client_library/execution_management/png/scheduling_01.png" alt="Schedule with fixed periods" width="30%"/>
</center>
<center>
Figure 6: Fixed periodic preemptive scheduling.
</center>

To each process one or multiple tasks can be assigned, as shown in Figure 7. These tasks are executed sequentially, which is often called cooperative scheduling.

<center>
<img src="_docs/concepts/client_library/execution_management/png/scheduling_02.png" alt="Schedule with fixed periods" width="30%"/>
</center>
<center>
Figure 7: Processes with sequentially executed tasks.
</center>

While there are different ways to assign priorities to a given number of processes,
the rate-monotonic scheduling assignment, in which processes with a shorter period have a higher priority, has been shown optimal if the processor utilization is less than 69% [[LL1973](#LL1973)].

 In the last decades many different scheduling approaches have been presented; however fixed-periodic preemptive scheduling is still widely used in embedded real-time systems [[KZH2015](#KZH2015)]. This becomes also obvious, when looking at the features of current operating systems. Like Linux, real-time operating systems, such as NuttX, Zephyr, FreeRTOS, QNX etc., support fixed-periodic preemptive scheduling and the assignment of priorities, which makes the time-triggered paradigm the dominant design principle in this domain.

However, data consistency is often an issue when preemptive scheduling is used and if data is being shared across multiple processes via global variables. Due to scheduling effects and varying execution times of processes, writing and reading these variables could occur sometimes sooner or later. This results in a latency jitter of update times (the timepoint at which a variable change becomes visible to other processes). Race conditions can occur when multiple processes access a variable at the same time. So to solve this problem, the concept of logical-execution time (LET) was introduced in [[HHK2001](#HHK2001)], in which communication of data occurs only at pre-defined periodic time instances: Reading data only at the beginning of the period and writing data only at the end of the period. The cost of an additional latency delay is traded for data consistency and reduced jitter. This concept has also recently been applied to automotive applications[[NSP2018](#NSP2018)].

<center>
<img src="_docs/concepts/client_library/execution_management/png/scheduling_LET.png" alt="Schedule with fixed periods" width="80%"/>
</center>
<center>
Figure 8: Data communication without and with Logical Execution Time paradigm.
</center>

An Example of the LET concept is shown in Figure 8. Assume that two processes are communicating data via one global variable. The timepoint when this data is written is at the end of the processing time. In the default case (left side), the processes p<sub>3</sub> and p<sub>4</sub> receive the update. At the right side of Figure 8, the same scenario is shown with LET semantics. Here, the data is communicated only at period boundaries. In this case, the lower process communicates at the end of the period, so that always processes p<sub>3</sub> and p<sub>5</sub> receive the new data.

**Concept:**
- periodic execution of processes
- assignment of fixed priorities to processes
- preemptive scheduling of processes
- co-operative scheduling of tasks within a process (sequential execution)
- data synchronization with LET-semantics


While periodic activation is possible in ROS 2 by using timers, preemptive scheduling is supported by the operating system and assigning priorities on the granularity of threads/processes that correspond to the ROS nodes; it is not possible to sequentially execute callbacks, which have no data-dependency. Furthermore data is read from the DDS queue just before the callback is executed and data is written sometime during the time the application is executed. While the `spin_period` function of the rclcpp Executor allows to check for data at a fixed period and executing those callbacks for which data is available, however, with this spin-function does not execute all callbacks irrespective wheter data is available or not. So `spin_period` is not helpful to periodically execute a number of callbacks (aka tasks within a process). So we need a mechanism that triggers the execution of multiple callbacks (aka tasks) based on a timer. Data transmission is achieved via DDS which does not allow to implement a LET-semantics. To summarize, we derive the following requirements.

**Derived requirements:**
- trigger the execution
- sequential processing of callbacks
- data synchronization with LET semantics

## rclc Executor

The rclc Executor is a ROS 2 Executor based on the rcl-layer in C programming language. As discussed above, the default rclcpp Executor is not suitable to implement real-time applications because of three main reasons: timers are preferred over all other handles, no priorization of callback execution and the round-robin to completion execution of callbacks. On the other hand, several processing patterns have been developed as best practices to achieve non-functional requirements, such as bounded end-to-end latencies, low jitter of response times of cause-effect chains, deterministic processing and short response times even in overload situations. These processing patterns are difficult to implement with the concepts availabe in the default ROS 2 Executor, therefore we have developed a flexible Executor: the rclc Executor. 

### Features

The rclc Executor is feature-complete, i.e. it supports all event types as the default ROS 2 Executor, which are:
- subscriptions
- timers
- services
- clients
- guard conditions
- actions
- lifecycle

The flexible rclc Executor provides on top the following new features:
- triggered execution
- user-defined sequential execution
- multi-threading and scheduling configuration (WIP)
- LET-semantics for data synchronization of periodic process scheduling

First, a *trigger condition* allows to define when the processing of a callback shall start. This is useful to implement sense-plan-act control loops or more complex processing structures with directed acyclic graphs. Second, a user can specify the *processing order* in which these callbacks will be executed. With this feature, the pattern of sensor fusion with multiple rates, in which data is requested from a sensor based on the arrival of some other sensor, can be easily implemented. Third, the assignment of scheduling parameters (e.g., priorities) of the underlying operating system. With this feature, prioritized processing can be implemented. Finally, for periodic applications, the *LET Semantics* has been implemented to support data consistency for periodic process scheduling. These features are now described in more detail.

#### Sequential execution

- At configuration, the user defines the order of handles.
- At configuration, the user defines whether the handle shall be called only when new data is available (ON_NEW_DATA) or whether the callback shall always be called (ALWAYS).
- At runtime, all handles are processed in the user-defined order
  - if the configuration of handle is ON_NEW_DATA, then the corresponding callback is only called if new data is available
  - if the configuration of the handle is ALWAYS, then the corresponding callback is always. If no data is available, then the callback is called with no data (e.g. NULL pointer).

Figure 9 shows three callbacks, A, B and C. Assume, they shall be executed in the order *B,A,C*. Then the user adds the callbacks to the rclc Executor in this order. Whenever new messages have arrived then the callbacks for which a new message is availabe will be always executed in the user-defined processing order. 
<center>
<img src="_docs/concepts/client_library/execution_management/png/rclc_executor_sequential_execution.png" alt="Sequential execution semantics" width="50%" />
</center>
<center>
Figure 9: Sequential execution semantics.
</center>

#### Trigger condition

- Given a set of handles, a trigger condition, which is based on the availability of input data of these handles, decides when the processing of all callbacks starts. This is shown in Figure 10. 

<center>
<img src="_docs/concepts/client_library/execution_management/png/trigger_01.png" alt="Trigger condition overview" width="50%" />
</center>
<center>
Figure 10: Executor with trigger condition
</center>

- Available options:
  - ALL operation: fires when input data is available for all handles
  - ANY operation: fires when input data is available for at least one handle (OR semantics)
  - ONE: fires when input data for a user-specified handle is available
  - User-defined function: user can implement custom logic

Figure 11 shows an example of the ALL semantics. Only if all messages *msg_A, msg_B, msg_C* were received, then trigger condition is fullfilled and the callbacks are processed in a user-defined order.
<center>
<img src="_docs/concepts/client_library/execution_management/png/trigger_ALL.png" alt="Trigger condition ALL" width="30%" />
</center>
<center>
Figure 11: Trigger condition ALL
</center>

Figure 12 shows an example of the ANY semantics. Thas is, if any messages *msg_A, msg_B, msg_C* was received, then trigger condition is fullfilled and the callbacks are processed in a user-defined order. This is equivalent to OR semantics.
<center>
<img src="_docs/concepts/client_library/execution_management/png/trigger_OR.png" alt="Trigger condition ANY" width="30%" />
</center>
<center>
Figure 12: Trigger condition ANY (OR)
</center>

Figure 13 shows an example of the ONE semantics. Thas is, only if message *msg_B* was received, the trigger condition is fullfilled and (potentially all) callbacks are processed in a user-defined order.
<center>
<img src="_docs/concepts/client_library/execution_management/png/trigger_ONE.png" alt="Trigger condition ONE" width="30%" />
</center>
<center>
Figure 13: Trigger condition ONE
</center>

Figure 14 describes the custom semantics. A custom trigger condition with could be a more complex logic of multiple messages, can be passed to the executor. This might also include hardware triggers, like interrupts. 
<center>
<img src="_docs/concepts/client_library/execution_management/png/trigger_user_defined.png" alt="Trigger condition user-defined" width="30%" />
</center>
<center>
Figure 14: Trigger condition user-defined
</center>

#### LET-Semantics
- Assumption: time-triggered system, the executor is activated periodically
- When the trigger fires, reads all input data and makes a local copy
- Processes all callbacks in sequential order
- Write output data at the end of the executor's period (Note: this is not implemented yet)

Additionally we have implemented the current rclcpp Executor semantics ("RCLCPP"):
- waiting for new data for all handles (rcl_wait)
- using trigger condition ANY
- if trigger fires, start processing handles in pre-defined sequential order
- request from DDS-queue the new data just before the handle is executed (rcl_take)

The selection of the Executor semantics is optional. The default semantics is "RCLCPP".

#### Multi-threading and scheduling configuration

The rclc Executor has been extended for multi-threading. It supports the assignment of scheduling policies, like priorities or more advanced scheduling algorithms as reservation-based scheduling, to subscription callbacks. [[Pull Request](https://github.com/ros2/rclc/pull/87), Pre-print [SLD2021](#SLD2021)]. The overall architecture is shown in Figure 15. One Executor thread is responsible for checking for new data from the DDS queue. For every callback, a thread is spawned with the dedicted scheduling policy provided by the operating system. The Executor then dispatches new data of a subscription to its corresponding callback function, which is then executed in its own thread by operating system.

<center>
<img src="_docs/concepts/client_library/execution_management/png/rclc_executor_multi_threaded.png" alt="Multi-threaded rclc Executor" width="90%" />
</center>
<center>
Figure 15: multi-threaded rclc-Executor
</center>

### Executor API
The API of the rclc Executor can be divided in two phases: Configuration and Running.
#### Configuration phase
During the configuration phase, the user shall define:
- the total number of callbacks
- the sequence of the callbacks
- trigger condition (optional, default: ANY)
- data communcation semantics (optional, default ROS2)

As the Executor is intended for embedded controllers, dynamic memory management is crucial. Therefore at initialization of the rclc Executor, the user defines the total number of callbacks. The necessary dynamic memory will be allocated only in this phase and no more memory in the running phase. This makes this Executor static in the sense, that during runtime no additional callbacks can be added.

Then, the user adds handles and the corresponding callbacks (e.g. for subscriptions and timers) to the Executor. The order in which this takes place, defines later the sequential processing order during runtime.

For each handle the user can specify, if the callback shall be executed only if new data is available (ON_NEW_DATA) or if the callback shall always be executed (ALWAYS). The second option is useful when the callback is expected to be called at a fixed rate.

The trigger condition defines when the processing of these callbacks shall start. For convenience some default conditions have been defined:
- trigger_any(default) : start executing if any callback has new data
- trigger_all : start executing if all callbacks have new data
- trigger_one(&`data`) : start executing if `data` has been received
- user_defined_function: the user can also define its own function with more complex logic

With 'trigger_any' being the default, the current semantics of the rclcpp Executor is selected.

The data communication semantics can be
- ROS2 (default)
- LET

To be compatible with ROS2 rclcpp Executor, the existing rclcpp semantics is implemented as 'ROS2'. That is, with the spin-function the DDS-queue is constantly monitored for new data (rcl_wait). If new data becomes available, then is fetched from DDS (rcl_take) immediately before the callback is executed. All callbacks are processed in the user-defined order, this is the only difference to the rclcpp Executor, in which no order can be specified.

Secondly, the LET semantics is implemented such that at the beginning of processing all available data is fetched (rcl_take) and buffered and then the callbacks are processed in the pre-defined operating on the buffered copy.

#### Running phase

As the main functionality, the Executor has a `spin`-function which constantly checks for new data at the DDS-queue, like the rclcpp Executor in ROS2. If the trigger condition is satisfied then all available data from the DDS queue is processed according to the specified semantics (ROS or LET) in the user-defined sequential order. After all callbacks have been processed the DDS is checked for new data again.

Available spin functions are
- `spin_some`  - spin one time
- `spin_period` - spin with a period
- `spin` - spin indefinitly

### Examples
We provide the relevant code snippets how to setup the rclc Executor for the processing patterns as described above.

#### Sense-plan-act pipeline in robotics example

In this example we want to realise a sense-plan-act pipeline in a single thread. The trigger condition is demonstrated by activating
the sense-phase when both data for the Laser and IMU are available. Three executors are necessary `exe_sense`, `exe_plan` and `exe_act`. The two sensor acquisition callbacks `sense_Laser` and `sense_IMU` are registered in the Executor `exe_sense`.
The trigger condition ALL is responsible to activate the sense-phase only when all data for these two callbacks are available. Finally all three Executors are spinning using a `while`-loop and the `spin_some` function.

The definitions of callbacks are omitted.

```C
...
rcl_subscription_t sense_Laser, sense_IMU, plan, act;
rcle_let_executor_t exe_sense, exe_plan, exe_act;
// initialize executors
rclc_executor_init(&exe_sense, &context, 2, ...);
rclc_executor_init(&exe_plan, &context, 1, ...);
rclc_executor_init(&exe_act, &context, 1, ...);
// executor for sense-phase
rclc_executor_add_subscription(&exe_sense, &sense_Laser, &my_sub_cb1, ON_NEW_DATA);
rclc_executor_add_subscription(&exe_sense, &sense_IMU, &my_sub_cb2, ON_NEW_DATA);
rclc_let_executor_set_trigger(&exe_sense, rclc_executor_trigger_all, NULL);
// executor for plan-phase
rclc_executor_add_subscription(&exe_plan, &plan, &my_sub_cb3, ON_NEW_DATA);
// executor for act-phase
rclc_executor_add_subscription(&exe_act, &act, &my_sub_cb4, ON_NEW_DATA);

// spin all executors
while (true) {
  rclc_executor_spin_some(&exe_sense, RCL_MS_TO_NS(100));
  rclc_executor_spin_some(&exe_plan, RCL_MS_TO_NS(100));
  rclc_executor_spin_some(&exe_act, RCL_MS_TO_NS(100));
}
```

#### Synchronization of multiple rates example

The sensor fusion synchronizing the multiple rates with a trigger is shown below.

```C
...
rcl_subscription_t aggr_IMU, sense_Laser, sense_IMU;
rcle_let_executor_t exe_aggr, exe_sense;
// initialize executors
rclc_executor_init(&exe_aggr, &context, 1, ...);
rclc_executor_init(&exe_sense, &context, 2, ...);
// executor for aggregate IMU data
rclc_executor_add_subscription(&exe_aggr, &aggr_IMU, &my_sub_cb1, ON_NEW_DATA);
// executor for sense-phase
rclc_executor_add_subscription(&exe_sense, &sense_Laser, &my_sub_cb2, ON_NEW_DATA);
rclc_executor_add_subscription(&exe_sense, &sense_IMU, &my_sub_cb3, ON_NEW_DATA);
rclc_executor_set_trigger(&exe_sense, rclc_executor_trigger_all, NULL);

// spin all executors
while (true) {
  rclc_executor_spin_some(&exe_aggr, RCL_MS_TO_NS(100));
  rclc_executor_spin_some(&exe_sense, RCL_MS_TO_NS(100));
}
```

The setup for the sensor fusion using sequential execution is shown below.
Note that the sequetial order is `sense_IMU`, which will request the aggregated IMU message, and then `sense_Laser`
while the trigger will fire, when a laser message is received.

```C
...
rcl_subscription_t sense_Laser, sense_IMU;
rcle_let_executor_t exe_sense;
// initialize executor
rclc_executor_init(&exe_sense, &context, 2, ...);
// executor for sense-phase
rclc_executor_add_subscription(&exe_sense, &sense_IMU, &my_sub_cb1, ALWAYS);
rclc_executor_add_subscription(&exe_sense, &sense_Laser, &my_sub_cb2, ON_NEW_DATA);
rclc_executor_set_trigger(&exe_sense, rclc_executor_trigger_one, &sense_Laser);
// spin
rclc_executor_spin(&exe_sense);
```
#### High priority processing path example

This example shows the sequential processing order to execute the obstacle avoidance `obst_avoid`
after the callbacks of the sense-phase and before the callback of the planning phase `plan`.
The control loop is started when a laser message is received. Then an aggregated IMU message is requested,
like in the example above. Then all the other callbacks are always executed. This assumes that these callbacks
communicate via a global data structure. Race conditions cannot occur, because the callbacks
run all in one thread.

```C
...
rcl_subscription_t sense_Laser, sense_IMU, plan, act, obst_avoid;
rcle_let_executor_t exe;
// initialize executors
rclc_executor_init(&exe, &context, 5, ...);
// define processing order
rclc_executor_add_subscription(&exe, &sense_IMU, &my_sub_cb1, ALWAYS);
rclc_executor_add_subscription(&exe, &sense_Laser, &my_sub_cb2, ON_NEW_DATA);
rclc_executor_add_subscription(&exe, &obst_avoid, &my_sub_cb3, ALWAYS);
rclc_executor_add_subscription(&exe, &plan, &my_sub_cb4, ALWAYS);
rclc_executor_add_subscription(&exe, &act, &my_sub_cb5, ALWAYS);
rclc_executor_set_trigger(&exe, rclc_executor_trigger_one, &sense_Laser);
// spin
rclc_executor_spin(&exe);
```

#### Real-time embedded applications example

With sequential execution, the co-operative scheduling of tasks within a process can be modeled. The trigger condition is used to periodically activate the process which will then execute all callbacks in a pre-defined order. Data will be communicated using the LET-semantics. Every Executor is executed in its own thread, to which an appropriate priority can be assigned.

In the following example, the Executor is setup with 4 handles. We assume a process has three subscriptions `sub1`, `sub2`, `sub3`. The sequential processing order is given by the order as they are added to the Executor. A timer `timer` defines the period.  The `trigger_one` with the parameter `timer` is used, so that whenever the timer is ready, all callbacks are processed. Finally the data communication semantics LET is defined.
```C
#include "rcl_executor/let_executor.h"

// define subscription callback
void my_sub_cb1(const void * msgin)
{
  // ...
}
// define subscription callback
void my_sub_cb2(const void * msgin)
{
  // ...
}
// define subscription callback
void my_sub_cb3(const void * msgin)
{
  // ...
}

// define timer callback
void my_timer_cb(rcl_timer_t * timer, int64_t last_call_time)
{
  // ...
}

// necessary ROS 2 objects
rcl_context_t context;   
rcl_node_t node;
rcl_subscription_t sub1, sub2, sub3;
rcl_timer_t timer;
rcle_let_executor_t exe;

// define ROS context
context = rcl_get_zero_initialized_context();
// initialize ROS node
rcl_node_init(&node, &context,...);
// create subscriptions
rcl_subscription_init(&sub1, &node, ...);
rcl_subscription_init(&sub2, &node, ...);
rcl_subscription_init(&sub3, &node, ...);
// create a timer
rcl_timer_init(&timer, &my_timer_cb, ... );
// initialize executor with four handles
rclc_executor_init(&exe, &context, 4, ...);
// define static execution order of handles
rclc_executor_add_subscription(&exe, &sub1, &my_sub_cb1, ALWAYS);
rclc_executor_add_subscription(&exe, &sub2, &my_sub_cb2, ALWAYS);
rclc_executor_add_subscription(&exe, &sub3, &my_sub_cb3, ALWAYS);
rclc_executor_add_timer(&exe, &timer);
// trigger when handle 'timer' is ready
rclc_executor_set_trigger(&exe, rclc_executor_trigger_one, &timer);
// select LET-semantics
rclc_executor_data_comm_semantics(&exe, LET);
// spin forever
rclc_executor_spin(&exe);
```

#### ROS 2 Executor Workshop Reference System
The rclc Executor has been presented at the workshop 'ROS 2 Executor: How to make it efficient, real-time and deterministic?' at [ROS World 2021](https://roscon.ros.org/world/2021/) (i.e. the online version of ROSCon)[[S2021](#S2021)]. A [Reference System](https://github.com/ros-realtime/reference-system) for testing and benchmarking ROS Executors has been developed for this workshop. The application of the rclc Executor on the reference system with the trigger condition can be found in the [rclc-executor branch of the Reference System](https://github.com/ros-realtime/reference-system/tree/rclc_executor). 

<iframe width="560" height="315" src="https://www.youtube.com/embed/IazrPF3RN1U" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

The slides can be downloaded [here](https://ec2a4d36-bac8-4759-b25e-bb1f794177f4.filesusr.com/ugd/984e93_749e27b917a54b45b9ccb5be930841b8.pdf). All information and the videos and slides of the other talks of the workshop can be found at [www.apex.ai/roscon-21](https://www.apex.ai/roscon-21).

### Future work

- Full LET semantics (writing data at the end of the period)
  - one publisher that periodically publishes
  - if Executors are running in multiple threads,
    publishing needs to be atomic
- Multi-threaded executor with assignment of scheduling policies of underlying operating system. [[Pull Request](https://github.com/ros2/rclc/pull/87), pre-print [SLD2021](#SLD2021)].

### Download
The rclc Executor can be downloaded from the [ros2/rclc repository](https://github.com/ros2/rclc). It is available for the ROS 2 versions Humble, Iron and Rolling. The repository provides several packages including the [rclc Executor](https://github.com/ros2/rclc/tree/master/rclc) and an [rclc_examples package](https://github.com/ros2/rclc/tree/master/rclc_examples) with several application examples.

## Callback-group-level Executor

The Callback-group-level Executor was an early prototype for a refined rclcpp Executor API developed in micro-ROS. It has been derived from the default rclcpp Executor and addresses some of the aforementioned deficits. Most important, it was used to validate that the underlying layers (rcl, rmw, rmw_adapter, DDS) allow for multiple Executor instances without any negative interferences.

As the default rclcpp Executor works at a node-level granularity – which is a limitation given that a node may issue different callbacks needing different real-time guarantees - we decided to refine the API for more fine-grained control over the scheduling of callbacks on the granularity of callback groups using. We leverage the callback-group concept existing in rclcpp by introducing real-time profiles such as RT-CRITICAL and BEST-EFFORT in the callback-group API (i.e. rclcpp/callback_group.hpp). Each callback needing specific real-time guarantees, when created, may therefore be associated with a dedicated callback group. With this in place, we enhanced the Executor and depending classes (e.g., for memory allocation) to operate at a finer callback-group granularity. This allows a single node to have callbacks with different real-time profiles assigned to different Executor instances - within one process.

Thus, an Executor instance can be dedicated to specific callback group(s) and the Executor’s thread(s) can be prioritized according to the real-time requirements of these groups. For example, all time-critical callbacks are handled by an "RT-CRITICAL" Executor instance running at the highest scheduler priority.

The following figure illustrates this approach with two nodes served by three Callback-group-level Executors in one process:

<center>
<img src="_docs/concepts/client_library/execution_management/png/cbg-executor_sample_system.png" alt="Sample system with two nodes and three Callback-group-level Executors in one process" width="60%" />
</center>

The different callbacks of the Drive-Base node are distributed to different Executors (visualized by the color red, yellow and green).  For example the onCmdVel and publishWheelTicks callback are scheduled by the same Executor (yellow). Callbacks from different nodes can be serviced by the same Executor.

### API Changes

In this section, we describe the necessary changes to the Executor API:
*   [include/rclcpp/callback\_group.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/callback_group.hpp):

    * Introduced an enum to distinguish up to three real-time classes (requirements) per node (RealTimeCritical, SoftRealTime, BestEffort)
    * Changed association with Executor instance from nodes to callback groups.
*   [include/rclcpp/executor.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executor.hpp)

    * Added functions to add and remove individual callback groups in addition to whole nodes.

    * Replaced private vector of nodes with a map from callback groups to nodes.

*   [include/rclcpp/memory\_strategy.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/memory_strategy.hpp)

    * Changed all functions that expect a vector of nodes to the just mentioned map.
*   [include/rclcpp/node.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/node.hpp) and [include/rclcpp/node_interfaces/node_base.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/node_interfaces/node_base.hpp)

    * Extended arguments of create\_callback\_group function for the real-time class.
    * Removed the get\_associated\_with\_executor\_atomic function.

The callback-group-level executor has been merged into ROS 2 rclcpp in [pull request 1218](https://github.com/ros2/rclcpp/pull/1218/commits).

### Test Bench

As a proof of concept, we implemented a small test bench in the present package cbg-executor_ping-pong_cpp. The test bench comprises a Ping node and a Pong node which exchange real-time and best-effort messages simultaneously with each other. Each class of messages is handled with a dedicated Executor, as illustrated in the following figure.

<center>
<img src="_docs/concepts/client_library/execution_management/png/ping_pong_diagram.png" alt="Architecture for the Callback-group-level Executor test bench" width="100%" />
</center>

With the test bench, we validated the functioning of the approach.

<center>
<img src="_docs/concepts/client_library/execution_management/png/cbg_executor_demo_plot.png" alt="Results from Callback-group-level Executor test bench" width="80%" />
</center>

In this example, the callback for the high priority task (red line) consumes 10ms and the low priority task (blue line) 40ms in the Pong Node. With a ping rate of 20 Hz, the CPU saturates (10ms\*20+40ms\*20=1000ms). With higher frequencies the high priorty task can continue to send its pong message, while the low priority pong task degrades. With a frequency of 100Hz the high priority task requires 100% CPU utilization. With higher ping rates it keeps sending pong messages with 100Hz, while the low priority task does not get any CPU resources any more and cannot send any messages.

The test bench is provided in the [cbg_executor_demo](https://github.com/ros2/examples/tree/master/rclcpp/executors/cbg_executor).

## Related Work

In this section, we provide an overview to related approaches and link to the corresponding APIs.

### Fawkes Framework

[Fawkes](http://www.fawkesrobotics.org/) is a robotic software framework, which supports synchronization points for sense-plan-act like execution. It has been developed by RWTH Aachen since 2006. Source code is available at [github.com/fawkesrobotics](https://github.com/fawkesrobotics).

#### Synchronization
Fawkes provides developers different synchronization points, which are very useful for defining an execution order of a typical sense-plan-act application. These ten synchronization points (wake-up hooks) are the following (cf. [libs/aspect/blocked_timing.h](https://github.com/fawkesrobotics/fawkes/blob/master/src/libs/aspect/blocked_timing.h)):

*   WAKEUP\_HOOK\_PRE\_LOOP
*   WAKEUP\_HOOK\_SENSOR\_ACQUIRE
*   WAKEUP\_HOOK\_SENSOR\_PREPARE
*   WAKEUP\_HOOK\_SENSOR\_PROCESS
*   WAKEUP\_HOOK\_WORLDSTATE
*   WAKEUP\_HOOK\_THINK
*   WAKEUP\_HOOK\_SKILL   
*   WAKEUP\_HOOK\_ACT     
*   WAKEUP\_HOOK\_ACT\_EXEC
*   WAKEUP\_HOOK\_POST\_LOOP  

#### Configuration at compile time
At compile time, a desired synchronization point is defined as a constructor parameter for a module. For example, assuming that `mapLaserGenThread` shall be executed in SENSOR_ACQUIRE, the constructor is implemented as:

```C++
MapLaserGenThread::MapLaserGenThread()
  :: Thread("MapLaserGenThread", Thread::OPMODE_WAITFORWAKEUP),
     BlockedTimingAspect(BlockedTimingAspect::WAKEUP_HOOK_SENSOR_ACQUIRE),
     TransformAspect(TransformAspect::BOTH_DEFER_PUBLISHER, "Map Laser Odometry")
```

Similarly, if `NaoQiButtonThread` shall be executed in the SENSOR_PROCESS hook, the constructor is:

```C++
NaoQiButtonThread::NaoQiButtonThread()
  :: Thread("NaoQiButtonThread", Thread::OPMODE_WAITFORWAKEUP),
     BlockedTimingAspect(BlockedTimingAspect::WAKEUP_HOOK_SENSOR_PROCESS)
```

#### Runtime execution
At runtime, the *Executor* iterates through the list of synchronization points and executes all registered threads until completion. Then, the threads of the next synchronization point are called.

A module (thread) can be configured independent of these sense-plan-act synchronization points. This has the effect, that this thread is executed in parallel to this chain.

The high level overview of the Fawkes framework is shown in the next figure. At compile-time the configuration of the sense-plan act wakeup hook is done (upper part), while at run-time the scheduler iterates through this list of wakeup-hooks (lower part):

<center>
<img src="_docs/concepts/client_library/execution_management/png/fawkes_executor_diagram.png" alt="Sequence diagram for Fawkes Executor" width="50%" />
</center>

Hence, at run-time, the hooks are executed as a fixed static schedule without preemption. Multiple threads registered in the same hook are executed in parallel.

Orthogonal to the sequential execution of sense-plan-act like applications, it is possible to define further constraints on the execution order by means of a `Barrier`. A barrier defines a number of threads, which need to have finished before the thread can start, which owns the barrier.

These concepts are implemented by the following main classes:

* *Wakeup hook* by `SyncPoint` and `SyncPointManager`, which manages a list of synchronization points.
* *Executor* by the class `FawkesMainThread`, which is the scheduler, responsible for calling the user threads.
* `ThreadManager`, which is derived from `BlockedTimingExecutor`, provides the necessary API to add and remove threads to wakeup hooks as well as for sequential execution of the wakeup-hooks.
* `Barrier` is an object similar to `condition_variable` in C++.

#### Discussion

All threads are executed with the same priority. If multiple sense-plan-act chains shall be executed with different priorities, e.g. to prefer execution of emergency-stop over normal operation, then this framework reaches its limits.

Also, different execution frequencies cannot be modeled by a single instance of this sense-plan-act chain. However, in robotics the fastest sensor will drive the chain and all other hooks are executed with the same frequency.

The option to execute threads independent of the predefined wakeup-hooks is very useful, e.g. for diagnostics. The concept of the Barrier is useful for satisfying functional dependencies which need to be considered in the execution order.

<!--
### Orocos

TODO INSERT DESCRIPTION ON PARTIAL ORDER SCHEDULING.


### CoSiMA

TODO INSERT DESCRIPTION ON MODEL-BASED APPROACH BY COSIMA (ON TOP OF OROCOS) FROM FOLLOWING PAPER:

D. L. Wigand, P. Mohammadi, E. M. Hoffman, N. G. Tsagarakis, J. J. Steil and S. Wrede, "An open-source architecture for simulation, execution and analysis of real-time robotics systems," 2018 IEEE International Conference on Simulation, Modeling, and Programming for Autonomous Robots (SIMPAR), Brisbane, QLD, 2018, pp. 93-100.
doi: 10.1109/SIMPAR.2018.8376277
URL: http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=8376277&isnumber=8376259
-->


## References
* [S2021]<a name="S2021"></a> J. Staschulat, "Micro-ROS: The rclc Executor", in Workshop ROS 2 Executor: How to make it efficient, real-time and deterministic? at ROS World, Oct. 2021, [[slides](https://ec2a4d36-bac8-4759-b25e-bb1f794177f4.filesusr.com/ugd/984e93_749e27b917a54b45b9ccb5be930841b8.pdf)] [[Video](https://www.youtube.com/embed/IazrPF3RN1U)]

* [SLD2021]<a name="SLD2021"></a> J. Staschulat, R. Lange and D. N. Dasari, "Budget-based real-time Executor for Micro-ROS", arXiv Pre-Print, May 2021. [[paper](https://arxiv.org/abs/2105.05590)] 

* [L2020]<a name="L2020"></a> Ralph Lange: Advanced Execution Management with ROS 2, ROS-Industrial Conference, Dec 2020 [[Slides]](https://micro-ros.github.io/download/2020-12-16_Advanced_Execution_Management_with_ROS_2.pdf)

* [SLL2020]<a name="SLL2020"></a> J. Staschulat, I. Lütkebohle and R. Lange, "The rclc Executor: Domain-specific deterministic scheduling mechanisms for ROS applications on microcontrollers: work-in-progress," 2020 International Conference on Embedded Software (EMSOFT), Singapore, Singapore, 2020, pp. 18-19. [[Paper]](https://ieeexplore.ieee.org/document/9244014) [[Video]](https://whova.com/embedded/session/eswe_202009/1145800/)

* [CB2019]<a name="CB2019"> </a> D. Casini, T. Blaß, I. Lütkebohle, B. Brandenburg: Response-Time Analysis of ROS 2 Processing Chains under Reservation-Based Scheduling, in Euromicro-Conference on Real-Time Systems 2019. [[Paper]](http://drops.dagstuhl.de/opus/volltexte/2019/10743/) [[slides]](https://t-blass.de/talks/ECRTS2019.pdf)

* [L2018]<a name="L2018"></a> Ralph Lange: Callback-group-level Executor for ROS 2. Lightning talk at ROSCon 2018. Madrid, Spain. Sep 2018. [[Slides]](https://roscon.ros.org/2018/presentations/ROSCon2018_Lightning1_4.pdf) [[Video]](https://vimeo.com/292707644)

* [EK2018]<a name="EK2018"></a> R. Ernst, S. Kuntz, S. Quinton, M. Simons: The Logical Execution Time Paradigm: New Perspectives for Multicore Systems, February 25-28 2018 (Dagstuhl Seminar 18092). [[Paper]](http://drops.dagstuhl.de/opus/volltexte/2018/9293/pdf/dagrep_v008_i002_p122_18092.pdf)

* [NSP2018]<a name="NSP2018"></a> A. Naderlinger, S. Resmerita, and W. Pree: LET for Legacy and Model-based Applications,
Proceedings of The Logical Execution Time Paradigm: New Perspectives for Multicore Systems (Dagstuhl Seminar 18092), Wadern, Germany, February 2018.

* [BP2017]<a name="BP2017"></a> A. Biondi, P. Pazzaglia, A. Balsini,  M. D. Natale: Logical Execution Time Implementation and Memory Optimization Issues in AUTOSAR Applications for Multicores, International Worshop on Analysis Tools and Methodologies for Embedded and Real-Time Systems (WATERS2017), Dubrovnik, Croatia.[[Paper]](https://pdfs.semanticscholar.org/4a9e/b9a616c25fd0b4a4f7810924e73eee0e7515.pdf)

* [KZH2015]<a name="KZH2015"></a> S. Kramer, D. Ziegenbein, and A. Hamann: Real World Automotive Benchmarks For Free, International Workshop on Analysis Tools and Methodologies for Embedded adn Real-Time Sysems (WATERS), 2015.

* [HHK2001]<a name="HHK2001"></a> Henzinger T.A., Horowitz B., Kirsch C.M. (2001) Giotto: A Time-Triggered Language for Embedded Programming. In: Henzinger T.A., Kirsch C.M. (eds) Embedded Software. EMSOFT 2001. Lecture Notes in Computer Science, vol 2211. Springer, Berlin, Heidelberg

* [LL1973]<a name="LL1973"></a> Liu, C. L.; Layland, J.:Scheduling algorithms for multiprogramming in a hard real-time environment, Journal of the ACM, 20 (1): 46–61, 1973.

## Acknowledgments

This activity has received funding from the European Research Council (ERC) under the European Union's Horizon 2020 research and innovation programme (grant agreement n° 780785).

---

## Source: `_docs/concepts/client_library/features/index.md`
<a id="source-docs-concepts-client-library-features-index-md"></a>

The micro-ROS Client Library, formed by standard [ROS 2 Client Support Library (rcl)](https://github.com/ros2/rcl/) and the new [ROS 2 Client Library package (rclc)](https://github.com/ros2/rclc/), is going to feature all major ROS concepts such as

* Nodes
* Publishers/subscriptions
* Services/clients
* Graph
* Executor
* Lifecycle
* Parameters

Most features are already available in the Humble release. Please see our [Feature Overview page](/_docs/overview/features/) for details on the status. To learn developing your own application nodes with rcl + rclc, please head to the corresponding [programming tutorial](/_docs/tutorials/programming_rcl_rclc/).

---

## Source: `_docs/concepts/client_library/introduction/index.md`
<a id="source-docs-concepts-client-library-introduction-index-md"></a>

The Client Library provides the micro-ROS API for the user code, i.e., for application-level micro-ROS nodes. The goal is to provide all relevant, major ROS 2 concepts in an optimized implementation for microcontrollers. At the same time, we strive to make the API as compatible as possible to standard ROS 2, to facilitate porting of code.

To minimize the long-term maintenance cost, we use existing data structures and algorithms from the ROS 2 stack and bring necessary changes in the mainline stack as far as possible. That's why the micro-ROS client library is built up from standard [ROS 2 Client Support Library (rcl)](https://github.com/ros2/rcl/) and a new [ROS 2 Client Library package (rclc)](https://github.com/ros2/rclc/). Together, as depicted below, rcl + rclc form a feature-complete client library in the C programming language.

<img src="img/micro-ROS_architecture.png" style="display:block; width:50%; float:right;"/>

Important features and properties:

* Use of rcl data structures where possible to avoid runtime overhead by wrappers.
* Convenience functions for common tasks (e.g., creation of a publisher, finalization of a subscription) provided by rclc.
* Dedicated Executor for fine-grained control over triggering and processing order of callbacks.
* Specialized implementations for graphs, lifecycle nodes, diagnostics, etc.

Check out the subpages (see left) for more information.

<br style="clear:both;" />

For the interested reader: The rationales for the decision to use a combination of rcl + rclc are explained in our [decision paper (PDF)](/download/client_library_decision_paper_2019.pdf) from 2019.

---

## Source: `_docs/concepts/client_library/lifecycle_and_system_modes/index.md`
<a id="source-docs-concepts-client-library-lifecycle-and-system-modes-index-md"></a>

Table of contents
- [Introduction and Goal](#introduction-and-goal)
- [Requirements](#requirements)
- [Background: ROS 2 Lifecycle](#background-ros-2-lifecycle)
- [Main Features](#main-features)
  - [Basic Lifecycle](#basic-lifecycle)
  - [Extended Lifecycle](#extended-lifecycle)
  - [System Hierarchy and Modes](#system-hierarchy-and-modes)
  - [Mode Inference](#mode-inference)
  - [Mode Manager](#mode-manager)
  - [Error Handling and Rules](#error-handling-and-rules)
- [Acknowledgments](#acknowledgments)

## Introduction and Goal

Modern robotic software architectures often follow a layered approach. The layer with the core algorithms for SLAM, vision-based object recognition, motion planning, etc. is often referred to as *skill layer* or *functional layer*. To perform a complex task, these skills are orchestrated by one or more upper layers named *executive layer and planning layer*. Other common names are *task and mission layer* or *deliberation layer(s)*. In the following, we used the latter term.

We observed three different but closely interwoven aspects to be handled on the deliberation layer:

1. **Task Handling**: Orchestration of the actual task, the *straight-forward*, *error-free* flow.
2. **Contingency Handling**: Handling of task-specific contingencies, e.g., expectable retries and failure attempts, obstacles, low battery.
3. **System Error Handling**: Handling of exceptions, e.g., sensor/actuator failures.

The mechanisms being used to orchestrate the skills are service and action calls, re-parameterizations, set values, activating/deactivating of components, etc. We distinguish between *function-oriented calls* to a running skill component (set values, action queries, etc.) and *system-oriented calls* to individual or multiple components (switching between component modes, restart, shutdown, etc.).

![Interaction between skill and deliberation layer](_docs/concepts/client_library/lifecycle_and_system_modes/interactions_between_skill_and_deliberation_layer.png)

Analogously, we distinguish between *function-oriented notifications* from the skill layer in form a feedback on long-running service calls, messages on relevant events in the environment, etc. and *system-oriented notifications* about component failures, hardware errors, etc.

Our observation is that interweaving of task handling, contingency handling, and system error handling generally leads to a high complexity of the control flow on the deliberation layer. Yet, we hypothesize that this complexity can be reduced by introducing appropriate abstractions for system-oriented calls and notifications.

Therefore, our **goal** within this work is to provide suitable abstractions and framework functions for (1.) system runtime configuration and (2.) system error and contingency diagnosis, to reduce the effort for the application developer of designing and implementing the task, contingency and error handling.

This goal is illustrated in the following example architecture, which is described and managed based on a model file:

![High-level Architecture](_docs/concepts/client_library/lifecycle_and_system_modes/mode-management.png)

The main features of the approach are (detailed in the remainder):

1. _Extended Lifecycle_: Extensible concept to specify the runtime states of components, i.e ROS 2 lifecycle nodes.
2. _System Hierarchy and Modes_: Modeling approach for specifying a ROS system in terms of its system hierarchy and _system modes_, i.e. different (sub-)system configurations.
3. _Mode Manager_: A module to manage and change the system runtime configuration.
4. _Mode Inference_: A module for deriving the entire system state and mode from observable system information, i.e. states, modes, and parameters of its components.
5. _Error Handling_: Lightweight concept for specifying an error handling and recovery mechanism.

## Requirements

The list of requirements is maintained in the doc folder of the micro-ROS system modes repository, at:
https://github.com/micro-ROS/system_modes/blob/master/system_modes/doc/requirements.md

## Background: ROS 2 Lifecycle

Our approach is based on the ROS 2 Lifecycle. The primary goal of the ROS 2 lifecycle is to allows greater control over the state of a ROS system. It allows consistent initialization, restart and/or replacing of system parts during runtime. It provides a default lifecycle for managed ROS 2 nodes and a matching set of tools for managing lifecycle nodes.

The description of the concept can be found at:
[http://design.ros2.org/articles/node_lifecycle.html](http://design.ros2.org/articles/node_lifecycle.md)
The implementation of the Lifecycle Node is described at:
[https://design.ros2.org/articles/node_lifecycle.html](https://design.ros2.org/articles/node_lifecycle.md).

## Main Features

### Basic Lifecycle

The ROS 2 Lifecycle has been implemented for micro-ROS as part of the C programming language client library *[rclc](https://github.com/ros2/rclc)*, see [rclc_lifecycle](https://github.com/ros2/rclc/tree/master/rclc_lifecycle) for source-code and documentation.

The rclc_lifecycle package is a ROS 2 package that provides convenience functions to bundle a ROS Client Library (rcl) node with the ROS 2 Node Lifecycle state machine in the C programming language, similar to the [rclcpp Lifecycle Node](https://github.com/ros2/rclcpp/blob/master/rclcpp_lifecycle/include/rclcpp_lifecycle/lifecycle_node.hpp) for C++.

An example, how to use the rclc Lifecycle Node is given in the file `lifecycle_node.c` in the [rclc_examples](https://github.com/ros2/rclc/blob/master/rclc_examples/) package.

### Extended Lifecycle

In micro-ROS, we extend the ROS 2 lifecycle by allowing to specify modes, i.e. substates, specializing the *active* state based on the standard ROS 2 parameters mechanism. We implemented this concept based on rclc_lifecycle and rclcpp_lifecycle for ROS 2 and micro-ROS.

Documentation and code can be found at:
[github.com:system_modes/README.md#lifecycle](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#lifecycle)

### System Hierarchy and Modes

We provide a modeling concept for specifying the hierarchical composition of systems recursively from nodes and for specifying the states and modes of systems and (sub-)systems with the extended lifecycle, analogously to nodes. This system modes and hierarchy (SMH) model also includes an application-specific the mapping of the states and modes along the system hierarchy down to nodes.

The description of this model can be found at:
[github.com:system_modes/README.md#system-modes](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#system-modes)
A simple example is provided at:
[github.com:system_modes_examples/README.md#example-mode-file](https://github.com/micro-ROS/system_modes/blob/master/system_modes_examples/README.md#example-mode-file)

### Mode Inference

The mode inference infers the entire system states (and modes) based on the lifecycle states, modes, and parameter configuration of its components, i.e. the ROS 2 lifecyle nodes. It parses the SMH model and subscribes to lifecycle/mode change requests, lifecycle/mode changes, and parameter events.

Based on the lifecycle change events it knows the _actual_ lifecycle state of all nodes. Based on parameter change events it knows the _actual_ parameter values of all nodes, which allows inference of the _modes_ of all nodes based on the SMH model.
Based on the SMH model and the inferred states and modes of all nodes, states and modes of all (sub-)systems can be _inferred_ bottom-up along the system hierarchy.
This can be compared to the latest _requested_ states and modes to detect a deviation.

The documentation and code can be found at:
[github.com:system_modes/README.md#mode-inference](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#mode-inference)
The mode inference can be best observed in the mode monitor, a console-based debugging tool, see:
[github.com:system_modes/README.md#mode-monitor](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#mode-monitor)

### Mode Manager

Building upon the _Mode Inference_ mechanism, the mode manager provides additional services and topics to _manage and adapt_ system states and modes according to the specification in the SMH model.

The documentation and code can be found at:
[github.com:system_modes/README.md#mode-manager](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#mode-manager)
A simple example is provided at:
[github.com:system_modes_examples/README.md#setup](https://github.com/micro-ROS/system_modes/blob/master/system_modes_examples/README.md#setup)

### Error Handling and Rules

If the _actual_ state/mode of the system or any of its parts diverges from the _target_ state/mode, we define rules that try to bring the system back to a valid _target_ state/mode, e.g., a degraded mode. Rules work in a bottom-up manner, i.e. starting from correcting nodes before sub-systems before systems. Rules are basically defined in the following way:

```pseudo
if:
 system.target == {target state/mode} && system.actual != {target state/mode} && part.actual == {specific state/mode}
then:
 system.target := {specific state/mode}
```

If _actual_ state/mode and _target_ state/mode diverge, but there is no rule for this exact situation, the bottom-up rules will just try to return the system/part to its _target_ state/mode.

*Note:* This feature is suited for simple, well-defined rules according to the depicted syntax. For more complex orchestration, integration of system modes with ontological reasoning (*metacontrol*) has been validated and successfully shown in the [MROS project](https://robmosys.eu/mros/), e.g., within a [navigation sub-system of a mobile robot](https://github.com/MROS-RobMoSys-ITP/Pilot-URJC).

## Acknowledgments

This activity has received funding from the European Research Council (ERC) under the European Union's Horizon 2020 research and innovation programme (grant agreement n° 780785).

---

## Source: `_docs/concepts/fiware_interoperability/index.md`
<a id="source-docs-concepts-fiware-interoperability-index-md"></a>

## Motivation
Among the goals of the micro-ROS project, one of the key issues has been that of providing interoperability with third outstanding and broadly used platforms.
One of the selected components has been the FIWARE Context Broker, a standard for context data management adopted by several EU boosted initiatives for facilitating the development of smart solutions for different domains.

This section explains how to achieve interoperability between micro-ROS and this platform, passing through the integration of the latter with ROS 2.
Thanks to this interoperability, the FIWARE's Context Broker becomes micro-ROS' platform of choice for sharing context information with any other system integrated into the FIWARE ecosystem.

## Interoperability: pros and cons of the different possible solutions

This subsection will explain all the design alternatives for the interoperability between micro-ROS and the FIWARE Context Broker.
From now on, the developed solution for intercommunicating micro-ROS with FIWARE will be called **FIROS2 Integration Service**.

FIROS2 requires transformation libraries to convert ROS 2 messages into FIWARE NGSIv2 messages and the other way around.
For each message, one transformation library is required.

![image](http://www.plantuml.com/plantuml/svg/ZP712i8m38RlUOempuKvfrv49gYmap05BmCfhfs5hOMslhzjLuQYu1e8_E5Fyf4Mnb9jdtq77UCMhK8jseV5HcXsjq99uA9ZcA1xjQnEvmnxPWnjMIrzBK5giDpVvlXXF9RNNNNuRSqGf6f6guymr-sERHTDfU5AzzGJ39Rt2GkShJddQJeHBfyEj_o6YtQ75pRyWrkDS03XC8Hi1sW8ESeio1mtX0nT47AK3gDWil7_yW80)

In the implementation of these transformation libraries, it is required to be able to serialize/deserialize ROS 2 messages.
Also, an NGSIv2 serialisation/deserialisation mechanism will be used.

The FIROS2 package provides a standard NGSIv2 serialisation/deserialisation mechanisms, but ROS 2 serialisation/deserialisation is more complex, due to its dependencies with the message type.
Therefore, FIROS2 Integration Service needed to be implemented providing a simple user-wise solution to automatically generate the transformation libraries for ROS 2 types.

To accomplish this, two different approaches can be taken:
* Implementing an ad-hoc bridging communication tool for translating FIWARE's messages into micro-ROS (that is, ROS 2) messages types, and viceversa.
* Relying on an integration platform that uses a common types language representation, and defines a conversion library from/to the generic type to the specific type of each middleware.

While the first approach might result in a more lightweight tool, it has several flaws, for instance a more difficult maintenance and the incapability of communicating with any other middleware, rather than ROS2 or micro-ROS.
On the other hand, using an integration service platform, such as [SOSS](https://github.com/eProsima/Integration-Service), enables automatically the possibility of communicating with a wide (and growing) set of middlewares, if their System Handle implementation is available.

## SOSS: System-Of-Systems-Synthesizer

**SOSS** addresses the task of providing a common interface for communicating software platforms that speak different languages.
It is composed of a **core** library, which defines a set of abstract interfaces and provides some utility classes to form a plugin-based framework.

This pluggable interface allows the user to leverage any of the supported plugins or System Handles for a specific middleware, such as DDS, ROS2, FIWARE, or ROS, for the desired integration.

SOSS can act as an intermediate message-passing tool that, by speaking a common language, centralizes and mediates the integration of several applications running under different communication middlewares.
A SOSS instance is configured and launched by means of a **YAML** file, which allows the user to provide a mapping between the different topics and services that two or more applications can exchange information about.

Users can also develop their own System Handles for a new middleware, automatically granting communication capabilities with all the rest of supported middlewares.

Usually, types are defined using a common language representation, used by SOSS to create a shared representation of the exchanged information, so that it can be processed, converted and remapped to every middleware's types implementation, when required.
This common representation is provided, user-wise, using IDL definitions, which are parsed and converted into Dynamic Types representations at runtime, using [eProsima's XTypes-DDS](https://github.com/eProsima/xtypes) implementation.

<img width="600" src="_docs/concepts/fiware_interoperability/imgs/soss.png">

## SOSS-FIWARE System Handle

The [FIWARE System Handle](https://github.com/eProsima/SOSS-FIWARE/tree/feature/xtypes-support) allows bringing information from and to FIWARE's Context Broker into the SOSS world.
This System Handle is configured and launched in the same way as any SOSS System Handle.

Besides the standard information included in any System Handle's configuration (such as system's name and type, which would be `fiware` for this specific System Handle),
in the case of the FIWARE System Handle users must specify two extra YAML key-value pairs, which are the host's IP and port in which this System Handle will try to connect to an instance of FIWARE's Orion Context Broker.

Regarding more specific details about the implementation, FIWARE does not allow certain characters in its entities names.
For this reason, if a type defined in the topics section of the configuration file has in its name a /, the FIWARE System Handle will map that character into two underscores.
This is something important to notice when connecting to ROS2, because in ROS2 most of the types have a / in their names.
To deal with this issue, using SOSS remapping capabilities come in handy.

Of course, given that micro-ROS applications act as a bridge between microcontrollers and the ROS 2 dataspace (using the micro-ROS Agent), FIROS2 should also take care of communicating FIWARE's Context Broker with ROS 2, leveraging the existing [ROS 2 System Handle](https://github.com/eProsima/Integration-Service), which comes natively included into the SOSS package.

This is exactly the situation reflected in the use case that is explained below.

## FIROS2 use case: connecting FIWARE with ROS 2

### Installation

* Create a *colcon* workspace.
  ```bash
    $ mkdir -p soss_ws/src
    $ cd soss_ws
  ```

* Clone the SOSS project into the source subfolder.
  ```bash
    $ git clone https://github.com/eProsima/Integration-Service.git src/soss --branch feature/xtypes-dds
  ```

* Clone the SOSS-FIWARE project into the source subfolder.
  ```bash
    $ git clone https://github.com/eProsima/SOSS-FIWARE.git src/soss-fiware --branch feature/xtypes-support
  ```

* The workspace layout should now look like this:
  ```bash
    soss_ws
      |
      |_ src
          |
          |_ soss
          |    |
          |    |_ (other soss project subfolders)
          |    |_ packages
          |          |
          |          |_ (other soss system handle subfolders)
          |          |_ soss-ros2 (ROS2 system handle)
          |
          |_ soss-fiware
                 |
                 |_ fiware (soss-fiware colcon package)
                 |_ fiware-test (soss-fiware-test colcon package)
  ```

* In the workspace folder, execute colcon.
  ```bash
    $ colcon build --packages-up-to soss-ros2 soss-fiware
  ```

* Source the resulting enviromnment:
  ```bash
    $ source install/local_setup.bash
  ```

### Configuration

SOSS must be configured with a YAML file, which tells the program everything it needs to know in order to establish the connection between two or more systems that the user wants.
For example, if the user wants to exchange a simple string message between FIWARE and ROS2, the configuration file for SOSS should look as follows:

  ```yaml
    systems:
        ros2: { type: ros2 }
        fiware: { type: fiware, host: CONTEXT_BROKER_IP, port: 1026}

    routes:
        fiware_to_ros2: { from: fiware, to: ros2 }
        ros2_to_fiware: { from: ros2, to: fiware }

    topics:
        hello_fiware: { type: "std_msgs/String", route: ros2_to_fiware }
        hello_ros2: { type: "std_msgs/String", route: fiware_to_ros2 }
  ```

In the project's *CMakeLists.txt* file, users must specify which ROS 2 packages are required for their SOSS instance,
by means of the provided `soss-rosidl-mix` macro in order to generate the proper IDL types definition and typesupport files resulting from ROS 2 *msg/srv* files:
  ```cmake
    soss_rosidl_mix(
      PACKAGES geometry_msgs nav_msgs test_msgs ...
      MIDDLEWARES ros2
    )
  ```

*Note:* if the package list is modified, it is recommended to re-build the whole colcon workspace. Otherwise, `.mix` files might not be generated for the new ROS 2 type package(s) included in the aforementioned macro.

Finally, after source the colcon workspace, you can launch FIROS2 with:
  ```bash
    cd <path_to_yaml_config_file>
    soss <yaml_config_file_name>.yaml
  ```

---

## Source: `_docs/concepts/middleware/IoT/index.md`
<a id="source-docs-concepts-middleware-iot-index-md"></a>

Nowadays almost everybody knows what it is or has heard something about IoT.
An informal definition could be "everything connected with everything".
However, to be a bit more precise, IoT or Internet of Things is extending regular connectivity, traditionally reserved for specific devices, to almost any kind of equipment we can imagine, from small sensors in our fields and farms to life monitors in hospitals.
It is estimated that in 2020, 50 billion of such as devices will be connected to each other ([@evans2011cisco](https://www.cisco.com/c/dam/en_us/about/ac79/_docs/innov/IoT_IBSG_0411FINAL.pdf)).
One thing that these 50 billion devices will share is the need to communicate, that is the field where the middleware plays an important role inside this vast technological challenge.
The middleware is in charge of facilitating the network deployment allowing developers to focus on the application implementation.

This article will introduce two standards though and developed with IoT in mind, MQTT and DDS-XRCE.

## MQTT

Message Queuing Telemetry Transport (MQTT) is one of the most used protocols in IoT solutions.
It has been designed as a lightweight message protocol to be used over TCP transports providing a standard and simple publish/subscribe interface for exchanging data.

The communication mechanism of MQTT is based on a client-server architecture.
This means that clients (MQTT Clients) are connected to a server (MQTT Broker) which is in charge of orchestrating the exchange of data using a publish-subscribe messaging pattern.
In other words, clients publish messages associated with a particular Topic in the Broker, and this last redirects these messages to the clients subscribed to the Topic.

So in MQTT, we can speak of some key concepts: Broker, Client, Topic, Message, Publish and Subscribe.
Each of these concepts has its role and meaning:

* The Broker acts as the backbone of the system.
    Dealing with the messages of topics.
* The Clients are the parts in charge of publishing and receiving subscription data from the Broker.
* The Topic is a channel of information.
* Message a piece of information on a defined Topic.
* Publish is the action of sending a Message for a defined Topic to the Broker.
* Subscribe is the action of reflecting an interest in receiving all the Messages of a defined Topic.
It is handled in by the Broker.

![](_docs/concepts/middleware/IoT/mqtt.png){:.img-responsive and style="max-width: 50%; margin-left: auto; margin-right: auto;"}

All this is done over a TCP protocol allowing the connection between Clients and Brokers over WANs and the Internet.
Such a connection is made statically, i.e., the client must know the Broker address before a first connection is made.
These communications could obey three different QoS specifying the delivery behaviour:

| QoS | Guaranteed delivery | Duplicity protection |
|:-:|:-:|:-:|
| QoS0 | No | No |
| QoS1 | Yes | No |
| QoS2 | Yes | Yes |

As mentioned before, there is the concept of Topic in this kind of middleware.
The Topic's type is set by the application as well as its name.
Publications are done using the Topic name and a set of data with a user-defined format.
Analogously, subscriptions are done to Topic names, while the data interpretation is the responsibility of the Clients.
MQTT standard does not mark how this topic-type tuple is related, so the responsibility of topic understanding resides on the user side.

This architecture and communication pattern natively allows the interchange of data between devices (M2M protocol), composing this way a good IoT middleware.

## DDS-XRCE

The DDS for eXtremely Resource-Constrained Environments (DDS-XRCE) is a wire protocol, adopted by the Object Management Group (OMG),
whose aim is to provide access to the DDS (Data Distribution Service) data-space from low resource devices.
As in the MQTT case, the DDS-XRCE follows a client-server architecture where clients (XRCE Clients) are connected to a server (XRCE Agent).
In contrast to MQTT, the XRCE Agent is not in charge of managing the publication/subscription of Topics, but it acts on behalf of the XRCE Clients in the DDS global data-space.
That is, the DDS-XRCE protocol allows the XRCE Clients to act as first-class citizens in a traditional DDS network.

![](_docs/concepts/middleware/Micro_XRCE-DDS/uxrce_scope.png)

This protocol specified how the XRCE Clients interact with the XRCE Agent.
Basically, there are two ways of interactions between them:

* XRCE Clients can handle proxy entities on the Agent.
    Such proxy entities are the ones acting on the DDS network.
    This allows the Clients to operate as a stateless system, as the state resides in the Agent.
    This, among other things, will enable sleep cycles, and resource-constrained devices to communicate with DDS.
* XRCE Clients can publish/subscribe to/from any DDS Topic as if they were regular DDS participants.
    This makes the separation between resource-constrained devices and DDS networks diffuse, so they can participate as real entities in DDS world.

In a nutshell, DDS-XRCE provides the XRCE Client with a simple publish/subscribe messaging pattern with which to communicate with existing DDS networks.

In the same way as traditional DDS networks, there are some inherited concepts:

* Topic.
    Channels of information
* Message.
    Information pieces.
* Publish.
    The operation which exposes Messages.
* Subscribe.
    The procedure which allows receiving chosen Messages.

Also, added ones:

* XRCE Client.
    These are lightweight actors on resource-constrained devices with a simple publish/subscribe interface.
* XRCE Agent.
    Central part of the protocol providing the required DDS access to the XRCE Clients mentioned above.

The DDS-XRCE wire protocol is specified to be in at least TCP and UDP transport protocol, but there is room to expand to other protocols.
Currently, implementations are supporting Serial links and possible to be extended to any other such Zigbee, 6LoWPAN, and more.
DDS-XRCE allows setting two different delivery QoS:

* Reliable.
* Best-effort.

As part of the DDS family standard, the use of OMG's IDL standard has also been included.
This provides the user with a way to define the types of topics used as well as setting a standard serialisation format.
Doing that ensures interoperability and leverage the application layer of the matter of defining custom serialisation formats and type matching mechanisms.

This protocol brings a new spectrum of possibilities to IoT devices as it brings all the benefits of DDS (Distributed system, configurable QoS, interoperability).

## MQTT vs DDS-XRCE

At this point, you probably are wondering which are the differences between MQTT and DDS-XRCE.
At first glance, they seem to share a lot of the foundations such as similar architecture and communication patterns but differ on some crucial matters, exposed in the following table.

|                           | DDS-XRCE                 | MQTT                   |
|:--------------------------|:------------------------:|:----------------------:|
| **architecture pattern**  | client-server            | client-server          |
| **messaging pattern**     | publish-subscribe        | publish-subscribe      |
| **transport protocol**    | UDP/TCP/Serial/Custom    | TCP                    |
| **security**              | DTLS/TLS (non normative) | TLS (non normative)    |
| **types**                 | Standard IDL             | Opaque, user choice    |
| **QoS**                   | Reliable & best-effort   | 3 Message delivery     |
| **session oriented**      | yes                      | yes                    |
| **minimum overhead**      | 12 B\*\*\*               | 5 B\* \*\*             |
| **maximum overhead**      | 16 B\*\*\*               | 2^16 B\*               |
| **max payload size**      | 64 KB                    | 256 MB                 |
| **topologies**            | 1 to 0, 1 to 1, 1 to n   | 1 to 0, 1 to 1, 1 to n |
| **discovery support**     | yes                      | no                     |

_ \* Scales with the topic name._

_ \*\* For a topic name composed by 8 ASCII characters (8 Bytes) the MQTT overhead will equate to DDS-XRCE overhead.
From that point, the MQTT overhead will scale with the name size.
However, DDS-XRCE will be static_

_ \*\*\* Maximum and minimum DDS-XRCE overhead depends on whether the message using client ID._

The previous tables compare both protocols.
Aside from this protocol differences, we may point out one of the critical concepts of DDS-XRCE, bringing small devices to distributed networks.
This provides this protocol with a great range of use cases as well as prepared to be scaled in a significant amount being far more dynamic in this sense to MQTT alternative.

---

## Source: `_docs/concepts/middleware/memo_prof/index.md`
<a id="source-docs-concepts-middleware-memo-prof-index-md"></a>

## Abstract

In this section, we analyze the memory footprint of the Micro XRCE-DDS Client and Agent libraries. In both cases, we consider an application of a given number of publishers and/or subscribers into/from topics of known size.

As for the Client, we performed the measurements for an app running on the Real Time Operating System (RTOS) [FreeRTOS](https://www.freertos.org/) and on an [Olimex STM32-E407](https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware) board, and connected by serial transport (UART) to a Micro XRCE-DDS Agent running on a Linux machine.

As for the Agent, we performed the measurements for a lightweight Agent running on a Linux machine, communicating with a XRCE-DDS Client application running on the same host machine.

Results show that the total memory consumption of the Client makes this library fit for the same class of low-range microcontrollers targeted by the rosserial protocol.
On the other hand, the lightweight version of the Agent is apt for being compiled on more performant systems only.

# Table of contents

* [Memory Profiling of the Micro XRCE-DDS Client on FreeRTOS](#memory-profiling-of-the-micro-xrce-dds-client-on-freertos) 
    * [Memory and Configurability](#memory-and-configurability)
    * [Methodology](#methodology)
    * [Results and Discussion](#results-and-discussion)
* [Memory Profiling of the Micro XRCE-DDS Agent on Linux](#memory-profiling-of-the-micro-xrce-dds-agent-on-linux) 
    * [Available Middleware Implementations for the Agent](#available-middleware-implementations-for-the-agent)
    * [Methodology and Results](#methodology-and-results)

## Memory Profiling of the Micro XRCE-DDS Client on FreeRTOS

[Micro XRCE-DDS](https://micro-xrce-dds.docs.eprosima.com/en/latest/) target applications are low range Microcontroller Units (MCUs) with highly constrained memory resources, so that it becomes critical to assess the XRCE-DDS Client memory consumption with extreme precision to help users selecting the adequate platforms to develop their applications.

In this section, we report on the memory footprint of the Micro XRCE-DDS Client library for two simple applications, one publishing and the other subscribing to topics of known size, running on the Real Time Operating System (RTOS) FreeRTOS and on an Olimex STM32-E407 board. The board running the Client is connected by serial transport (UART) at 115200 baud to a Micro XRCE-DDS Agent running on a Linux machine.

This choice has been made since FreeRTOS provides memory management functionalities that easily allows to compute the stack memory used by a given program as the difference between the total allocated memory, known to the programmer, and the minimum stack left unused during the program execution.

### Memory and Configurability

Given the limited memory resources offered by the systems targeted by the XRCE-DDS library, the possibility to manipulate the memory size of the Client is key. This can be done at two different levels:

* At configuration time: to fix the size of the executable code size, the library can be compiled enabling or disabling several profiles. Indeed, the
Client library follows a profile concept that enables to choose, add or remove some features in configuration time, thus allowing the user to customize its size. As we’ll see below, as part of these profiles one can choose for instance to communicate in reliable or best-effort mode. For more information, please refer to the [Client library documentation](https://micro-xrce-dds.docs.eprosima.com/en/latest/client.html#micro-xrce-dds-client-label).
* At run time: the Client library is both dynamic and static memory free, implying that all memory footprint depends only on how the stack grows during
the execution. The parameters that, together with the library functions, control the stack are the streams and the Maximum Transmission Unit (MTU).
    * The MTU is transport-dependent, and it can be configured by the user. The selected value represents the maximum message size that can be sent received without fragmenting the message. The transport uses the MTU value to create an internal buffer, which is the memory block where the messages will be written and stored when interchanged.
    * As for the streams, the user can define a maximum of 127 best-effort streams and 128 reliable streams, but for the majority of purposes, only one stream in either best effort or reliable mode is used. Moreover, reliable streams have a history associated, whose size can be tailored to fit the specific requirements of the application. In this case, the size of the stream corresponds to the total reserved memory for the stream, equal to the maximum message size times the associated history. In the best-effort case, no history is stored and the memory reserved for the stream equals the maximum message size.

### Methodology

In this section, we detail the methodology employed for the memory profiling.

A Micro XRCE-DDS Client application is created with a varying number of either publishers or subscribers, associated with their own datawriters or datareaders. Moreover, each is associated with a topic of known size and with two streams, one for input and one for output messages. Finally, a minimum history size of 2 is used in the case of reliable communication.

The MTU selected for the serial transport used by these applications has been fixed to 512 B, which in turn sets the size of the transport buffer.

In order to provide a complete characterization of the memory consumption, the following parameters have been varied:

* Creation mode: this is one of the profiles that can be configured at compile time. We have explored both XML and reference modes for the creation of the entities on the Agent on behalf of the Client. In the first case, entities are created according to an XML configuration file defined by the user on the Client app. In the second case, they are created directly on the Agent according to preconfigured reference entities known beforehand by the Agent, to which the Client simply refers.
* Stream types: best-effort vs reliable communication modes between the Client and the Agent. Best-effort streams send and receive data leaving the reliability to the transport layer, and the message size handled by a best-effort stream must be less or equal than the Maximum Transmission Unit (MTU) defined in the transport used. On the other hand, reliable streams perform the communication without loss regardless of the transport layer and allow message fragmentation to send and receive messages longer than the MTU. To avoid a loss of data, the reliable streams use additional messages to confirm the delivery, along with a history of the messages sent and received. As a result, best effort streams will consume fewer resources than reliable streams.
* Size of the topics, ranging between 0 and ~ 3 KB for the publisher (both best-effort and reliable) and for the reliable subscriber, and between 0 and ~ 400 B for the subscriber best-effort. The reason for the latter is that, given the absence of fragmentation in best-effort communication streams, the maximum message size that a best-effort subscriber can support equals the transport buffer size (or MTU), that we have fixed to 512 B. On the other hand, thanks to fragmentation, a reliable subscriber can receive a message of arbitrary size opportunely chunked in pieces of the size of the MTU.
* Number of publishers/subscribers, which is equivalent to changing the number of topics, since in our design of the set-up we have associated each publisher/subscriber with just one topic.

The memory usage of a MCU by means of one such XRCE-DDS application is split into different chunks, each devoted to a different function:

* Data buffer: This buffer stores the topic data before serialization. We don’t include it in our footprint as this memory is application specific and not related to the Micro XRCE-DDS Client operations.
* Output buffer: This buffer is the portion of memory dedicated to the allocation of the entity creation requests, plus that of the serialized topic in the case of publishers. Therefore, in this case its size will be equal to the maximum between these values, whereas in the case of a subscriber application it will equal the size of the created entity. Notice that the entity creation consumption critically depends on the creation mode.
* Input buffer: This buffer is used by subscriber applications to store data coming from the Agent, and by publishers in the case of reliable communication, to receive confirmation that all the information has been correctly received by the Agent.
* Transport buffer: This is equal to the MTU, fixed to 512 B in the present analysis.
* Stack usage: The stack is the memory consumed by the functions used by the program, when executing. Whilst the memory consumed by the buffers above, all stored in static memory, can be straightforwardly calculated by just analyzing the compiled binary objects, the stack is the chunk of memory we cannot know before running our application. In order to measure it, we make use of the FreeRTOS [uxTaskGetStackHighWaterMark()](https://www.freertos.org/uxTaskGetStackHighWaterMark.md) funcion. This function returns the amount of stack that remained unused when the XRCE-DDS task stack was at its greatest value. By subtracting this value to the total stack available (which is known), we thus obtain the stack peak used by our XRCE-DDS app.

<img alt="diagram" src="_docs/concepts/middleware/memo_prof/diagram.png" class="center">
<p align="center">
  Fig. 1: Illustrative diagram of the memory partition in the XRCE-DDS Client library.
</p>

Summarizing, we calculate the total memory usage of our XRCE-DDS app as the sum of the static memory used (which will in general be of the size of the output/input buffers plus the transport buffer) and of the stack used, calculated by means of the uxTaskGetStackHighWaterMark() function provided by FreeRTOS.

## Results and Discussion

* Publishers

<img alt="publishers consumption" src="_docs/concepts/middleware/memo_prof/overall_pub.png" class="center">
<p align="center">
  Fig. 2: Memory usage (in Bytes) of the XRCE-DDS Client as a function of topic size (in Bytes) and publishers number.
</p>

* Subscribers

<img alt="subscribers consumption" src="_docs/concepts/middleware/memo_prof/overall_sub.png" class="center">
<p align="center">
  Fig. 3: Memory usage (in Bytes) of the XRCE-DDS Client as a function of topic size (in Bytes) and subscribers number.
</p>

As it comes to light from these plots, no significant variability is shown among the instances considered. As for the publishers, all four cases follow the same trend.

Notice that both for publishers and subscribers the curves are flat for small enough topic sizes (< 400 kB) when creation of entities happens by XML. Indeed, in these cases the size of the output buffer is determined by the buffer size needed for entities’ creation, and it only changes when the topic size exceeds that required by entities’ creation.

Publishers/subscribers number is seen to not affect the measurements. This is expected for this specific experimental set-up because just one topic at a time is sent/received, and therefore the number of topics doesn’t enter the overall memory consumption. Notice however that, under a different configuration in which multiple topics are sent or received at the same time, the size of the memory buffer would grow accordingly.

The difference observable between the publishers and subscribers’ memory footprint is due to the fact that a subscriber always needs two static-memory buffers: an output buffer to write and send subscription requests, and an input buffer to store the response to those requests, that is, the data coming from the Agent.

## Memory Profiling of the Micro XRCE-DDS Agent on Linux

The Micro XRCE-DDS Agent is at the moment only supported by standard Operating Systems such as Linux, Windows and Mac. However, more and more users are beginning to show an interest to port the Agent to a MCU, and compiling it on top of an RTOS. Since this task hasn’t been carried out yet, as a first step towards the exploration of such a scenario we have performed an analysis of the memory footprint of a lightweight version of the Agent on Linux.

### Available Middleware Implementations for the Agent

The Agent counts with three middleware implementations: FastMiddleware, FastDDSMiddleware and CedMiddleware (refer to this [link](https://micro-xrce-dds.docs.eprosima.com/en/latest/agent.html#fastmiddleware) in order to learn more).

The FastMiddleware and FastDDSMiddleware use respectively eProsima Fast RTPS and eProsima Fast DDS, Cpp implementations of the RTPS (Real Time Publish Subscribe) protocol and of the DDS standard. These middlewares allow the Client to produce and consume data in the DDS Global Data Space. These Agents have the default behaviour described in the DDS-XRCE standard, that is, for each DDS-XRCE entity a DDS proxy entity is created, and the writing/reading actions produce publishing/subscribing operations in DDS.

On the other hand, the CedMiddleware (Centralized Middleware) makes use of the Agent as a broker, that accepts connections and messages published from Clients, processes subscribe/unsubscribe requests, forwards messages that match other Clients’ subscriptions, and closes Clients’ connections. This Agent is much more lightweight than those with output to DDS, and is therefore the appropriate candidate for assessing the memory consumption of the lightest possible version of an Agent that could mediate a pseudo-p2p communication among Clients.

### Methodology and Results

We have investigated the memory consumption of an Agent communicating with a mock Client application on Linux that is publishing and subscribing to topics of known size.

We have measured on the one hand the binary size of the compiled Agent, and then analyzed its heap and stack usage. For the latter, the number of pub/sub pairs has been varied from 1 to 32, with a single topic associated with each pair, and the topic size has been varied too, from 8 to 256 B.

The binary size of the compiled Agent resulted to be 385 KB.

As for the RAM memory, the tool that has been used for establishing the CedMiddleware memory footprint is [Valgrind](https://valgrind.org/), an instrumentation framework for building dynamic analysis tools. Specifically, we made use of [Massif](https://valgrind.org/_docs/manual/ms-manual.md), a memory profiler which measures how much heap and stack memory a program uses. The reported measurements correspond to the memory peak resulting from the analysis provided by this tool.

The total heap + stack consumption is plotted as a function of the topic size and number below.

<img alt="agent consumption" src="_docs/concepts/middleware/memo_prof/agent.png" class="center">
<p align="center">
  Fig. 4: Memory usage (in KiloBytes) of the XRCE-DDS Agent as a function of topic size (in Bytes) and topics number.
</p>

We see from these results that for applications that involve around 10-15 pub/sub pairs (and equal number of topics), the memory consumption of the Agent could be compatible with cross-compilation and later execution into a mid-to-high range MCU with RAM memory on the order of ~ 300-400 KB and flash of less than 500 KB. This preliminary analysis therefore paves the way for the possibility to port the Ced Agent to RTOSes such as those already supported by the XRCE-DDS Client (Zephyr, NuttX and FreeRTOS) and thus bringing this component of the library to resource-constrained systems, as well. We mention that, to date, both the FastDDSMiddleware and the CedMiddleware Agents have been successfully ported to Raspberry Pis (RPis) on both Ubuntu and Raspbian and that several micro-ROS use-cases and demos already function with the Agent on a RPi.


---

## Source: `_docs/concepts/middleware/Micro_XRCE-DDS/index.md`
<a id="source-docs-concepts-middleware-micro-xrce-dds-index-md"></a>

This page is dedicated to describing the most salient features of [**Micro XRCE-DDS**](https://micro-xrce-dds.docs.eprosima.com/en/latest/index.md),
the default middleware implementation for micro-ROS' rmw layer.

**eProsima Micro XRCE-DDS** is an open-source wire protocol that implements the OMG DDS for e**X**tremely **R**esource **C**onstrained **E**nvironment standard ([DDS-XRCE](https://www.omg.org/spec/DDS-XRCE/)).
The aim of the DDS-XRCE protocol is to provide access to the DDS Global-Data-Space from resource-constrained devices.
This is achieved thanks to a **client-server** architecture, where low resource devices, called *XRCE Clients*, are connected to a server, called *XRCE Agent*, which acts on behalf of its clients in the DDS Global-Data-Space.

![](_docs/concepts/middleware/Micro_XRCE-DDS/uxrce_scope.png)

Micro XRCE-DDS is composed by two main elements:

* [Micro XRCE-DDS Agent](https://github.com/eProsima/Micro-XRCE-DDS-Agent): a **C++11 out-of-the-box application** which implements the XRCE Agent functionality.
* [Micro XRCE-DDS Client](https://github.com/eProsima/Micro-XRCE-DDS-Client): a **C99 library** which implements the XRCE Client side functionality.

In addition, Micro XRCE-DDS uses other two components:

* [Micro CDR](https://github.com/eProsima/Micro-CDR): a **de/serialization engine** used in the Client library.
* [Micro XRCE-DDS Gen](https://github.com/eProsima/Micro-XRCE-DDS-Gen): a **code generator tool** used for generating *Micro CDR* de/serialization functions and Client apps examples from IDL sources.

## Application

Micro XRCE-DDS is focused on microcontroller applications which require to access a publisher/subscriber architecture.
Some examples of this kind of applications are those found in sensor networks, IoT or robotics.
Some companies such as [Renesas](https://www.sensorsmag.com/iot-wireless/mcus-support-dds-xrce-protocol-for-ros-2) and [ROBOTIS](https://xelnetwork.readthedocs.io/en/latest/) are using Micro XRCE-DDS as a middleware solution.
Furthermore, the [micro-ROS](https://microros.github.io) project, whose goal is to put ROS 2 onto microcontroller, has adopted Micro XRCE-DDS as its default middleware layer.

## Main Features

### Low Resource Consumption

As it was mentioned above, Micro XRCE-DDS is focused on microcontroller applications. Therefore, the design and implementation of this middleware have been carried out taking into account the memory constraints of this kind of devices.
A proof of this is the fact that the XRCE Client is completely dynamic memory free.
From the point of view of the memory footprint, the [latest](https://github.com/eProsima/Micro-XRCE-DDS-Client/releases/latest) version of this library has a memory consumption of less than **75 KB of Flash memory** and around **3 KB of RAM** for a complete publisher and subscriber application handling messages sizes on the order of 512 B.
For more detailed information on the memory consumption as a function of message size, entity number and internal memory management of the middleware library, please refer to the [Micro XRCE-DDS memory profiling](/_docs/concepts/middleware/memo_prof/) section.
Moreover, this library is highly configurable thanks to a *profile* concept that enables to choose, add or remove some features in configuration time. That allows customizing the XRCE Client library size, if there are features that are not used.
There are several definitions for configuring and building the Client library at compile-time.
These definitions allow to create a version of the library according to the application requirements, and can be modified in the `client.config` file.
For incorporating the desired configuration, it is necessary to run the `cmake` command every time the definitions change.

For more information on how to configure micro-ROS by opportunely tuning parameters either in the Micro XRCE-DDS library
orin its rmw implementation [`rmw_microxrcedds`](https://github.com/micro-ROS/rmw-microxrcedds), consult this [tutorial](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/) and the `rmw_microxrcedds` [README](https://github.com/micro-ROS/rmw-microxrcedds#rmw-micro-xrce-dds-implementation).

### Multi-Transport Support

As part of the profiles discussed in the previous section, the user can choose between several transport layers to communicate the Clients with the Agent.
Indeed, in contrast to other IoT middleware such as MQTT and CoaP, which work over only a particular transport layer, XRCE supports multiple transport protocols natively.
In particular, the latest version of Micro XRCE-DDS support: **UDP**, **TCP** and a custom **Serial** transport protocol.

Apart from this, Micro XRCE-DDS has a transport interface for both Agent and Client which allows to implement custom transports in a straightforward manner.
This makes the port of Micro XRCE-DDS to different platforms and the addition of new transports a seamless task that any user can undertake.

### Multi-Platform Support

The XRCE Client supports **FreeRTOS**, **Zephyr** and **NuttX** as embedded RTOS. Moreover, it also runs on **Windows** and **Linux**.
On the other hand, the XRCE Agent supports **Windows** and **Linux**.

### QoS support

The XRCE Client library allows the user to use two different approaches for creating DDS entities in the XRCE Agent:

* By XML (the default option)
* By reference

When using the default option, users are enabled to create entities either in Reliable or Best-Effort mode, with the XML files written and stored on the Client side. But these QoS configurations may not fit some users' requirements.
For these cases, Micro XRCE-DDS allows to create entities directly on the Agent, where the user can write custom XML QoS as in DDS.
Each entity available on the Agent will be associated to a label, so that the Clients can to create the entities they need 
for the communication by just referring to these labels.

Additionally, using references will also reduce the memory consumption of the Client inside the MCU.
This is because the reference approach allows avoiding to build the parts of the code where XMLs are stored.

Notice that this mechanism is inherited by micro-ROS which, as a consequence, will be able to leverage the same full set of QoS as ROS 2.
For a comprehensive review on how to use custom QoS in micro-ROS, please visit this [dedicated page](/_docs/tutorials/advanced/create_dds_entities_by_ref/) in the tutorials section.


## Other links

* [Manual at Read the Docs](https://micro-xrce-dds.readthedocs.io/en/latest/)
* [Micro XRCE-DDS on GitHub](https://github.com/eProsima/Micro-XRCE-DDS)
* [XRCE Client on GitHub](https://github.com/eProsima/Micro-XRCE-DDS-Client)
* [XRCE Agent on GitHub](https://github.com/eProsima/Micro-XRCE-DDS-Agent)
* [rmw_microxrcedds on GitHub](https://github.com/micro-ROS/rmw-microxrcedds)
* [Micro XRCE-DDS memory profiling](/_docs/concepts/middleware/memo_prof/)
* [Middleware optimization tutorial](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/).
* [How to use custom QoS in micro-ROS](/_docs/tutorials/advanced/create_dds_entities_by_ref/)

---

## Source: `_docs/concepts/middleware/rosserial/index.md`
<a id="source-docs-concepts-middleware-rosserial-index-md"></a>

In ROS, there is a package that stands out when we want to send ROS messages through serial communications.
This package is rosserial.

rosserial allows platforms based on microcontrollers to communicate with a regular computer communicating with ROS network on its behalf.
rosserial provides the protocol to set such communication, using a client-server architecture approach.
rosserial-clients serialise data into the serial link, then, the serialised data is received by the rosserial-server and forwarded to the conventional ROS network.
An analogous process is done to forward data from the ROS network towards the microcontroller.
This rosserial-server can be used either in C++ or Python; meanwhile, the rosserial-client has a set of available supported microprocessors.

This solution is commonly used to integrate hardware pieces within Robots using ROS.
Rosserial, in those cases, acts as a bridge between hardware communication protocols and a ROS network.

## Micro XRCE-DDS

One of the capabilities of Micro XRCE-DDS is the use of serial connection between a microcontroller and a DDS/ROS 2 capable computer.
Such a connection is possible thanks to the use of OMG's DDS-XRCE standard and a serial transport layer.
This solution follows the same client-server architecture as rosserial, which it is one of the most suitable approaches when we speak of microcontroller communications.

The libraries in charge of implementing this architecture are the Client and the Agent.
Clients generate entities within the Agent which will act on behalf of the Clients on a DDS network.

This usage, as you can see, resembles the one used by rosserial, but they have subtle differences in their implementations which we will expose in this article.

## Micro XRCE-DDS vs rosserial

Now that we have a basic understanding of rosserial and Micro XRCE-DDS we will provide a comparison between them.

### Micro XRCE-DDS over Serial Transport

Micro XRCE-DDS, when communicating over serial transports (it allows communications over other transports such as UDP, TCP ...), uses a serial protocol with a predefined format.
This format is explained in the following frame dissection:

```
0        8        16       24                40                 X                 X+16
+--------+--------+--------+--------+--------+--------//--------+--------+--------+
| FLAG   |  SADD  |  RADD  |       LEN       |     PAYLOAD      |       CRC       |
+--------+--------+--------+--------+--------+--------//--------|--------+--------+
```

* `FLAG`: synchronization flag (0xFF).
* `SADD`: source address.
* `RADD`: remote address.
* `LEN`: payload length without framing (2 bytes in little-endian).
* `PAYLOAD`: serialised message with XRCE headers.
* `CRC`: message CRC after stuffing.

This is the message that is serialised on the link layer.
This is the message going from an towards the microcontroller thanks to two different operations: publish and subscribe.

## rosserial

In contrast, this is the rosserial frame:

```
0       8       16              32              40      56               X             X+16
+-------+-------+-------+-------+-------+-------+-------+-------//-------+------+------+
| FLAG  | PROT  |      LEN      |      LCRC     | TOPID |     PAYLOAD    |     MCRC    |
+-------+-------+-------+-------+-------+-------+-------+-------//-------|------+------+
```

* `FLAG`: synchronization flag (0xFF).
* `PROT`: protocol version.
* `LEN`: payload length (2 bytes in little-endian).
* `LCRC`: length CRC.
* `TOPID`: topic ID.
* `PAYLOAD`: serialised message.
* `MCRC`: message CRC.

As you can see comparing with the Micro XRCE-DDS serial frame, it uses a completely different frame.

## Comparison

The following table, summarises the key aspects of both implmentations:

| | Micro XRCE-DDS serial | rosserial |
|:-|:-:|:-:|
| **API** | C/C++ | C++ |
| **integrity** | [HDLC](https://en.wikipedia.org/wiki/High-Level_Data_Link_Control) framing | none |
| **security** | [CRC-16-CCITT](https://en.wikipedia.org/wiki/Cyclic_redundancy_check) | vague CRC (% 256) |
| **memcopy** | uxr_stream ---> serial_buffer ---> hardware_buffer | serialization_buffer ---> hardware_buffer |
| **memory usage** | uxr_stream + (2 * aux-buffer[42 B]) | 2 * serialization_buffer |
| **message size limit** | uxr_stream size | hardware_buffer size |
| **reliability** | yes | no |
| **routing** | yes | no |
| **overhead** | 7 B + 12 B* | 9 B |
| **architecture** | client-server | client-server |

_* Overhead is divided between framing, 7 B and that added by DDS-XRCE protocol 12 B._

As exposed in this table, Micro XRCE-DDS serial increases the number of memory operations but reduces in a great way the memory required for serial communications as it does not require that the hardware buffer has the same size as the serialisation buffer.
This use of buffers reduces memory usage.
Also, Micro XRCE-DDS serial provides routing and reliability capabilities in contrast with rosserial.
The DDS-XRCE protocol embraces standards for some of its parts, like the usage of standard CRC or a standard framing.

---

## Source: `_docs/concepts/rtos/comparison/index.md`
<a id="source-docs-concepts-rtos-comparison-index-md"></a>

In this section, we present a techincal comparison between the three RTOSes supported by micro-ROS:
* [NuttX](https://nuttx.apache.org/)
* [FreeRTOS](https://www.freertos.org/)
* [Zephyr](https://www.zephyrproject.org/)

The comparison regards the features listed below:
* Standardized API to application level
* Maturity
* Supported hardware
* Scheduling options
* IO Support (native or vendor-specific module needed)
* Networking stack
* Storage and Display
* Memory Footprint
* Safety Certification
* License
* POSIX level support

**Key questions:**
* Evaluation POSIX-compliance of RTOS.
* What is the effort in providing an additional layer for non-POSIX RTOS regarding micro-ROS or ROS 2?
* Support of RTOS for specific HW platforms

## Table of Comparisons

| **OS**                                                       | **NuttX**                                | **FreeRTOS**                                                                                                             | **Zephyr**                                                                                      |
| ------------------------------------------------------------ | ---------------------------------------- | ------------------------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------- |
| **Feature**                                                  |                                          |                                                                                                                          |                                                                                                 |
| **Standardization**                                          |                                          |                                                                                                                          |                                                                                                 |
| POSIX                                                        | yes                                      | partial                                                                                                                  | partial                                                                                         |
| POSIX.1 <sup>1</sup>                                         | [yes](http://nuttx.org/)                 | [wrapper](https://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_POSIX/index.md)                                         | partial                                                                                         |
| POSIX.1b <sup>2</sup>                                        | yes                                      | partial                                                                                                                  | partial                                                                                         |
| POSIX.1c <sup>3</sup>                                        | yes                                      | yes                                                                                                                      | partial                                                                                         |
|                                                              |                                          |                                                                                                                          |                                                                                                 |
| OSEK/VDX                                                     | no                                       | no                                                                                                                       | no                                                                                              |
| **Maturity**                                                 |                                          |                                                                                                                          |                                                                                                 |
| First release                                                | 2007                                     | 2003                                                                                                                     | 2016                                                                                            |
| Last release                                                 | 2019                                     | 2020                                                                                                                     | 2019                                                                                            |
| Update rate                                                  | about 3 months                           | irregular                                                                                                                | 3 months                                                                                        |
| Community                                                    | open-source                              | open-source                                                                                                              | Linux Foundation Collaboration Project, (Intel, Linaro (ARM), nordic, NXP, Synopsys)            |
|                                                              |                                          |                                                                                                                          |                                                                                                 |
| **Supported Hardware**                                       |                                          |                                                                                                                          |                                                                                                 |
| Olimex STM32-E407 (Cortex-M4)                                | yes                                      | yes                                                                                                                      | yes, [explicitly](https://docs.zephyrproject.org/latest/kernel/services/scheduling/index.md) |
| Bosch XDK <sup>5</sup>                                       | not explicitly, but similar <sup>6</sup> | yes                                                                                                                      | no<sup>5</sup>                                                                                  |
| MPC57xx                                                      | no                                       | no                                                                                                                       | no                                                                                              |
| **Scheduling**                                               |                                          |                                                                                                                          |                                                                                                 |
| Priority-based                                               | FIFO                                     | yes                                                                                                                      | yes                                                                                             |
| Round-Robin <sup>4</sup>                                     | yes                                      | yes <sup>6</sup>                                                                                                         | [co-operative](https://docs.zephyrproject.org/latest/kernel/services/scheduling/index.md)    |
| Sporadic Server                                              | yes                                      | no                                                                                                                       | no                                                                                              |
| Reservation Based Scheduling (RBS)                           | no                                       | no                                                                                                                       | no                                                                                              |
| Rate Monotonic Scheduling (RMS)                              | ?                                        | yes <sup>10</sup>                                                                                                        | yes <sup>10</sup>                                                                               |
| Semaphore /Mutex Management                                  | yes (Priority Inheritance)               | yes                                                                                                                      | yes                                                                                             |
| **IO**                                                       |                                          |                                                                                                                          |                                                                                                 |
| I2C                                                          | yes                                      | yes <sup>8</sup>                                                                                                         | yes                                                                                             |
| SPI                                                          | yes                                      | yes <sup>8</sup>                                                                                                         | yes                                                                                             |
| UART                                                         | hw-specific                              | yes <sup>8</sup>                                                                                                         | yes                                                                                             |
| USB                                                          | yes                                      | vendor-specific                                                                                                          | yes                                                                                             |
| CAN                                                          | yes                                      | vendor-specific                                                                                                          | yes                                                                                             |
| CAnopen                                                      | no                                       | vendor-specific                                                                                                          | yes                                                                                             |
| Modbus                                                       | yes                                      | vendor-specific                                                                                                          | ?                                                                                               |
| **Networking** <sup>7</sup>                                  |                                          |                                                                                                                          |                                                                                                 |
| BLE-Stack                                                    | unclear                                  | yes <sup>8</sup>                                                                                                         | yes                                                                                             |
| 6LoWPAN                                                      | yes                                      | no                                                                                                                       | yes                                                                                             |
| TLS                                                          |                                          | yes <sup>8</sup>                                                                                                         | yes                                                                                             |
| Thread                                                       |                                          | no                                                                                                                       | ?                                                                                               |
| Ethernet                                                     | yes                                      | yes <sup>8</sup>                                                                                                         | yes                                                                                             |
| Wifi                                                         | yes                                      | yes <sup>8</sup>                                                                                                         | yes                                                                                             |
| NFC                                                          | unclear                                  | no                                                                                                                       | yes                                                                                             |
| RFID                                                         | yes                                      | no                                                                                                                       | yes                                                                                             |
| **Storage & Display** <sup>7</sup>                           |                                          |                                                                                                                          |                                                                                                 |
| File System                                                  | yes                                      | yes                                                                                                                      | yes                                                                                             |
| Graphical User Interface                                     |                                          | vendor-specific                                                                                                          | ?                                                                                               |
| **Memory Footprint**                                         |                                          |                                                                                                                          |                                                                                                 |
| RAM                                                          | "small footprint"                        | 236 B scheduler + 64 B / task                                                                                            | "small footprint"                                                                               |
| ROM                                                          | "small footprint"                        | 5 - 10 kB                                                                                                                | "small footprint"                                                                               |
| **Safety Certification**                                     |                                          |                                                                                                                          |                                                                                                 |
| Software Development Process DO178B Level A / EUROCAE ED-12B | no                                       | [SafeRTOS: DO178C (Aerspace) by Wittenstein](https://www.highintegritysystems.com/safertos/certification-and-standards/) | no                                                                                              |
| Functional Safety IEC-61508                                  | no                                       | [SafeRTOS (SIL 3)](http://www.openrtos.net/FreeRTOS-Plus/Safety_Critical_Certified/SafeRTOS-Safety-Critical-Certification.shtml)                      | soon                                                                                            |
| **License**                                                  | BSD                                      | MIT and Commercial                                                                                                       | Apache 2                                                                                        |

<sup>1</sup> Processes, signals, fpe, segmentation, bus errors, timers, file and directory ops, pipes, c library, IO Port Interface

<sup>2</sup> Real-time, clocks, semaphores, messages, shared mem, async io, memory locking.

<sup>3</sup> Threads.

<sup>4</sup> Executing every task in round-robin fashion but only for a pre-defined time slice.

<sup>5</sup> XDK is based on a microcontroller of the ARM Cortex M3 EFM32GG390F1024 Giant Gecko family by Silicon Labs. Note that the version used in the XDK is not fully supported by Zephyr.

<sup>6</sup> [Note: Time slicing](https://www.freertos.org/media/2018/161204_Mastering_the_FreeRTOS_Real_Time_Kernel-A_Hands-On_Tutorial_Guide.pdf)

<sup>7</sup> Hardware-support for Networking and Storage often depends on the platform and sometimes packages of hardware-vendors are available, which work for a particular operating system. But it is in general difficult to determine the harware-support of a given RTOS.

<sup>8</sup> FreeRTOS interfaces that are provided through the
FreeRTOS reference distribution repository at https://github.com/aws/amazon-freertos

<sup>9</sup> FreeRTOS ethernet support is provided through the FreeRTOS+TCP stack.

<sup>10</sup> Rate Monotonic Scheduling can be achieved by assigning the priorities of threads with the so-called rate-monotonic policy. That is, the thread with the highest rate has the highest priority and the thread with the lowest rate the lowest priority. It is assumed that all threads are activated periodically with fixed rates.

Some Related Work:
* [Choosing the right RTOS for IoT platform, Milinkovic et al, INFOTEH-JAHORINA Vol. 14, 2015](http://infoteh.rs.ba/zbornik/2015/radovi/RSS-2/RSS-2-2.pdf): comparison of FreeRTOS, ChibiOS/RT, Erika, RIOT
* [FreeRTOS Architecture](https://www.freertos.org/)

---

## Source: `_docs/concepts/rtos/index.md`
<a id="source-docs-concepts-rtos-index-md"></a>

The use of Real-Time Operating Systems (RTOSes) is a general practice in nowadays embedded systems. These systems typically consist of a resource-constrained microcontroller that executes an application which requires an interaction with external components. In many cases, this application contains a time-critical task where a strict time deadline or deterministic response is required.

Bare-metal applications are also used nowadays, but require very low-level programming skills and lack of the hardware abstraction layers that RTOSes offers. On the other hand, RTOSes typically use hardware abstraction layers (HAL) that ease the use of hardware resources, such as timers and communication buses, lightening the development and allowing the reuse of code. In addition, they offer threads and tasks entities which, together with the use of schedulers, provide the necessary tools to implement determinism in the applications. The scheduling consists of different algorithms, among which users can choose the ones that better fits their applications. Another feature that RTOSes normally offer is the stack management, helping in the correct memory usage of the MCU resources, a valuable good in embedded systems.

## RTOS in micro-ROS

Due to the benefits presented above, micro-ROS integrates RTOSes in its software stack. This enhances the capabilities of micro-ROS and allows reusing all the tools and functions provided by the RTOSes. As the micro-ROS software stack is modular, the exchange of software entities is expected and desired at all levels, including the RTOS layer.

Like the Operating Systems (OSes) available for computers, the RTOSes also have different support for standard interfaces. This is established in a family of standards named [POSIX](https://pubs.opengroup.org/onlinepubs/9699919799/). As we aim to port or reuse code of ROS 2 that was natively coded in Linux (a mostly POSIX-compliant OS), the use of RTOSes that comply with these standards is beneficial, as the porting effort of the code is minimal. Both NuttX and Zephyr comply to a good degree with POSIX standards, making the porting effort minimal, whereas FreeRTOS provides a plugin, *FreeRTOS+POSIX*, thanks to which an existing POSIX compliant application can be easily ported to FreeRTOS ecosystem, and therefore leverage all its functionality.

Notice that calls to the RTOS functions are made by several abstraction layers in the micro-ROS stack. The main layer using the RTOS primitives is the middleware. Indeed, it requires accessing the transport resources (serial, UDP or 6LoWPAN communications for example) and the time resources of the RTOS in order to operate properly. In addition, it is desirable that the micro-ROS client libraries (rcl, rclc) have also access to RTOS resources in order to handle mechanisms such as scheduling or power management. In this way, the developer can optimize the application at various levels.

At present, micro-ROS supports three RTOSes, which all come with (basic) POSIX implementations: FreeRTOS, Zephyr and NuttX, all of them [integrated into the micro-ROS build system](/_docs/concepts/build_system/).
By clicking on the logos below, you'll be redirected to the Overview section, where the most relevant aspects and key features of each RTOS are presented.

<table style="border:none;">
 <tr>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="/_docs/overview/rtos/#freertos"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="263" height="100" src="https://upload.wikimedia.org/wikipedia/commons/4/4e/Logo_freeRTOS.png"><br/>FreeRTOS</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="/_docs/overview/rtos/#zephyr"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="220" height="114" src="img/_posts/logo-zephyr.jpg"><br/>Zephyr</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="/_docs/overview/rtos/#nuttx"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="125" height="125" src="https://upload.wikimedia.org/wikipedia/commons/b/b0/NuttX_logo.png"><br/>NuttX</a></td>
 </tr>
</table>

A thorough technical comparison between these RTOSes can be found [here](/_docs/concepts/rtos/comparison/).

{% include logos_disclaimer.md %}

---

## Source: `_docs/imprint.md`
<a id="source-docs-imprint-md"></a>

# Published by:

eProsima,

Plaza de la Encina 10-11 Nucleo 4 2ª Planta,

28760 Tres Cantos,

Madrid, Spain.

E-mail: info@eprosima.com

Telephone: +34 918043448

Represented by the CEO:
Jaime Martin Losa.

# Edited by:

Members of the EU project [OFERA](http://ofera.eu/):

* eProsima.
* Robert Bosch GmbH.
* ŁUKASIEWICZ - Instytut PIAP.
* FIWARE Foundation.

# Disclaimer

The editors made an effort to ensure that the content of this web site is kept up to date, keeping it accurate and complete.
Nevertheless, errors can be present.
The editors and publisher(s) do not give any warranty in terms of the accuracy or completeness of material on this web site and disclaim all liability for loss or damage incurred derived from the use of content obtained from this web.

The publisher neither the editors can assume any liability for the content of external pages. The owner of those external pages, in the case, is the sole responsible for their content.

Registered trademarks and copyrighted text and images are not (generally) indicated as such on this web site content.
The absence of such indications in no way implies that these names, images or text belong to the public domain, their original ownership is keeped untouched.

---

## Source: `_docs/overview/comparison/index.md`
<a id="source-docs-overview-comparison-index-md"></a>

Micro-ROS brings ROS 2 to microcontrollers. Here, we perform an analysis of the related approaches and eventually show a comparison table.

## ROSSerial

ROSSerial is a protocol for wrapping standard ROS serialized messages and multiplexing multiple topics and services over a device such as a serial port or network socket. In addition to a protocol definition, there are three types of packages found in this suite:

- Client Libraries: Client libraries allow users to easily get ROS nodes up and running on various systems. These clients are ports of the general ANSI C++ rosserial_client library. 

- ROS-side Interfaces: These packages provide a node for the host machine to bridge the connection from the rosserial protocol to the more general ROS network.

- Examples and Use Cases. 

It is worth saying that this option cannot be fully compared with micro-ROS because this approach is meant to work with ROS 1, instead of micro-ROS which is focused on ROS 2.

Reference: [ROSserial Wiki](http://wiki.ros.org/rosserial)

## RIOT-ROS2

RIOT-ROS2 is a modification of the main ROS 2 stack, to make it able to run on microcontrollers thanks to the RIOT Operating System.

ROS 2 is composed of several layers. Some have been modified to be able to run on the microcontroller, this is a list of the available layers for RIOT-ROS2 project:
- ROS Client Library bindings: RCLC
- ROS Client Library: RCL
- ROS MiddleWare: rmw_ndn
- ROS IDL Generators: generator_c
- ROS IDL Type Support: CBOR
- ROS IDL Interfaces:
    - common_interfaces
    - rcl_interfaces

As a final data, it looks like the development is frozen. This consideration is due to the fact that the last commit goes back to [July 2018](https://github.com/astralien3000/riot-ros2/commits/master).

Reference:[RIOT-ROS2](https://github.com/astralien3000/riot-ros2/wiki)

## Comparation table

|  | rosserial | RIOT-ROS2 | micro-ROS |
|-------|-----------|-----------|-----------|
| OS | bare-metal | RIOT | NuttX, FreeRTOS and Zephyr |
| Communications architecture | Bridged | N/A| Bridged |
| Message format | ROS1 | N/A |CDR (from DDS) |
| Communication links | UART | UART | UART, SPI, IP (UDP), 6LowPAN, ... |
| Communication protocol | Custom | NDN | XRCE-DDS (or any rmw implementation) |
| Code Base | Independent implementation | Standard ROS 2 stack up to RCL | Standard ROS 2 stack up to RCL (RCLCPP coming) |
| Node API | Custom rosserial API | RCL,RCLC | RCL (soon RCLCPP) |
| Callback execution | Sequential, in order of messages | N/A | Choice of ROS 2 executors or MCU optimized executors |
| Timers | Not included | Not included | Normal ROS 2 timers |
| Time sync to host | Custom | N/A | NTP/PTP |
| Lifecycle | Not supported | Partial | Partial, full coming |

---

## Source: `_docs/overview/docker_ci_status/index.md`
<a id="source-docs-overview-docker-ci-status-index-md"></a>

<style>
.table td img{
    height: 18px;
    max-width: fit-content;
}
</style>

## Tooling Status

| Repository                                                                                                                                                                                                                                                                                                                                                            | Description                                                                | CI                                                                                                                                                                                                                 | Issues / Pull Requests                                                                                                                                                                                                                                                                                                      | Documentation                                                                                                                                 |
| --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------- |
| [micro-ros-setup](https://github.com/micro-ROS/micro_ros_setup) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/rolling) | Micro-ROS tool to build and flash Micro-ROS to every supported platform | [![GitHub Actions status](https://github.com/micro-ROS/micro_ros_setup/actions/workflows/nightly.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_setup/actions/workflows/nightly.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_setup.svg)](https://github.com/micro-ROS/micro_ros_setup/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_setup.svg)](https://github.com/micro-ROS//micro_ros_setup/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_setup/blob/humble/README.md) |
| [micro-ros-espidf-component](https://github.com/micro-ROS/micro_ros_espidf_component) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/rolling) | Component to use Micro-ROS in ESP IDF build system | [![GitHub Actions status](https://github.com/micro-ROS/micro_ros_espidf_component/actions/workflows/nightly.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_espidf_component/actions/workflows/nightly.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_espidf_component.svg)](https://github.com/micro-ROS/micro_ros_espidf_component/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_espidf_component.svg)](https://github.com/micro-ROS/micro_ros_espidf_component/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_espidf_component/blob/humble/README.md) |
| [micro-ros-arduino](https://github.com/micro-ROS/micro_ros_arduino) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/rolling) | Micro-ROS precompiled libraries to directly interface with the Arduino IDE | [![Github Actions status](https://github.com/micro-ROS/micro_ros_arduino/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_arduino/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_arduino.svg)](https://github.com/micro-ROS/micro_ros_arduino/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_arduino.svg)](https://github.com/micro-ROS/micro_ros_arduino/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_arduino/blob/humble/README.md) |
| [micro-ros-zephyr-module](https://github.com/micro-ROS/micro_ros_zephyr_module) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/rolling) | Integration of micro-ROS within Zephyr West build system | [![Github Actions status](https://github.com/micro-ROS/micro_ros_zephyr_module/actions/workflows/nightly.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_zephyr_module/actions/workflows/nightly.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_zephyr_module.svg)](https://github.com/micro-ROS/micro_ros_zephyr_module/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_zephyr_module.svg)](https://github.com/micro-ROS/micro_ros_zephyr_module/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_zephyr_module/blob/humble/README.md) |
| [micro_ros_raspberrypi_pico_sdk](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/rolling) | Integration of micro-ROS within Raspberry Pi Pico SDK | [![Github Actions status](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_raspberrypi_pico_sdk.svg)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_raspberrypi_pico_sdk.svg)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/blob/humble/README.md) |
| [micro_ros_mbed](https://github.com/micro-ROS/micro_ros_mbed) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/rolling) | Integration of micro-ROS within Mbed RTOS | [![Github Actions status](https://github.com/micro-ROS/micro_ros_mbed/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_mbed/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_mbed.svg)](https://github.com/micro-ROS/micro_ros_mbed/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_mbed.svg)](https://github.com/micro-ROS/micro_ros_mbed/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_mbed/blob/humble/README.md) |
| [micro_ros_nuttx_app](https://github.com/micro-ROS/micro_ros_nuttx_app) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/rolling)| Integration of micro-ROS within Nuttx 10 | [![Github Actions status](https://github.com/micro-ROS/micro_ros_nuttx_app/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_nuttx_app/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_nuttx_app.svg)](https://github.com/micro-ROS/micro_ros_nuttx_app/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_nuttx_app.svg)](https://github.com/micro-ROS/micro_ros_nuttx_app/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_nuttx_app/blob/humble/README.md) |
| [micro_ros_stm32cubemx_utils](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/rolling) | Integration of micro-ROS within STM32CubeMX and STM32CubeIDE | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_stm32cubemx_utils.svg)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_stm32cubemx_utils.svg)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/blob/humble/README.md) |
| [NuttX fork](https://github.com/micro-ROS/NuttX) | NuttX fork to use with micro-ROS. Current status is **discontinued** | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/NuttX.svg)](https://github.com/micro-ROS/NuttX/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/NuttX.svg)](https://github.com/micro-ROS/NuttX/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/NuttX/blob/master/README.md) |

## Source Code Repositories Status

Most repositories can be found in GitHub's micro-ROS organization at [github.com/micro-ROS/](https://github.com/micro-ROS/).

| Repository                                                                                                                                                                                                                                                                                                                                                                                                                                                     | Description                                                                                                            | CI                                                                                                                                                                                                                                                                  | Issues / Pull Requests                                                                                                                                                                                                                                                                                                          | Documentation                                                                                                                                |
| :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------- |
| [Micro XRCE-DDS Client](https://github.com/eProsima/Micro-XRCE-DDS-Client) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2)                                                                                                                                                     | Client C99 library of eProsima's open-source implementation of DDS-XRCE                                                | [![Build status](https://img.shields.io/jenkins/build?jobUrl=http%3A%2F%2Fjenkins.eprosima.com%3A8080%2Fview%2FMicro%2520XRCE%2Fjob%2FMicro-XRCE-DDS-Client%2520Github%2F)](http://jenkins.eprosima.com:8080/view/Micro%20XRCE/job/Micro-XRCE-DDS-Client%20Github/) | [![](https://img.shields.io/github/issues/eProsima/Micro-XRCE-DDS-Client.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Client/issues) [![](https://img.shields.io/github/issues-pr/eProsima/Micro-XRCE-DDS-Client.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Client/pulls)                                             | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://micro-xrce-dds.docs.eprosima.com/en/latest/client.md)                     |
| [Micro XRCE-DDS Agent](https://github.com/eProsima/Micro-XRCE-DDS-Agent) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2)                                                                                                                                         | Agent (bridge to DDS) C++11 library of eProsima's open-source implementation of DDS-XRCE                               | [![Build status](https://img.shields.io/jenkins/build?jobUrl=http%3A%2F%2Fjenkins.eprosima.com%3A8080%2Fview%2FMicro%2520XRCE%2Fjob%2FMicro-XRCE-DDS-Agent%2520Github%2F)](http://jenkins.eprosima.com:8080/view/Micro%20XRCE/job/Micro-XRCE-DDS-Agent%20Github/)   | [![](https://img.shields.io/github/issues/eProsima/Micro-XRCE-DDS-Agent.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/issues) [![](https://img.shields.io/github/issues-pr/eProsima/Micro-XRCE-DDS-Agent.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/pulls)                                                 | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://micro-xrce-dds.docs.eprosima.com/en/latest/agent.md)                      |
| [rmw-microxrcedds](https://github.com/micro-ROS/rmw-microxrcedds) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/rolling)                                                                                                                                                  | ROS 2 RMW adapter for Micro-XRCE-DDS Client library                                                                    | [![Build status](https://img.shields.io/github/actions/workflow/status/micro-ROS/rmw-microxrcedds/ci.yml)](https://github.com/micro-ROS/rmw-microxrcedds/actions?query=workflow%3A%22CI+rmw_microxrcedds_c%22)                                                      | [![](https://img.shields.io/github/issues/micro-ROS/rmw-microxrcedds.svg)](https://github.com/micro-ROS/rmw-microxrcedds/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/rmw-microxrcedds.svg)](https://github.com/micro-ROS/rmw-microxrcedds/pulls)                                                             | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/rmw-microxrcedds/blob/humble/README.md)                  |
| [rosidl-typesupport-microxrcedds](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/rolling)                                                                                      | ROS 2 type support for Micro-XRCE-DDS Client library                                                                   | [![Build status](https://img.shields.io/github/actions/workflow/status/micro-ROS/rosidl_typesupport_microxrcedds/ci.yml)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/actions?query=workflow%3A%22CI+rosidl_typesupport_microxrcedds%22)           | [![](https://img.shields.io/github/issues/micro-ROS/rosidl_typesupport_microxrcedds.svg)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/rosidl_typesupport_microxrcedds.svg)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/blob/master/README.md) |
| [micro-ROS-Agent](https://github.com/micro-ROS/micro-ROS-Agent) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/humble)  [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/rolling)                                                                                                                                                     | Agent (bridge) to ROS 2                                                                                                | [![](https://img.shields.io/github/actions/workflow/status/micro-ROS/micro-ROS-Agent/ci.yml)](https://github.com/micro-ROS/micro-ROS-Agent/actions?query=workflow%3A%22CI+micro-ROS+Agent%22)                                                               | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS-Agent.svg)](https://github.com/micro-ROS/micro-ROS-Agent/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS-Agent.svg)](https://github.com/micro-ROS/micro-ROS-Agent/pulls)                                                                 | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro-ROS-Agent/blob/master/README.md)                 |
| [micro-ros-msgs](https://github.com/micro-ROS/micro_ros_msgs) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/rolling)                                                                                                                                                          | Specific ROS 2 messages used within micro-ROS architecture                                                             | [![](https://img.shields.io/badge/-unavailable-lightgrey)]()                                                                                                                                                                                                        | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_msgs.svg)](https://github.com/micro-ROS/micro_ros_msgs/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_msgs.svg)](https://github.com/micro-ROS/micro_ros_msgs/pulls)                                                                     | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_msgs/blob/main/README.md)                    |
| [micro_ros_utilities](https://github.com/micro-ROS/micro_ros_utilities) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/rolling)                                                                                                                                                                                                                                                               | micro-ROS utilities for embedded applications                                                                          | [![Build status](https://github.com/micro-ROS/micro_ros_utilities/actions/workflows/ci.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_utilities/actions/workflows/ci.yml)                                                                                   | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_utilities.svg)](https://github.com/micro-ROS/micro_ros_utilities/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_utilities.svg)](https://github.com/micro-ROS/micro_ros_utilities/pulls)                                                 | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_utilities/blob/main/README.md)               |
| [system_modes](https://github.com/micro-ROS/system_modes) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master)                                                                                                                                                                    | Extension for `rclcpp`                                                                                                 | [![Build Status](https://img.shields.io/badge/ci-disabled-lightgrey)](https://github.com/micro-ROS/system_modes/actions/workflows/ci.yaml?query=workflow%3A%22Test+system+modes%22)                                                           | [![](https://img.shields.io/github/issues/micro-ROS/system_modes.svg)](https://github.com/micro-ROS/system_modes/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/system_modes.svg)](https://github.com/micro-ROS/system_modes/pulls)                                                                             | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/system_modes/blob/master/README.md)                    |
| [rclc](https://github.com/ros2/rclc) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/ros2/rclc/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/ros2/rclc/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/ros2/rclc/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/ros2/rclc/tree/rolling) | Set of convenience functions and additional concepts, such as executor, to extend the capabilities of ROS 2 `rcl` in C | [![Build Status](https://github.com/ros2/rclc/actions/workflows/ci.yml/badge.svg)](https://github.com/ros2/rclc/actions/workflows/ci.yml?query=workflow%3A%22CI+RCLC%22)                                                                                                           | [![](https://img.shields.io/github/issues/ros2/rclc.svg)](https://github.com/ros2/rclc/issues) [![](https://img.shields.io/github/issues-pr/ros2/rclc.svg)](https://github.com/ros2/rclc/pulls)                                                                                                                                 | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/ros2/rclc/blob/master/README.md)                                 |


## Example Application Repositories Status

| Name                                                                                                                                                                                                                                                                                                      | Description                                                                                                   | CI                                                                                                                                                                      | Issues / Pull Requests                                                                                                                                                                                                                                                                              | Documentation                                                                                                                       |
| :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------ | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------- |
| [micro-ROS-demos](https://github.com/micro-ROS/micro-ROS-demos) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro-ROS-demos/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro-ROS-demos/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro-ROS-demos/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro-ROS-demos/tree/rolling) | Collection of generic demos, using publishers, subscribers, custom messages, services and graph introspection | [![Build status](https://github.com/micro-ROS/micro-ROS-demos/actions/workflows/ci.yml/badge.svg)](https://github.com/micro-ROS/micro-ROS-demos/actions?query=workflow%3ACI) | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS-demos.svg)](https://github.com/micro-ROS/micro-ROS-demos/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS-demos.svg)](https://github.com/micro-ROS/micro-ROS-demos/pulls)                                     | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro-ROS-demos/blob/kilted/README.md)          |
| [freertos_apps](https://github.com/micro-ROS/freertos_apps)  [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/freertos_apps/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/freertos_apps/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/freertos_apps/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/freertos_apps/tree/rolling)                                                                                                                               | Demo applications for FreeRTOS                                                                                | [![](https://img.shields.io/badge/-unavailable-lightgrey)]()                                                                                                            | [![](https://img.shields.io/github/issues/micro-ROS/freertos_apps.svg)](https://github.com/micro-ROS/freertos_apps/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/freertos_apps.svg)](https://github.com/micro-ROS/freertos_apps/pulls)                                             | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/freertos_apps/blob/kilted/README.md)            |
| [zephyr_apps](https://github.com/micro-ROS/zephyr_apps)  [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/zephyr_apps/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/zephyr_apps/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/zephyr_apps/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/zephyr_apps/tree/rolling)                                                                                                                                     | Demo applications for Zephyr                                                                                  | [![](https://img.shields.io/badge/-unavailable-lightgrey)]()                                                                                                            | [![](https://img.shields.io/github/issues/micro-ROS/zephyr_apps.svg)](https://github.com/micro-ROS/zephyr_apps/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/zephyr_apps.svg)](https://github.com/micro-ROS/zephyr_apps/pulls)                                                     | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/zephyr_apps/blob/kilted/README.md)              |
| [raspbian_apps](https://github.com/micro-ROS/raspbian_apps) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/raspbian_apps/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/raspbian_apps/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/raspbian_apps/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/raspbian_apps/tree/rolling)                                                                                                                                 | Demo applications for Raspbian                                                                                | [![](https://img.shields.io/badge/-unavailable-lightgrey)]()                                                                                                            | [![](https://img.shields.io/github/issues/micro-ROS/raspbian_apps.svg)](https://github.com/micro-ROS/raspbian_apps/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/raspbian_apps.svg)](https://github.com/micro-ROS/raspbian_apps/pulls)                                             | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/raspbian_apps/blob/kilted/README.md)            |
| [nuttx_apps](https://github.com/micro-ROS/nuttx_apps) [![](https://img.shields.io/badge/ROS-dashing-brightgreen)](https://github.com/micro-ROS/nuttx_apps/tree/dashing) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/nuttx_apps)                       | Demo applications for NuttX (**discontinued**)                                                                | [![](https://img.shields.io/badge/-unavailable-lightgrey)]()                                                                                                            | [![](https://img.shields.io/github/issues/micro-ROS/nuttx_apps.svg)](https://github.com/micro-ROS/nuttx_apps/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/nuttx_apps.svg)](https://github.com/micro-ROS/nuttx_apps/pulls)                                                         | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/nuttx_apps)               |
| [Kobuki demo](https://github.com/micro-ROS/micro-ROS_kobuki_demo)                                                                                                                                                                                                                                         | Kobuki (Turtlebot 2) controller demo application using micro-ROS in an Olimex board over NuttX                | [![](https://img.shields.io/badge/-unavailable-lightgrey)]()                                                                                                            | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS_kobuki_demo.svg)](https://github.com/micro-ROS/micro-ROS_kobuki_demo/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS_kobuki_demo.svg)](https://github.com/micro-ROS/micro-ROS_kobuki_demo/pulls)             | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro-ROS_kobuki_demo/blob/master/README.md)  |
| [Crazyflie demo](https://github.com/micro-ROS/micro-ROS_crazyflie_demo) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/tree/foxy) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/tree/foxy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/tree/foxy) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/tree/foxy)                                                                                                         | Crazyflie drone demo application using micro-ROS over FreeRTOS                                                | [![](https://img.shields.io/badge/-unavailable-lightgrey)]()                                                                                                            | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS_crazyflie_demo.svg)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS_crazyflie_demo.svg)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/blob/foxy/README.md) |

## Docker Images Status

| Image                            | Description                                                                                                                    | Status                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| -------------------------------- | ------------------------------------------------------------------------------------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| base                             | Base image with a ROS 2 installation + micro-ROS specific build system tools. Used as base of any other micro-ROS image | [![Version](https://img.shields.io/docker/v/microros/base/humble?logo=docker)](https://hub.docker.com/r/microros/base/tags?page=1&name=humble) [![Version](https://img.shields.io/docker/v/microros/base/jazzy?logo=docker)](https://hub.docker.com/r/microros/base/tags?page=1&name=jazzy) [![Version](https://img.shields.io/docker/v/microros/base/kilted?logo=docker)](https://hub.docker.com/r/microros/base/tags?page=1&name=kilted) [![Version](https://img.shields.io/docker/v/microros/base/rolling?logo=docker)](https://hub.docker.com/r/microros/base/tags?page=1&name=rolling)                                                                                                                    |
| micro-ros-agent                  | Image containing a pre-compiled micro-ROS-Agent, ready to use as a standalone application                                      | [![Version](https://img.shields.io/docker/v/microros/micro-ros-agent/humble?logo=docker)](https://hub.docker.com/r/microros/micro-ros-agent/tags?page=1&name=humble) [![Version](https://img.shields.io/docker/v/microros/base/jazzy?logo=docker)](https://hub.docker.com/r/microros/micro-ros-agent/tags?page=1&name=jazzy) [![Version](https://img.shields.io/docker/v/microros/micro-ros-agent/kilted?logo=docker)](https://hub.docker.com/r/microros/micro-ros-agent/tags?page=1&name=kilted) [![Version](https://img.shields.io/docker/v/microros/micro-ros-agent/rolling?logo=docker)](https://hub.docker.com/r/microros/micro-ros-agent/tags?page=1&name=rolling)                                                                        |
| micro_ros_static_library_builder | Allows to use a pre-compiled micro-ROS library to develop applications using Arduino IDE                                       | [![Version](https://img.shields.io/docker/v/microros/micro_ros_static_library_builder/humble?logo=docker)](https://hub.docker.com/r/microros/micro_ros_static_library_builder/tags?page=1&name=humble) [![Version](https://img.shields.io/docker/v/microros/base/jazzy?logo=docker)](https://hub.docker.com/r/microros/micro_ros_static_library_builder/tags?page=1&name=jazzy) [![Version](https://img.shields.io/docker/v/microros/micro_ros_static_library_builder/kilted?logo=docker)](https://hub.docker.com/r/microros/micro_ros_static_library_builder/tags?page=1&name=kilted) [![Version](https://img.shields.io/docker/v/microros/micro_ros_static_library_builder/rolling?logo=docker)](https://hub.docker.com/r/microros/micro_ros_static_library_builder/tags?page=1&name=rolling)    |
| micro-ros-demos                  | Contains pre-compiled micro-ROS demo applications, ready to use to get a taste of micro-ROS capabilities (**discontinued**)                       | [![Version](https://img.shields.io/docker/v/microros/micro-ros-demos/foxy?logo=docker)](https://hub.docker.com/r/microros/micro-ros-demos/tags?page=1&name=foxy)                                                                    |
| micro-ros-olimex-nuttx           | Contains a ready to flash example for  Olimex STM32 E407 (**discontinued**)                                                                      |  [![Version](https://img.shields.io/docker/v/microros/micro-ros-demos/dashing?logo=docker)](https://hub.docker.com/r/microros/micro-ros-demos/tags?page=1&name=dashing)                                          |
| esp-idf-microros                 | Allows to use micro-ROS as a component of the ESP-IDF build system  (**discontinued**)                                                            | [![Version](https://img.shields.io/docker/v/microros/esp-idf-microros/latest?logo=docker)](https://hub.docker.com/r/microros/esp-idf-microros/tags?page=1&name=latest)                                                                    |

## Webpage Source Code Repository Status

| Repository                                                              | Description                            | CI                                                                                                                                                            | Issues                                                                                                                                 | Pull Requests                                                                                                                            |
| :---------------------------------------------------------------------- | :------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------- |
| [micro-ROS.github.io](https://github.com/micro-ROS/micro-ROS.github.io) | Micro-ROS official webpage repository. | [![](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/pages/pages-build-deployment/badge.svg)](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/pages/pages-build-deployment) [![](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/generate_api_reference.yml/badge.svg)](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/generate_api_reference.yml) [![](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/ci.yml/badge.svg)](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/ci.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS.github.io.svg)](https://github.com/micro-ROS/micro-ROS.github.io/issues) | [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS.github.io.svg)](https://github.com/micro-ROS/micro-ROS.github.io/pulls) |


## Bloom Release Status of Code Repository ros2/rclc

Bloom release status of packages in repository [github.com/ros2/rclc/](https://github.com/ros2/rclc) for different architectures and releases.

| Package                                                                    | Release  | amd64                                                                                                                                                                                                     | arm64                                                                                                                                                                                                                             |
| :------------------------------------------------------------------------- | :------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [rclc](https://github.com/ros2/rclc/tree/rolling/rclc)                     | Humble   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Hpr__rclc__ubuntu_jammy_amd64)](https://build.ros2.org/job/Hpr__rclc__ubuntu_jammy_amd64/)                                                   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Hbin_ujv8_uJv8__rclc__ubuntu_jammy_arm64__binary)](https://build.ros2.org/job/Hbin_ujv8_uJv8__rclc__ubuntu_jammy_arm64__binary/) |
|                                                                            | Jazzy    | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Jpr__rclc__ubuntu_noble_amd64)](https://build.ros2.org/job/Jpr__rclc__ubuntu_noble_amd64/)                                                   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Jbin_unv8_uNv8__rclc__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Jbin_unv8_uNv8__rclc__ubuntu_noble_arm64__binary/) |
|                                                                            | Kilted   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Kpr__rclc__ubuntu_noble_amd64)](https://build.ros2.org/job/Kpr__rclc__ubuntu_noble_amd64/)                                                   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Kbin_unv8_uNv8__rclc__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Kbin_unv8_uNv8__rclc__ubuntu_noble_arm64__binary/) |
|                                                                            | Rolling  | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Rpr__rclc__ubuntu_noble_amd64)](https://build.ros2.org/job/Rpr__rclc__ubuntu_noble_amd64/)                                                   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Rbin_ufv8_uFv8__rclc__ubuntu_jammy_arm64__binary)](https://build.ros2.org/job/Rbin_ufv8_uFv8__rclc__ubuntu_jammy_arm64__binary/) |
| [rclc_examples](https://github.com/ros2/rclc/tree/rolling/rclc_examples)   | Humble   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Hbin_uJ64__rclc_examples__ubuntu_jammy_amd64__binary)](https://build.ros2.org/job/Hbin_uJ64__rclc_examples__ubuntu_jammy_amd64__binary/)     | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Hbin_ujv8_uJv8__rclc_examples__ubuntu_jammy_arm64__binary)](https://build.ros2.org/job/Hbin_ujv8_uJv8__rclc_examples__ubuntu_jammy_arm64__binary/) |
|                                                                            | Jazzy    | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Jbin_uN64__rclc_examples__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Jbin_uN64__rclc_examples__ubuntu_noble_amd64__binary/)     | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Jbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Jbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary/) |
|                                                                            | Kilted   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Kbin_uN64__rclc_examples__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Kbin_uN64__rclc_examples__ubuntu_noble_amd64__binary/)     | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Kbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Kbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary/) |
|                                                                            | Rolling  | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Rbin_uN64__rclc_examples__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Rbin_uN64__rclc_examples__ubuntu_noble_amd64__binary/)     | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Rbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Rbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary/) |
| [rclc_lifecycle](https://github.com/ros2/rclc/tree/rolling/rclc_lifecycle) | Humble   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Hbin_uJ64__rclc_lifecycle__ubuntu_jammy_amd64__binary)](https://build.ros2.org/job/Hbin_uJ64__rclc_lifecycle__ubuntu_jammy_amd64__binary/)   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Hbin_ujv8_uJv8__rclc_lifecycle__ubuntu_jammy_arm64__binary)](https://build.ros2.org/job/Hbin_ujv8_uJv8__rclc_lifecycle__ubuntu_jammy_arm64__binary/) |
|                                                                            | Jazzy    | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Jbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Jbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary/)   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Jbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Jbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary/) |
|                                                                            | Kilted   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Kbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Kbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary/)   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Kbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Kbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary/) |
|                                                                            | Rolling  | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Rbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Rbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary/)   | [![Build Status](https://build.ros2.org/buildStatus/icon?job=Rbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Rbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary/) |

---

## Source: `_docs/overview/ext_tools/index.md`
<a id="source-docs-overview-ext-tools-index-md"></a>

<style>
.extplatcontainer {
  height: 300px;
  display: flex;
  flex-direction: row;
  justify-content: flex-start;
  flex-wrap: wrap;
}

.extplatitem_image {
  width: 35%;
  display: flex;
  align-items: center;
  justify-content: center;
}

.extplatitem_description {
  width: 65%;
}

.extplatitem_image img {
    max-width: 100%;
}
</style>

micro-ROS aims to **bring ROS 2 to microcontrollers** to allow having first-class ROS 2 entities in the embedded world.

One of the approaches offered by micro-ROS to build an application for embedded platforms consists in a [ROS-specific build system](https://github.com/micro-ROS/micro_ros_setup) comprising modules which integrate the software for cross-compiling said apps on the supported plaforms, both hardware and firmware-wise. A different approach consists in generating standalone modules and components allowing to integrate micro-ROS into external or custom development frameworks, made possible by a [tool dedicated to compiling micro-ROS as a standalone library](../../tutorials/advanced/create_custom_static_library).

The configuration of the generated micro-ROS libraries is based on a `colcon.meta` file.

The modules that exist up to date for integrating into external build systems are the following:

### **Vulcanexus micro-ROS element**

<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
      <a href="https://vulcanexus.org">Vulcanexus</a> is an all-in-one ROS 2 tool set for easy and customized robotics development. It offers natively integrated solutions for ROS 2 networks in terms of performance improvement, simulation, cloud/edge communication, and microcontroller integration. The latter relies on micro-ROS. Vulcanexus is free and open source, and available as a Docker image for Humble and Iron. All components enjoy continuous updates so users benefit from the latest features at all times.
    </div>
  </div>
</div>

### **micro-ROS component for the ESP-IDF**

<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
        ESP-IDF is the official development framework for the ESP32, ESP32-S and ESP32-C Series SoCs.
        To date, it has been tested in ESP-IDF v4.1 and v4.2 with ESP32 and ESP32-S2.
        The <i>micro-ROS component for the ESP-IDF</i> allows the user to integrate the micro-ROS API and utilities in an already created ESP-IDF project just by cloning or copying a folder.
        The current ports support <a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/uart.html">Serial (UART)</a>,
        <a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/network/esp_wifi.html">WiFi</a>, and <a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/network/index.html#ethernet">Ethernet</a>.
        <hr><b>Resources:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_espidf_component">micro-ROS component for ESP-IDF on GitHub</a></li>
            <li><a href="https://github.com/espressif/esp-idf">ESP-IDF on GitHub</a></li>
            <li><a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/">ESP-IDF docs</a></li>
        </ul>
    </div>
  </div>

  <div class="extplatitem_image">
    <img src="https://www.espressif.com/sites/all/themes/espressif/logo-black.svg">
  </div>
</div>

### **micro-ROS module for the Zephyr build system**

<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
        Zephyr is a scalable RTOS built with security in mind, and based on a small-footprint kernel designed for use on resource-constrained systems.
        The Zephyr kernel supports multiple hardware architectures, including ARM Cortex-M, Intel x86, ARC, Nios II, Tensilica Xtensa, and RISC-V, and can count with <a href="https://docs.zephyrproject.org/latest/boards/index.html">large number of supported boards</a>.
        The <i>micro-ROS module for Zephyr</i> allows to integrate the micro-ROS API and utilities in an existing Zephyr-based project just by cloning or copying a folder.
        <hr><b>Resources:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_zephyr_module">micro-ROS module for Zephyr build system on GitHub</a></li>
            <li><a href="https://github.com/zephyrproject-rtos/zephyr">Primary GitHub repository for the Zephyr Project</a></li>
            <li><a href="https://github.com/zephyrproject-rtos/zephyr">Zephyr Project official webpage</a></li>
        </ul>
    </div>
  </div>

  <div class="extplatitem_image">
    <img src="img/_posts/logo-zephyr.jpg">
  </div>
</div>

### **micro-ROS for Arduino**

<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
        Arduino is an open-source platform based on an I/O board and a development environment that implements the Processing/Wiring language, intended to enable users to easily generate interactive projects. A CLI is also offered, which aims to be an all-in-one solution providing the tools needed to use any Arduino compatible platform from the command line.
        The <i>micro-ROS for Arduino</i> support package is a special <i>bare-metal</i> port of micro-ROS provided as a set of precompiled libraries for specific platforms.
        <hr><b>Resources:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_arduino">micro-ROS for Arduino on GitHub</a></li>
            <li><a href="https://github.com/arduino/Arduino">Arduino IDE on GitHub</a></li>
            <li><a href="https://github.com/arduino/arduino-cli">Arduino CLI on GitHub</a></li>
            <li><a href="https://www.arduino.cc/">Arduino official website</a></li>
        </ul>
    </div>
  </div>

  <div class="extplatitem_image">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Arduino_Logo.svg/720px-Arduino_Logo.svg.png" width="190">
  </div>
</div>

### **micro-ROS for STM32CubeMX**


<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
        The STM32CubeMX is a graphical tool by ST for configuring STM32 microcontrollers and microprocessors. It enables to optimally program and manipulate the software thanks to a set of utilities that help setting up pinouts, peripherals, and middleware stacks.
        <i>micro-ROS for STM32CubeMX</i> can be configured using the static library builder <a href="https://hub.docker.com/r/microros/micro_ros_static_library_builder/">docker image</a>  and allows micro-ROS to be virtually supported by the full set of boards offered by <a href="https://www.st.com">STMicroelectronics</a>, in turn enabling the seamless integration of micro-ROS into any STM32 controller based project.
        <hr><b>Resources:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_stm32cubemx_utils">micro-ROS for STM32CubeMX on GitHub</a></li>
            <li><a href="https://www.st.com">STMicroelectronics official webpage</a></li>
            <li><a href="https://github.com/STMicroelectronics/STM32Cube_MCU_Overall_Offer">STMicroelectronics official webpage</a></li>
        </ul>
    </div>
  </div>

  <div class="extplatitem_image">
    <img src="https://www.pinclipart.com/picdir/big/453-4531945_read-more-stm32cubemx-logo-clipart.png" width="190">
  </div>
</div>

{% include logos_disclaimer.md %}

---

## Source: `_docs/overview/features/index.md`
<a id="source-docs-overview-features-index-md"></a>

<script src="https://code.jquery.com/jquery-1.12.4.min.js"></script>
<script>
function updateVisibilityOfFeatureDescriptions() {
  $('.feature').not('feature_is_active').find('.three_dots').show();
  $('.feature').not('feature_is_active').find('.feature_description').slideUp(500);
  $('.feature_is_active').find('.three_dots').hide();
  $('.feature_is_active').find('.feature_description').slideDown(500);
}

$(document).ready( function() {
  $('.feature_description').hide();
  updateVisibilityOfFeatureDescriptions();

  $('.feature').click( function() {
    if ($(this).hasClass("feature_is_active")) {
      $(this).removeClass("feature_is_active");
    } else {
      $('.feature').removeClass("feature_is_active");
      $(this).addClass("feature_is_active");
    }
    updateVisibilityOfFeatureDescriptions();
  });
});
</script>

<style>
  .three_dots {
    color: #BBBBBB;
  }
  .feature_title {
    font-weight: bold;
    margin: 8pt 0 2pt 0;
  }
  .feature_description {
    margin-left: 3em;
  }
  .feature_description > p {
    margin: 0 0 2pt 0;
  }
</style>

Micro-ROS offers **seven key features** that make it ready for use in your microcontroller-based robotic project:

<div class="feature feature_is_active">
 <div class="feature_title">&#10004; Microcontroller-optimized client API supporting all major ROS concepts<span class="three_dots"> (...)</span></div>
 <div class="feature_description">
  <p>Micro-ROS brings all major core concepts such as nodes, publish/subscribe, client/service, node graph, lifecycle, etc. onto microcontrollers (MCU). The client API of micro-ROS (in the C programming language) is based on the standard ROS 2 Client Support Library (rcl) and a set of extensions and convenience functions (rclc).</p>
  <p>The combination rcl+rclc is optimized for MCUs. After an initialization phase, it can be used without any dynamic memory allocations. The rclc package provides advanced execution mechanisms allowing implementing well-proven scheduling patterns from embedded systems engineering.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">&#10004; Seamless integration with ROS 2<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>The micro-ROS agent connects micro-ROS nodes (i.e. components) on MCUs seamlessly with standard ROS 2 systems. This allows accessing micro-ROS nodes with the known ROS 2 tools and APIs just as normal ROS nodes.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">&#10004; Extremely resource-constrained but flexible middleware<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>Micro XRCE-DDS by eProsima meets all requirements for a middleware for deeply embedded systems. That is why micro-ROS has been one of the applications for this implementation of the new DDS for Extremely Resource Constrained Environments (XRCE) standard. For the integration with the ROS middleware interface (rmw) in the micro-ROS stack, static memory pools were introduced to avoid dynamic memory allocations at runtime.</p>
  <p>The middleware comes with built-in support for serial transports, UDP over Ethernet, Wi-Fi, and 6LoWPAN, and Bluetooth. Furthermore, the Micro XRCE-DDS source code provides templates for implementing support for further transports.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">&#10004; Multi-RTOS support with generic build system<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>Micro-ROS supports three popular open-source real-time operating sytems (RTOS): FreeRTOS, Zephyr, and NuttX. It can be ported on any RTOS that comes with a POSIX interface.</p>
  <p>The RTOS-specific build systems are integrated into few generic setup scripts, which are provided as a ROS 2 package. Therefore, ROS developers can use their usual command line tools. In addition, micro-ROS provides selected integrations with RTOS-specific tool chains (e.g., for ESP-IDF and Zephyr).</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">&#10004; Permissive license<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>Micro-ROS comes under the same permissive license as ROS 2, which is Apache License 2.0. This applies to the micro-ROS client library, the middleware layer, and tools.</p>
  <p>When creating a project with an underlying RTOS, please take into account the license(s) of the RTOS project or vendor as further explained on the <a href="../license/">license</a> page.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">&#10004; Vibrant community and ecosystem<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>Micro-ROS is developed by a constantly growing, self-organized community backed by the Embedded Working Group, a formal ROS 2 Working Group. The community shares entry level tutorials, provides support via Slack and GitHub, and meets in public Working Group video-calls on a monthly basis. As a matter of course, commercial support is provided for the Micro XRCE-DDS by eProsima.</p>
  <p>This community also create tools around micro-ROS. For example, to optimize micro-ROS-based applications to the MCU hardware, specific benchmarking tools have been developed. These allow checking memory usage, CPU time consumption and general performance.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">&#10004; Long-term maintainability and interoperability<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>Micro-ROS is made up of well-established components: Famous open-source RTOSs, a standardized middleware, and the standard ROS 2 Client Support Library (rcl). In this way, the amount of micro-ROS-specific code was minimized for long-term maintainability. At the same time, the micro-ROS stack preserves the modularity of the standard ROS 2 stack. Micro-ROS can be used with a custom middleware layer - and thus standard - or a custom ROS client library.</p>
  <p>Furthermore, by the <a href="https://soss.docs.eprosima.com/">System-Of-Systems Synthesizer</a> (SOSS), a fast and lightweight <a href="https://www.omg.org/spec/DDS-XTypes">OMG DDS-XTYPES standard</a> integration tool, further middleware protocols can be connected. For example, we have developed the SOSS-FIWARE and SOSS-ROS2 System-Handles, which connect ROS 2 and micro-ROS with the <a href="https://www.fiware.org/">FIWARE Context Broker</a> by the NGSIv2 (Next Generation Service Interface) standard by leveraging the integration capabilities of the SOSS core.</p>
 </div>
</div>

## Layered and Modular Architecture

Micro-ROS follows the [ROS 2 architecture](https://docs.ros.org/en/rolling/Concepts/Advanced/About-Internal-Interfaces.md) and makes use of its middleware pluggability to use [DDS-XRCE](https://www.omg.org/spec/DDS-XRCE/), which is optimized for microcontrollers. Moreover, it uses POSIX-based RTOS (FreeRTOS, Zephyr, or NuttX) instead of Linux.

<img src="img/micro-ROS_architecture.png" style="display: block; margin: auto; width: 100%; max-width: 500px;"/>

Dark blue components are developed specifically for micro-ROS. Light blue components are taken from the standard ROS 2 stack. We seek to contribute as much code back to the ROS 2 mainline codebase as possible.

---

## Source: `_docs/overview/hardware/index.md`
<a id="source-docs-overview-hardware-index-md"></a>

<style>
.hardwarecontainer {
  height: 380px;
  display: flex;
  flex-direction: row;
  justify-content: flex-start;
  flex-wrap: wrap;
}

.hardwareitem_image {
  width: 40%;
  display: flex;
  align-items: center;
  justify-content: center;
}

.hardwareitem_description {
  width: 60%;
}

.hardwareitem_image img {
    max-width: 100%;
    max-height: 80%;
}

.bulletimage{
  max-width: 17px;
  display: inline;
  vertical-align: text-top;
}
</style>

Micro-ROS aims to **bring ROS 2 to a wide set of microcontrollers** to allow having first-class ROS 2 entities in the embedded world.

The main targets of micro-ROS are mid-range 32-bits microcontroller families. Usually, the minimum requirements for running micro-ROS in an embedded platform are memory constraints. Since memory usage in micro-ROS is a complex matter we provide a [complete article](/_docs/concepts/benchmarking/benchmarking/) describing it and a tutorial on [how to tune the memory consuption](../../tutorials/advanced/microxrcedds_rmw_configuration/) in the micro-ROS middleware.

In general micro-ROS will need MCUs that have tens of kilobytes of RAM memory and communication peripherals that enable the micro-ROS [Client to Agent communication](../features/).

The micro-ROS hardware support is divided into two categories:
- Officially supported boards
- Community supported boards

*In order to check the most recent hardware support visit the [micro_ros_setup repo](https://github.com/micro-ROS/micro_ros_setup)*.

## Officially supported boards

The officially supported boards are those which have been carried out or tested officially, and to which LTS is guaranteed.

<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Renesas EK RA6M5</b> and <b>e2studio</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: ARM Cortex M-33 core @ 200 MHz</li>
            <li>RAM: 512 kB</li>
            <li>Flash: up to 2 MB</li>
            <li>Peripherals: Ethernet, SCI, SPI, I2C, I2S, UART, USB, SDIO, CAN, GPIO, ADC/DAC, PWM</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.renesas.com/us/en/products/microcontrollers-microprocessors/ra-cortex-m-mcus/ek-ra6m5-evaluation-kit-ra6m5-mcu-group">Official website</a></li>
            <li><a href="https://www.renesas.com/us/en/products/microcontrollers-microprocessors/ra-cortex-m-mcus/ra6m5-200mhz-arm-cortex-m33-trustzone-highest-integration-ethernet-and-can-fd">Datasheet</a></li>
            <li><a href="https://www.renesas.com/us/en/application/technologies/robotics">HW support information</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> <a href="https://www.freertos.org/">FreeRTOS</a>, <a href="https://docs.microsoft.com/en-us/azure/rtos/threadx/">ThreadX</a> and Bare-metal</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        UDP, UART, USB-CDC
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/renesas.png">
  </div>
</div>

<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Espressif ESP32</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: ultra-low power dual-core Xtensa LX6</li>
            <li>RAM: 520 kB</li>
            <li>Flash: 4 MB</li>
            <li>Peripherals: Ethernet MAC, Wi-Fi 802.11 b/g/n, Bluetooth v4.2 BR/EDR, BLE, SPI, I2C, I2S, UART, SDIO, CAN, GPIO, ADC/DAC, PWM  </li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.espressif.com/en/products/socs/esp32">Official website</a></li>
            <li><a href="https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32e_esp32-wroom-32ue_datasheet_en.pdf">Datasheet</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>External tools:</b> <a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/">ESP-IDF</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        UART, WiFi UDP, Ethernet UDP
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/esp32.jpg">
  </div>
</div>


<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Arduino Portenta H7</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: Dual-core Arm Cortex-M7 and Cortex-M4</li>
            <li>RAM: 8 MB</li>
            <li>Flash: 16 MB</li>
            <li>Peripherals: USB HS, Ethernet, WiFi/BT...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://store.arduino.cc/portenta-h7">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> &ndash;</li>
            <li><b>External tools:</b> <a href="https://www.arduino.cc/">Arduino</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        USB, WiFi UDP
  </div>
</div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/portenta.jpg">
  </div>
</div>


<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Raspberry Pi Pico RP2040</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: Dual-core Arm Cortex-M0+</li>
            <li>RAM: 264 kB</li>
            <li>Flash: up to 16 MB</li>
            <li>Peripherals: I2C, SPI, PIO...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.raspberrypi.org/products/raspberry-pi-pico/">Official website</a></li>
            <li><a href="https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk">micro-ROS support package</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> &ndash;</li>
            <li><b>External tools:</b> <a href="https://github.com/raspberrypi/pico-sdk">Raspberry Pi Pico SDK</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/rpipico.jpg">
  </div>
</div>


<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>ROBOTIS OpenCR 1.0</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: ARM Cortex-M7 STM32F746ZGT6</li>
            <li>RAM: 320 kB</li>
            <li>Flash: 1024 kB</li>
            <li>Peripherals: 3-axis IMU, Dynamixel ports, SPI, I2C... </li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://emanual.robotis.com/_docs/en/parts/controller/opencr10/">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> &ndash;</li>
            <li><b>External tools:</b> <a href="https://www.arduino.cc/">Arduino</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/opencr10.png">
  </div>
</div>


<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Teensy 3.2</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: ARM Cortex-M4 MK20DX256VLH7</li>
            <li>RAM: 64 kB</li>
            <li>Flash: 256 kB</li>
            <li>Peripherals: USB, SPI, I2C, CAN, I2S... </li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.pjrc.com/teensy/teensy31.html">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> &ndash;</li>
            <li><b>External tools:</b> <a href="https://www.arduino.cc/">Arduino</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/teensy32.jpg">
  </div>
</div>


<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Teensy 4.0/4.1</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: ARM Cortex-M7 iMXRT1062</li>
            <li>RAM: 1024 kB</li>
            <li>Flash: 2048 kB</li>
            <li>Peripherals: USB, PWM, SPI, I2C, CAN, I2S, SDIO,... </li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.pjrc.com/store/teensy40.html">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> &ndash;</li>
            <li><b>External tools:</b> <a href="https://www.arduino.cc/">Arduino</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        USB, UART, Ethernet UDP (4.1)
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/teensy41.jpg">
  </div>
</div>


<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Crazyflie 2.1 Drone</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: ARM Cortex-M4 STM32F405</li>
            <li>RAM: 192 kB</li>
            <li>Flash: 1 MB</li>
            <li>Peripherals: 3 axis IMU, pressure sensor, SPI, I2C, UART, nRF51822 radio...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.bitcraze.io/products/crazyflie-2-1/">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>External tools:</b> &ndash;</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        Custom Radio Link
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/3.jpg">
  </div>
</div>


<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>STM32L4 Discovery kit IoT</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: ARM Cortex-M4 STM32L4</li>
            <li>RAM: 128 kB</li>
            <li>Flash: 1 MB</li>
            <li>Peripherals: Bluetooth, low-power RF module, 802.11 b/g/n, NFC, 2 digital microphone, temperature/humidity sensor, 3 axis IMU, ToF sensor...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.st.com/en/evaluation-tools/b-l475e-iot01a.html">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> <a href="https://www.zephyrproject.org/">Zephyr</a></li>
            <li><b>External tools:</b> <a href="https://www.zephyrproject.org/">Zephyr</a> build system</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        USB, UART, Ethernet UDP
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/2.jpg">
  </div>
</div>


<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Olimex LTD STM32-E407</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: STM32F407ZGT6 Cortex-M4F</li>
            <li>RAM: 196 kB</li>
            <li>Flash: 1 MB</li>
            <li>Peripherals:  USB OTG, Ethernet, SD Card slot, SPI, CAN, I2C... </li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware">Official website</a></li>
            <li><a href="https://github.com/OLIMEX/STM32F4/blob/master/HARDWARE/STM32-E407/STM32-E407_Rev_F.pdf">Schematics</a></li>
            <li><a href="https://www.olimex.com/Products/ARM/ST/STM32-E407/resources/STM32-E407.pdf">User Manual</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> <a href="https://www.zephyrproject.org/">Zephyr</a>, <a href="https://www.freertos.org/">FreeRTOS</a>, <a href="https://nuttx.apache.org/">NuttX</a></li>
            <li><b>External tools:</b> <a href="https://www.zephyrproject.org/">Zephyr</a> build system</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        USB (Z, N), UART (Z, F, N), Ethernet UDP (F, N)
        <br><i><b>Note:</b> Only RTOS initials used for convenience.</i>
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="https://www.olimex.com/Products/ARM/ST/STM32-E407/images/STM32-E407-02.jpg">
  </div>
</div>

## Community supported boards

The micro-ROS community supported boards are contributions of micro-ROS' users and community, and are not guaranteed to be officially supported.

<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Arduino Due</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: ARM Cortex-M3 AT91SAM3X8E</li>
            <li>RAM: 96 kB</li>
            <li>Flash: 512 kB</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://store.arduino.cc/arduino-due">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> &ndash;</li>
            <li><b>External tools:</b> <a href="https://www.arduino.cc/">Arduino</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/arduinodue.jpg">
  </div>
</div>

<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>Arduino Zero</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>Key features:</b>
        <ul>
            <li>MCU: ARM Cortex-M0+ ATSAMD21G18</li>
            <li>RAM: 32 kB</li>
            <li>Flash: 256 kB</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://store.arduino.cc/arduino-zero">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> &ndash;</li>
            <li><b>External tools:</b> <a href="https://www.arduino.cc/">Arduino</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/arduinozero.jpg">
  </div>
</div>

<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>ST NUCLEO-F446ZE</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.st.com/en/evaluation-tools/nucleo-f446ze.html">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>External tools:</b> <a ref="https://www.st.com/en/development-tools/stm32cubemx.html">STM32CubeMX</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/NUCLEO-F446ZE.jpg">
  </div>
</div>

<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>ST NUCLEO-F746ZG</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.st.com/en/evaluation-tools/nucleo-f746zg.html">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>External tools:</b> <a ref="https://www.st.com/en/development-tools/stm32cubemx.html">STM32CubeMX</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/NUCLEO-F746ZG.jpg">
  </div>
</div>

<div class="hardwarecontainer">
  <div class="hardwareitem_description">
    <h3><b>ST NUCLEO-H743ZI</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>Resources:</b>
        <ul>
            <li><a href="https://www.st.com/en/evaluation-tools/nucleo-h743zi.html">Official website</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>Supported platforms:</b>
        <ul>
            <li><b>RTOSes:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>External tools:</b> <a ref="https://www.st.com/en/development-tools/stm32cubemx.html">STM32CubeMX</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>Supported transports:</b>
        UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/NUCLEO-H743ZI.jpg">
  </div>
</div>

---

## Source: `_docs/overview/license/index.md`
<a id="source-docs-overview-license-index-md"></a>

This page gives a coarse overview to the license situation of micro-ROS. It is not intended as a legal advice and it does not relieve you to look at the license texts of all components that are used by your micro-ROS-based application or system (i.e. “product”).

The following architecture diagram lists the most important repositories with their respective licenses in the form `GitHubOrganization/RepositioryName [LicenseName]`.

<img src="img/micro-ROS_license_overview.png" style="display: block; margin: auto; width: 100%; max-width: 650px;"/>

All packages taken from standard ROS 2 come under the [Apache 2.0 license](https://www.apache.org/licenses/LICENSE-2.0). Similarly, all middleware- and client-library-related packages that have been created in the micro-ROS project are provided under Apache 2.0. In the same way, eProsima’s implementation of the DDS-XRCE standard named Micro XRCE-DDS is provided under Apache 2.0.

One exception is the micro-ROS benchmarking tool. As it links against GPL v3 licensed libraries, it is itself provided under GPL v3. As long as the tool is used by you during development only but not included in the distributed product, this does not affect the license of your product.

Things get particularly interesting at the RTOS level: The micro-ROS build tool micro_ros_setup and the various modules for external build systems are provided under Apache 2.0 but use or are combined with very differently licensed RTOS and board support components. The fact, that typical embedded toolchains build the whole software (RTOS, micro-ROS and application) into one binary image makes the situation more complex compared to typical desktop operating systems with clear separation of individual executables and the OS kernel (cf. for example the Linux syscall exception to GPL).

We are aware of the following important license specifics in the RTOS supported by micro-ROS:

* NuttX license clearing: With the incubation at The Apache Software Foundation in December 2019, there has been significant license cleanup work. The [changelog for version 10.1](https://cwiki.apache.org/confluence/display/NUTTX/NuttX+10.1) states that thousands of NuttX files have been converted (from BSD) to Apache 2.0 and that the listing of 3rd party licenses used in NuttX has been improved.
* NuttX and uClibc++: Before NuttX version 10, micro-ROS on NuttX required the use of the LGPL-licensed uClibc++ library.
* ST-specific extensions for FreeRTOS: The [micro-ROS/freertos_apps](https://github.com/micro-ROS/freertos_apps/) repository contains extensions for various microcontroller families. Some of the header files for microcontrollers by STMicroelectronics are provided under ST's [Ultimate Liberty license](https://www.st.com/SLA0044), which "must be used and execute solely and exclusively on or in combination with a microcontroller or microprocessor device manufactured by or for STMicroelectronics."
* Third-party licenses in Arm® Mbed™ OS: The licenses of the third-party components are listed in the [LICENSE.md file](https://github.com/ARMmbed/mbed-os/blob/master/LICENSE.md) in the root of the repository.

... and in the corresponding tooling:

* GPL-licensed build scripts in Zepyhr: The third-party licenses are given directly [in the source tree](https://github.com/zephyrproject-rtos/zephyr/), but [docs.zephyrproject.org/latest/LICENSING.html](https://docs.zephyrproject.org/latest/LICENSING.md) states explicitly that few build scripts are used under GPL v2.
* GPL-licensed build tool files in ESP-IDF: The Espressif IoT Development Framework used for the ESP32 includes files menuconfig (Kconfig) and several other build tooling files licensed under GPL v2 or v3.
* Static library for Arduino IDE: The [micro_ros_arduino repository](https://github.com/micro-ROS/micro_ros_arduino) provides a static library `libmicroros.a` of the micro-ROS stack for use with the Arduino IDE. In detail, multiple versions of this library are provided, built for different microcontroller families using suitable cross-compiler configurations. The list of repositories included in the library can be found in the [`built_packages`](https://github.com/micro-ROS/micro_ros_arduino/blob/iron/built_packages) file in the root of the repository.

---

## Source: `_docs/overview/ROS_2_feature_comparison/index.md`
<a id="source-docs-overview-ros-2-feature-comparison-index-md"></a>

Comparison of micro-ROS features with ROS 2 features. The following list has been compiled from [https://docs.ros.org/en/rolling/The-ROS2-Project/Features.html](https://docs.ros.org/en/rolling/The-ROS2-Project/Features.md) and [https://docs.ros.org/en/rolling/The-ROS2-Project/Roadmap.html](https://docs.ros.org/en/rolling/The-ROS2-Project/Roadmap.md), and the features have been organized into sub-tables according to the macrocategories defined in the [Features and Architecture page](https://micro-ros.github.io//_docs/overview/features/).

<style>
  .status_flag {
    font-size: 150%;
    font-weight: bold;
  }
</style>

### Microcontroller-optimized client API supporting all major ROS concepts

| ROS 2 Feature                                                             |                                                  | Availability in micro-ROS                                                                                                                                                                                                                                                                                                                                                                                        |
| ------------------------------------------------------------------------- | ------------------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Common core client library that is wrapped by language-specific libraries | <span class="status_flag">&#10003;&#8728;</span> | Use of the client support library [rcl](https://github.com/ros2/rcl/) from ROS 2 as-is. The [rclc](https://github.com/ros2/rclc) package provides convenience functions and an executor for use of rcl+rclc as client library for the C programming language. *Roadmap: migrate all functionalities to the rclc, so as to make it an independent abstraction layer on top of the rcl that serves as user's API.* |
| Composition of node components at compile-, link- or dlopen-time          | <span class="status_flag">&#10003;</span>        | Composition at compile-time only. Composition at runtime would depend highly on the RTOS.                                                                                                                                                                                                                                                                                                                        |
| Support for nodes with managed lifecycles                                 | <span class="status_flag">&#10003;</span>        | The [rclc_lifecycle](https://github.com/ros2/rclc/blob/master/rclc_lifecycle/) package provides an `rclc_lifecycle_node` type which bundles an rcl node with the lifecycle state machine as well as corresponding convenience functions.                                                                                                                                                                         |
| Utilities for handling types and topics memory statically and dynamically | <span class="status_flag">&#10003;</span>        | The [micro_ros_utilities](https://github.com/micro-ROS/micro_ros_utilities) provides an API for handling types memory using micro-ROS allocators or static memory pools.                                                                                                                                                                                                                                         |

### Seamless integration with ROS 2

| ROS 2 Feature                                                  |                                                  | Availability in micro-ROS                                                                                                                                                                                                                                                                          |
| -------------------------------------------------------------- | ------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Publish/subscribe over topics                                  | <span class="status_flag">&#10003;</span>        | Available, but only fixed-size message types supported to avoid dynamic memory allocations.                                                                                                                                                                                                        |
| Clients and services                                           | <span class="status_flag">&#10003;</span>        | Available, but only fixed-size message types supported to avoid dynamic memory allocations.                                                                                                                                                                                                        |
| ROS 1 -- ROS 2 communication bridge                            | <span class="status_flag">&#10003;</span>        | Standard ROS 1 -- ROS 2 bridge or SOSS-mediate bridge can be used via micro-ROS Agent to communicate with micro-ROS nodes.                                                                        |
| Actions                                                        | <span class="status_flag">&#10003;</span>        | Available at RCLC level.                                                                                                                                                                                                                                                                           |
| Parameters                                                     | <span class="status_flag">&#10003;&#8728;</span> | Parameter server is implemented in micro-ROS Client. Parameter client is not available yet.                                                                                                                                                                                                        |
| Node Graph                                                     | <span class="status_flag">&#10003;</span>        | Available as in ROS 2.                                                                                                                                                                                                                                                                             |
| Discovery                                                      | <span class="status_flag">&#10003;&#43;</span>   | Discovery between entities available as in ROS 2. Further discovery mechanism available for the Clients to discover Agents on the network.                                                                                                                                                         |
| Inter- and intra-process communication using the same API      | <span class="status_flag">&#10003;&#8728;</span> | Shared-memory interprocess communication on the MCU is available in micro-ROS client. Also the middleware can implement thread-safe operation.                                                                                                                                                     |
| Command-line introspection tools using an extensible framework | <span class="status_flag">&#10003;</span>        | Thanks to graph support, standard ROS 2 tools can be used to introspect the topology of the ROS 2 dataspace, via the Agent, from a microprocessor running a micro-ROS node . At the same time, standard ROS 2 nodes can fetch information regarding the micro-ROS entities present on the network. |
| Launch system for coordinating multiple nodes                  | <span class="status_flag">&#8331;</span>         | No launch system for the micro-ROS nodes on an MCU available. Such a system would depend highly on the RTOS. The system-modes concept developed with micro-ROS allows runtime configuration/orchestration of ROS 2 and micro-ROS nodes together.                                                   |
| Namespace support for nodes and topics                         | <span class="status_flag">&#10003;</span>        | Available as in ROS 2.                                                                                                                                                                                                                                                                             |
| Static remapping of ROS names                                  | <span class="status_flag">&#8727;</span>         | *Should be available if passed as argument via standard rcl API -- to be checked.*                                                                                                                                                                                                                 |
| Support of rate and sleep with system clock                    | <span class="status_flag">&#8727;</span>         | rcl timers use POSIX API. Tested successfully on NuttX, but the resolution is very low. A higher resolution could be achieved with hardware timers -- which highly depends on the MCU and possibly the RTOS. *This feature requires further investigation.*                                        |
| Support for simulation time                                    | <span class="status_flag">&#8727;</span>         | *Might be supported out of the box, but needs to be checked.* We consider HIL setups with simulation time to be corner cases.                                                                                                                                                                      |

### Extremely resource-constrained but flexible middleware

| ROS 2 Feature                                               |                                                | Availability in micro-ROS                                                                                                                                                                                                                                                                                                                              |
| ----------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| Transport and serialization over DDS-XRCE and DDS           | <span class="status_flag">&#10003;&#43;</span> | Available transports: UDP, serial (UART) and custom transports as enabled by [Micro XRCE-DDS](https://github.com/eProsima/Micro-XRCE-DDS). Serialization between Client and Agent provided by [Micro-CDR](https://github.com/eProsima/Micro-CDR) and between Agent to standard DDS by [Fast-CDR](https://github.com/eProsima/Fast-CDR).                |
| Support for multiple DDS implementations, chosen at runtime | <span class="status_flag">&#10003;</span>      | Support via the Micro XRCE-DDS Agent is possible in principle, but at compile-time only.                                                                                                                                                                                                                                                               |
| Quality of service settings for handling non-ideal networks | <span class="status_flag">&#10003;&#43;</span> | For communication over the DDS-XRCE wire protocol, two QoS semantics, reliable and best-effort, are provided and can be set at compile-time. As for communication with the ROS 2 dataspace, micro-ROS entities can benefit from the whole set of QoS allowed by DDS when created [by Reference](/_docs/tutorials/advanced/create_dds_entities_by_ref/). |
| DDS-Security support                                        | <span class="status_flag">&#10003;&#45;</span> | Security is not yet supported in the communication process between the Client and the Agent. However, the micro-ROS Agent can benefit from Fast DDS security capabilities during the creation of DDS entities. *Roadmap: Implementation of security mechanisms in Micro XRCE-DDS are planned for future releases.*                                     |
| IDL                                                         | <span class="status_flag">&#10003;&#43;</span> | micro-ROS supports the same IDL types as ROS 2. Generation of C code from IDLs as handled by the Client is performed by the [Micro-XRCE-DDS-Gen](https://github.com/eProsima/Micro-XRCE-DDS-Gen) library, whereas generation of the C++ types handled by the Agent is handled by [Fast-DDS-Gen](https://github.com/eProsima/Fast-DDS-Gen).             |
| Logging                                                     | <span class="status_flag">&#8727;</span>       | *Could be available as part of the standard logging mechanism in principle but not supported by Micro-XRCE-DDS due to dynamic message size. To be checked ...*                                                                                                                                                                                         |

### Multi-RTOS support with generic build system

| Feature                     |                                           | Availability in micro-ROS                                                                                                                                                                                                                                                                                                                                                                                           |
| --------------------------- | ----------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Build system                | <span class="status_flag">&#10003;</span> | micro-ROS provides two ways of building a micro-ROS application. The first uses the [micro_ros_setup](https://github.com/micro-ROS/micro_ros_setup) tool integrated in a ROS 2 workspace. With this approach, the build systems of NuttX, FreeRTOS, and Zephyr are integrated with colcon. The other provides micro-ROS as a component for external development frameworks (e.g., ESP-IDF and Zephyr build system). |
| Supported hardware          | <span class="status_flag">&#10003;</span> | micro-ROS officially supports four boards. For the moment, all official ports are based on the STM32 series from ST and on the ESP32 from Espressif. Find more info [here](https://micro-ros.github.io/_docs/overview/hardware/). More ports have been carried out by users, check the [complete list](https://github.com/micro-ROS/micro_ros_setup#supported-platforms).                                            |
| Supported Operating Systems | <span class="status_flag">&#10003;</span> | micro-ROS is supported by the RTOSes FreeRTOS, Zephyr, NuttX, in addition to Linux and Windows.                                                                                                                                                                                                                                                                                                                     |

### micro-ROS specific features

| Feature                                   |                                                  | Availability in micro-ROS                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| ----------------------------------------- | ------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| Demos of an all-ROS 2 mobile robot        | <span class="status_flag">&#10003;</span>        | Demos of several ROS 2 + micro-ROS robots available. See [https://micro-ros.github.io/_docs/tutorials/demos/](https://micro-ros.github.io/_docs/tutorials/demos/).                                                                                                                                                                                                                                                                                                   |
| Support for real-time code                | <span class="status_flag">&#10003;</span>        | Real-time behaviour is key to micro-ROS typical usages. The [rclc Executor](https://github.com/ros2/rclc/tree/master/rclc) provides mechanisms for implementing real-time-critical applications. At lower levels, the Micro XRCE-DDS library exhibits real-timeness and determinism for being dynamic memory free and for providing functions to perform tasks within well-defined periods of time.                                                                |
| Support for "bare-metal" microcontrollers | <span class="status_flag">&#10003;</span>        | Bringing ROS 2 onto MCUs is all that micro-ROS is about. The standard approach to micro-ROS assumes an RTOS underneath (e.g., [FreeRTOS](https://www.freertos.org/), [Zephyr](https://www.zephyrproject.org/), or [NuttX](http://nuttx.apache.org/)). Recent developments aim at loosening this requirement, with the integration into [Arduino IDE](https://github.com/micro-ROS/micro_ros_arduino) being a first step towards true micro-ROS bare-metal support. |
| Continuous Integration                    | <span class="status_flag">&#10003;&#8728;</span> | Currently, the CI for micro-ROS is distributed to GitHub and GitLab. *Until the end of 2020, all CI should be moved migrated completely to the new CI actions of GitHub.* Please note that those packages that are released for standard ROS 2 are also built and tested on [build.ros2.org](http://build.ros2.org/).                                                                                                                                              |
| Documentation                             | <span class="status_flag">&#10003;</span>        | High-level documentation at [micro-ros.github.io](https://micro-ros.github.io/). For detailed information please consult the README.md files in the relevant micro-ROS repositories at [github.com/micro-ROS/](https://github.com/micro-ROS/). For information on the middleware implementation, take a look at the [Micro XRCE-DDS documentation](https://micro-xrce-dds.docs.eprosima.com/en/latest/).                                                           |
| Peer-to-peer functionality                | <span class="status_flag">&#10003;&#8728;</span> | Prototypical peer-to-peer functionality implemented over broadcast. No QoS available for the moment. *Roadmap: improve prototype to achieve true point-to-point connection.*                                                                                                                                                                                                                                                                                       |
| Memory footprint                          | <span class="status_flag">&#10003;</span>        | A comprehensive profiling of the memory consumption of typical micro-ROS applications can be found [here](https://micro-ros.github.io/_docs/concepts/benchmarking/memo_prof/).                                                                                                                                                                                                                                                                                      |

Below, you can find the legend of the symbols used in the tables above.

| Symbols legend                                   |                                                                                |
| ------------------------------------------------ | ------------------------------------------------------------------------------ |
| <span class="status_flag">&#10003;</span>        | Available.                                                                     |
| <span class="status_flag">&#10003;&#43;</span>   | Available both on Agent-DDS and Client-Agent sides of the communication.       |
| <span class="status_flag">&#10003;&#45;</span>   | Available on Agent-DDS side of the communication but not on Client-Agent side. |
| <span class="status_flag">&#10003;&#8728;</span> | Available with some WIP feature.                                               |
| <span class="status_flag">&#8728;</span>         | To be implemented soon.                                                        |
| <span class="status_flag">&#8727;</span>         | Further investigation required.                                                |
| <span class="status_flag">&#8331;</span>         | Currently unavailable.                                                         |

---

## Source: `_docs/overview/rtos/index.md`
<a id="source-docs-overview-rtos-index-md"></a>

<style>
.rtoscontainer {
  height: auto;
  display: flex;
  flex-direction: row;
  justify-content: flex-start;
  flex-wrap: wrap;
}

.rtositem_image {
  width: 50%;
  display: flex;
  align-items: center;
  justify-content: center;
}

.rtositem_description {
  width: 50%;
}

.rtositem_image img {
    max-width: 70%;
}
</style>

micro-ROS aims to **bring ROS 2 to microcontrollers** to allow having first-class ROS 2 entities in the embedded world.

The standard approach to micro-ROS assumes a Real-Time Operating System underneath.

Even though recent developments aim at loosening this requirement, with the integration into Arduino IDE as an important step towards true micro-ROS bare-metal support, the RTOS-based support remains the main entrypoint to micro-ROS.

To date, micro-ROS is supported by the RTOSes FreeRTOS, Zephyr, NuttX, in addition to Linux and Windows.
All three RTOSes are downloaded natively with the [micro-ROS build system](https://github.com/micro-ROS/micro_ros_setup), and can be chosen when creating
a new firmware workspace.
Dedicated tutorials for running your first micro-ROS application on each of these Operating Systems can be found [here](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/).
The features common to all supported RTOSes are an API compliant with POSIX to some degree, extremely low-to-low memory footprint, and availability of different scheduling algorithms to ensure determinism in micro-ROS apps behavior.

Find more details about each of the supported RTOSes below.
For a more comprehensive explanation regarding the choice of working with Real-Time Operating Systems, and for a more technical comparison among these three RTOSes, please refer to the [RTOS page in the Concepts section](https://micro-ros.github.io/_docs/concepts/rtos/), as the present page is meant to solely provide a schematic overview.


## Real-Time Operating Systems officially supported by the project

In this section, we review the main features of the three RTOSes supported officially by the project, and provide links to useful documentation.

### **FreeRTOS**

FreeRTOS is distributed under the MIT license. It is known particularly for its simplicity and the extension a:FreeRTOS provided by Amazon. For micro-ROS, we make use of the POSIX extension.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>Key features:</b>
        <ul>
            <li>Extremely small footprint</li>
            <li>POSIX extension available</li>
            <li>Memory management tools</li>
            <li>Standard and idle tasks available with assignable priorities</li>
            <li>Transport resources: TCP/IP and lwIP</li>
        </ul>
        <b>FreeRTOS resources:</b>
        <ul>
            <li><a href="https://www.freertos.org/">Official FreeRTOS website</a></li>
            <li><a href="https://www.freertos.org/a00104.html">Download</a></li>
            <li><a href="https://www.freertos.org/Documentation/RTOS_book.html">Documentation</a></li>
        </ul>
        <b>FreeRTOS &amp; micro-ROS:</b>
        <ul>
            <li><a href="https://www.freertos.org/2020/09/micro-ros-on-freertos.html">micro-ROS on FreeRTOS</a></li>
            <li><a href="https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/freertos/">First micro-ROS Application on FreeRTOS</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <img src="https://upload.wikimedia.org/wikipedia/commons/4/4e/Logo_freeRTOS.png">
  </div>
</div>

### **Zephyr**

Zephyr is a fairly new open-source RTOS, developed in a Linux Foundation Project. The members of this project include several renowned semiconductor companies. Zephyr strives for a functional safety certification, which would make it the first open-source RTOS with such a certification.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>Key features:</b>
        <ul>
            <li>Small footprint</li>
            <li>Native POSIX port</li>
            <li>Cross Architecture: Huge collection of <a href="https://docs.zephyrproject.org/latest/boards/index.html">supported boards</a></li>
            <li>Extensive suite of Kernel services</li>
            <li>Multiple Scheduling Algorithms</li>
            <li>Highly configurable/Modular for flexibility</li>
            <li>Native Linux, macOS, and Windows Development</li>
        </ul>
        <b>Zephyr resources:</b>
        <ul>
            <li><a href="https://www.zephyrproject.org/">Official Zephyr website</a></li>
            <li><a href="https://docs.zephyrproject.org/latest/guides/west/">Meta-tool *West*</a></li>
            <li><a href="https://github.com/zephyrproject-rtos/zephyr">Download</a></li>
            <li><a href="https://docs.zephyrproject.org/latest/">Documentation</a></li>
        </ul>
        <b>Zephyr &amp; micro-ROS:</b>
        <ul>
            <li><a href="https://www.zephyrproject.org/micro-ros-a-member-of-the-zephyr-project-and-integrated-into-the-zephyr-build-system-as-a-module/">micro-ROS on Zephyr</a></li>
            <li><a href="https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/zephyr/">First micro-ROS Application on Zephyr</a></li>
            <li><a href="https://micro-ros.github.io/_docs/tutorials/core/zephyr_emulator/">First micro-ROS Application on Zephyr Emulator</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <img src="img/_posts/logo-zephyr.jpg">
  </div>
</div>

### **NuttX**

NuttX emphasizes its compliance with standards - including POSIX - and small footprint. It can be fit on 8- to 32-bit microcontrollers. The use of POSIX and ANSI standards, together with the mimic it does to UNIX APIs, makes it friendly to the developers that are used to Linux. NuttX is licensed under BSD license and makes use of the GNU toolchain. Please note that the uClib++ library used with NuttX comes under the stricter GNU LGPL Version 3 license.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>Key features:</b>
        <ul>
            <li>POSIX compliant interface to a high degree</li>
            <li>Rich Feature OS Set</li>
            <li>Highly scalable</li>
            <li>Real-Time behavior: fully pre-emptible; fixed priority, round-robin, and “sporadic” scheduling</li>
        </ul>
        <b>NuttX resources:</b>
        <ul>
            <li><a href="https://nuttx.apache.org/">Official NuttX website</a></li>
            <li><a href="https://nuttx.apache.org/download/">Download</a></li>
            <li><a href="https://cwiki.apache.org/confluence/display/NUTTX/Nuttx">Documentation</a></li>
        </ul>
        <b>NuttX &amp; micro-ROS:</b>
        <ul>
            <li><a href="https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/nuttx/">First micro-ROS Application on NuttX</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <img src="https://upload.wikimedia.org/wikipedia/commons/b/b0/NuttX_logo.png">
  </div>
</div>

## Bare metal support

Based on the release of micro-ROS as a standalone library with header files, and on the support provided to the Arduino IDE, micro-ROS is available as a bare-metal application, too.
Find more details in the dedicated [repo](https://github.com/micro-ROS/micro_ros_arduino).

### **Arduino bare-metal support**

The open-source Arduino Software (IDE) is a library making it easy to program any Arduino board.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>Key features:</b>
        <ul>
            <li>Inexpensive</li>
            <li>Cross-platform</li>
            <li>Simple, clear programming environment</li>
            <li>Open source and extensible software</li>
            <li>Open source and extensible hardware</li>
        </ul>
        <b>Resources:</b>
        <ul>
            <li><a href="https://www.arduino.cc/">Official Arduino Website</a></li>
            <li><a href="https://github.com/micro-ROS/micro_ros_arduino">micro_ros_arduino repo</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Arduino_Logo.svg/720px-Arduino_Logo.svg.png" width="500">
  </div>
</div>

## Experimentally supported Real-Time Operating Systems

### **Arm® Mbed™ OS**

Mbed OS is an open-source RTOS intended for IoT applications with 32-bit ARM Cortex-M microcontrollers.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>Key features:</b>
        <ul>
            <li>Small footprint</li>
            <li>Many POSIX-compatible modules</li>
            <li>Preemptive scheduling</li>
            <li>Support of Arm Compiler and GNU Arm Embedded</li>
            <li>Online compiler at <a href="https://os.mbed.com/compiler/">https://os.mbed.com/compiler/</a></li>
        </ul>
        <b>Mbed OS resources:</b>
        <ul>
            <li><a href="https://os.mbed.com/">Official Mbed website</a></li>
            <li><a href="https://github.com/ARMmbed/mbed-os">Source code</a></li>
            <li><a href="https://os.mbed.com/_docs/">Documentation</a></li>
        </ul>
        <b>Mbed OS &amp; micro-ROS:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_mbed">micro-ROS example for Mbed</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <!-- Use of logo requires explicit permission, cf. https://www.arm.com/company/policies/trademarks/arm-trademark-list/mbed-trademark.
         This should be considered if the support is no longer experimental only. -->
  </div>
</div>

{% include logos_disclaimer.md %}

---

## Source: `_docs/overview/users_and_clients/index.md`
<a id="source-docs-overview-users-and-clients-index-md"></a>

<!-- CSS AND JS -->

<style type="text/css">
.modal {
  display: none;
  position: fixed;
  z-index: 3;
  left: 0;
  top: 0;
  width: 100%;
  height: 100%;
  overflow: auto;
  background-color: rgb(0,0,0);
  background-color: rgba(0,0,0,0.4);
}

.modal-content {
  background-color: #fefefe;
  margin: 15% auto;
  padding: 20px;
  border: 1px solid #888;
  width: 50%;
}

.logoImage {
  max-height: 100px;
  max-width: 200px;
}

.photo-gallery{
  padding: 0;
  margin: 0;
  list-style: none;
  display: flex;
  flex-wrap: wrap;
  justify-content: space-around;
}

.flex-item {
  flex: 1 0 33%;
  margin: 5px;
  height: 100px;
  display: flex;
  align-items: center;
  justify-content: center;
}

</style>

<script>
window.onload = () => {
    var modal_close = document.getElementById("myModal-close");
    var modal_content = document.getElementById("myModal-content");
    var modal_title = document.getElementById("myModal-title");
    var modal_url = document.getElementById("myModal-url");
    var modal = document.getElementById("myModal");

    open_modal = (title,url,txt) => {
        modal.style.display = "block";
        modal_content.innerHTML = txt
        modal_title.innerHTML = title
        modal_url.innerHTML = url
        modal_url.href = "http://" + url
    }

    close_modal = () => {
        modal.style.display = "none";
    }

    window.onclick = (event) => {
        if (event.target == modal) {
            close_modal();
        }
    }
}

</script>


<div id="myModal" class="modal">
  <div class="modal-content">
    <span id="myModal-close" class="close" onclick="close_modal()">&times;</span>
    <h2 id="myModal-title"></h2>
    <p><a id="myModal-url" href="" target="_blank" style="margin-bottom: 10px;"></a></p>
    <p id="myModal-content" style="text-align: justify;"></p>
  </div>
</div>

<!-- CONTENT -->
<h2>Customers</h2>
<div class="photo-gallery">
  {% for image in page.customers_list %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>

<h2>Members of the EU project OFERA</h2>
<div class="photo-gallery">
  {% for image in page.ofera_consortium %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>


<h2>Partners</h2>
<div class="photo-gallery">
  {% for image in page.partners_list %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>

<h2>Users and Middleware Users</h2>
<div class="photo-gallery">
  {% for image in page.users %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>

<h2>Collaborators</h2>
<div class="photo-gallery">
  {% for image in page.collaborators %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>

{% include logos_disclaimer.md %}

---

## Source: `_docs/privacy.md`
<a id="source-docs-privacy-md"></a>

### Privacy policy

Personal data (usually referred to just as "data" below) will only be processed by us to the extent necessary and for the purpose of providing a functional and user-friendly website, including its contents, and the services offered there.

Per Art. 4 No. 1 of Regulation (EU) 2016/679, i.e. the General Data Protection Regulation (hereinafter referred to as the "GDPR"), "processing" refers to any operation or set of operations such as collection, recording, organization, structuring, storage, adaptation, alteration, retrieval, consultation, use, disclosure by transmission, dissemination, or otherwise making available, alignment, or combination, restriction, erasure, or destruction performed on personal data, whether by automated means or not.

The following privacy policy is intended to inform you in particular about the type, scope, purpose, duration, and legal basis for the processing of such data either under our own control or in conjunction with others. We also inform you below about the third-party components we use to optimize our website and improve the user experience which may result in said third parties also processing data they collect and control.

#### Information about us as controllers of your data

The party responsible for this website (the "controller") for purposes of data protection law is:

eProsima

Plaza de la Encina 10-11 Nucleo 4 2ª Planta,

28760 Tres Cantos,

Madrid, Spain

E-mail: info@eprosima.com

Telephone: +34 918043448

#### The rights of users and data subjects

With regard to the data processing to be described in more detail below, users and data subjects have the right

* to confirmation of whether data concerning them is being processed, information about the data being processed, further information about the nature of the data processing, and copies of the data (cf. also Art. 15 GDPR);
* to correct or complete incorrect or incomplete data (cf. also Art. 16 GDPR);
* to the immediate deletion of data concerning them (cf. also Art. 17 DSGVO), or, alternatively, if further processing is necessary as stipulated in Art. 17 Para. 3 GDPR, to restrict said processing per Art. 18 GDPR;
* to receive copies of the data concerning them and/or provided by them and to have the same transmitted to other providers/controllers (cf. also Art. 20 GDPR);
* to file complaints with the supervisory authority if they believe that data concerning them is being processed by the controller in breach of data protection provisions (see also Art. 77 GDPR).

In addition, the controller is obliged to inform all recipients to whom it discloses data of any such corrections, deletions, or restrictions placed on processing the same per Art. 16, 17 Para. 1, 18 GDPR. However, this obligation does not apply if such notification is impossible or involves a disproportionate effort. Nevertheless, users have a right to information about these recipients.

Likewise, under Art. 21 GDPR, users and data subjects have the right to object to the controller's future processing of their data pursuant to Art. 6 Para. 1 lit. f) GDPR. In particular, an objection to data processing for the purpose of direct advertising is permissible.

#### Information about the data processing

Your data processed when using our website will be deleted or blocked as soon as the purpose for its storage ceases to apply, provided the deletion of the same is not in breach of any statutory storage obligations or unless otherwise stipulated below.

Model Data Protection Statement for Anwaltskanzlei Weiß & Partner

### Cookies usage

#### What are cookies?

A cookie is a small text file that a website saves on your computer or mobile device when you visit the site.
It enables the website to remember your actions and preferences (such as login, language, font size and other display preferences) over some time, so you don't have to keep re-entering them whenever you come back to the site or browse from one page to another.

#### How do we use cookies?

We use cookies for the unique purpose of tracking how many visitors we receive on a page.
A third-party application: Google Analytics provides the cookies used for that.

Google Analytics is Google's analytics tool that helps website and app owners to understand how their visitors engage with their properties.
It may use a set of cookies to collect information and report website usage statistics without personally identifying individual visitors to Google.
The main cookie used by Google Analytics is the '_ga' cookie.

In addition to reporting website usage statistics, Google Analytics can also be used, together with some of the advertising cookies described above, to help show more relevant ads on Google properties (like Google Search) and across the web and to measure interactions with the ads we show.

Learn more about [Analytics cookies and privacy information](https://developers.google.com/analytics/resources/concepts/gaConceptsCookies?hl=enk).

Also, some videos embedded in our pages use a cookie to anonymously gather statistics on how you got there and what videos you visited.

Enabling these cookies is not strictly necessary for the website to work, but it will provide you with a better browsing experience. You can delete or block these cookies, but if you do that some features of this site may not work as intended.

The cookie-related information is not used to identify you personally, and the pattern data is entirely under our control. These cookies are not used for any purpose other than those described here.

#### Do we use other cookies?

Additionally, to the cookies exposed in the previous section, we use a cookie to keep track of your choice in the cookie notice.
This cookie is only used for keeping your decision during a set time, expired that time the cookie banner will appear again.
This cookie is kept for 31 days.

#### How to control cookies

You can control and delete cookies as you wish.
You can delete all cookies that are already on your computer, and you can set most browsers to prevent them from being placed.
If you do this, however, you may have to adjust some preferences every time you visit a site, and some services and functionalities may not work.

---

## Source: `_docs/tutorials/advanced/benchmarking/index.md`
<a id="source-docs-tutorials-advanced-benchmarking-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

- [Benchmarking an applicastion with the TFA Shadow-builder](#benchmarking-an-applicastion-with-the-tfa-shadow-builder)
- [Prerequisites](#prerequisites)
- [TFA Plugin](#tfa-plugin)
- [Configuration](#configuration)
- [Running the shadow-builder](#running-the-shadow-builder)


## Benchmarking an applicastion with the TFA Shadow-builder

This section is dealing with one specific benchmarking tooling called the
Shadow Builder. More specifically, this tutorial aims to create a plugin from
A to Z and how to instrument your code.

For the sake of ease of understanding, this tutorial is proposing to
benchmark the time spent on a simple looping function.

## Prerequisites

Before getting to the heart of the matter, it is needed to meet the following
requirements:

 1. It is assumed that the **shadow builder** and **trace framework abstraction**
terminology and mechanisms are a known. If this is not the case, the
documentation related to the benchmarking is available in
[here](https://github.com/micro-ROS/benchmarking_shadow-builder/blob/master/README.md).

 2. Using linux, preferably Ubuntu 18.04 and above, all Debian-based
    distros should do the job.

 3. Some knowledge about C and C++ programming


Once all the checkboxes ticked the tutorial can begin.

## TFA Plugin

In order to create a plugin, the information that is crucial to figure out are:

What is to benchmark? --> The time spent in a a function.
How to do so ? --> Is there a plugin already supporting it? Yes, then to do. And
the code to profil can be instrumented.

If no plugin supports it, then a plugin has to be created.
Then, another set of questions arises, which are (according to the context):

 1. How could it benefit to others? 
 2. What piece of code would be used to measure the time? (In C or C++?)
 3. What platform can it support? (OS, CPU, etc.)
 4. How should the code be instrumented?


The answers to these questions would be:

 1. Create a generic plugin and write a documentation that would be
    understandable for a normal user and an expert user.
 2. Using the `timespec` and `clock_gettime` Linux syscall.
 3. From previous answer --> OS: Linux on any CPU as long as it has the same Linux API.
 4. Using a simple way using the comment as follow 
   ` /** Benchmarking::plugin_name::function */` . The choice for the current
    tutorial would be `/** Benchmarking::TimeBenchmarking::Timer */`

 

These answers provide us with the minimum necessary for the creation of a plugin.

## Create a TFA-Plugin

### File tree structure

The final code shall be located in
`src_root_sb/tfa-plugin/TimeBenchmarking` with the following structure:

```
TimeBenchmarking
	├── CMakeLists.txt
	├── inc
	│   └──TimeBenchmarking
	│       └── TimeBenchmarking.h
	└── src
	    └── TimeBenchmarking.cpp
```


### Register a new plugin into the TFA core of the shadow builder

The shadow-builder is relying on TFA's plugins to be executed to answer the
parser dispatch. Therefore, the need of some interoperability is needed.

Every new plugins are written by implementing the IPlugin interface as shown in
the file `src_root/tfa_core/inc/tfa/IPlugin.h`. All what the interface needs to do is to
implement the pure virtual function. A simple example would be as in the
plugin_test:

In the plugin header:

```cpp
class TimeBenchmarking: public IPlugin {
public:
	TimeBenchmarking();
	~TimeBenchmarking();

	TFAInfoPlugin& getInfoPlugins();
	bool initializePlugin();
};

extern "C" IPlugin* create() {
	return static_cast<IPlugin *>(new TimeBenchmarking);
}
extern "C" void destroy(IPlugin* p) {
	delete p;
}
``` 
In the plugin source code:

```cpp
TimeBenchmarking::TimeBenchmarking() {}

TimeBenchmarking::~TimeBenchmarking()
{
	if(mInfos) {
		delete mInfos;
	}

}
```

### Create a listener

Good! Now the plugin is ready to be registered within the TFA's core. So when a
session is running, the plugin will be found. However nothing will really
happen. Indeed your plugin is not listening to a specific tag.

Just as a reminder, the listener is an object derivated from the interface
**ITFACommentListener**. It is listening to as specific _Tag_ which will be
replace by a piece of code.

The declaration of the object shall be as display below:
```cpp
class Timer: public ITFACommentListener
{
public:
	Timer();
	Status runnableComments(const TFACommentInfo& cleanComment,
				std::string& replacement);
};
```

As shown above, the class is inheriting from the ITFACommentListenner classe. 
The ITFACommentListener has one pure-virtual method called runnableComments.
This means your plugin has to implement the method runnableComments(...).


```cpp
Timer::Timer()
 :
	 ITFACommentListener("Benchmarking::User::Timer")
{
}

Status Timer::runnableComments(const TFACommentInfo& cleanComment,
		std::string& replacement)
{
	return Status::returnStatusError();
}
```

Now, the functions are correctly implemented. The timer needs several things to
measure the time spent in a function:

 1. Start the timer before the function, get an intial timestamp
 2. Stop the timer after the function has returned, get another timestamp
 3. Measure the delta between the two timestamp measured above.
 4. Print the delta in a human readable.

This basically means that the plugin will neeed a way to get the timestamps, as
discussed before, by using the clock_gettime, and print it to the user by using
printf.

A tag can be provided by several parameters. This will be useful for the sake of
the timer:

 * A parameter to identify what's is the timer's status (i.e. start or stop)
 * A parameter to identify the timer itself in a unique way by the dev
 * A parameter that is needed for header declaration .

This would look like that in real life without any tools: 

```c

#include <time.h> // Needed to access the clock_gettime() function
#include <stdio.h> // Needed to access the printf function.

void func2benchmark(...)
{

	/** declare and measure the starting timestamp */
	struct timestamp timer_start, timer_stop;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &timer_start);
	// do something very slow

	/** Measure the timesampe now, process and show the results */
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &timer_start);
	{
		struct timespec *start = &timer_start;
		struct timespec *stop = &timer_stop;
		struct timespec result;

		if ((stop->tv_nsec - start->tv_nsec) < 0) {
			result.tv_sec = stop->tv_sec - start->tv_sec - 1;
			result.tv_nsec = stop->tv_nsec - start->tv_nsec + 1000000000;
		} else {
			result.tv_sec = stop->tv_sec - start->tv_sec;
			result.tv_nsec = stop->tv_nsec - start->tv_nsec;
		}

		printf(\"Exe time: %ld sec : %ld ms : %ld ns\\n\",
				result.tv_sec, result.tv_nsec / 1000000, result.tv_nsec % 1000000);
	}
}
```

This would llok like this using the tfa:
```c
/** Benchmarking::TimeBenchmarking::Timer(declare) */

void func2benchmark(...)
{
/** Benchmarking::TimeBenchmarking::Timer(start, timer1) */
	//do something very slow
/** Benchmarking::TimeBenchmarking::Timer(stop, timer1) */
}
```

By taking a look at the differences, the amount of overhead code clarity
introduce by the method is very low. 

Now, let's roll-up the sleeves and implement it as a plugin and therefore in a
generic way to be reusable.

### Declare

In order to declare the include needed to benchmark. The way to do it would be
to get the parameter 0 to be a string that matches "declare". The replacement
will be "#include \<time.h\>\n#include \<stdio.h\>\n" 

It is needed to append "\n" to the end of a line, as this piece of code is going
to be appended to the code. 

```cpp

Status Timer::runnableComments(const TFACommentInfo& cleanComment,
		std::string& replacement)
{
	const std::vector<std::string> params = comment.getParams();

	if (params.size() == 1 && params[0] == "declare") {
		replacement = "#include <time.h>\n";
		replacement += "#include <stdio.h>\n";
		return Status::returnStatusOkay();
	}

	return Status::returnStatusError();
}
```

It is mandatory to return Status::returnStatusOkay() to tell the tfa-core that
the _Tag_ was handled and therefore that no other plugin will be using it.

#### Start 

The starting element will basically record a timestamp in the memory. How to do
so in C programming on a Linux system would be as follow:

```cpp
Status Timer::runnableComments(const TFACommentInfo& cleanComment,
		std::string& replacement)
{
	const std::vector<std::string> params = comment.getParams();


	if (params[0] == "start" && params.size() == 2) {
		std::string start = "timer_start_" + params[1]; 
		std::string stop = "timer_stop_" + params[1]; 

		replacement = "struct timespec " + start + ", " + stop + ";\n";
		replacement += "\tclock_gettime(CLOCK_PROCESS_CPUTIME_ID,
			    &timer_start_" + params[1] + ");\n";
		return Status::returnStatusOkay();
	}

	return Status::returnStatusError();
}
```

It is mandatory to return Status::returnStatusOkay() to tell the tfa-core that
the _Tag_ was handled and therefore that no other plugin will be using it.

#### Stop

Then the stopping element, which will be in charge of getting a timestamp,
make the delta time spent between the stop and the start and finally print in a
human-readable way.

```cpp

Status Timer::runnableComments(const TFACommentInfo& cleanComment,
		std::string& replacement)
{
	const std::vector<std::string> params = comment.getParams();
	const char difftime_func[] =
	"{\n\
		struct timespec *start = &%s;\n\
		struct timespec *stop = &%s;\n\
		struct timespec result;\n\
		if ((stop->tv_nsec - start->tv_nsec) < 0) {\n\
			result.tv_sec = stop->tv_sec - start->tv_sec - 1;\n\
				result.tv_nsec = stop->tv_nsec - start->tv_nsec + 1000000000;\n\
		} else {\n\
			result.tv_sec = stop->tv_sec - start->tv_sec;\n\
				result.tv_nsec = stop->tv_nsec - start->tv_nsec;\n\
		}\n\
		printf(\"Exe time: %%ld sec : %%ld ms : %%ld ns\\n\",\n\
				result.tv_sec, result.tv_nsec / 1000000, result.tv_nsec\n\
				%% 1000000);\n\
	}\n";

	if (params[0] == "stop" && params.size() == 2) {
		std::string start = "timer_start_" + params[1]; 
		std::string stop = "timer_stop_" + params[1]; 
		char buf[sizeof(difftime_func) + start.length() +
			stop.length()];

		sprintf(buf, difftime_func, start.c_str(), stop.c_str());
		replacement += "clock_gettime(CLOCK_PROCESS_CPUTIME_ID, 
			    &timer_stop_" + params[1] + ");\n";
		replacement += string(buf);

		return Status::returnStatusOkay();
	}

	return Status::returnStatusError();
}
```

It is mandatory to return Status::returnStatusOkay() to tell the tfa-core that
the _Tag_ was handled and therefore that no other plugin will be using it.

Additionally, this is necessary to think that the replacement code is actual
C code that is going to be compiled. Therefore, one should be careful about the
the way to format it and be careful of the escaping characters.

#### Combine everything together

Finally the whole runnableComment method will look like that:

```cpp
Status Timer::runnableComments(const TFACommentInfo& cleanComment,
		std::string& replacement)
{
	const char difftime_func[] =
	"{\n\
		struct timespec *start = &%s;\n\
		struct timespec *stop = &%s;\n\
		struct timespec result;\n\
		if ((stop->tv_nsec - start->tv_nsec) < 0) {\n\
			result.tv_sec = stop->tv_sec - start->tv_sec - 1;\n\
			result.tv_nsec = stop->tv_nsec - start->tv_nsec + 1000000000;\n\
		} else {\n\
			result.tv_sec = stop->tv_sec - start->tv_sec;\n\
				result.tv_nsec = stop->tv_nsec - start->tv_nsec;\n\
		}\n\
		printf(\"Exe time: %%ld sec : %%ld ms : %%ld ns\\n\",\n\
				result.tv_sec, result.tv_nsec / 1000000, result.tv_nsec \n\
				%% 1000000);\n\
	}\n";

	const std::vector<std::string> params = comment.getParams();

	if (!params.size())
	{
		return Status::returnStatusError();
	}

	if (params[0] == "declare" && params.size() == 1) {
		replacement = "#include <time.h>\n";
		replacement += "#include <stdio.h>\n";
		return Status::returnStatusOkay();
	} else if (params[0] == "start" && params.size() == 2) {
		std::string start = "timer_start_" + params[1]; 
		std::string stop = "timer_stop_" + params[1]; 

		replacement = "struct timespec " + start + ", " + stop + ";\n";
		replacement += "\tclock_gettime(CLOCK_PROCESS_CPUTIME_ID, \
				&timer_start_" + params[1] + ");\n";
		return Status::returnStatusOkay();
	} else if (params[0] == "stop" && params.size() == 2) {
		std::string start = "timer_start_" + params[1]; 
		std::string stop = "timer_stop_" + params[1]; 
		char buf[sizeof(difftime_func) + start.length() +
			stop.length()];

		sprintf(buf, difftime_func, start.c_str(), stop.c_str());
		replacement += "clock_gettime(CLOCK_PROCESS_CPUTIME_ID, \
					&timer_stop_" + params[1] + ");\n";
		replacement += string(buf);
		
		return Status::returnStatusOkay();
	}

	return Status::returnStatusError();
}
```

#### Register the listener

Once the listener is implemented, then it needs to be registered within the
TFA plugin manager:

```cpp
bool TimeBenchmarking::initializePlugin()
{	
	/* This is a plugin compatibility platform */
	tbp = new TFABenchMarkingPlatform("Linux", "*", "*", "*");

	/** Here register the Timer listener */
	iclVect.emplace_back(static_cast<ITFACommentListener *>(new
					Timer));

	/* This is the infoPlugin that holds the plugin name and the
		platform information */
`	mInfos = new TFAInfoPlugin("Test Plugin", *tbp);

	// Will be explained later how to mock up this part.
	return Status::returnStatusOkay();
}
```

A protected vector, inherited from the IPlugin, class needs to be appended for each listener this plugin will be
supporting and implementing.


### Compilation files

The compilation file will be the CMakeLists.txt at the root of the plugin

It shall look like the following:

```cmake
project(TimeBenchmarking VERSION 0.1 DESCRIPTION "MY Plugin")
set(CMAKE_CXX_STANDARD 14)

set(PLUGIN_NAME "TimeBenchmarking")

# Needed to get the function to do tests 
include(../../CMakeMacros/CMakeTesting.txt)


# Plugins include folders
include_directories(inc/)

# Plugins source files
list(APPEND TEST_PLUGIN_SRC
        src/TimeBenchmarking.cpp
)

# Needed to create a shareable library
add_library(${PLUGIN_NAME} SHARED ${TEST_PLUGIN_SRC})

# Target library that we need to link against
target_link_libraries(tfa)

# Needed to create a version of the shared library
set_target_properties(${PLUGIN_NAME} PROPERTIES SOVERSION ${PROJECT_VERSION})
```

And finally, it is needed to add into the parent's folder (i.e.
src_root/tfa-plugins/CMakeLists.txt) CMakeLists.txt the
subdirectory of the plugin:

```cmake
cmake_minimum_required(VERSION 3.10)  # CMake version check
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(plugin_test)
add_subdirectory(myplugin)

# Add your project configuration here:
add_subdirectory(TimeBenchmarking)
```

The example is available [here](https://github.com/micro-ROS/benchmarking_shadow-builder/blob/master/tfa-plugins/TimeBenchmarking/)

### Compilation
To compile the plugin. From the build folder created before in the
shadow-builder.

## Configuration

### TFA configuration

An example fo the configuration file is in the source tree at
`src_root/res/tfa-res/tfa.xml`.

This file only keeps track of the path where to look for plugins. Watch out! this
file is a template and renewed at each compilation. 

In the current context, the path is the default one (i.e. src_root/build):


```shell
cd src_root/build/ 
make -j4
```



### The shadow builder configuration

The shadow-buidler configuration is providing some hints where the source files
to benchmark can be found and where the ouput folder should be set.

A detailed explaination can be found
[here](https://github.com/micro-ROS/benchmarking_shadow-builder/blob/master/res/README.md#shadow-builder-configuration).

## Running the shadow-builder
Once all the above steps are done and the plugin compiled the command to run the
code's instrumentation would be:

```shell
cd src_root/build/ 
./shadow-program -s ../res/sb-res/bcf.xml -t ../res/tfa-res/tfa.xml
```

The output should be put in the folder configured in the bcf configuration file
(by default should /tmp/output/) under the folder then session's name (test by
default) appended by the date and time when the benchmarking was started.

---

## Source: `_docs/tutorials/advanced/create_custom_static_library/index.md`
<a id="source-docs-tutorials-advanced-create-custom-static-library-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

This tutorial aims at providing step-by-step guidance for those users interested in compiling micro-ROS as a standalone library in order to integrate it in custom development tools.

This tutorial starts in a previously created micro-ROS environment. Check the first steps of [**First micro-ROS application on an RTOS**](../../core/first_application_rtos/) for instructions on how to create a micro-ROS environment for embedded platforms.

Once your micro-ROS workspace is created and the `micro_ros_setup` tool is installed, we are going to prepare the micro-ROS environment:

```bash
ros2 run micro_ros_setup create_firmware_ws.sh generate_lib
```

Once all the packages are downloaded, we need to create a couple of files in order to crosscompile a custom static library and a set of header files:

```bash
touch my_custom_toolchain.cmake
touch my_custom_colcon.meta
```

## Example of a CMake toolchain

For example for a Cortex M3 a sample toolchain could be:

```cmake
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_CROSSCOMPILING 1)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

# SET HERE THE PATH TO YOUR C99 AND C++ COMPILERS
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

set(CMAKE_C_COMPILER_WORKS 1 CACHE INTERNAL "")
set(CMAKE_CXX_COMPILER_WORKS 1 CACHE INTERNAL "")

# SET HERE YOUR BUILDING FLAGS
set(FLAGS "-O2 -ffunction-sections -fdata-sections -fno-exceptions -mcpu=cortex-m3 -nostdlib -mthumb --param max-inline-insns-single=500 -DF_CPU=84000000L -D'RCUTILS_LOG_MIN_SEVERITY=RCUTILS_LOG_MIN_SEVERITY_NONE'" CACHE STRING "" FORCE)

set(CMAKE_C_FLAGS_INIT "-std=c11 ${FLAGS} -DCLOCK_MONOTONIC=0 -D'__attribute__(x)='" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS_INIT "-std=c++11 ${FLAGS} -fno-rtti -DCLOCK_MONOTONIC=0 -D'__attribute__(x)='" CACHE STRING "" FORCE)

set(__BIG_ENDIAN__ 0)
```

## Example of a colcon meta file

A sample colcon.meta file with micro-ROS external transports could be:

```json
{
    "names": {
        "tracetools": {
            "cmake-args": [
                "-DTRACETOOLS_DISABLED=ON",
                "-DTRACETOOLS_STATUS_CHECKING_TOOL=OFF"
            ]
        },
        "rosidl_typesupport": {
            "cmake-args": [
                "-DROSIDL_TYPESUPPORT_SINGLE_TYPESUPPORT=ON"
            ]
        },
        "rcl": {
            "cmake-args": [
                "-DBUILD_TESTING=OFF",
                "-DRCL_COMMAND_LINE_ENABLED=OFF",
                "-DRCL_LOGGING_ENABLED=OFF"
            ]
        }, 
        "rcutils": {
            "cmake-args": [
                "-DENABLE_TESTING=OFF",
                "-DRCUTILS_NO_FILESYSTEM=ON",
                "-DRCUTILS_NO_THREAD_SUPPORT=ON",
                "-DRCUTILS_NO_64_ATOMIC=ON",
                "-DRCUTILS_AVOID_DYNAMIC_ALLOCATION=ON"
            ]
        },
        "microxrcedds_client": {
            "cmake-args": [
                "-DUCLIENT_PIC=OFF",
                "-DUCLIENT_PROFILE_UDP=OFF",
                "-DUCLIENT_PROFILE_TCP=OFF",
                "-DUCLIENT_PROFILE_DISCOVERY=OFF",
                "-DUCLIENT_PROFILE_SERIAL=OFF",
                "-UCLIENT_PROFILE_STREAM_FRAMING=ON",
                "-DUCLIENT_PROFILE_CUSTOM_TRANSPORT=ON"
            ]
        },
        "rmw_microxrcedds": {
            "cmake-args": [
                "-DRMW_UXRCE_MAX_NODES=1",
                "-DRMW_UXRCE_MAX_PUBLISHERS=5",
                "-DRMW_UXRCE_MAX_SUBSCRIPTIONS=5",
                "-DRMW_UXRCE_MAX_SERVICES=1",
                "-DRMW_UXRCE_MAX_CLIENTS=1",
                "-DRMW_UXRCE_MAX_HISTORY=4",
                "-DRMW_UXRCE_TRANSPORT=custom"
            ]
        }
    }
}
```

## Building the custom library

Once you have both files ready, just run the build step in the micro-ROS build system:

```bash
ros2 run micro_ros_setup build_firmware.sh $(pwd)/my_custom_toolchain.cmake $(pwd)/my_custom_colcon.meta
```

Once the build finishes you will have a precompiled static library with all the micro-ROS functionality in `firmware/build/libmicroros.a` and you will have all the required headers for your application in `firmware/build/include`. 

Just use them to link against in your development tools, and remember **if you are using a commercially available board we are accepting micro-ROS ports from the community**.

---

## Source: `_docs/tutorials/advanced/create_custom_transports/index.md`
<a id="source-docs-tutorials-advanced-create-custom-transports-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

This tutorial aims at providing step-by-step guidance for those users interested in creating micro-ROS custom transports, instead of using the ones provided by default in the micro-ROS tools set.

This tutorial starts from a previously created micro-ROS environment. Check the first steps of [**First micro-ROS application on an RTOS**](../../core/first_application_rtos/) for instructions on how to create a micro-ROS environment for embedded platforms.

The micro-ROS middleware, *eProsima Micro XRCE-DDS*, provides a user API that allows interfacing with the lowest level transport layer at runtime,
which enables users to implement their own transports in both the micro-ROS Client and micro-ROS Agent libraries.
Thanks to this, the Micro XRCE-DDS wire protocol can be transmitted over virtually any protocol, network or communication
mechanism. In order to do so, two general communication modes are provided:

* **Stream-oriented mode**: the communication mechanism implemented does not have the concept of packet. 
  [HDLC framing](https://micro-xrce-dds.docs.eprosima.com/en/latest/transport.html?highlight=hdlc#custom-serial-transport) will be used.
* **Packet-oriented mode**: the communication mechanism implemented is able to send a whole packet that includes an XRCE message.

These two modes can be selected by activating and deactivating the `framing` parameter in both the micro-ROS Client and the micro-ROS Agent functions.

## micro-ROS Client

An example on how to set these external transport callbacks in the micro-ROS Client API is:

```c
#include <rmw_microros/rmw_microros.h>

...

struct custom_args {
    ...
}

struct custom_args args;

rmw_uros_set_custom_transport(
    true, // Framing enabled here. Using Stream-oriented mode.
    (void *) &args,
    my_custom_transport_open,
    my_custom_transport_close,
    my_custom_transport_write,
    my_custom_transport_read
);
```

It is important to notice that in `rmw_uros_set_custom_transport` a pointer to custom arguments is set. This reference will be available to every callbacks call.

In general, four functions must be implemented. The behaviour of these functions is slightly different, depending on the selected mode:

### Open function

```c    
bool my_custom_transport_open(uxrCustomTransport* transport)
{
    ...
}
```
This function should open and init the custom transport. It returns a boolean indicating if the opening was successful. 
`transport->args` holds the arguments passed through `uxr_init_custom_transport`.

### Close function
```c    
bool my_custom_transport_close(uxrCustomTransport* transport)
{
    ...
}
``` 
This function should close the custom transport. It returns a boolean indicating if closing was successful. 
`transport->args` holds the arguments passed through `uxr_init_custom_transport`.

### Write function
```c    
size_t my_custom_transport_write(
        uxrCustomTransport* transport,
        const uint8_t* buffer,
        size_t length,
        uint8_t* errcode)
{
    ...
}
```
This function should write data to the custom transport. It returns the number of bytes written.
`transport->args` holds the arguments passed through `uxr_init_custom_transport`.

* **Stream-oriented mode:** The function can send up to `length` bytes from `buffer`.

* **Packet-oriented mode:** The function should send `length` bytes from `buffer`. If less than `length` bytes are written, `errcode` can be set.

### Read function
```c    
size_t my_custom_transport_read(
        uxrCustomTransport* transport,
        uint8_t* buffer,
        size_t length,
        int timeout,
        uint8_t* errcode)
{
    ...
}
```
This function should read data from the custom transport. It returns the number of bytes read.
`transport->args` have the arguments passed through `uxr_init_custom_transport`.

* **Stream-oriented mode:** The function should retrieve up to `length` bytes from the transport
    and write them into `buffer` in `timeout` milliseconds.

* **Packet-oriented mode:** The function should retrieve `length` Bytes from transport
    and write them into `buffer` in `timeout` milliseconds. If less than `length` bytes are read, `errcode` can be set.



## micro-ROS Agent

The micro-ROS Agent profile for custom transports is enabled by default. 

An example on how to set the external transport callbacks in the micro-ROS Agent API is:

```cpp
eprosima::uxr::Middleware::Kind mw_kind(eprosima::uxr::Middleware::Kind::FASTDDS);
eprosima::uxr::CustomEndPoint custom_endpoint;

// Add transport endpoing parameters
custom_endpoint.add_member<uint32_t>("param1");
custom_endpoint.add_member<uint16_t>("param2");
custom_endpoint.add_member<std::string>("param3");

eprosima::uxr::CustomAgent custom_agent(
    "my_custom_transport",
    &custom_endpoint,
    mw_kind,
    true, // Framing enabled here. Using Stream-oriented mode.
    my_custom_transport_open,
    my_custom_transport_close,
    my_custom_transport_write
    my_custom_transport_read);

custom_agent.start();
```
As in the *Client* API, four functions should be implemented. The behavior of these functions is sightly different
depending on the selected mode.

### CustomEndPoint

The `custom_endpoint` is an object of type `eprosima::uxr::CustomEndPoint` and it is in charge of handling the endpoint parameters. The *Agent*, unlike the *Client*, can receive
messages from multiple *Clients* so it must be able to differentiate between them.
Therefore, the `eprosima::uxr::CustomEndPoint` should be provided with information about the origin of the message
in the read callback, and with information about the destination of the message in the write callback.

In general, the members of a `eprosima::uxr::CustomEndPoint` object can be unsigned integers and strings.

`CustomEndPoint` defines three methods:

Add member
```cpp
bool eprosima::uxr::CustomEndPoint::add_member<*KIND*>(const std::string& member_name);
```
This function allows to dynamically add a new member to the endpoint definition.

Ir returns ``true`` if the member was correctly added, ``false`` if something went wrong (for example, if the member already exists).

- **KIND**: To be chosen from: `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t`, `uint128_t` or `std::string`.
- **member_name**: The tag used to identify the endpoint member.

Set member value
```cpp
void eprosima::uxr::CustomEndPoint::set_member_value(const std::string& member_name, const *KIND* & value);
```

This function sets the specific value (numeric or string) for a certain member, which must previously exist in the `CustomEndPoint`.

- **member_name**: The member whose value is going to be modified.
- **value**: The value to be set, of `KIND`: `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t`, `uint128_t` or `std::string`.

Get member
```cpp
const *KIND* & eprosima::uxr::CustomEndPoint::get_member(const std::string& member_name);
```

This function gets the current value of the member registered with the given parameter.
The retrieved value might be an `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t`, `uint128_t` or `std::string`.

- **member_name**: The `CustomEndPoint` member name whose current value is requested.

### Open function
```cpp
eprosima::uxr::CustomAgent::InitFunction my_custom_transport_open = [&]() -> bool
{
    ...
}
```
This function should open and init the custom transport. It returns a boolean indicating if the opening was successful.

### Close function
```cpp   
eprosima::uxr::CustomAgent::FiniFunction my_custom_transport_close = [&]() -> bool
{
    ...
}
```
This function should close the custom transport. It returns a boolean indicating if the closing was successful.

### Write function
```cpp    
eprosima::uxr::CustomAgent::SendMsgFunction my_custom_transport_write = [&](
    const eprosima::uxr::CustomEndPoint* destination_endpoint,
    uint8_t* buffer,
    size_t length,
    eprosima::uxr::TransportRc& transport_rc) -> ssize_t
{
    ...
}
```
This function should write data to the custom transport. It must use
the `destination_endpoint` members to set the data destination. It returns the number of bytes written.
It should set `transport_rc` indicating the result of the operation.

* **Stream-oriented mode:** The function can send up to `length` Bytes from `buffer`.

* **Packet-oriented mode:** The function should send `length` Bytes from `buffer`. If less than `length` bytes are written, `transport_rc` can be set.

### Read function
```cpp    
eprosima::uxr::CustomAgent::RecvMsgFunction my_custom_transport_read = [&](
        eprosima::uxr::CustomEndPoint* source_endpoint,
        uint8_t* buffer,
        size_t length,
        int timeout,
        eprosima::uxr::TransportRc& transport_rc) -> ssize_t
{
    ...
}
```
This function should read data to the custom transport. It must fill `source_endpoint` members with data source.
It returns the number of bytes read.
It should set `transport_rc` indicating the result of the operation.

* **Stream-oriented mode:** The function should retrieve up to `length` bytes from the transport
    and write them into `buffer` in `timeout` milliseconds.

* **Packet-oriented mode:** The function should retrieve `length` bytes from the transport
    and write them into `buffer` in `timeout` milliseconds. If less than `length` bytes are read, `transport_rc` can be set.

---

## Source: `_docs/tutorials/advanced/create_dds_entities_by_ref/index.md`
<a id="source-docs-tutorials-advanced-create-dds-entities-by-ref-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

This tutorial explains the procedure for creating micro-ROS entities using fully configurable QoS settings. The micro-ROS default middleware (Micro XRCE-DDS Client) allows the user to take two different approaches for creating ROS 2 (DDS) entities in the micro-ROS Agent (Please check the [architecture section](https://micro-ros.github.io/_docs/overview/) for detailed information):
- By XML (the default option in micro-ROS RMW)
- By reference

Using the *default option* the micro-ROS user will be able to create entities using RCLC functions such as `rclc_publisher_init_default` for reliable communications or `rclc_publisher_init_best_effort` for best effort communications. Please check [RCLC](https://github.com/ros2/rclc) for an updated list of convenience functions.

For those familiar with the QoS XML format in DDS (click [here](https://fast-dds.docs.eprosima.com/en/latest/fastdds/dds_layer/core/policy/policy.md) for detailed information), the underlying QoS profile used by this default mode looks like this:

```xml
<!-- TOPIC -->
<dds>
  <topic>
      <name>[TOPIC NAME]</name>
      <dataType>[TOPIC TYPE]</dataType>
  </topic>
</dds>

<!-- DATA WRITER -->
<dds>
  <data_writer>
      <historyMemoryPolicy>PREALLOCATED_WITH_REALLOC</historyMemoryPolicy>
      <qos>
        <reliability>
            <kind>[WRITER RELIABILITY]</kind>
        </reliability>
      </qos>
      <topic>
        <kind>NO_KEY</kind>
        <name>[WRITER NAME]</name>
        <dataType>[WRITER TYPE]</dataType>
        <historyQos>
            <kind>KEEP_ALL</kind>
        </historyQos>
      </topic>
  </data_writer>
</dds>

<!-- DATA READER -->
<dds>
  <data_reader>
      <historyMemoryPolicy>PREALLOCATED_WITH_REALLOC</historyMemoryPolicy>
      <qos>
        <reliability>
            <kind>[READER RELIABILITY]</kind>
        </reliability>
      </qos>
      <topic>
        <kind>NO_KEY</kind>
        <name>[READER NAME]</name>
        <dataType>[READER TYPE]</dataType>
        <historyQos>
            <kind>KEEP_ALL</kind>
        </historyQos>
      </topic>
  </data_reader>
</dds>

```

But these QoS configurations may not fit some user's requirements. For these cases, micro-ROS allows the users to write their custom XML QoS and run the agent with a predefined set of QoS. Each entity will have its own label and the micro-ROS client will create the entities using just this reference.

Additionally, using references will also reduce the memory consumption of the micro-ROS client inside the MCU. This is because the parts of the code where XML are handled are just not build with the references approach.

Let's see how to create a micro-ROS node that creates entities with custom QoS. First of all, independently of which RTOS you have selected in [First micro-ROS Application on an RTOS
](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/) tutorial, you should have an app configuration file named `app-colcon.meta`.

Inside this `app-colcon.meta` file we can set application specific CMake options for the micro-ROS packages that are going to be crosscompiled. So, let's setup the `rmw_microxrcedds` in order to use references; your `app-colcon.meta` should look like this:

```
{
    "names": {
        "rmw_microxrcedds": {
            "cmake-args": [
                ...
                "-DRMW_UXRCE_CREATION_MODE=refs"
                ...
            ]
        }
    }
}
```

Of course you can combine these configurations with others, e.g. the ones described in the [Middleware Configuration](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/) tutorial.

Once you have this parameter, write your micro-ROS application using RCLC default convenience functions. Just remember that now you are not providing the topic name but a "QoS reference label":

```c
#include <std_msgs/msg/int32.h>

...

std_msgs__msg__Int32 msg;

msg.data = 42;

...

rclc_publisher_init_default(&publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32), "my_qos_label");
rcl_publish(&publisher, &msg, NULL);
 
...
```

This code will tell the micro-ROS Agent to create a publisher using just a text label: `my_qos_label`. This implies that the micro-ROS Agent must have a file where these labels are written along with some QoS profiles. Let's create a `custom_qos.refs` with the following content:

```xml
<profiles>
    <participant profile_name="participant_profile">
        <rtps>
            <name>default_xrce_participant</name>
        </rtps>
    </participant>

    <topic profile_name="my_qos_label__t">
        <name>rt/my_topic_name</name>
        <dataType>std_msgs::msg::dds_::Int32_</dataType>
        <historyQos>
          <kind>KEEP_LAST</kind>
          <depth>20</depth>
        </historyQos>
    </topic>

    <data_writer profile_name="my_qos_label__dw">
        <historyMemoryPolicy>PREALLOCATED_WITH_REALLOC</historyMemoryPolicy>
        <qos>
          <reliability>
            <kind>RELIABLE</kind>
          </reliability>
        </qos>
        <topic>
            <kind>NO_KEY</kind>
            <name>rt/my_topic_name</name>
            <dataType>std_msgs::msg::dds_::Int32_</dataType>
            <historyQos>
                <kind>KEEP_LAST</kind>
                <depth>20</depth>
            </historyQos>
        </topic>
    </data_writer>

</profiles>
```

When writting this XML file, special care about ROS2 to DDS name mangling has to be taken into account. Read more information about this [here](http://design.ros2.org/articles/topic_and_service_names.html#mapping-of-ros-2-topic-and-service-names-to-dds-concepts).

Once you have this file ready, just run the micro-ROS agent with the `-r` parameter:

```
ros2 run micro_ros_agent micro_ros_agent [PARAMETERS] -r custom_qos.refs
```

Once the entities are created and the topic is being published, you can check the QoS using:

```
$ ros2 topic info /std_msgs_msg_Int32 --verbose
Type: std_msgs/msg/Int32

Publisher count: 1

Node name: _CREATED_BY_BARE_DDS_APP_
Node namespace: _CREATED_BY_BARE_DDS_APP_
Topic type: std_msgs/msg/Int32
Endpoint type: PUBLISHER
GID: 01.0f.0b.5c.8b.7d.00.00.01.00.00.00.00.00.01.03.00.00.00.00.00.00.00.00
QoS profile:
  Reliability: RMW_QOS_POLICY_RELIABILITY_RELIABLE
  Durability: RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL
  Lifespan: 2147483651294967295 nanoseconds
  Deadline: 2147483651294967295 nanoseconds
  Liveliness: RMW_QOS_POLICY_LIVELINESS_AUTOMATIC
  Liveliness lease duration: 2147483651294967295 nanoseconds

Subscription count: 0
```

---

## Source: `_docs/tutorials/advanced/create_new_type/index.md`
<a id="source-docs-tutorials-advanced-create-new-type-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

This tutorial starts in a previously created micro-ROS environment. Check [**First micro-ROS application on an RTOS**](../../core/first_application_rtos/) for instructions about how to create a micro-ROS environment for embedded platforms.

Once your micro-ROS workspace is created, go to `firmware/mcu_ws` and run the package creating command:

```bash
cd firmware/mcu_ws
ros2 pkg create --build-type ament_cmake my_custom_message
cd my_custom_message
mkdir msg
touch msg/MyCustomMessage.msg
```

In the autogenerated `CMakeLists.txt` file you should add the following lines just before `ament_package()`:

```cmake
...
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MyCustomMessage.msg"
 )
...
```

In the autogenerated `package.xml` file you should add the following lines:

```xml
...
<build_depend>rosidl_default_generators</build_depend>
<exec_depend>rosidl_default_runtime</exec_depend>
<member_of_group>rosidl_interface_packages</member_of_group>
...
```

The content of the `msg/MyCustomMessage.msg` file contains your message defintion. For example, let's include these fields:

```
bool bool_test
byte byte_test
char char_test
float32 float32_test
float64 double_test
int8 int8_test
uint8 uint8_test
int16 int16_test
uint16 uint16_test
int32 int32_test
uint32 uint32_test
int64 int64_test
uint64 uint64_test
```

Now, you can build your micro-ROS workspace as usual. As explained in [**First micro-ROS application on an RTOS**](../../core/first_application_rtos/), the `ros2 run micro_ros_setup build_firmware.sh` command will build all packages located inside `mcu_ws`.

In your micro-ROS application code, you can use your new message type as usual:

```c
#include <my_custom_message/msg/my_custom_message.h>

...

my_custom_message__msg__MyCustomMessage msg;

msg.byte_test = 3;
msg.uint32_test = 42;

...

rclc_publisher_init_default(&publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(my_custom_message, msg, MyCustomMessage), "my_custom_publisher");
rcl_publish(&publisher, &msg, NULL);

...
```

You can find further information in the [ROS 2 Create custom ROS 2 msg and srv files](https://docs.ros.org/en/rolling/Tutorials/Beginner-Client-Libraries/Single-Package-Define-And-Use-Interface.md).

## Using type composition

It is possible to create custom types that include members from another ROS 2 message types packages. For example let's add a member with type `Point32` from the ROS 2 package `geometry_msgs`.

First of all, you have to include the dependency in the `CMakeLists.txt`:

```cmake
...
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MyCustomMessage.msg"
  DEPENDENCIES geometry_msgs
 )
...
```

Also, include the dependency in `package.xml`:

```xml
...
<build_depend>rosidl_default_generators</build_depend>
<exec_depend>rosidl_default_runtime</exec_depend>
<member_of_group>rosidl_interface_packages</member_of_group>
<depend>geometry_msgs</depend>
...
```

The message definition in `msg/MyCustomMessage.msg` can now include types from the `geometry_msgs` package:

```
...
int64 int64_test
uint64 uint64_test
geometry_msgs/Point32 point32_test
```

And finally, in your code you can access this new member of your custom type:


```c
#include <my_custom_message/msg/my_custom_message.h>

...

my_custom_message__msg__MyCustomMessage msg;

msg.byte_test = 3;
msg.uint32_test = 42;

msg.point32_test.x = 1.23;
msg.point32_test.y = 2.31;
msg.point32_test.z = 3.12;

...
```

Note that in order for the micro_ros_agent to register these new types, the package with the custom types you've created above, should also be cloned to the host workspace, e.g. `~/uros_ws/src`, and compiled there as well before running the agent.

---

## Source: `_docs/tutorials/advanced/handling_type_memory/index.md`
<a id="source-docs-tutorials-advanced-handling-type-memory-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

This page aims to explain how to handle messages and types memory in micro-ROS.

First of all, since the micro-ROS user is in an embedded C99 environment, it is important to be aware of what messages and ROS 2 types are being used in order to handle memory correctly.

Two approaches are presented in this tutorial: manual memory allocation, and automated approach using the [`micro_ros_utilities`](https://github.com/micro-ROS/micro_ros_utilities) package:

- [Manual allocation](#manual-allocation)
  - [Sequence types in micro-ROS](#sequence-types-in-micro-ros)
  - [Compound types in micro-ROS](#compound-types-in-micro-ros)
  - [Sequences of compound types](#sequences-of-compound-types)
- [micro-ROS utilities](#micro-ros-utilities)

# Manual allocation

By watching the `.msg` or `.srv` of the types used in a micro-ROS application, you can determine the type of each member. Currently, the following types are supported:
- Basic type
- Array type
- Sequence type
- Compound type

Let's take an example `.mgs` for clarification:

```
# MyType.msg
std_msgs/Header header
int32[] values
float64 duration
int8[10] coefficients
string name
```

In this example:
- the member `duration` is a **basic type member**,.
- the member `values` is a **sequence type member** because it has a unbounded sequence of `int32`, in this case.
- the member `coefficients` is an **array type member** because it has a bounded sequence of 10 units of `int8`, in this case.
- the member `header` is an **compound type member** because it refers to complex type described in the same or other ROS 2 package.
- the member `name` is an **string type member** and should be understood as a `char[]` (sequence type member).

When dealing with the **micro-ROS typesupport** the developer needs to take into account how this message is going to be handled in the C99 API of micro-ROS. In general, the micro-ROS typesupport will create a C99 struct representation of the message:

```c
typedef struct mypackage__msg__MyType
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__int32__Sequence values;
  double duration;
  int8 coefficients[10];
  rosidl_runtime_c__String name;  // equal to rosidl_runtime_c__char__Sequence
} mypackage__msg__MyType;
```

So when in an application has a variable of this type, for example `mypackage__msg__MyType mymsg;`, we know that:
- `mymsg.coefficients` has a C array of `int8`
- `mymsg.duration` is a `double` member

but, what happens with the `...Sequence` and the compound type member?

## Sequence types in micro-ROS

A **sequence type member** is an especial type member that hosts a pointer `data`, a `size` and a `capacity` value. The pointer should have memory for storing up to `capacity` values and `size` member shows how many element are currently in the sequence. Usually in micro-ROS, the user is in charge of assigning memory and values to this sequence members.

In the case of `MyType.msg`, the `values` sequence member is represented in C99 as this struct:

```c
typedef struct rosidl_runtime_c__int32__Sequence
{
  int32_t* data;    /* The pointer to an array of int32 */
  size_t size;      /* The number of valid items in data */
  size_t capacity;  /* The number of allocated items in data */
} rosidl_runtime_c__int32__Sequence;
```

So user need to handle the type like:

```c
mypackage__msg__MyType mymsg;

// mymsg.values.data is NULL or garbage now
// mymsg.values.size is 0 or garbage now
// mymsg.values.capacity is 0 or garbage now

// Assigning dynamic memory to the sequence
mymsg.values.capacity = 100;
mymsg.values.data = (int32_t*) malloc(mymsg.values.capacity * sizeof(int32_t));
mymsg.values.size = 0;

// Assigning static memory to the sequence
static int32_t memory[100];
mymsg.values.capacity = 100;
mymsg.values.data = memory;
mymsg.values.size = 0;

// Filling some data
for(int32_t i = 0; i < 3; i++){
  mymsg.values.data = i;
  mymsg.values.size++;
}
```

## Compound types in micro-ROS

When dealing with a compound type, the user should recursively inspect the types in order to determine how to handle each internal member.

For example in the `MyType.msg` example, the `header` member has the following structure:

```c
typedef struct std_msgs__msg__Header
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String frame_id;
} std_msgs__msg__Header;
```

Remember that `rosidl_runtime_c__String` is equivalent to `rosidl_runtime_c__char__Sequence`. And `builtin_interfaces__msg__Time` looks like:

```c
typedef struct builtin_interfaces__msg__Time
{
  int32_t sec;
  uint32_t nanosec;
} builtin_interfaces__msg__Time;
```

To initialize the `header` member of `MyType.msg`:

```c
mypackage__msg__MyType mymsg;

// Assigning dynamic memory to the frame_id char sequence
mymsg.header.frame_id.capacity = 100;
mymsg.header.frame_id.data = (char*) malloc(mymsg.values.capacity * sizeof(char));
mymsg.header.frame_id.size = 0;

// Assigning value to the frame_id char sequence
strcpy(mymsg.header.frame_id.data, "Hello World");
mymsg.header.frame_id.size = strlen(mymsg.header.frame_id.data);

// Assigning value to other members
mymsg.stamp.sec = 10;
mymsg.stamp.nanosec = 20;
```

## Sequences of compound types

Users should take into account that **sequence type member** of **compound type member** are also valid ROS 2 type. For example, let's modify the previous example:

```
# MyComplexType.msg
std_msgs/Header[] multiheaders
int32[] values
float64 duration
int8[10] coefficients
string name
```

In this case, the generated typesupport will be:

```c
typedef struct mypackage__msg__MyComplexType
{
  std_msgs__msg__Header__Sequence multiheaders;
  rosidl_runtime_c__int32__Sequence values;
  double duration;
  int8 coefficients[10];
  rosidl_runtime_c__String name;  // equal to rosidl_runtime_c__char__Sequence
} mypackage__msg__MyComplexType;
```

Notice that `multiheaders` is a **sequence type member**, so it should be handled properly, but also it is a **compound type member** which needs to be handled recursively, initializing its own members. For example:

```c
mypackage__msg__MyComplexType mymsg;

// Init the multiheaders sequence
mymsg.multiheaders.capacity = 10;
mymsg.multiheaders.data = (std_msgs__msg__Header*) malloc(mymsg.values.capacity * sizeof(std_msgs__msg__Header));
mymsg.multiheaders.size = 0;

// Filling some data
for(int32_t i = 0; i < 3; i++){
  mymsg.values.data = i;

  // Add memory to this sequence element frame_id
  mymsg.multiheaders.data[i].frame_id.capacity = 100;
  mymsg.multiheaders.data[i].frame_id.data = (char*) malloc(mymsg.multiheaders.data[i].frame_id.capacity * sizeof(char));
  mymsg.multiheaders.data[i].frame_id.size = 0;

  // Assigning value to the frame_id char sequence
  strcpy(mymsg.multiheaders.data[i].frame_id.data, "Hello World");
  mymsg.multiheaders.data[i].frame_id.size = strlen(mymsg.multiheaders.data[i].frame_id.data);

  // Assigning value to other members
  mymsg.multiheaders.data[i].stamp.sec = 10;
  mymsg.multiheaders.data[i].stamp.nanosec = 20;

  mymsg.multiheaders.size++;
}
```

# micro-ROS utilities

Due to the inclusion of [`rosidl_typesupport_introspection_c`](https://github.com/ros2/rosidl/tree/rolling/rosidl_typesupport_introspection_c), an automated memory handling for micro-ROS types is available. The tools related to this feature are available in the package [`micro_ros_utilities`](https://github.com/micro-ROS/micro_ros_utilities).

The documentation of the package [`micro_ros_utilities`](https://github.com/micro-ROS/micro_ros_utilities) is available [here](/_docs/api/utils/).

This package is able to auto-assign memory to a certain message struct using default dynamic memory allocators, for example, using the previouly declated type:

```c
mypackage__msg__MyType mymsg;

static micro_ros_utilities_memory_conf_t conf = {0};

bool success = micro_ros_utilities_create_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyType),
  &mymsg,
  conf
);
```

This code will init all the string and sequences recursively in `MyType` type. The size of this memory slots will be by default the ones in [`micro_ros_utilities_memory_conf_default`](https://github.com/micro-ROS/micro_ros_utilities/blob/c829971bd33ac1f14a94aa722476110b4b59eaf9/include/micro_ros_utilities/type_utilities.h#L51), that is:
- String will have 20 characters
- ROS 2 types sequences will have a length of 5
- Basic types sequences will have a length of 5

This defaults can be overriden using:

```c
mypackage__msg__MyType mymsg;

static micro_ros_utilities_memory_conf_t conf = {0};

conf.max_string_capacity = 50;
conf.max_ros2_type_sequence_capacity = 5;
conf.max_basic_type_sequence_capacity = 5;

bool success = micro_ros_utilities_create_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyType),
  &mymsg,
  conf
);
```

To customize the length of each member of the struct, a complex rules approach can be used as in the following example:

```c
mypackage__msg__MyComplexType mymsg;

static micro_ros_utilities_memory_conf_t conf = {0};

micro_ros_utilities_memory_rule_t rules[] = {
  {"multiheaders", 4},
  {"multiheaders.frame_id", 60},
  {"name", 10}
};
conf.rules = rules;
conf.n_rules = sizeof(rules) / sizeof(rules[0]);

// member named "values" of MyComplexType will have the default max_basic_type_sequence_capacity

bool success = micro_ros_utilities_create_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
  &mymsg,
  conf
);
```

Is also possible to use a user-provided buffer to allocate memory:

```c
mypackage__msg__MyComplexType mymsg;

static micro_ros_utilities_memory_conf_t conf = {0};

static uint8_t my_buffer[1000];

bool success = micro_ros_utilities_create_static_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
  &mymsg,
  conf,
  my_buffer,
  sizeof(my_buffer)
);
```

The library provides utilies for calculating the size that both approaches will use with a certain configuration. Notice that this amount of memory is only the dynamic usage or the usage in the user provided buffer, `sizeof(mypackage__msg__MyComplexType)` is not taken into account.

```c
mypackage__msg__MyComplexType mymsg;

static micro_ros_utilities_memory_conf_t conf = {0};

size_t dynamic_size = micro_ros_utilities_get_dynamic_size(
    ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
    conf
);

size_t static_size = micro_ros_utilities_get_static_size(
    ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
    conf
);
```

Finally, a destruction function is also provided for messages allocated in dynamic memory:


```c
mypackage__msg__MyComplexType mymsg;

// Release memory previously allocated with micro_ros_utilities_create_message_memory

bool success = micro_ros_utilities_destroy_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
  &mymsg,
  conf
);
```

---

## Source: `_docs/tutorials/advanced/microxrcedds_rmw_configuration/index.md`
<a id="source-docs-tutorials-advanced-microxrcedds-rmw-configuration-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

micro-ROS targets microcontroller, devices with low memory resources.
With that in mind, micro-ROS try to address the memory management issue prioritizing the use of static memory instead of dynamic memory and optimizing the memory footprint of the applications.
This, of course, has a cost that the users must agree to pay, a precompile tunning.

This tutorial explains which are the memory resources managed by micro-ROS and how to tune them for a particular application.
It also addresses the RMW run-time configuration API where the user can configure the micro-ROS Agent endpoints or the Micro XRCE-DDS session `client_key`.

## Memory resources optimization

micro-ROS deals with two different memory resources related with the Micro XRCE-DDS library and its RMW implementation named rmw-microxrcedds.

### Micro XRCE-DDS

Micro XRCE-DDS messages flow between Client and Agent through **streams**.
A stream represents an independently ordered flow of information, so it is a sort of messaging queue.
There are two kinds of streams, **best-effort** and **reliable**.
Both best-effort and reliable streams have a raw buffer (`uint8_t` array) associated with them, but the layout is different.

On the one hand, best-effort streams could be interpreted as a single message queue.
Therefore, the raw buffer is a single data buffer where only one message is popped/pushed.

![](_docs/tutorials/advanced/microxrcedds_rmw_configuration/imgs/best_effort_stream.svg)

On the other hand, reliable streams contain multiple messages which are popped/pushed according to the reliable communication protocol described in the DDS-XRCE specification.
It is achieved by splitting the raw buffer into chunks, each of which contains a single message.

![](_docs/tutorials/advanced/microxrcedds_rmw_configuration/imgs/reliable_strea.svg)

The size of the best-effort and reliable stream can be configured by two sets of CMake flags.

* `UCLIENT_UDP_TRANSPORT_MTU`, `UCLIENT_TCP_TRANSPORT_MTU` and `UCLIENT_SERIAL_TRANSPORT_MTU` (depending on the transport selected): these flags control the size of the best-effort stream buffer which matches with the size of each chunk of the reliable stream.
* `RMW_UXRCE_STREAM_HISTORY`: sets the number of slots for the reliable streams.

The size of the stream sets indirectly the maximum message size (MMS) of the micro-ROS application.
This MMS is (`UCLIENT_<XXX>_TRANSPORT_MTU` - 12 B) for best-effort messages and (`UCLIENT_<XXX>_TRANSPORT_MTU` * (`RMW_UXRCE_STREAM_HISTORY` - 12 B)) in the case of reliable messages.

The use of best-effort or reliable stream is handled by the `rmw_qos_reliability_policy_t` set in the `rmw_qos_profile_t` for a particular publisher or subscription.
In the case of `RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT` best-effort streams are used and for `RMW_QOS_POLICY_RELIABILITY_RELIABLE` reliable streams are used instead.

More details about the micro-ROS middleware can be found in the [Micro XRCE-DDS documentation](https://micro-xrce-dds.docs.eprosima.com/).

### rmw-microxrcedds

rmw-microxrcedds uses static memory for allocating the resources associated with the `rcl` and `rclc` entities.
This static memory is managed thanks to independent memory pools for each kind of entity.
The size of these memory pools could be set through CMake flags,
for example, the `RMW_UXRCE_MAX_PUBLISHERS` sets the size of the `rcl_publisher_t`'s pool memory.
It should be noted that the size of these memory pools restricts the maximum number of entities that a micro-ROS application could use.

The figure below summarizes the relation between the `rcl` entities and the CMake flags, which set the size of the memory pool associated with such entities.

![](_docs/tutorials/advanced/microxrcedds_rmw_configuration/imgs/micro_ros_memory.svg)

Another important memory resource managed by the rmw-microxrcedds is the message history.
The rmw-microxrcedds uses a static-memory message queue where to to keep the subscription messages before the user reads them.
The size of this message queue could be set by the `RMW_UXRCE_MAX_HISTORY`.

It is worth noting that all the aforementioned CMake flags shall be set in a `.meta` for each platform supported in [micro_ros_setup](https://github.com/micro-ROS/micro_ros_setup).
For example, in the [ping-pong application](https://micro-ros.github.io//_docs/tutorials/core/first_application_linux/) the host [configuration file](https://github.com/micro-ROS/micro_ros_setup/blob/humble/config/host/generic/client-host-colcon.meta) can be optimized with the following modifications:

```
{
  "name": {
    "rmw_microxrcedds":{
      "cmake-args":[
        ....
        "-DRMW_UXRCE_MAX_NODES=1",          // 3 --> 1
        "-DRMW_UXRCE_MAX_PUBLISHERS=2",     // 5 --> 2
        "-DRMW_UXRCE_MAX_SUBSCRIPTIONS=2",  // 5 --> 2
        "-DRMW_UXRCE_MAX_SERVICES=0",       // 5 --> 0
        "-DRMW_UXRCE_MAX_CLIENTS=0",        // 5 --> 0
        "-DRMW_UXRCE_STREAM_HISTORY=5",     // 20 --> 5
        "-DRMW_UXRCE_MAX_HISTORY=5",        // 20 --> 5
        ....
      ]
    }
  }
}
```

## Run-time configuration

There are some build time parameters related to Client-to-Agent connection (such as **CONFIG_RMW_DEFAULT_UDP_PORT**, **CONFIG_RMW_DEFAULT_UDP_IP** and **CONFIG_RMW_DEFAULT_SERIAL_DEVICE**) that can be configured either at build time or at run-time.
This means that you can set them in the [configuration file](https://github.com/micro-ROS/micro_ros_setup/blob/humble/config/host/generic/client-host-colcon.meta) mentioned above and that micro-ROS provides a user configuration API for setting some RMW and middleware parameters at run-time.

The following example code shows the [API](https://github.com/micro-ROS/rmw_microxrcedds/blob/iron/rmw_microxrcedds_c/include/rmw_microros/init_options.h) calls needed to set the agent's IP address, port or serial device:

```c
#include <rmw_microros/rmw_microros.h>

// Init RCL options and context
rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
rcl_context_t context = rcl_get_zero_initialized_context();
rcl_init_options_init(&init_options, rcl_get_default_allocator());

// Take RMW options from RCL options
rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&init_options);

// TCP/UDP case: Set RMW IP parameters
rmw_uros_options_set_udp_address("127.0.0.1", "8888", rmw_options);

// Serial case: Set RMW serial device parameters
rmw_uros_options_set_serial_device("/dev/ttyAMA0", rmw_options)

// Set RMW client key
rmw_uros_options_set_client_key(0xBA5EBA11, rmw_options);

// Init RCL
rcl_init(0, NULL, &init_options, &context);

// ... micro-ROS code ...
```

Notice that it is also possible to set the Micro XRCE-DDS `client_key`, which would otherwise be set randomly. This feature is useful for reusing DDS entities already created on the agent side. Further information can be found [here](https://micro-xrce-dds.docs.eprosima.com/en/latest/getting_started.html#publisher-configuration) and [here](https://github.com/micro-ROS/rmw-microxrcedds#rmw-micro-xrce-dds-implementation).

---

## Source: `_docs/tutorials/advanced/overview/index.md`
<a id="source-docs-tutorials-advanced-overview-index-md"></a>

This chapter provides a number of advanced tutorials for those users who already have some previous micro-ROS knowledge. They are useful to interact with micro-ROS at a deeper level compared with the [**First Step Tutorials**](../../core/overview). There is no specific order recommended to take these tutorials, as each addresses a different aspect of the micro-ROS stack and toolchain.

* [**Optimizing the Middleware Configuration**](../microxrcedds_rmw_configuration/)

  In this tutorial, we'll guide you through the configuration of the middleware between a microcontroller and the micro-ROS agent running on some Linux-based microprocessor, to optimize it for your specific use-case and application.

* [**How to include a custom ROS message in micro-ROS**](../create_new_type/)

  This tutorial explains how to create or include a custom ROS message type in a micro-ROS application - and in particular how to bring it into the [build system](https://github.com/micro-ROS/micro_ros_setup).

* [**How to use custom QoS in micro-ROS**](../create_dds_entities_by_ref/)

  This tutorial explains the procedure for creating micro-ROS entities using fully configurable QoS settings by using the ROS 2 (DDS) entities creation mode *by references* as allowed by the micro-ROS default middleware (Micro XRCE-DDS Client).

* [**Creating custom micro-ROS transports**](../create_custom_transports/)

  This tutorial aims at providing step-by-step guidance for those users interested in creating micro-ROS custom transports, instead of using the ones provided by default in the micro-ROS tools set.

* [**Creating custom static micro-ROS library**](../create_custom_static_library/)

  This tutorial aims at providing step-by-step guidance for those users interested in compiling micro-ROS as a standalone library in order to integrate it in custom development tools.

* [**Benchmarking with the Shadow-Builder**](../benchmarking/)

  This tutorial aims at describing a specific benchmarking tooling called the *Shadow Builder*. More specifically, it explains how to create a plugin from A to Z and how to instrument the code.

---

## Source: `_docs/tutorials/core/first_application_linux/index.md`
<a id="source-docs-tutorials-core-first-application-linux-index-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

In this tutorial, you’ll learn the use of micro-ROS with Linux by testing a Ping Pong application.
In the follow-up tutorial [*First micro-ROS application on an RTOS*](/_docs/tutorials/core/first_application_rtos/),
you'll learn how to build and bring this application on a microcontroller running the RTOS NuttX, FreeRTOS, or Zephyr.
Finally, in the tutorial [*Zephyr Emulator*](/_docs/tutorials/core/zephyr_emulator/) you'll learn how to test
a micro-ROS application on a Zephyr emulator.

{% include first_application_common/build_system.md %}

```bash
# Create firmware step
ros2 run micro_ros_setup create_firmware_ws.sh host
```

Once the command is executed, a folder named `firmware` must be present in your workspace.

This step is in charge, among other things, of downloading a set of micro-ROS apps for Linux, that are located at
`src/uros/micro-ROS-demos/rclc`.
Each app is represented by a folder containing the following files:

* `main.c`: This file contains the logic of the application.
* `CMakeLists.txt`: This is the CMake file containing the script to compile the application.

For the user to create a custom application, a folder `<my_app>` will need to be registered in this location,
containing the two files just described.
Also, any such new application folder needs to be registered in
`src/uros/micro-ROS-demos/rclc/CMakeLists.txt` by adding the following line:

```
export_executable(<my_app>)
```

In this tutorial, we will focus on the out-of-the-box `ping_pong` application located at
`src/uros/micro-ROS-demos/rclc/ping_pong`.
You can check the complete content of this app
[here](https://github.com/micro-ROS/micro-ROS-demos/tree/humble/rclc/ping_pong).

{% include first_application_common/pingpong_logic.md %}

The contents of the host app specific files can be found here:
[main.c](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/ping_pong/main.c) and
[CMakeLists.txt](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/ping_pong/CMakeLists.txt).
A thorough review of these files is illustrative of how to create a micro-ROS app in this RTOS.

## Building the firmware

Once the app has been created, the build step is in order.
Notice that, with respect to the four-steps workflow delined above, we would expect a configuration step to happen
before building the app. However, given that we are compiling micro-ROS in the host machine rather than in a board,
the cross-compilation implemented by the configuration step is not required in this case.
We can therefore proceed to build the firmware and source the local installation:

```bash
# Build step
ros2 run micro_ros_setup build_firmware.sh
source install/local_setup.bash
```
{% include first_application_common/agent_creation.md %}

### Add micro-ROS environment to bashrc (optional)

You can add the ROS 2 and micro-ROS workspace setup files to your `.bashrc` so the files do not have to be sourced every time a new command line is opened.
```bash
echo source /opt/ros/$ROS_DISTRO/setup.bash >> ~/.bashrc
echo source ~/microros_ws/install/local_setup.bash >> ~/.bashrc
```

## Running the micro-ROS app

At this point, you have both the client and the agent correctly installed in your host machine.

To give micro-ROS access to the ROS 2 dataspace, run the agent:

```bash
# Run a micro-ROS agent
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

And then, in another command line, run the micro-ROS node (remember sourcing the ROS 2 and micro-ROS installations, and setting the RMW Micro XRCE-DDS implementation):

```bash
source /opt/ros/$ROS_DISTRO/setup.bash
source install/local_setup.bash

# Use RMW Micro XRCE-DDS implementation
export RMW_IMPLEMENTATION=rmw_microxrcedds

# Run a micro-ROS node
ros2 run micro_ros_demos_rclc ping_pong
```

{% include first_application_common/test_app_host.md %}

## Multiple Ping Pong nodes

One of the advantages of having a Linux micro-ROS app is that you don't need to buy a bunch of hardware in order to
test some multi-node micro-ROS apps.
So, with the same micro-ROS agent of the last section, let's open four different command lines and run the following on
each:

```bash
cd microros_ws

source /opt/ros/$ROS_DISTRO/setup.bash
source install/local_setup.bash

export RMW_IMPLEMENTATION=rmw_microxrcedds

ros2 run micro_ros_demos_rclc ping_pong
```

As soon as all micro-ROS nodes are up and connected to the micro-ROS agent you will see them interacting:

```
user@user:~$ ros2 run micro_ros_demos_rclc ping_pong
Ping send seq 1711620172_1742614911                         <---- This micro-ROS node sends a ping with ping ID "1711620172" and node ID "1742614911"
Pong for seq 1711620172_1742614911 (1)                      <---- The first mate pongs my ping
Pong for seq 1711620172_1742614911 (2)                      <---- The second mate pongs my ping
Pong for seq 1711620172_1742614911 (3)                      <---- The third mate pongs my ping
Ping received with seq 1845948271_546591567. Answering.     <---- A ping is received from a mate identified as "546591567", let's pong it.
Ping received with seq 232977719_1681483056. Answering.     <---- A ping is received from a mate identified as "1681483056", let's pong it.
Ping received with seq 1134264528_1107823050. Answering.    <---- A ping is received from a mate identified as "1107823050", let's pong it.
Ping send seq 324239260_1742614911
Pong for seq 324239260_1742614911 (1)
Pong for seq 324239260_1742614911 (2)
Pong for seq 324239260_1742614911 (3)
Ping received with seq 1435780593_546591567. Answering.
Ping received with seq 2034268578_1681483056. Answering.
```

---

## Source: `_docs/tutorials/core/first_application_rtos/freertos.md`
<a id="source-docs-tutorials-core-first-application-rtos-freertos-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

In this tutorial, you'll learn the use of micro-ROS with FreeRTOS by testing a Ping Pong application.
{% include first_application_common/target_hardware.md %}
* [USB-to-Serial Cable Female](https://www.olimex.com/Products/Components/Cables/USB-Serial-Cable/USB-SERIAL-F/)

This tutorial can be adapted to other target hardware relatively easily. [Sameer Tuteja](https://sam-tj.github.io/) wrote a nice blog post for the use with an ESP32 WROOM32 Board at [https://link.medium.com/JFof42RUwib](https://link.medium.com/JFof42RUwib).

{% include first_application_common/build_system.md %}

```bash
# Create step
ros2 run micro_ros_setup create_firmware_ws.sh freertos olimex-stm32-e407
```

Once the command is executed, a folder named `firmware` must be present in your workspace.

This step is in charge, among other things, of downloading a set of micro-ROS apps for the specific platform you are
addressing.
In the case of FreeRTOS, these are located at `firmware/freertos_apps/apps`.
Each app is represented by a folder containing the following files:

* `app.c`: This file contains the logic of the application.
* `app-colcon.meta`: This file contains the micro-ROS app specific colcon configuration. Detailed info on how to
  configure the RMW via this file can be found
  [here](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/).

For the user to create its custom application, a folder `<my_app>` will need to be registered in this location,
containing the two files just described.

{% include first_application_common/config.md %}

In this tutorial, we will use a Serial transport (labeled as `serial`) and focus on the out-of-the-box `ping_pong`
application located at `firmware/freertos_apps/apps/ping_pong`. To execute this application with the chosen transport,
run the configuration command above by specifying the `[APP]` and `[OPTIONS]` parameters as below:

```bash
# Configure step with ping_pong app and serial transport
ros2 run micro_ros_setup configure_firmware.sh ping_pong --transport serial
```

You can check the complete content of the `ping_pong` app
[here](https://github.com/micro-ROS/freertos_apps/tree/humble/apps/ping_pong).

{% include first_application_common/pingpong_logic.md %}

The contents of the FreeRTOS app specific files can be found here:
[app.c](https://github.com/micro-ROS/freertos_apps/blob/humble/apps/ping_pong/app.c) and
[app-colcon.meta](https://github.com/micro-ROS/freertos_apps/blob/humble/apps/ping_pong/app-colcon.meta).
A thorough review of these files is illustrative of how to create a micro-ROS app in this RTOS.

{% include first_application_common/build_and_flash.md %}

{% include first_application_common/agent_creation.md %}

Then, depending on the selected transport and RTOS, the board connection to the agent may differ.
In this tutorial, we're using the Olimex STM32-E407 Serial connection, for which the Olimex development board is
connected to the computer using the usb to serial cable.

<img width="400" style="padding-right: 25px;" src="_docs/tutorials/core/imgs/5.jpg">

***TIP:** Color codes are applicable to
[this cable](https://www.olimex.com/Products/Components/Cables/USB-Serial-Cable/USB-SERIAL-F/).
Make sure to match Olimex Rx with Cable Tx and vice-versa. Remember GND!*

{% include first_application_common/run_app.md %}

{% include first_application_common/test_app_rtos.md %}

This completes the First micro-ROS Application on FreeRTOS tutorial. Do you want to [go back](../) and try a different RTOS, i.e. NuttX or Zephyr?

---

## Source: `_docs/tutorials/core/first_application_rtos/index.md`
<a id="source-docs-tutorials-core-first-application-rtos-index-md"></a>

After you have completed the [First micro-ROS application on Linux tutorial](../first_application_linux), you are now ready to flash a microcontroller with this application based on a Real-Time Operating System (RTOS).

Micro-ROS currently supports three different RTOS, namely NuttX, FreeRTOS, and Zephyr. Of course, the micro-ROS-related sections of the application code are independent of the underlying RTOS. Also, the basic tooling is the same as we have integrated the RTOS tools with the ROS 2 meta build system colcon. However, there are subtle differences in the configuration and the definition of the executables between the three RTOS. Therefore, for this tutorial, please decide for one RTOS to use:

<table style="border:none;">
 <tr>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="nuttx/"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="125" height="125" src="https://upload.wikimedia.org/wikipedia/commons/b/b0/NuttX_logo.png"><br/>NuttX</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="freertos/"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="263" height="100" src="https://upload.wikimedia.org/wikipedia/commons/4/4e/Logo_freeRTOS.png"><br/>FreeRTOS</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="zephyr/"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="220" height="114" src="img/_posts/logo-zephyr.jpg"><br/>Zephyr</a></td>
 </tr>
</table>

{% include logos_disclaimer.md %}

---

## Source: `_docs/tutorials/core/first_application_rtos/nuttx.md`
<a id="source-docs-tutorials-core-first-application-rtos-nuttx-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/>

In this tutorial, you'll learn the use of micro-ROS with NuttX by testing a Ping Pong application.
{% include first_application_common/target_hardware.md %}
* [USB-to-Serial Cable Female](https://www.olimex.com/Products/Components/Cables/USB-Serial-Cable/USB-SERIAL-F/)
* [USB-to-mini-USB cable](https://www.olimex.com/Products/Components/Cables/CABLE-USB-A-MINI-1.8M/)

{% include first_application_common/build_system.md %}

```bash
# Create step
ros2 run micro_ros_setup create_firmware_ws.sh nuttx olimex-stm32-e407
```

Once the command is executed, a folder named `firmware` must be present in your workspace.

This step is in charge, among other things, of downloading a set of micro-ROS apps for the specific platform you are
addressing.
In the case of NuttX, these are located [here](https://github.com/micro-ROS/nuttx_apps/tree/foxy/examples).
Each app is represented by a folder containing the following files:

* `app.c`: This file contains the logic of the application.
* `Kconfig`: This file contains the NuttX Kconfig configuration.
* `Make.defs`: This file contains the	NuttX build system definitions.
* `Makefile`: This file contains the NuttX specific app build script.

## Configuring the firmware

The configuration step will set up the main micro-ROS options and select the desired application.
It can be executed with the following command:

```bash
# Configure step
ros2 run micro_ros_setup configure_firmware.sh [APP] [OPTIONS]
```

In this tutorial, we will use a Serial transport and focus on the out-of-the-box `uros_pingpong`
application located [here](https://github.com/micro-ROS/nuttx_apps/tree/foxy/examples/uros_pingpong).
To execute this application with the chosen transport, run the configuration command above by specifying the `[APP]` parameter as below:

```bash
# Configure step with ping_pong app and serial-usb transport
ros2 run micro_ros_setup configure_firmware.sh pingpong
```

and with no `[OPTIONS]` parameter.

A pre-configured ethernet example is also available:
```bash
# Configure step with ping_pong app and serial-usb transport
ros2 run micro_ros_setup configure_firmware.sh pingpong-eth
```

To proceed with the configuration, clone the following NuttX tools repo:

```bash
# Download the tools necessary to work with NuttX
git clone https://bitbucket.org/nuttx/tools.git firmware/tools
```

and then install the required `kconfig-frontends`:

```bash
pushd firmware/tools/kconfig-frontends
./configure
make

# if the make command fails, type: autoreconf -f -i , and then rerun the make command.

sudo make install
sudo ldconfig
popd
```

Now we have two options to configure our micro-ROS transport:

- Interactive NuttX menu config
  * Launch the configuration menu:

    ```bash
    cd firmware/NuttX
    make menuconfig
    ```

  * You can check that the application has been selected under `Application Configuration ---> Examples ---> micro-ROS Ping Pong`.
  * The transport is also pre-configured under the `Application Configuration ---> micro-ROS ---> Transport` option.
  * To configure the transport, use the `IP address of the agent` and `Port number of the agent` options for UDP and `Serial port to use` for the serial example.
  * To save the changes, navigate to the bottom menu with the left and right arrows, and click on the `Save` button.
  * You will be asked if you want to save your new `.config` configuration, and you need to click `Ok`, and then `Exit`.
  * Push three times the `Esc` key to close the menu and go back to `microros_ws` with:

      ```bash
      cd ../..
      ```

- `kconfig-tweak` console commands:
  * Go to Nuttx configuration path:

    ```bash
    cd firmware/NuttX
    ```

  * UDP transport configuration:
    ```bash
    kconfig-tweak --set-val CONFIG_UROS_AGENT_IP "127.0.0.1"
    kconfig-tweak --set-val CONFIG_UROS_AGENT_PORT 8888
    ```

  * Serial transport configuration:
    ```bash
    kconfig-tweak --set-val CONFIG_UROS_SERIAL_PORT "/dev/ttyS0"
    ```

You can check the complete content of the `uros_pingpong` app
[here](https://github.com/micro-ROS/nuttx_apps/tree/foxy/examples/uros_pingpong).

{% include first_application_common/pingpong_logic.md %}

The contents of the FreeRTOS app specific files can be found here:
[app.c](https://github.com/micro-ROS/nuttx_apps/blob/foxy/examples/uros_pingpong/app.c),
[Kconfig](https://github.com/micro-ROS/nuttx_apps/blob/foxy/examples/uros_pingpong/Kconfig),
[Make.defs](https://github.com/micro-ROS/nuttx_apps/blob/foxy/examples/uros_pingpong/Make.defs) and
[Makefile](https://github.com/micro-ROS/nuttx_apps/blob/foxy/examples/uros_pingpong/Makefile).
A thorough review of these files is illustrative of how to create a micro-ROS app in this RTOS.

{% include first_application_common/build_and_flash.md %}

{% include first_application_common/agent_creation.md %}

Then, depending on the selected transport and RTOS, the board connection to the agent may differ.
In this tutorial, we're using the Olimex STM32-E407 Serial connection, for which the Olimex development board is
connected to the computer using the usb to serial cable.

<img width="400" style="padding-right: 25px;" src="_docs/tutorials/core/imgs/5.jpg">

Additionally, you'll need to connect a USB-to-mini-USB cable to the USB OTG 1 connector (the miniUSB connector
that is closer to the Ethernet port).

<img width="500" style="padding-right: 25px;" src="_docs/tutorials/core/imgs/7.jpg">

***TIP:** Color codes are applicable to
[this cable](https://www.olimex.com/Products/Components/Cables/USB-Serial-Cable/USB-SERIAL-F/).
Make sure to match Olimex Rx with Cable Tx and vice-versa. Remember GND!*

## Running the micro-ROS app

At this point, you have both the client and the agent correctly installed.

To give micro-ROS access to the ROS 2 dataspace, run the agent:

```bash
# Run a micro-ROS agent
ros2 run micro_ros_agent micro_ros_agent serial --dev [device]
```

***TIP:** you can use this command to find your serial device name: `ls /dev/serial/by-id/*`*

Then, in order to launch the micro-ROS application, you need to install and open Minicom,
a text-based serial port communications program. Open a new shell, and type:

```bash
sudo minicom -D [device] -b 115200
```

***TIP:** you can use this command to find your serial device name: `ls /dev/serial/by-id/*`. Select the one that starts with `usb-NuttX`.*

From inside the Minicom application, press three times the `Enter` key until Nuttx Shell (NSH) appears.
Once you enter the NSH command line, type:

```bash
uros_pingpong
```

{% include first_application_common/test_app_rtos.md %}

This completes the First micro-ROS Application on NuttX tutorial. Do you want to [go back](../) and try a different RTOS, i.e. FreeRTOS or Zephyr?

---

## Source: `_docs/tutorials/core/first_application_rtos/zephyr.md`
<a id="source-docs-tutorials-core-first-application-rtos-zephyr-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

In this tutorial, you'll learn the use of micro-ROS with Zephyr by testing a Ping Pong application.
{% include first_application_common/target_hardware.md %}
* [USB-to-mini-USB cable](https://www.olimex.com/Products/Components/Cables/CABLE-USB-A-MINI-1.8M/)

{% include first_application_common/build_system.md %}

```bash
# Create step
ros2 run micro_ros_setup create_firmware_ws.sh zephyr olimex-stm32-e407
```

{% include first_application_common/zephyr_common.md %}

{% include first_application_common/config.md %}

In this tutorial, we will use a USB transport (labeled as `serial-usb`) and focus on the out-of-the-box `ping_pong`
application located at `firmware/zephyr_apps/apps/ping_pong`. To execute this application with the chosen transport,
run the configuration command above by specifying the `[APP]` and `[OPTIONS]` parameters as below:

```bash
# Configure step with ping_pong app and serial-usb transport
ros2 run micro_ros_setup configure_firmware.sh ping_pong --transport serial-usb
```
You can check the complete content of the `ping_pong` app
[here](https://github.com/micro-ROS/zephyr_apps/tree/humble/apps/ping_pong).

{% include first_application_common/pingpong_logic.md %}

The contents of the Zephyr app specific files can be found here:
[main.c](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/src/main.c),
[app-colcon.meta](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/app-colcon.meta),
[CMakeLists.txt](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/CMakeLists.txt)
and [serial-usb.conf](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/serial-usb.conf).
A thorough review of these files is illustrative of how to create a micro-ROS app in this RTOS.

{% include first_application_common/build_and_flash.md %}

{% include first_application_common/agent_creation.md %}

Then, depending on the selected transport and RTOS, the board connection to the agent may differ.
In this tutorial, we're using the Olimex STM32-E407 USB connection, for which the Olimex development board is connected
to the computer using the USB OTG 2 connector (the miniUSB connector that is furthest from the Ethernet port).

<img width="400" style="padding-right: 25px;" src="_docs/tutorials/core/imgs/6.jpg">

{% include first_application_common/run_app.md %}

{% include first_application_common/test_app_rtos.md %}

This completes the First micro-ROS Application on Zephyr tutorial. Do you want to [go back](../) and try a different RTOS, i.e. NuttX or FreeRTOS?

---

## Source: `_docs/tutorials/core/overview/index.md`
<a id="source-docs-tutorials-core-overview-index-md"></a>

This chapter provides a number of tutorials to learn micro-ROS and relevant tools for the different RTOSes supported by micro-ROS. If you are new to micro-ROS, we strongly suggest that you take the tutorials in the following order:

* [**First micro-ROS application on Linux**](../first_application_linux/)
    
  This tutorial teaches you how to install the micro-ROS framework and tools. Then it will guide you to develop your own first micro-ROS application under Linux. (If you already know ROS 2, you will see that the tools are well integrated with standard ROS 2.)
    
* [**First micro-ROS application on an RTOS**](../first_application_rtos/)

  In this tutorial, you will learn how to build the application from the previous tutorial for a Real-Time Operating System (RTOS). You will see how to flash a microcontroller board with the application and how to communicate with it from a microprocessor running ROS 2 on Linux. (The tutorial covers all three RTOS supported by micro-ROS, namely NuttX, FreeRTOS, and Zephyr. The choice is up to you!)

Then, at this point, you may head over to the next section [**Programming with rcl and rclc**](../../programming_rcl_rclc/), where you will learn the concepts of the micro-ROS C API in this tutorial in depth. If you are already familiar with the ROS 2 C++ API or even the underlying ROS Client Support Library (rcl), you'll learn this very quickly.

In case you are using the corresponding RTOS or hardware, the following basic tutorials may be interesting before switching to the [**Programming with rcl and rclc**](../../programming_rcl_rclc/) section:

* [**Zephyr Emulator**](../zephyr_emulator/)

  In this tutorial, you'll learn the use of micro-ROS with Zephyr emulator by testing a Ping Pong application.
  
* [**Teensy with Arduino**](../teensy_with_arduino/)
     
  In this tutorial you will learn how to connect Teensy with micro-ROS and ROS 2. You will also learn how to install micro-ROS agent in linux systems to communicate with Teensy based arduino board using Arduino IDE. This tutorial will also cover a simple publisher topic published from teensy and subscribed using ROS2 interface. 

 In the [**Advanced Tutorials**](../../advanced/overview/) section, you'll find more advanced tutorials to strenghten your micro-ROS knowledge.

---

## Source: `_docs/tutorials/core/teensy_with_arduino/index.md`
<a id="source-docs-tutorials-core-teensy-with-arduino-index-md"></a>

<img src="https://img.shields.io/badge/Written_for-Foxy-green" style="display:inline"/>

In this tutorial you will learn how to connect Teensy with micro-ROS and ROS 2. 
You will also learn how to install micro-ROS agent in Linux systems to communicate with 
Teensy-based Arduino board using Arduino IDE. This tutorial will also cover a 
simple publisher topic published from teensy and subscribed using ROS 2 interface.

## Target platform

To start with, we will need a host computer with either having a native 
Ubuntu 20.04 installed ROS 2 Foxy or using a docker version of the freshly build ROS 2 Foxy 
from this link. Now let us also look at the connection diagram which will help us 
understand the full picture better.

![Illustration of Connection diagram of Teensy 3.2 with Host PC running ros2 and micro-ros-agent](_docs/tutorials/core/teensy_with_arduino/Teensy_micro_ros_connection.png)

## Installing ROS 2 and micro-ROS in the host computer: 

Note: These first few steps are the same as in the micro-ROS installation page as in this link

For this tutorial you have to install ROS 2 Foxy Fitzroy on your Ubuntu 20.04 LTS computer. 
You can do this from binaries, via Ubuntu packages, which are detailed 
[*here*](https://docs.ros.org/en/foxy/Installation/Alternatives/Ubuntu-Install-Binary.md).

Note: Otherwise it is possible to use fresh docker build of ROS 2 Foxy installation by running these commands:

```bash
 sudo apt install docker.io
 sudo docker run -it --net=host -v /dev:/dev --privileged ros:foxy
```
After running the docker, follow the command to verify if the ROS2 is running and shows the topic list:

![Illustration of topics](_docs/tutorials/core/teensy_with_arduino/rostopic_show.png)

Docker builds ROS 2 Foxy version can also be used where it is not possible to install 
native ROS 2 Foxy from binaries, e.g., Jetson Nano running Jetpack 4.5 with Ubuntu 18.04.

Now Once you have a ROS 2 installation in the computer or docker, follow these steps to install the micro-ROS build system:

```bash
# Source the ROS 2 installation
source /opt/ros/foxy/setup.bash
# Create a workspace and download the micro-ROS tools
mkdir microros_ws
cd microros_ws
git clone -b $ROS_DISTRO https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup
# Update dependencies using rosdep
sudo apt update && rosdep update
rosdep install --from-paths src --ignore-src -y
# Install pip
sudo apt-get install python3-pip

# Build micro-ROS tools and source them
colcon build
source install/local_setup.bash
```

Once the micro-ROS installation is complete, we can then proceed to install the micro-ROS agent 
in the host computer or the docker version. Since we are going to use Teensy 3.2 and precompiled 
micro-ROS client library for our demonstration we will not be going to build the firmware and 
thus we will skip the firmware build steps from the [first micro-ROS Application on an RTOS tutorials](../first_application_rtos/).

To install the micro-ros Agent follow the steps below:

```bash
# Download micro-ROS agent packages
ros2 run micro_ros_setup create_agent_ws.sh
```
We will now build the agent packages and, when this is done, source the installation:

```bash
# Build step
ros2 run micro_ros_setup build_agent.sh
source install/local_setup.bash
```
Now, let's give a dry run by running the micro-ROS agent by following the command:

```bash
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyACM0
```
The result should show something like this:

![Illustration of agent running](_docs/tutorials/core/teensy_with_arduino/micro_ros_agent_start.png)

This means the installation of the agent is successful. 
Now we can proceed to the next step which is the installation of Arduino IDE 
and Teensyduino and patching the Arduino-based Teensy board for using the 
pre-compiled libraries as described [*in the micro_ros_arduino repository*](https://github.com/micro-ROS/micro_ros_arduino#patch-teensyduino).

## Installation of Arduino IDE, Teensyduino and setting up the patch for using the Teensy with micro-ROS and ROS2 foxy:

Please follow the link for downloading the latest version of 
[*Arduino 1.8.15*](https://github.com/arduino/Arduino/releases/download/1.8.15/arduino-1.8.15.tar.xz) 
and install by following this [*link for the Linux version*](https://www.arduino.cc/en/Guide/Linux) here.

After installing Arduino IDE download Teensyduino from this [*link here*](https://www.pjrc.com/teensy/td_154/TeensyduinoInstall.linux64) 
and follow the instruction as shown [*on this page*](https://www.pjrc.com/teensy/td_154/TeensyduinoInstall.linux64). 
To summarize the instructions which are as follow:

```
1. Download the Linux udev rules and copy the file to /etc/udev/rules.d.
https://www.pjrc.com/teensy/00-teensy.rules

2. type the following command in a terminal 
$ sudo cp 00-teensy.rules /etc/udev/rules.d/

3. Download and extract one of Arduino's Linux packages.
Note: Arduino from Linux distro packages is not supported.

4. Download the corresponding Teensyduino installer.

5. Run the installer in a termincal by adding execute permission and then execute it.
$ chmod 755 TeensyduinoInstall.linux64
$ ./TeensyduinoInstall.linux64
```
Now let's set up the patch for the teensy Arduino to use the pre-compiled micro-ros-client 
libraries, Open a terminal window and follow the commands below: For more information follow 
the GitHub link from [*micro_ros_arduino*](https://github.com/micro-ROS/micro_ros_arduino/tree/foxy)

```bash
# for me it was $ export ARDUINO_PATH=/home/manzur/arduino-1.8.13/
export ARDUINO_PATH=[Your Arduino + Teensiduino path]

cd $ARDUINO_PATH/hardware/teensy/avr/

curl https://raw.githubusercontent.com/micro-ROS/micro_ros_arduino/foxy/extras/patching_boards/platform_teensy.txt > platform.txt
```

Once the above instruction is complete, we will now be able to use the Teensy 3.2 and 
program it with the pre-compiled micro-ros-client libraries using Arduino IDE.

## Program the Teensy

Now that we have patched the teensy Arduino IDE, we will be able to use the pre-compiled library by following these instructions:

1. Go to [*link to release section*](https://github.com/micro-ROS/micro_ros_arduino/releases) 
and download the last release of micro-ROS library for Arduino. 
Place the file inside `/home/$USERNAME/Arduino/libraries/` as shown below.

![Illustration of patch location](_docs/tutorials/core/teensy_with_arduino/patch_location.png)

Once this process is complete, now let us look at the example folder below:

![Illustration of example location](_docs/tutorials/core/teensy_with_arduino/arduino_example_location.png)

For this tutorial and test, we will be using mico-ros-publisher example as shown above since this 
program will only publish integer data which will increase in every cycle. Once we selected the 
example program, we will then upload the code in the Teensy 3.2 connected to our host computer 
which should show the result as follow.

![Illustration of upload completion](_docs/tutorials/core/teensy_with_arduino/upload_completion.png)

## Running micro-ROS agent in ROS 2 Foxy

Now, let's disconnect the Teensy for now from the host computer. We will then open a terminal 
or in the docker run the agent program once again as shown at the end of 
step 2. Make sure to source the ROS path as below:

```bash
source /opt/ros/foxy/setup.bash
```

and then run the agent program:

```bash
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyACM0
```
Once the program is running it will show this message:

![Illustration of agent restart completion](_docs/tutorials/core/teensy_with_arduino/agent_restart.png)

We will then reconnect the Teensy with the host computer and then we will see 
that the connection is complete and it shows like this:

![Illustration of agent connected](_docs/tutorials/core/teensy_with_arduino/agent_connected.png)

This means the connection is complete with teensy containing micro-ros-client and micro-ros-agent in the host computer.
Now for the big moment and test the ROS topic published from the teensy. 
This time we will open another terminal or docker window and type as follow:

```bash
ros2 topic list
```
Which should list as shown below:

![Illustration of ros2 topic connected](_docs/tutorials/core/teensy_with_arduino/ros2_topic_all.png)

See, we have now `/micro_ros_arduino_node_publisher` topic publishing in the host computer. 
If we listen to the topic we will see something like this:

![Illustration of ros2 topic showing data](_docs/tutorials/core/teensy_with_arduino/topic_show.png)

The integer msg data increasing in each cycle.

_Note: This tutorial was first published by the author [Manzur Murshid](https://github.com/shazib2t) on [https://manzurmurshid.medium.com/how-to-connect-teensy-3-2-with-micro-ros-and-ros2-foxy-6c8f99c9b66a](https://manzurmurshid.medium.com/how-to-connect-teensy-3-2-with-micro-ros-and-ros2-foxy-6c8f99c9b66a)._

---

## Source: `_docs/tutorials/core/zephyr_emulator/index.md`
<a id="source-docs-tutorials-core-zephyr-emulator-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/>

In this tutorial, you'll learn the use of micro-ROS with a **[Zephyr RTOS](https://www.zephyrproject.org/)**
emulator (also known as [Native POSIX](https://docs.zephyrproject.org/4.1.0/boards/native/native_posix/doc/index.md))
by testing a Ping Pong application.

<div>
<img  width="300" style="padding-right: 25px;" src="img/_posts/logo-zephyr.jpg">
</div>

{% include first_application_common/build_system.md %}

```bash
# Create step
ros2 run micro_ros_setup create_firmware_ws.sh zephyr host
```

{% include first_application_common/zephyr_common.md %}

{% include first_application_common/config.md %}

In this tutorial, we will use a UDP transport that looks for the agent on the port UDP/8888 at localhost, and focus on
the out-of-the-box `ping_pong` application located at `firmware/zephyr_apps/apps/ping_pong`.
To execute this application with the chosen transport, run the configuration command above by specifying the `[APP]`
and `[OPTIONS]` parameters as below:

```bash
# Configure step
ros2 run micro_ros_setup configure_firmware.sh ping_pong --transport udp --ip 127.0.0.1 --port 8888
```

You can check the complete content of the `ping_pong` app
[here](https://github.com/micro-ROS/zephyr_apps/tree/humble/apps/ping_pong).

{% include first_application_common/pingpong_logic.md %}

The contents of the Zephyr app specific files can be found here:
[main.c](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/src/main.c),
[app-colcon.meta](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/app-colcon.meta),
[CMakeLists.txt](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/CMakeLists.txt)
and [host-udp.conf](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/host-udp.conf).
A thorough review of these files is illustrative of how to create a micro-ROS app in this RTOS.

## Building the firmware

When the configuring step ends, just build the firmware:

```bash
# Build step
ros2 run micro_ros_setup build_firmware.sh
```

Now you have a Zephyr + micro-ROS app ready to run on your own computer.
Notice that in this case, the steps of flashing the firmware and running the micro-ROS app go together.

{% include first_application_common/agent_creation.md %}

## Running the micro-ROS app

At this point, you have both the client and the agent correctly installed in your host machine.

To give micro-ROS access to the ROS 2 dataspace, run the agent:

```bash
# Run a micro-ROS agent
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

## Flashing the firmware

Finally, in order to run the micro-ROS node inside of the Zephyr RTOS emulator,
open a new command shell and execute the flash step by means of the flashing command:

```bash
source /opt/ros/$ROS_DISTRO/setup.bash
source install/local_setup.bash

# Flash/run step
ros2 run micro_ros_setup flash_firmware.sh
```

{% include first_application_common/test_app_host.md %}

## Multiple Ping Pong nodes

One of the advantages of having an emulator is that you don't need to buy a bunch of hardware in order to test some
multi-node micro-ROS apps. So, with the same micro-ROS agent of the last section, let's open four different command
lines and run the following on each:

```bash
cd microros_ws

# This is an alternative way of executing the Zephyr emulator
./firmware/build/zephyr/zephyr.exe
```

As soon as all micro-ROS node are up and connected to the micro-ROS agent you will see them interacting:

```
user@user:~$ ./firmware/build/zephyr/zephyr.exe
*** Booting Zephyr OS build zephyr-v2.2.0-492-gc73cb85b4ae9  ***
Ping send seq 1711620172_1742614911                         <---- This micro-ROS node sends a ping with ping ID "1711620172" and node ID "1742614911"
Pong for seq 1711620172_1742614911 (1)                      <---- The first mate pongs my ping
Pong for seq 1711620172_1742614911 (2)                      <---- The second mate pongs my ping
Pong for seq 1711620172_1742614911 (3)                      <---- The third mate pongs my ping
Ping received with seq 1845948271_546591567. Answering.     <---- A ping is received from a mate identified as "546591567", let's pong it.
Ping received with seq 232977719_1681483056. Answering.     <---- A ping is received from a mate identified as "1681483056", let's pong it.
Ping received with seq 1134264528_1107823050. Answering.    <---- A ping is received from a mate identified as "1107823050", let's pong it.
Ping send seq 324239260_1742614911
Pong for seq 324239260_1742614911 (1)
Pong for seq 324239260_1742614911 (2)
Pong for seq 324239260_1742614911 (3)
Ping received with seq 1435780593_546591567. Answering.
Ping received with seq 2034268578_1681483056. Answering.
```

***TIP:** use the help flag to discover some Zephyr emulation features `./firmware/build/zephyr/zephyr.exe -h`*

---

## Source: `_docs/tutorials/demos/combined_demos/index.md`
<a id="source-docs-tutorials-demos-combined-demos-index-md"></a>

You may combine the different demos for even more functionality. In detail, the following combinations are supported by launch files:

| <span style="display:block;width:220px;">_Combination_</span> | _Description_ | _Launch Files_ |
| --- | --- | --- |
| <span style="white-space:nowrap;font-size:250%;"><img src="_docs/tutorials/demos/combined_demos/kobuki.png" style="height:45px;display:inline-block;"/> + <img src="_docs/tutorials/demos/combined_demos/tof_sensor.png" style="height:45px;display:inline-block;"/></span> | ToF sensor serves as a invisible barrier. If the Kobuki drives into the ToF sensor's light beam, any further forward motion will be prevented until the Kobuki has been driven out of the beam. This is signalled from the ToF sensor to the Kobuki via a topic `/emergency_stop`. |  |
| <span style="white-space:nowrap;font-size:250%;"><img src="_docs/tutorials/demos/combined_demos/kobuki.png" style="height:45px;display:inline-block;"/> + <img src="_docs/tutorials/demos/combined_demos/crazyflie.png" style="height:45px;display:inline-block;"/></span> | Roll and pitch of the Crazyflie are used as controls for the Kobuki. Thus, if the remote-controlled Crazyflie is positioned above and aligned with the Kobuki, they will move synchronously. Alternatively, the Crazyflie may be taken into the hand and used as high-end remote control for the Kobuki. |  | 
| <span style="white-space:nowrap;font-size:250%;"><img src="_docs/tutorials/demos/combined_demos/kobuki.png" style="height:45px;display:inline-block;"/> + <img src="_docs/tutorials/demos/combined_demos/crazyflie.png" style="height:45px;display:inline-block;"/> + <img src="_docs/tutorials/demos/combined_demos/tof_sensor.png" style="height:45px;display:inline-block;"/></span> | The Kobuki may be controlled using the Crazyflie or synchronous with it, as described above. Any forward movement will be prevented if the Kobuki drives into the ToF sensor's beam. |  | 

---

## Source: `_docs/tutorials/demos/crazyflie_demo/index.md`
<a id="source-docs-tutorials-demos-crazyflie-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include crazyflie_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## Source: `_docs/tutorials/demos/demobox_demo/index.md`
<a id="source-docs-tutorials-demos-demobox-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include demobox_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## Source: `_docs/tutorials/demos/edgeimpulse/index.md`
<a id="source-docs-tutorials-demos-edgeimpulse-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-blue" style="display:inline"/>

![Edge Impulse](_docs/tutorials/demos/edgeimpulse/ei_logo.png)

---

This example demonstrates how to run an image classification neural network (built using [Edge Impulse](https://www.edgeimpulse.com/)) on the [Arduino Portenta H7](https://store.arduino.cc/products/portenta-h7) and publish the classification results using micro-ROS. The tutorial also shows how to add custom message types to micro-ROS and ROS 2. The motivation behind this demo is to offer a way to add AI functionality to ROS 2 robots without bogging down the main computational unit with additional neural nets. This is especially helpful when the offloading of computational tasks to a companion laptop (for instance) is not an option. 

With this approach the MCU publishes inference results using a custom message type `EIResult` (Edge Impulse result), which is made up of multiple `EIClassification` items. The tutorial associated with this demo explains how to go about adding these custom message types. A single classification looks like this:

```
'dog': 0.75
```

It contains a single label (class) and its probability. A full result looks like this:

```
'dog': 0.75,
'cat': 0.25
```

It contains all labels and their probabilities (together summing to 1). The size of the result messages depends on how many labels (classes) your image model is trained on (the example above has two). The code in this example will automatically allocate the necessary memory to support an arbitrary number of labels depending on your model.



By running neural networks on MCUs and publishing their inferences using micro-ROS, it becomes straightforward to experiment with a "distributed" approach to AI in robotics, where the central computer is concerned only with the results of the neural networks and not with sensor data ingest nor calculation.

![Traditional vs distributed approach](_docs/tutorials/demos/edgeimpulse/traditional_vs_distributed.png)

---


To run this demo yourself, check out the video walk through and instructions given [here](https://github.com/avielbr/micro_ros_ei).

---

## Source: `_docs/tutorials/demos/fiware_demo/index.md`
<a id="source-docs-tutorials-demos-fiware-demo-index-md"></a>

Work-in-progress.

---

## Source: `_docs/tutorials/demos/kobuki_demo/index.md`
<a id="source-docs-tutorials-demos-kobuki-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Dashing-yellow" style="display:inline"/>

The micro-ROS Kobuki Demo illustrates the use of micro-ROS on the Kobuki platform, which is the mobile base of the well-known Turtlebot 2 research robot.

The basic idea and working principle of this demo is as follows: Instead of a laptop running ROS, the Kobuki is equipped with a STM32F4 microcontroller only. This STM32F4 runs the micro-ROS stack and a port of the [thin_kobuki driver](https://github.com/Lab-RoCoCo/thin_drivers), which interacts with the robot's firmware (which runs on a built-in microcontroller). The STM32F4 communicates the sensor data via DDS-XRCE to a remote laptop running a standard ROS 2 stack, the micro-ROS agent and rviz. At the same time, using the other direction of communication, the Kobuki can be remote-controlled.

![Illustration of idea and working principle](_docs/tutorials/demos/kobuki_demo/working_principle.png)

To run this demo yourself, follow the instructions given in [https://github.com/micro-ROS/micro-ROS_kobuki_demo](https://github.com/micro-ROS/micro-ROS_kobuki_demo)

---

## Source: `_docs/tutorials/demos/moveit2_demo/index.md`
<a id="source-docs-tutorials-demos-moveit2-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include moveit2_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## Source: `_docs/tutorials/demos/openmanipulator_demo/index.md`
<a id="source-docs-tutorials-demos-openmanipulator-demo-index-md"></a>

<img src="https://img.shields.io/badge/Written_for-Dashing-yellow" style="display:inline"/>

{% capture my_include %}{% include openmanipulator_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## Source: `_docs/tutorials/demos/overview/index.md`
<a id="source-docs-tutorials-demos-overview-index-md"></a>

In addition to the above entry-level tutorials, we created a collection of demos that showcase micro-ROS in real applications which are easy to reproduce by the community &mdash; and thus _you_.
Unlike tutorials, we do not explain the demo code step by step, but provide ready-to-use Docker files to get you started as quickly as possible.

Below, you can find a table
Choose yourself:

| Demo |  | _RTOS_ | _Hardware_* |
| --- | :-: | :-: | :-: |
| [**Kobuki Demo**](../kobuki_demo/) | <img src="_docs/tutorials/demos/overview/kobuki.png" style="margin:auto;"/> | NuttX | Kobuki Turtlebot2, Olimex LTD STM32-E407 |
| [**Crazyflie Demo**](../crazyflie_demo/) | <img src="_docs/tutorials/demos/overview/crazyflie.png" style="margin:auto;"/> | FreeRTOS | Crazyflie 2.1 Drone |
| [**ToF Sensor Demo**](../tof_demo/) | <img src="_docs/tutorials/demos/overview/tof_sensor.png" style="margin:auto;"/> | Zephyr | STM32L4 Discovery kit IoT |
| [**OpenManipulator-X Demo**](../openmanipulator_demo/) | <img src="_docs/tutorials/demos/overview/openmanipulator.png" width="70%" style="margin:auto;"/> | Zephyr | Robotis OpenMANIPULATOR-X, Olimex LTD STM32-E407, Raspberry Pi 4 |
| [**Interfacing with FIWARE Context Broker**](../fiware_demo/) | -- | -- |
| [**DemoBox Power and Boot Time**](../demobox_demo/) | <img src="_docs/tutorials/demos/overview/olimex.png" width="35%" style="margin:auto;"/> | NuttX | Olimex LTD STM32-E407, Raspberry Pi 4 |
| [**Thumper, a six-wheeled robot**](../thumper_demo/) | <img src="_docs/tutorials/demos/overview/thumper.png" width="45%" style="margin:auto;"/> | NuttX | Wild Thumper 6WD, Olimex LTD STM32-E407 |
| [**MoveIt 2 Demo**](../moveit2_demo/) | <img src="_docs/tutorials/demos/overview/tof_sensor.png" style="margin:auto;"/> | Zephyr | STM32L4 Discovery kit IoT |
| [**Edge Impulse AI demo**](../edgeimpulse/) | <img src="_docs/tutorials/demos/overview/portenta.png" width="40%" style="margin:auto;"/> | Arduino | Arduino Portenta H7, Vision shield |
| [**Combined Demos**](../combined_demos/) | -- | -- |

<div style="font-size:80%;color:gray;text-align:right;margin-bottom:1em;">*As a matter of course, in addition to the hardware detailed above, you'll need a computer/laptop, various cables, and further auxiliary equipment.</div>

**WIP:** The demos may also interface with the FIWARE Context Broker, which is the core of the [FIWARE](https://www.fiware.org/) open source initiative for context data management. Learn more at [**Interfacing with FIWARE Context Broker**](../fiware_demo/).

**WIP:** The demos can be combined in several ways to demonstrate further functionalities. Go to [**Combined Demos**](../combined_demos/) to learn more about these combinations and how to launch them.


---

## Source: `_docs/tutorials/demos/thumper_demo/index.md`
<a id="source-docs-tutorials-demos-thumper-demo-index-md"></a>

<img src="https://img.shields.io/badge/Written_for-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include thumper_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## Source: `_docs/tutorials/demos/tof_demo/index.md`
<a id="source-docs-tutorials-demos-tof-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include sensors_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## Source: `_docs/tutorials/old/6lowpan/index.md`
<a id="source-docs-tutorials-old-6lowpan-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/>

In this guide, we will show how to use micro-ROS over 6LoWPAN communication.

## What is 6LoWPAN?

6LoWPAN is an acronym o IPv6 over Low-Power Wireless Personal Area Networks.
This communication protocol allows wireless communication over IEEE 802.15.4 based networks using IPv6. Some of the main advantages are:
- Easy to route from radio devices to the Internet, thanks to the usage of the IP packets.
- Easy to use on UDP and TCP server/clients.
- A protocol designed for low power and constrained devices, perfect or micro-ROS remote sensors.

## Needed hardware

At present, 6LoWPAN is only available for the NuttX RTOS.
In order to implement the steps highlighted in this guide, you need the following devices:

- Raspberry Pi.
- [Olimex-STM32-E407 board](https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware).
- [PmodRF2 Radio](https://store.digilentinc.com/pmod-rf2-ieee-802-15-rf-transceiver/).
- micro-ROS-bridge-RPI.

**Important!**
You can find a guide of how to setup the micro-ROS-bridge_RPI at its [repository](https://github.com/micro-ROS/micro-ROS-bridge_RPI/blob/new_bridge_tools/README.md).
In the micro-ROS-bridge-RPI guide, you can find everything that you need to set-up this device base.

## Configure the board

The configuration of the board is divided into two parts: hardware and software set-up.

### Hardware set-up

First we are going to connect the PmodRF2 radio. 

|       | RPi | Olimex | PmodRF2 |
| ----- | --- | ------ | ------- |
| VIN   | 1   | D13    | 12      |
| GND   | 20  | GND    | 11      |
| RESET | 17  | -      | 8       |
| INT   | 16  | D8     | 7       |
| SDI   | 19  | D12    | 2       |
| SDO   | 21  | D11    | 3       |
| SCK   | 23  | D13    | 4       |
| CS    | 26  | D10    | 1       |

To ease the set-up process, you can use the [RPi pinout](https://pinout.xyz/#) and [PmodRF2 pinout](https://reference.digilentinc.com/reference/pmod/pmodrf2/start).

The last step is to connect a mini-USB cable to the OTG2 USB port (this USB port next to the Ethernet port).

### Software set-up

To create and flash the firmware, we are going to use the micro-ROS build system.
You can find the instructions at the micro_ros_setup's [README](https://github.com/micro-ROS/micro_ros_setup/blob/dashing/micro_ros_setup/README.md).
For this particular guide, it is necessary to use the branch `dashing` and the configuration profile `uros_6lowpan`.

Once you follow all the instructions in the build system and flash the board, everything is ready.

## How to use it?

- Turn on the Olimex board and open the NSH console on a terminal.
- Check if all the applications are ready by typing `?` on the console. It should return the following:

```bash
help usage:  help [-v] [<cmd>]

  [         cd        df        help      ls        mw        set       true      
  ?         cp        echo      hexdump   mb        ps        sh        uname     
  addroute  cmp       exec      ifconfig  mkdir     pwd       sleep     umount    
  basename  dirname   exit      ifdown    mh        rm        test      unset     
  break     dd        false     ifup      mount     rmdir     telnetd   usleep    
  cat       delroute  free      kill      mv        route     time      xd        

Builtin Apps:
  ping6         i8sak         uros_6lowpan 
```
- Now turn-on the RPi and execute the micro-ROS-bridge-RPI tool by typing the next command:

```bash
./ ~/micro-ROS-HB.sh
```
- Once everything is configured, it will return the connection data of the 6LoWPAN network:

```bash
lowpan0: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1280
        inet6 fe80::b482:ca65:743b:b6bd  prefixlen 64  scopeid 0x20<link>
        unspec B6-82-CA-65-74-3B-B6-BD-00-00-00-00-00-00-00-00  txqueuelen 1000  (UNSPEC)
        RX packets 0  bytes 0 (0.0 B)
        RX errors 0  dropped 0  overruns 0  frame 0
        TX packets 21  bytes 2242 (2.1 KiB)
        TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0

1) Add new 6LoWPAN micro-ROS device	 3) Create UDP micro-ROS Agent		  5) Create Serial micro-ROS Agent server
2) Create UDP 6LoWPAN micro-ROS Agent	 4) Create TCP micro-ROS Agent		  6) Quit
#? 
```
- The value **inet6** is the IPv6 direction of the RPi over the 6LoWPAN interface. Copy it because is necessary for the subsequent steps.
- Execute the micro-ROS 6LoWPAN application on the Olimex typing the next command:

```bash
uros_6lowpan <Agent_IP> <Agent_Port> <pub/sub>
```
  where `Agent_IP` is the IPv6 copied previously, `Agent_PORT` is the port selected for the Agent and `pub/sub` controls the application behavior: in case of `pub` it will act as publisher and as in case of `sub`, it will act as a subscriber.

- Once you execute the app, ti will ask you if you want to configure the 6LoWPAN network.
  - This will return connection data, you should save the `inet_6_addr` and `HWaddr`.
  - Note: if you want to change the ID of the radio, you can do it on the `menuconfig` of NuttX on the example configuration.

```bash
nsh> uros_6lowpan fe80::bc81:c3b9:5c14:1ab 8888 pub
Do you want to configure the 6lowpan network? (Y/N)
ifdown wpan0...OK
i8sak: resetting MAC layer
i8sak: starting PAN
Introduce your 6LowPan ID (It must between 00 and FF (Hex))
i8sak: accepting all assoc requests
i8sak: daemon started
ifup wpan0...OK
Connection data
wpan0   Link encap:6LoWPAN HWaddr 00:be:ad:de:00:de:fa:00 at UP
        inet6 addr: fe80::2be:adde:de:fa00/64
        inet6 DRaddr: ::/64

        RX: Received Fragment Errors  
            00000000 00000000 00000000
            IPv6     Dropped 
            00000000 00000000
        TX: Queued   Sent     Errors   Timeouts
            00000000 00000000 00000000 00000000
        Total Errors: 00000000
```

- After this step, the application on the Olimex board will be blocked waiting for a user input confirming that the Agent on the bridge is ready to receive data.

- Go back to the bridge, now we are going to add a new 6LoWPAN device. Push `1 + enter`. (Note: this step is only necessary if you are attaching for the first time a new device).
  - First, introduce the IPv6 of the Olimex board (`inet6_addr`).
  - Introduce the hardware address of the Olimex board (HWaddr).
  - Now the device is registered and ready to establish communication.
- The final step on the bridge is to execute the micro-ROS-Agent, to do so, push `2 + enter` and introduce the port to use.

---

## Source: `_docs/tutorials/old/add_microros_config/index.md`
<a id="source-docs-tutorials-old-add-microros-config-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/> <img src="https://img.shields.io/badge/Written_for-Dashing-yellow" style="display:inline"/>

In this tutorial, we will see how to set a basic Micro-ROS configuration for NuttX over serial communication. Since this guide is only focused on setting the configuration, you should check the tutorial linked here before: [First micro-ROS Application on an RTOS](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/)

**Disclamer**

This guide is not guarantee to work on every NuttX supported board, because each one has a different level of peripheral implementation and memory available.

## Required hardware

- Any NuttX supported board with at least these characteristics:
    - STM32 MCU.
    - RAM: 125 Kb.
    - Flash: 512 kb.
    - Serial communication peripheral.

- USB-TTY serial cable.

## Workspace set-up

As a first thing, we're going to create a Micro-ROS workspace. To do so, we will execute the following commands on a console:

```
source /opt/ros/$ROS_DISTRO/setup.bash

mkdir uros_ws && cd uros_ws

git clone -b $ROS_DISTRO https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup

rosdep update && rosdep install --from-path src --ignore-src -y

colcon build

source install/local_setup.bash
```



## Set the base configuration

 In this guide we will give Micro-ROS support for the [Olimex-STM32-H407 board](https://www.olimex.com/Products/ARM/ST/STM32-H407/open-source-hardware) as an example.

This board is a simplified version of our supported Olimex-STM32-E407 board. 

In the previous console, execute the following commands to set the basic configuration:
```bash
ros2 run micro_ros_setup create_firmware_ws.sh nuttx olimex-stm32-h407
ros2 run micro_ros_setup configure_firmware.sh nsh
```

If everything goes fine, it should output the message:
```bash
Copy files
Refreshing...
```

Now the basic NSH configuration is set. With the steps that follow, we will set the required configuration to run Micro-ROS on this board.

## Micro-ROS configuration.

In the same console as before, run the commands:
```bash
cd firmware/NuttX
make menuconfig
```

The menu below should appear:
![](_docs/tutorials/old/add_microros_config/images/nuttx_menuconfig.png)

Note: Remember that you should follow this previous tutorial before starting it. [First micro-ROS Application on an RTOS](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/)

In the menu, you need to set the following configuration.

- System Type > STM32 Peripheral Support > USART3
- RTOS Features > Clocks and Timers > Support CLOCK_MONOTONIC
- Device Drivers > Serial Driver Support > Serial TERMIOS support
- Library Routines > Standard Math Library
- Library Routines > sizeof(_Bool) is a 8-bits
- Library Routines > Build uClibc++ (must be installed) 
- Application Configuration > micro-ROS
- Application Configuration > micro-ROS > Transport > Serial Transport
- Application Configuration > Examples > microROS Publisher

Push two times the key "ESC" and set yes, when it asks you if you want to save it.

Now the configuration is properly set, the only thing left is to compile it. To do so, continue in the same console and execute the commands:
```
cd ../..
ros2 run micro_ros_setup build_firmware.sh
```

If everything goes fine, it should return the following output:
```bash
CP: nuttx.hex
CP: nuttx.bin
```

---

## Source: `_docs/tutorials/old/debugging/index.md`
<a id="source-docs-tutorials-old-debugging-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/>

This tutorial consists of two parts: First, debugging a NuttX target with GDB and OpenOCD. This part covers tool installation and debugging via command line. Second, debugging with Visual Studio Code, i.e. using a modern IDE.

## Debugging a NuttX target with GDB and OpenOCD

Rare is the program that works on the first try -- so you will usually need a debugger. This is even more true on an embedded device, where "printf"-style debugging is very cumbersome.

There are many tools for embedded debugging. This tutorial will show you how to debug on the command line, using the [GNU Debugger gdb](https://www.gnu.org/software/gdb/) and the [Open On-Chip Debugger, OpenOCD](http://openocd.org/). These two open source tools are readily available on Linux, and they form the basis for many more advanced tools, including graphical debuggers.

NuttX integration for OpenOCD is relatively new as of the time of writing (early 2019), so this tutorial also includes instructions on how to get and configure it.

### Pre-Requisites

#### Hardware

<!-- Dead links -->
 * a supported embedded board
 * a support debugger probe

#### Software

 * a NuttX development setup, including gdb
 * OpenOCD-Nuttx (but we will show to install that)


### Install OpenOCD-Nuttx

Sony has added NuttX support to OpenOCD, and most importantly, this includes thread info. Since NuttX is a real RTOS with support multiple tasks/threads, you need thread support to look at anything other than the currently active task.

#### Get the code

The repository is on GitHub at [https://github.com/sony/openocd-nuttx](https://github.com/sony/openocd-nuttx). Check it out like this:
```
git clone --depth 1 https://github.com/sony/openocd-nuttx
```
(the '--depth 1' is not required, but it saves you from downloading unnecessary data)

Do *not* compile openocd just yet!

#### Determine your NuttX configuration

NuttX sometimes switches around the memory location of the necessary information, so we need to configure OpenOCD for the currently used NuttX version.

Put the following into your `.gdbinit`:
```
define print-offset
 printf "#define PID  %p\n",&((struct tcb_s *)(0))->pid
 printf "#define XCPREG  %p\n",&((struct tcb_s *)(0))->xcp.regs
 printf "#define STATE %p\n",&((struct tcb_s *)(0))->task_state
 printf "#define NAME %p\n",&((struct tcb_s *)(0))->name
 printf "#define NAME_SIZE %d\n",sizeof(((struct tcb_s *)(0))->name)
end
```

Then run gdb on your nuttx binary and run this function:
```
arm-none-eabi-gdb nuttx
(gdb) print-offset
```
On Nuttx 7.27, the result should look something like this:
![gdb print offset output](img/tutorials/gdb-print-offset.png)
The interesting bits are the `#define` statements at the end,

Now open `openocd-nuttx/src/nuttx_header.h` in your favor editor, locate the existing `#define` lines
and replace them with what you got. The result should be like this:
![](img/tutorials/nuttx_header_h.png)

#### Configure OpenOCD for NuttX support

OpenOCD has a set of target configurations for the various boards. Since the boards could run one of many RTOS's, the default configuration doesn't specify any particular one -- so we have to add it.

When using the Olimex STM32-E407 board, one of our standard boards, the target configuration file is `stm32f4x.cfg` and it is normally located in `tcl/target/`. For your hardware, it might be a different file, so be sure to use the right one.

Open the target configuration and locate a line starting with `$_TARGETNAME configure`. Then add `-rtos nuttx` to this line.

#### Compile OpenOCD

**NOTE** The Sony OpenOCD branch has some compile issues on Ubuntu 18.04 right now, because it uses a newer compiler. The easiest "solution" is to remove the `-Werror` from your compile. We'll submit a patch soon.

To compile and install OpenOCD, after you made your changes, run
```bash
./bootstrap
./configure
make
sudo make install
```

#### Test OpenOCD

To test OpenOCD, try the following command line:
```bash
/usr/local/bin/openocd -f /usr/share/openocd/scripts/interface/ftdi/olimex-arm-usb-ocd-h.cfg -f stm32f4x.cfg -c init -c "reset halt"
```

The output should look as in the following image:
![OpenOCD test output](img/tutorials/openocd-test.png)

OpenOCD will then block, waiting for a debugger to attach, so lets do that in the next section.

### Running GDB with OpenOCD

Run gdb in your NuttX directory as follows:
```bash
arm-none-eabi-gdb nuttx
(gdb) target extended-remote :3333
(gdb) cont
```
This connected to the gdb server running on port 3333 (OpenOCD default) of the same machine. It will sit on the NuttX `_start` function, which isn't very interesting, so we let it continue.

At this moment we have not defined any breakpoints, yet, so you can just press `Ctrl-C` to interrupt the running program again. This will interrupt it after NuttX had a chance to do initialization, so we will actually get to see some data.

#### Inspect the program

Now, if everything worked correctly, we should get some information from the RTOS, such as thread info. To test, type `info threads` at the gdb prompt to get a thread info table. Your output will very depending on the NuttX configuration. On my bare-bones NSH-only configuration, it looks as follows:
![](img/tutorials/gdb-info-threads.png)
So we see four threads, two of which are the OS work queues, one is the init thread, and one is the idle thread.

Most likely, NuttX has stopped in the idle thread, which isn't very interesting. To inspect the others, we can use the `thread` command to switch a thread and then maybe display a backtrace and some variables. Try the following:

```gdb
thread 2
info locals
print rtcb
print *rtcb
```
This switches to thread 2 and then inspects the local variables, of which there are two, one being called `rtcb`. We print it, see its a pointer to a structure, so we dereference and print again to display all the structure fields. This should look something like the following:
![](img/tutorials/gdb-print-rtcb.png)
In my case, this is the NSH thread which is waiting for some input.


## Debugging with Visual Studio Code

This is a follow-up to the [tutorial above](#debugging-a-nuttx-target-with-gdb-and-openocd), because the set up done in that tutorial is a pre-requisite to debugging with Visual Studio Code.

### Motivation

Visual Studio Code is a modern IDE that is very easy to extend and popular with both the Web/Cloud and IoT communities. It is also one of the easiest IDEs to get working with embedded systems. That said, it is *not* the most powerful or featureful IDEs for this purpose, but it is easy and will do.

### Prerequisites

 * All the prerequisites of [Debugging a NuttX target with GDB and OpenOCD](#debugging-a-nuttx-target-with-gdb-and-openocd)
 * Cortex-M hardware (all of our standard boards are ARM based)
 * [Visual Studio Code](https://code.visualstudio.com/)


### Installing Cortex-Debug

In the extensions marketplace, enter "cortex", then install "Cortex-Debug". Depending on your version of Visual Studio Code, you may need to restart after installing the extension.

### Set up your project for debugging

Open your project folder in Visual Studio Code -- this is usually the `NuttX` folder, or a subdirectory of `apps`.

#### Create a Visual Studio Code launch configuration for NuttX

From the `Debug` menu, select `Open Configurations`. This will open a `launch.json' file. See [Cortex-Debug Launch configurations](https://marcelball.ca/projects/cortex-debug/cortex-debug-launch-configurations/) for documentation.

To get started, I have prepared a working launch configuration for using our STM32-E407 board with the ARM-USB-OCD-H jtag probe. If you use a different board or probe, you only need to replace the `configFiles` section. Each entry in the section is an argument that you would normally pass as a `-f` option to OpenOCD.
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug (OpenOCD/NuttX)",
            "cwd": "${workspaceRoot}",
            "executable": "nuttx",
            "request": "launch",
            "type": "cortex-debug",
            "servertype": "openocd",
            "device": "stm32f4x",
            "configFiles": [
                "interface/ftdi/olimex-arm-usb-ocd-h.cfg",
                "target/stm32f4x.cfg"
            ]
        }
    ]
}
```
The `name` is what will appear in the status bar for running it.

#### Running the debugger

Either press `F5` or select `Debug/Start Debugging` from the menu to get started. This will take a moment, and then you should get a red status bar and the debug window, like in the following image:
![debug window](img/tutorials/debug-vscode.png)

As in the gdb tutorial, initially you won't see much because the program is stopped during OS initialization. Press `F5` again or click the "play" button from the debug menu at the top of the window, wait a few seconds, then press `F6` or click the pause button. The window should change to give you thread, variable, and register information, like in the following. Note that "Call Stack" window displays multiple threads.

![debug window with running code](img/tutorials/debug-vscode-phyread.png)

#### Adding an SVD File

You may have noticed that on the left-hand side, there is a sub-window called "Cortex Peripherals" which simply states "No SVD File loaded". SVD means "System View Description" and is a standard format which microcontroller vendors use to describe the available features of their MCUs.

For example, in the case of our STM32-E407 board, which features an STM32F407ZGT6 MCU, we can download the SVD description from [STM's web-page for the STM32F407ZG series](https://www.st.com/en/microcontrollers-microprocessors/stm32f407zg.md). In the "HW Model, CAD Libraries & SVD", you will find a link to the [STM32F4 series SVD](https://www.st.com/resource/en/svd/stm32f4_svd.zip).

Extract the SVD and then add an `svdFile` attribute to the launch configuration. The full configuration will look like this:

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Debug (OpenOCD/SVD)",
            "cwd": "${workspaceRoot}",
            "executable": "nuttx",
            "request": "launch",
            "type": "cortex-debug",
            "servertype": "openocd",
            "device": "stm32f4x",
            "svdFile": "STM32F407.svd",
            "configFiles": [
                "interface/ftdi/olimex-arm-usb-ocd-h.cfg",
                "target/stm32f4x.cfg"
            ]
        }
    ]
}
```

Run the debugger again, and your window should look as follows:
![](img/tutorials/debug-vscode-svd.png)

Voilà! The `Cortex Peripherals` is populated with everything that the STM32F407 MCU has to offer. Please note that not all of these peripherals might actually be connected on the board. However, those that are, and that are used in your application, can easily be investigated like this.

---

## Source: `_docs/tutorials/old/microros_nuttx_bsp/index.md`
<a id="source-docs-tutorials-old-microros-nuttx-bsp-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/>

**If you want to use Micro-ROS on a board that is not yet supported, this tutorial is for you!** However, we can only explain what you have to do on a board which is supported by NuttX already, that is, a board that has a board configuration. Writing a completely new board support package and configuration is beyond the scope of what the Micro-ROS project can teach.

### Caveats

1. The instructions in this tutorial have been tested on Linux only and since they use Linux shell commands, they will probably not work on Windows.
1. We have only ever used ARM-based boards. Boards using different microcontrollers might needs a different approach.
1. Our approach to adding C++ atomic swap instructions is problematic and needs further work, but it'll get you started.

### Basics

Compiling Micro-ROS for NuttX requires that the Board Configuration has a few C++ settings enabled. This tutorial explains what has to be added to an existing NuttX board configuration.

### Background: NuttX Board Configurations

**Note** This section is just for background, you don't need to create a board configuration yourself!

Microcontrollers are very diverse, and very versatile. The type and number of peripherals included differs a lot, and moreover, each specific board offers uses just a subset of them.

Therefore, the RTOS needs to be told which peripherals are used on a given board, and which pins the board has connected them to. In some cases, the board also requires custom initialization.

This is what we call the "board *configuration*". It differs from the so-called "Board Support *Package* (BSP)" which would contain the drivers for the micro-controller and its peripherals.

### Directory Structure

In NuttX up to version 7.x (which Micro-ROS currently uses), the configurations are stored in the `configs/` subdirectory.

In there are subdirectories for each board. The naming scheme differs, but often starts with the vendor, and then the name of the board. For example, the Olimex STM32-E407 reference board has its configuration in `configs/olimex-stm32e407`. We call this the *board base directory*.

Within the board base directory, there are two things:
 1) Board configuration directories, specifically `include`, `scripts`, and `src`.
 2) Predefined NuttX *build configurations*. These directories only have a `defconfig` file in them, and they are the directories you can pass to `scripts/configure.sh`.

## Adding Micro-ROS support

To add Micro-ROS build support, have two to 2 things:

 1) Enable the right C++ settings
 1) Add C++ atomics builtins

A good example of the necessary modifications can be found in commit [26917196](https://github.com/micro-ROS/NuttX/commit/26917196e744b22433e699af71da1fcb86a96623).

 ### Enabling the right C++ settings

All the compiler configuration is found in `scripts/Make.defs`. 

**Important**: Since this is a .defs file, it will only be evaluated by NuttX *during configuration*. Therefore, if you make changes, you have to do a `make distclean` and then a `tools/configure.sh` invocation!

1) Add C++ standard library includes

This basically means you have to add
`ARCHXXINCLUDES+=-isystem $(TOPDIR)/include/uClibc++`
after the block in which that variable is first defined.

2) Enable exceptions and RTTI

By default, the board configurations disable exceptions.

What we do is that we check whether UCLIBCXX_EXCEPTION is set, and if yes, we enable exceptions and RTTI. See [line 80 to 84 of commit 26917196](https://github.com/micro-ROS/NuttX/commit/26917196e744b22433e699af71da1fcb86a96623#diff-0199bac3041e59fbc59a9abd1492151eR80) for an example.
```makefile
ifeq ($(CONFIG_UCLIBCXX_EXCEPTION),y)
  ARCHCXXFLAGS = -fno-builtin -fcheck-new 
else
  ARCHCXXFLAGS = -fno-builtin -fno-exceptions -fcheck-new -fno-rtti
endif
```

3) Add libsupc++ to the build. This library is part of the toolchain, but there are multiple versions and you need the right one. The following snippet of Make code does that:
```makefile
LIBSUPXX = ${shell $(CC) $(CXXFLAGS) --print-file-name=libsupc++.a}
EXTRA_LIBPATHS = -L "${shell dirname "$(LIBSUPXX)"}"
EXTRA_LIBS = -lsupc++
```

### Add C++ atomics builtins

C++11 and up requires that the toolchain provides atomic swap operations. These are hardware specific and in the toolchain version we currently use, they are not yet available for ARM. Therefore, we add a compatibility file called `libatomic.c`

1. Copy `libatomic.c` from `configs/olimex-stm32e407/src/libatomic.c` to your board configuration `src` directory.-

1. Add `libatomic.c` to the `CSRCS` line of `src/Makefile`.

---

## Source: `_docs/tutorials/old/nsh/index.md`
<a id="source-docs-tutorials-old-nsh-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/>

| RTOS  | Board compatible  |
| :---: | :---------------: |
| NuttX | Olimex-STM32-E407 |

NSH is a system console that can be used through different interfaces.
In this tutorial, we will show how to use it over the UART and USB peripherals.

## Hardware requirements:

- [Olimex-STM32-E407 board](https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware)
- [JTAG Flasher device](https://www.olimex.com/Products/ARM/JTAG/ARM-USB-TINY/)
- USB-TTL232 cable.
- Mini USB cable.

## Create the firmware

For this tutorial we are going to execute the following configuration in micro_ros_setup:

```bash
ros2 run micro_ros_setup create_firmware_ws.sh nuttx olimex-stm32-e407
# For UART
ros2 run micro_ros_setup configure_firmware.sh nsh_uart
# For USB
ros2 run micro_ros_setup configure_firmware.sh nsh
```

Once the board is configured, we need to build it by typing the command:

```bash
ros2 run micro_ros_setup build_firmware.sh
```

If the compilation succeeds, it should return this output:
```bash
CP: nuttx.hex
CP: nuttx.bin
```

# Flash the firmware

The firmware is ready, it is just necessary to upload it.
Now you need to do the following connections:
- Connect the JTAG flasher device.
- Connect the USB TTL-232 to the USART3 in case of UART communication:
  - `USART3 TX` -> `TTL232 RX`
  - `USART3 RX` -> `TTL232 TX`
  - `GND Board` -> `TTL232 GND`

![](_docs/tutorials/old/nsh/images/olimex_uart.jpg)
- Connect the mini USB to the OTG2 for USB communication.

![](_docs/tutorials/old/nsh/images/olimex_nsh_usb.jpg)

Now flash the board by typing the next command:
```bash
ros2 run micro_ros_setup flash_firmware.sh
```

This should return this output once the process is finished:

```bash
wrote 49152 bytes from file nuttx.bin in 6.279262s (7.644 KiB/s)
Info : Listening on port 6666 for tcl connections
Info : Listening on port 4444 for telnet connections
```

## Connect to the console

Finally, to use the NSH console you need to follow the steps listed below:
- Push the reset button. The green LED will turn on to say that it is working properly.
- Look for the device by typing `dmesg` on the console, this should return something like this:

```bash
# For UART
[17154.225244] usb 1-2: new full-speed USB device number 6 using xhci_hcd
[17154.380060] usb 1-2: New USB device found, idVendor=0403, idProduct=6001, bcdDevice= 6.00
[17154.380066] usb 1-2: New USB device strings: Mfr=1, Product=2, SerialNumber=3
[17154.380069] usb 1-2: Product: USB <-> Serial Cable
[17154.380072] usb 1-2: Manufacturer: FTDI
[17154.380075] usb 1-2: SerialNumber: 12TBZ31
[17154.400389] usbcore: registered new interface driver usbserial_generic
[17154.400395] usbserial: USB Serial support registered for generic
[17154.402690] usbcore: registered new interface driver ftdi_sio
[17154.402699] usbserial: USB Serial support registered for FTDI USB Serial Device
[17154.402745] ftdi_sio 1-2:1.0: FTDI USB Serial Device converter detected
[17154.402762] usb 1-2: Detected FT232RL
[17154.403058] usb 1-2: FTDI USB Serial Device converter now attached to ttyUSB0

# For USB
[20614.570781] usb 1-2: new full-speed USB device number 7 using xhci_hcd
[20614.724366] usb 1-2: New USB device found, idVendor=0525, idProduct=a4a7, bcdDevice= 1.01
[20614.724372] usb 1-2: New USB device strings: Mfr=1, Product=2, SerialNumber=3
[20614.724375] usb 1-2: Product: CDC/ACM Serial
[20614.724378] usb 1-2: Manufacturer: NuttX
[20614.724381] usb 1-2: SerialNumber: 0
[20614.745693] cdc_acm 1-2:1.0: ttyACM0: USB ACM device
[20614.746274] usbcore: registered new interface driver cdc_acm
[20614.746277] cdc_acm: USB Abstract Control Model driver for USB modems and ISDN adapters
```
In this specific situation, the device is assigned to `dev/ttyUSB0` and `dev/ttyACM0` for UART and USB communication respectively. Note that the last number could be different.

Finally, execute the next command to open the NSH console:
```
# For UART
sudo minicom -D /dev/ttyUSB0

# For USB
sudo minicom -D /dev/ttyACM0
```

Once the port is opened, **you need to push two times the Enter key** and it should show the next menu:

```bash
nsh> ?
help usage:  help [-v] [<cmd>]

  ?           exec        hexdump     mb          sleep       
  cat         exit        kill        mh          usleep      
  echo        help        ls          mw          xd          

Builtin Apps:
nsh>
```

---

## Source: `_docs/tutorials/programming_rcl_rclc/executor/executor.md`
<a id="source-docs-tutorials-programming-rcl-rclc-executor-executor-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

- [Timers](#timers)
  - [Initialization](#initialization)
  - [Callback](#callback)
  - [Cleaning Up](#cleaning-up)
- [Executor](#executor)
  - [Example 1: 'Hello World'](#example-1-hello-world)
  - [Example 2: Triggered execution](#example-2-triggered-execution)

## Timers

Timers can be created and added to the executor, which will call the timer callback periodically once it is spinning.
They are usually used to handle periodic publications or events.

### Initialization

```c
// Timer period on nanoseconds
const unsigned int timer_period = RCL_MS_TO_NS(1000);

// Create and initialize timer object
rcl_timer_t timer;
rcl_ret_t rc = rclc_timer_init_default(&timer, &support, timer_period, timer_callback);

// Add to the executor
rc = rclc_executor_add_timer(&executor, &timer);

if (rc != RCL_RET_OK) {
  ... // Handle error
  return -1;
}
```

### Callback

The callback gives a pointer to the associated timer and the time elapsed since the previous call or since the timer was created if it is the first call to the callback.

```c
void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
	printf("Last callback time: %ld\n", last_call_time);

	if (timer != NULL) {
		// Perform actions
		...
	}
}
```

During the callback the timer can be canceled or have its period and/or callback modified using the passed pointer. Check [rcl/timer.h](https://github.com/ros2/rcl/blob/iron/rcl/include/rcl/timer.h) for details.

### Cleaning Up

To destroy an initialized timer:

```c
// Destroy timer
rcl_timer_fini(&timer);
```

This will deallocate used memory and make the timer invalid


## Executor

The rclc Executor provides a C API to manage the execution of subscription and timer callbacks, similar to the [rclcpp Executor](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executor.hpp) for C++. The rclc Executor is optimized for resource-constrained devices and provides additional features that allow the manual implementation of deterministic schedules with bounded end-to-end latencies.

In this section we provide two examples:

* Example 1: Hello-World example consisting of one executor and one publisher, timer and subscription.
* Example 2: Triggered execution example, demonstrating the capability of synchronizing the execution of callbacks based on the availability of new messages

Further information about the rclc Executor and its API can be found [rclc](https://github.com/ros2/rclc/tree/master/rclc#rclc-executor) repository, including further examples for using the rclc Executor in mobile robotics scenarios and real-time embedded applications.

### Example 1: 'Hello World'

To start with, we provide a very simple example for an rclc Executor with one timer and one subscription, so to say, a 'Hello world' example. It consists of a publisher, sending a 'hello world' message to a subscriber, which then prints out the received message on the console.

First, you include some header files, in particular the [rclc/rclc.h](https://github.com/ros2/rclc/blob/master/rclc/include/rclc/rclc.h) and [rclc/executor.h](https://github.com/ros2/rclc/blob/master/rclc/include/rclc/executor.h).

```c
#include <stdio.h>
#include <std_msgs/msg/string.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
```

We define a publisher and two strings, which will be used later.

```c
rcl_publisher_t my_pub;
std_msgs__msg__String pub_msg;
std_msgs__msg__String sub_msg;
```

The subscription callback casts the message parameter `msgin` to an equivalent type of `std_msgs::msg::String` in C and prints out the received message.

```c
void my_subscriber_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("Callback: msg NULL\n");
  } else {
    printf("Callback: I heard: %s\n", msg->data.data);
  }
}
```

The timer callback publishes the message `pub_msg` with the publisher `my_pub`, which is initialized later in `main()`.

```c
void my_timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rcl_ret_t rc;
  UNUSED(last_call_time);
  if (timer != NULL) {
    rc = rcl_publish(&my_pub, &pub_msg, NULL);
    if (rc == RCL_RET_OK) {
      printf("Published message %s\n", pub_msg.data.data);
    } else {
      printf("Error in timer_callback: Message %s could not be published\n", pub_msg.data.data);
    }
  } else {
    printf("Error in timer_callback: timer parameter is NULL\n");
  }
}
```

After defining the callback functions, we present now the `main()` function. First, some initialization is necessary to create later rcl objects. That is an `allocator` for dynamic memory allocation, and a `support` object, which contains some rcl-objects simplifying the initialization of an rcl-node, an rcl-subscription, an rcl-timer and an rclc-executor.

```c
int main(int argc, const char * argv[])
{
  rcl_allocator_t allocator = rcl_get_default_allocator();
  rclc_support_t support;
  rcl_ret_t rc;

  // create init_options
  rc = rclc_support_init(&support, argc, argv, &allocator);
  if (rc != RCL_RET_OK) {
    printf("Error rclc_support_init.\n");
    return -1;
  }
```

Next, you define a ROS 2 node `my_node` and initialize it with `rclc_executor_init_default()`:

```c
  // create rcl_node
  rcl_node_t my_node;
  rc = rclc_node_init_default(&my_node, "node_0", "executor_examples", &support);
  if (rc != RCL_RET_OK) {
    printf("Error in rclc_node_init_default\n");
    return -1;
  }
```

You can create a publisher to publish topic 'topic_0' with type std_msg::msg::String with the following code:

```c
const char * topic_name = "topic_0";
const rosidl_message_type_support_t * my_type_support =
  ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);

rc = rclc_publisher_init_default(&my_pub, &my_node, my_type_support, topic_name);
if (RCL_RET_OK != rc) {
  printf("Error in rclc_publisher_init_default %s.\n", topic_name);
  return -1;
}
```

Note, that variable `my_pub` was defined globally, so it can be used by the timer callback.

You can create a timer `my_timer` with a period of one second, which executes the callback `my_timer_callback` like this:

```c
  rcl_timer_t my_timer;
  const unsigned int timer_timeout = 1000; // in ms
  rc = rclc_timer_init_default(&my_timer, &support, RCL_MS_TO_NS(timer_timeout), my_timer_callback);
  if (rc != RCL_RET_OK) {
    printf("Error in rcl_timer_init_default.\n");
    return -1;
  } else {
    printf("Created timer with timeout %d ms.\n", timer_timeout);
  }
```

The string `Hello World!` can be assigned directly to the message of the publisher `pub_msg.data`. First the publisher message is initialized with `std_msgs__msg__String__init`. Then you need to allocate memory for `pub_msg.data.data`, set the maximum capacity `pub_msg.data.capacity` and set the length of the message `pub_msg.data.size` accordingly. You can assign the content of the message with `snprintf` of `pub_msg.data.data`.

```c
  // assign message to publisher
  std_msgs__msg__String__init(&pub_msg);
  const unsigned int PUB_MSG_CAPACITY = 20;
  pub_msg.data.data = malloc(PUB_MSG_CAPACITY);
  pub_msg.data.capacity = PUB_MSG_CAPACITY;
  snprintf(pub_msg.data.data, pub_msg.data.capacity, "Hello World!");
  pub_msg.data.size = strlen(pub_msg.data.data);
```

A subscription `my_sub`can be defined like this:

```c
  rcl_subscription_t my_sub = rcl_get_zero_initialized_subscription();
  rc = rclc_subscription_init_default(&my_sub, &my_node, my_type_support, topic_name);
  if (rc != RCL_RET_OK) {
    printf("Failed to create subscriber %s.\n", topic_name);
    return -1;
  } else {
    printf("Created subscriber %s:\n", topic_name);
  }
```

The global message for this subscription `sub_msg` needs to be initialized with:

```c
  std_msgs__msg__String__init(&sub_msg);
```

Now, all preliminary steps are done, and you can define and initialized the rclc executor with:

```c
  rclc_executor_t executor;
  executor = rclc_executor_get_zero_initialized_executor();
```

In the next step, executor is initialized with the ROS 2 `context`, the number of communication objects `num_handles` and an `allocator`. The number of communication objects defines the total number of timers and subscriptions, the executor shall manage. In this example, the executor will be setup with one timer and one subscription.

```c
  // total number of handles = #subscriptions + #timers
  unsigned int num_handles = 1 + 1;
  rclc_executor_init(&executor, &support.context, num_handles, &allocator);
```

Now, you can add a subscription with the function `rclc_c_executor_add_subscription` with the previously defined subscription `my_sub`, its message `sub_msg`and its callback `my_subscriber_callback`:

```c
rc = rclc_executor_add_subscription(&executor, &my_sub, &sub_msg, &my_subscriber_callback, ON_NEW_DATA);
if (rc != RCL_RET_OK) {
  printf("Error in rclc_executor_add_subscription. \n");
}
```

The option `ON_NEW_DATA` selects the execution semantics of the spin-method. In this example, the callback of the subscription `my_sub`is only called if new data is available.

Note: Another execution semantics is `ALWAYS`, which means, that the subscription callback is always executed when the spin-method of the executor is called. This option might be useful in cases in which the callback shall be executed at a fixed rate irrespective of new data is available or not. If you choose this option, then the callback will be executed with message argument `NULL` if no new data is available. Therefore you need to make sure, that your callback also accepts `NULL` as message argument.

Likewise, you can add the timer `my_timer` with the function `rclc_c_executor_add_timer`:

```c
rclc_executor_add_timer(&executor, &my_timer);
if (rc != RCL_RET_OK) {
  printf("Error in rclc_executor_add_timer.\n");
}
```

A key feature of the rclc Executor is that the order of these `rclc-executor-add-*`-functions matters. The order in which these functions are called defines the static processing order of the callbacks when the spin-function of the executor is running.

In this example, the timer was added to the executor before the subscription. Therefore, if the timer is ready and also a new message for the subscription is available, then the timer is executed first and after it the subscription. Such a behavior cannot be defined currently with the rclcpp Executor and is useful to implement a deterministic execution semantics.

Finally, you can run the executor with `rclc_executor_spin()`:

```c
  rclc_executor_spin(&executor);
```

This function runs forever without coming back. In this example, however, we want to publish the message only ten times. Therefore we are using the spin-method `rclc_executor_spin_some`, which spins only once and returns. The wait timeout for checking for new messages at the DDS-queue or waiting timers to get ready is configured to be one second.

```c
for (unsigned int i = 0; i < 10; i++) {
  // timeout specified in nanoseconds (here 1s)
  rclc_executor_spin_some(&executor, 1000 * (1000 * 1000));
}
```

At the end, you need to free dynamically allocated memory:

```c
  // clean up
  rc = rclc_executor_fini(&executor);
  rc += rcl_publisher_fini(&my_pub, &my_node);
  rc += rcl_timer_fini(&my_timer);
  rc += rcl_subscription_fini(&my_sub, &my_node);
  rc += rcl_node_fini(&my_node);
  rc += rclc_support_fini(&support);
  std_msgs__msg__String__fini(&pub_msg);
  std_msgs__msg__String__fini(&sub_msg);

  if (rc != RCL_RET_OK) {
    printf("Error while cleaning up!\n");
    return -1;
  }
return 0;
} // main
```

This completes the example. The source code can be found in the package rclc-examples [rclc-examples/example_executor_only_rcl.c](https://github.com/ros2/rclc/blob/master/rclc_examples/src/example_executor_only_rcl.c).

### Example 2: Triggered execution

In robotic applications often multiple sensors are used to improve localization precision. These sensors can have different frequencies, for example, a high frequency IMU sensor and a low frequency laser scanner. One way is to trigger execution upon arrival of a laser scan and only then evaluate the most recent data from the aggregated IMU data.

This example demonstrates the additional feature of the rclc executor to trigger the execution of callbacks based on the availability of input data.

We setup one executor with two publishers, one with 100ms and one with 1000ms period. Then we setup one executor for two subscriptions. Their callbacks shall both be executed if the message of the publisher with the lower frequency arrives.

The output of this code example will look like this:

```c
Created timer 'my_string_timer' with timeout 100 ms.
Created 'my_int_timer' with timeout 1000 ms.
Created subscriber topic_0:
Created subscriber topic_1:
Executor_pub: number of DDS handles: 2
Executor_sub: number of DDS handles: 2
Published: Hello World! 0
Published: Hello World! 1
Published: Hello World! 2
Published: Hello World! 3
Published: Hello World! 4
Published: Hello World! 5
Published: Hello World! 6
Published: Hello World! 7
Published: Hello World! 8
Published: Hello World! 9
Published: 0
Callback 1: Hello World! 9  <---
Callback 2: 0               <---
Published: Hello World! 10
Published: Hello World! 11
Published: Hello World! 12
Published: Hello World! 13
Published: Hello World! 14
Published: Hello World! 15
Published: Hello World! 16
Published: Hello World! 17
Published: Hello World! 18
Published: Hello World! 19
Published: 1
Callback 1: Hello World! 19 <---
Callback 2: 1               <---
```

This output shows, that the callbacks are executed, only if both message have received new data. In that case, the latest data of high-frequency topic is used.

You learn in this tutorial

* how to use pre-defined trigger conditions
* how to write custom-defined trigger conditions
* how to run multiple executors
* how to setup quality-of-service parameters for a subscription

We start with the necessary includes for string and int messages, `<std_msgs/msg/string.h>` and `std_msgs/msg/int32.h` respectivly. Then the necessary includes follow for the rclc convenience functions `rclc.h` and the the rclc executor `executor.h`:

```c
#include <stdio.h>
#include <unistd.h>
#include <std_msgs/msg/string.h>
#include <std_msgs/msg/int32.h>

#include <rclc/executor.h>
#include <rclc/rclc.h>
```

Then, global variables for the publishers and subscriptions as well as their messages are defined, which are initialized in the `main()` function and used in the corresponding callbacks:

```c
rcl_publisher_t my_pub;
rcl_publisher_t my_int_pub;
std_msgs__msg__String sub_msg;
std_msgs__msg__Int32 pub_int_msg;
int pub_int_value;
std_msgs__msg__Int32 sub_int_msg;
int pub_string_value;
```

For the custom-defined trigger conditions, the type `pub_trigger_object_t` and the type `sub_trigger_object_t` are defined.

```c
typedef struct
{
  rcl_timer_t * timer1;
  rcl_timer_t * timer2;
} pub_trigger_object_t;

typedef struct
{
  rcl_subscription_t * sub1;
  rcl_subscription_t * sub2;
} sub_trigger_object_t;
```

The executor for the publishers shall publish when any of corresponding timers for the publishers is ready. That is the or-logic. You could also use the predefined  `rclc_executor_trigger_any` trigger condition, but this example shows how you can write your own trigger conditions.

In principle, the condition gets a list of handles, the length of this list, and the pre-defined condition type. In this case, we expect `pub_trigger_object_t`. First, the parameter `obj` is cased to this type (`comm_obj`). Then, each element of the handle list is checked for new data (or a timer is ready) by evaluating the field `handles[i].data_available` and its handle pointer is compared to the pointer of the communicatoin object. If at least one timer is ready, then the trigger condition returns true.

```c
bool pub_trigger(rclc_executor_handle_t * handles, unsigned int size, void * obj)
{
  if (handles == NULL) {
    printf("Error in pub_trigger: 'handles' is a NULL pointer\n");
    return false;
  }
  if (obj == NULL) {
    printf("Error in pub_trigger: 'obj' is a NULL pointer\n");
    return false;
  }
  pub_trigger_object_t * comm_obj = (pub_trigger_object_t *) obj;
  bool timer1 = false;
  bool timer2 = false;
  //printf("pub_trigger ready set: ");
  for (unsigned int i = 0; i < size; i++) {
    if (handles[i].data_available) {
      void * handle_ptr = rclc_executor_handle_get_ptr(&handles[i]);
      if (handle_ptr == comm_obj->timer1) {
        timer1 = true;
      }
      if (handle_ptr == comm_obj->timer2) {
        timer2 = true;
      }
    }
  }
  return (timer1 || timer2);
}
```

The trigger condition for the subscription `sub_trigger`shall implement an AND-logic. That is, only if both subscriptions have received a new message, then the executor shall start processing the callbacks.

The implementation is analogous to `pub_trigger`. The only difference is, that this trigger returns true, if both subscriptions have been found in the handle list. This is implemented in the condition `sub1 && sub2` of the last if-statement.

```c
bool sub_trigger(rclc_executor_handle_t * handles, unsigned int size, void * obj)
{
  if (handles == NULL) {
    printf("Error in sub_trigger: 'handles' is a NULL pointer\n");
    return false;
  }
  if (obj == NULL) {
    printf("Error in sub_trigger: 'obj' is a NULL pointer\n");
    return false;
  }
  sub_trigger_object_t * comm_obj = (sub_trigger_object_t *) obj;
  bool sub1 = false;
  bool sub2 = false;
  //printf("sub_trigger ready set: ");
  for (unsigned int i = 0; i < size; i++) {
    if (handles[i].data_available == true) {
      void * handle_ptr = rclc_executor_handle_get_ptr(&handles[i]);

      if (handle_ptr == comm_obj->sub1) {
        sub1 = true;
      }
      if (handle_ptr == comm_obj->sub2) {
        sub2 = true;
      }
    }
  }
  return (sub1 && sub2);
}
```

Like in the Hello-World example, the subscription callbacks just prints out the received message.

The `my_string_subscriber` callback prints out the string of the message `msg->data.data`:

```c
void my_string_subscriber_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    printf("my_string_subscriber_callback: msgin is NULL\n");
  } else {
    printf("Callback 1: %s\n", msg->data.data);
  }
}
```

The integer callback prints out the received integer `msg->data`:

```c
void my_int_subscriber_callback(const void * msgin)
{
  const std_msgs__msg__Int32 * msg = (const std_msgs__msg__Int32 *)msgin;
  if (msg == NULL) {
    printf("my_int_subscriber_callback: msgin is NULL\n");
  } else {
    printf("Callback 2: %d\n", msg->data);
  }
}
```

To publish messages with different frequencies, we setup two timers.
One timer to publish a string message, the `my_timer_string_callback` and one timer to publish the integer, the `my_timer_int_callback`.

In the `my_timer_string_callback`, the message `pub_msg` is created and filled with the string `Hello World` plus an integer, which is incremented by one, each time the timer callback is called. The the message is published with `rcl_publish()`

The macro `UNUSED` is a workaround for the linter warning, that the second parameter `last_call_time` is not used.

```c
#define UNUSED(x) (void)x;

void my_timer_string_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rcl_ret_t rc;
  UNUSED(last_call_time);
  if (timer != NULL) {
    //printf("Timer: time since last call %d\n", (int) last_call_time);

    std_msgs__msg__String pub_msg;
    std_msgs__msg__String__init(&pub_msg);
    const unsigned int PUB_MSG_CAPACITY = 20;
    pub_msg.data.data = malloc(PUB_MSG_CAPACITY);
    pub_msg.data.capacity = PUB_MSG_CAPACITY;
    snprintf(pub_msg.data.data, pub_msg.data.capacity, "Hello World!%d", pub_string_value++);
    pub_msg.data.size = strlen(pub_msg.data.data);

    rc = rcl_publish(&my_pub, &pub_msg, NULL);
    if (rc == RCL_RET_OK) {
      printf("Published: %s\n", pub_msg.data.data);
    } else {
      printf("Error in my_timer_string_callback: publishing message %s\n", pub_msg.data.data);
    }
    std_msgs__msg__String__fini(&pub_msg);
  } else {
    printf("Error in my_timer_string_callback: timer parameter is NULL\n");
  }
}
```

Likewise, the `my_timer_int_callback` increments the integer value `pub_int_value` in every call and assigns it to the message field `pub_int_msg.data`. Then the message is published with `rcl_publish()`

```c
void my_timer_int_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rcl_ret_t rc;
  UNUSED(last_call_time);
  if (timer != NULL) {
    //printf("Timer: time since last call %d\n", (int) last_call_time);
    pub_int_msg.data = pub_int_value++;
    rc = rcl_publish(&my_int_pub, &pub_int_msg, NULL);
    if (rc == RCL_RET_OK) {
      printf("Published: %d\n", pub_int_msg.data);
    } else {
      printf("Error in my_timer_int_callback: publishing message %d\n", pub_int_msg.data);
    }
  } else {
    printf("Error in my_timer_int_callback: timer parameter is NULL\n");
  }
}
```

Now were are all set for the `main()` function:

```c
int main(int argc, const char * argv[])
{
  rcl_allocator_t allocator = rcl_get_default_allocator();
  rclc_support_t support;
  rcl_ret_t rc;

  // create init_options
  rc = rclc_support_init(&support, argc, argv, &allocator);
  if (rc != RCL_RET_OK) {
    printf("Error rclc_support_init.\n");
    return -1;
  }
```

First rcl is initialized with the `rclc_support_init` using the default `allocator`. The rclc-support objects are saved in `support`. Next, a node `my_node` with the name `node_0` and namespace `executor_examples` is created with:

```c
// create rcl_node
  rcl_node_t my_node;
  rc = rclc_node_init_default(&my_node, "node_0", "executor_examples", &support);
  if (rc != RCL_RET_OK) {
    printf("Error in rclc_node_init_default\n");
    return -1;
  }
```

A publisher `my_string_pub`, which publishes a string message and its corresponding timer `my_string_timer` with a 100ms period is created like this:

```c
// create a publisher 1
// - topic name: 'topic_0'
// - message type: std_msg::msg::String
const char * topic_name = "topic_0";
const rosidl_message_type_support_t * my_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);

rc = rclc_publisher_init_default(&my_string_pub, &my_node, my_type_support, topic_name);
if (RCL_RET_OK != rc) {
  printf("Error in rclc_publisher_init_default %s.\n", topic_name);
  return -1;
}

// create timer 1
// - publishes 'my_string_pub' every 'timer_timeout' ms
rcl_timer_t my_string_timer;
const unsigned int timer_timeout = 100;
rc = rclc_timer_init_default(&my_string_timer, &support, RCL_MS_TO_NS(timer_timeout), my_timer_string_callback);
if (rc != RCL_RET_OK) {
  printf("Error in rclc_timer_init_default.\n");
  return -1;
} else {
  printf("Created timer 'my_string_timer' with timeout %d ms.\n", timer_timeout);
}
```

Note that the previously defined `my_timer_string_callback` is connected to this timer.
Likewise, a second publisher `my_int_pub, which publishes an int message and its corresponding timer` my_int_timer` with 1000ms period, is created like this:

```c
// create publisher 2
  // - topic name: 'topic_1'
  // - message type: std_msg::msg::Int
  const char * topic_name_1 = "topic_1";
  const rosidl_message_type_support_t * my_int_type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);
  rc = rclc_publisher_init_default(&my_int_pub, &my_node, my_int_type_support, topic_name_1);
  if (RCL_RET_OK != rc) {
    printf("Error in rclc_publisher_init_default %s.\n", topic_name_1);
    return -1;
  }

  // create timer 2
  // - publishes 'my_int_pub' every 'timer_int_timeout' ms
  rcl_timer_t my_int_timer;
  const unsigned int timer_int_timeout = 10 * timer_timeout;
  rc = rclc_timer_init_default(&my_int_timer, &support, RCL_MS_TO_NS(timer_int_timeout), my_timer_int_callback);
  if (rc != RCL_RET_OK) {
    printf("Error in rclc_timer_init_default.\n");
    return -1;
  } else {
    printf("Created timer with timeout %d ms.\n", timer_int_timeout);
  }
```

Note that the `my_timer_int_callback` is connected to the `my_int_timer`. The data variables used for the publisher messages in the timer callbacks need to be initialized first:

```c
std_msgs__msg__Int32__init(&int_pub_msg);
int_pub_value = 0;
string_pub_value = 0;
```

The first subscription `my_string_sub` is created with the function `rcl_subscription_init` because we change the quality-of-service parameter to 'last-is-best'. That is, a new message will overwrite the older message if it has not been processed by the subscription. Also the message `string_sub_msg` needs to be initialized.

```c
// create subscription 1
  rcl_subscription_t my_string_sub = rcl_get_zero_initialized_subscription();
  rcl_subscription_options_t my_subscription_options = rcl_subscription_get_default_options();
  my_subscription_options.qos.depth = 0; // qos: last is best = register semantics
  rc = rcl_subscription_init(&my_string_sub, &my_node, my_type_support, topic_name, &my_subscription_options);

  if (rc != RCL_RET_OK) {
    printf("Failed to create subscriber %s.\n", topic_name);
    return -1;
  } else {
    printf("Created subscriber %s:\n", topic_name);
  }
  // initialize subscription message
  std_msgs__msg__String__init(&string_sub_msg);
```

The second subscription `my_int_sub` is created with the rclc convenience function `rclc_subscription_default` and the message `int_sub_msg` is properly initialized.

```c
// create subscription 2
  rcl_subscription_t my_int_sub = rcl_get_zero_initialized_subscription();
  rc = rclc_subscription_init_default(&my_int_sub, &my_node, my_int_type_support, topic_name_1);
  if (rc != RCL_RET_OK) {
    printf("Failed to create subscriber %s.\n", topic_name_1);
    return -1;
  } else {
    printf("Created subscriber %s:\n", topic_name_1);
  }
  // initialize subscription message
  std_msgs__msg__Int32__init(&int_sub_msg);
```

In this example, we are using two executors, one to schedule the publishers, and one to schedule the subscriptions:

```c
rclc_executor_t executor_pub;
rclc_executor_t executor_sub;
```

The executor `executor_pub` is first created with  `rclc_executor_get_zero_initialized_executor()` and has two handles (aka 2 timers).

```c
// Executor for publishing messages
  unsigned int num_handles_pub = 2;
  printf("Executor_pub: number of DDS handles: %u\n", num_handles_pub);
  executor_pub = rclc_executor_get_zero_initialized_executor();
  rclc_executor_init(&executor_pub, &support.context, num_handles_pub, &allocator);

  rc = rclc_executor_add_timer(&executor_pub, &my_string_timer);
  if (rc != RCL_RET_OK) {
    printf("Error in rclc_executor_add_timer 'my_string_timer'.\n");
  }

  rc = rclc_executor_add_timer(&executor_pub, &my_int_timer);
  if (rc != RCL_RET_OK) {
    printf("Error in rclc_executor_add_timer 'my_int_timer'.\n");
  }
```

Both timers are added to the exececutor with the function `rclc_executor_add_timer`:

```c
rc = rclc_executor_add_timer(&executor_pub, &my_string_timer);
if (rc != RCL_RET_OK) {
  printf("Error in rclc_executor_add_timer 'my_string_timer'.\n");
}

rc = rclc_executor_add_timer(&executor_pub, &my_int_timer);
if (rc != RCL_RET_OK) {
  printf("Error in rclc_executor_add_timer 'my_int_timer'.\n");
}
```

Also the second publisher has two handles, the two subscriptions:

```c
unsigned int num_handles_sub = 2;
printf("Executor_sub: number of DDS handles: %u\n", num_handles_sub);
executor_sub = rclc_executor_get_zero_initialized_executor();
rclc_executor_init(&executor_sub, &support.context, num_handles_sub, &allocator);
```

Which are added with the function `rclc_executor_add_subscription`:

```c
// add subscription to executor
rc = rclc_executor_add_subscription(
  &executor_sub, &my_string_sub, &string_sub_msg,
  &my_string_subscriber_callback,
  ON_NEW_DATA);
if (rc != RCL_RET_OK) {
  printf("Error in rclc_executor_add_subscription 'my_string_sub'. \n");
}

// add int subscription to executor
rc = rclc_executor_add_subscription(
  &executor_sub, &my_int_sub, &int_sub_msg,
  &my_int_subscriber_callback,
  ON_NEW_DATA);
if (rc != RCL_RET_OK) {
  printf("Error in rclc_executor_add_subscription 'my_int_sub'. \n");
}
```

The trigger condition of the executor, which publishes messages, shall execute when any timer is ready. This can be configured with the function `rclc_executor_set_trigger` and the parameter `rclc_executor_trigger_any`.
While the executor for the subscriptions shall only execute if both messages have arrived. Therefore the trigger parameter `rclc_executor_trigger_any` can be used:

```c
rc = rclc_executor_set_trigger(&executor_pub, rclc_executor_trigger_any, NULL);
rc = rclc_executor_set_trigger(&executor_sub, rclc_executor_trigger_all, NULL);
```

Finally, the executors spin-some functions can be started. The sleep-time between the executors is intended for communication time for DDS.

```c
for (unsigned int i = 0; i < 100; i++) {
  // timeout specified in ns                 (here: 1s)
  rclc_executor_spin_some(&executor_pub, 1000 * (1000 * 1000));
  usleep(1000); // 1ms
  rclc_executor_spin_some(&executor_sub, 1000 * (1000 * 1000));
}
```

This example is concluded with the clean-up code:

```c
// clean up
rc = rclc_executor_fini(&executor_pub);
rc += rclc_executor_fini(&executor_sub);
rc += rcl_publisher_fini(&my_string_pub, &my_node);
rc += rcl_publisher_fini(&my_int_pub, &my_node);
rc += rcl_timer_fini(&my_string_timer);
rc += rcl_timer_fini(&my_int_timer);
rc += rcl_subscription_fini(&my_string_sub, &my_node);
rc += rcl_subscription_fini(&my_int_sub, &my_node);
rc += rcl_node_fini(&my_node);
rc += rclc_support_fini(&support);

std_msgs__msg__Int32__fini(&int_pub_msg);
std_msgs__msg__String__fini(&string_sub_msg);
std_msgs__msg__Int32__fini(&int_sub_msg);

if (rc != RCL_RET_OK) {
  printf("Error while cleaning up!\n");
  return -1;
}
return 0;
}
```

In case the default trigger conditions are not sufficient, then the user can define custom logic conditions.
The source code of the custom-programmed trigger condition has already been presented.
The following code will setup the executor accordingly:

```c
 pub_trigger_object_t comm_obj_pub;
 comm_obj_pub.timer1 = &my_string_timer;
 comm_obj_pub.timer2 = &my_int_timer;

 sub_trigger_object_t comm_obj_sub;
 comm_obj_sub.sub1 = &my_string_sub;
 comm_obj_sub.sub2 = &my_int_sub;

 rc = rclc_executor_set_trigger(&executor_pub, pub_trigger, &comm_obj_pub);
 rc = rclc_executor_set_trigger(&executor_sub, sub_trigger, &comm_obj_sub);
```

The custom structs `pub_trigger_object_t` are used to save the pointer of the handles. The timers `my_string_timer` and `my_int_timer` for the publishing executor; and, likewise, the subscriptions `my_string_sub` and `my_int_sub` for the subscribing executor. The configuration is done also with the `rclc_executor_set_trigger` by passing the trigger function and the trigger object, e.g. `pub_trigger` and `comm_obj_pub` for the `executor_pub`, respectivly.

The complete source code of this example can be found in the file [rclc-examples/example_executor_trigger.c](https://github.com/ros2/rclc/blob/iron/rclc_examples/src/example_executor_trigger.c).



---

## Source: `_docs/tutorials/programming_rcl_rclc/micro-ROS/micro-ROS.md`
<a id="source-docs-tutorials-programming-rcl-rclc-micro-ros-micro-ros-md"></a>

<!-- TODO: Change section name -->

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

- [Allocators](#allocators)
  - [Custom allocator](#custom-allocator)
- [Time sync](#time-sync)
- [Ping agent](#ping-agent)
- [Continous serialization](#continous-serialization)

## Allocators

  The allocator object wraps the dynamic memory allocation and deallocating methods used in micro-ROS

  ```c
  // Get micro-ROS default allocator
  rcl_allocator_t allocator = rcl_get_default_allocator();
  ```

  The default allocator wraps the following methods:

  ```c
  - allocate = wraps malloc()
  - deallocate = wraps free()
  - reallocate = wraps realloc()
  - zero_allocate = wraps calloc()
  - state = `NULL`
  ```

### Custom allocator

Working in embedded systems, the user might need to modify this default functions with its own memory allocation methods.
To archieve this, the user can modify the default allocator with its own methods:

```c
// Get empty allocator
rcl_allocator_t custom_allocator = rcutils_get_zero_initialized_allocator();

// Set custom allocation methods
custom_allocator.allocate = microros_allocate;
custom_allocator.deallocate = microros_deallocate;
custom_allocator.reallocate = microros_reallocate;
custom_allocator.zero_allocate =  microros_zero_allocate;

// Set custom allocator as default
if (!rcutils_set_default_allocator(&custom_allocator)) {
    ... // Handle error
    return -1;
}
```

Custom methods prototypes and examples:

- allocate:

  Allocates memory given a size, an error should be indicated by returning `NULL`:

  ```c
  // Function prototype:
  void * (*allocate)(size_t size, void * state);

  // Implementation example:
  void * microros_allocate(size_t size, void * state){
    (void) state;
    void * ptr = malloc(size);
    return ptr;
  }
  ```

- deallocate

  Deallocate previously allocated memory, mimicking free():

  ```c
  // Function prototype:
  void (* deallocate)(void * pointer, void * state);

  // Implementation example:
  void microros_deallocate(void * pointer, void * state){
    (void) state;
    free(pointer);
  }
  ```

- reallocate:

  Reallocate memory if possible, otherwise it deallocates and allocates:

  ```c
  // Function prototype:
  void * (*reallocate)(void * pointer, size_t size, void * state);

  // Implementation example:
  void * microros_reallocate(void * pointer, size_t size, void * state){
    (void) state;
    void * ptr = realloc(pointer, size);
    return ptr;
  }
  ```

- zero_allocate:

  Allocate memory with all elements set to zero, given a number of elements and their size. An error should be indicated by returning `NULL`:

  ```c
  // Function prototype:
  void * (*zero_allocate)(size_t number_of_elements, size_t size_of_element, void * state);

  // Implementation example:
  void * microros_zero_allocate(size_t number_of_elements, size_t size_of_element, void * state){
    (void) state;
    void * ptr = malloc(number_of_elements * size_of_element);
    memset(ptr, 0, number_of_elements * size_of_element);
    return ptr;
  }
  ```

  *Note: the `state` input argument is espected to be unused*

## Time sync
micro-ROS Clients can synchronize their epoch time with the connected Agent, this can be very useful when working in embedded environments that do not provide any time synchronization mechanism.
This utility is based on the NTP protocol, taking into account delays caused by the transport layer. An usage example can be found on [`micro-ROS-demos/rclc/epoch_synchronization`](https://github.com/micro-ROS/micro-ROS-demos/blob/iron/rclc/epoch_synchronization/main.c).

```c
// Sync timeout
const int timeout_ms = 1000;

// Synchronize time with the agent
rmw_uros_sync_session(timeout_ms);

if (rmw_uros_epoch_synchronized())
{
    // Get time in milliseconds or nanoseconds
    int64_t time_ms = rmw_uros_epoch_millis();
    int64_t time_ns = rmw_uros_epoch_nanos();
}
```

## Ping agent
The Client can test the connection with the Agent with the ping utility. This functionality can be used even when the micro-ROS context has not yet been initialized, which is useful to test the connection before trying to connect to the Agent. An example can be found on [`micro-ROS-demos/rclc/ping_uros_agent`](https://github.com/micro-ROS/micro-ROS-demos/blob/iron/rclc/ping_uros_agent/main.c).

```c
// Timeout for each attempt
const int timeout_ms = 1000;

// Number of attemps
const uint8_t attemps = 5;

// Ping the agent
rmw_ret_t ping_result = rmw_uros_ping_agent(timeout_ms, attempts);

if (RMW_RET_OK == ping_result)
{
    // micro-ROS Agent is reachable
    ...
}
else
{
    // micro-ROS Agent is not available
    ...
}
```

*Note: `rmw_uros_ping_agent` is thread safe.*

## Continous serialization

This utility allows the client to serialize and send data up to a customized size. The user can set the topic lenght and then serialize the data within the publish process. An example can be found on [`micro-ROS-demos/rclc/ping_uros_agent`](https://github.com/micro-ROS/micro-ROS-demos/blob/iron/rclc/ping_uros_agent/main.c), where fragments from an image are requested and serialized on the spot.

The user needs to define two callbacks, then set them on the `rmw`. It is recommended to clean the callbacks after the publication, to avoid interferences with other topics on the same process:

```c
// Set serialization callbacks
rmw_uros_set_continous_serialization_callbacks(size_cb, serialization_cb);

// Publish message
rcl_publish(...);

// Clean callbacks
rmw_uros_set_continous_serialization_callbacks(NULL, NULL);
```

- Size callback:

This callback will pass a pointer with the calculated message size. The user is responsible of increase this size to the expected value:

```c
// Function prototype:
void (* rmw_uros_continous_serialization_size)(uint32_t * topic_length);

// Implementation example:
void size_cb(uint32_t * topic_length){
    // Increase message size
    *topic_length += ucdr_alignment(*topic_length, sizeof(uint32_t)) + sizeof(uint32_t);
    *topic_length += IMAGE_BYTES;
}
```

- Serialize callback:

This callback gives the user the message buffer to be completed. The user is responsible of serialize the data up to the lenght established on the size callback:

```c
// Function prototype:
void (* rmw_uros_continous_serialization)(ucdrBuffer * ucdr);

// Implementation example:
void serialization_cb(ucdrBuffer * ucdr){
    size_t len = 0;
    micro_ros_fragment_t fragment;

    // Serialize array size
    ucdr_serialize_uint32_t(ucdr, IMAGE_BYTES);

    while(len < IMAGE_BYTES){
      // Wait for new image "fragment"
      ...

      // Serialize data fragment
      ucdr_serialize_array_uint8_t(ucdr, fragment.data, fragment.len);
      len += fragment.len;
    }
}
```

*Note: When the callback ends, the message will be published.*

---

## Source: `_docs/tutorials/programming_rcl_rclc/node/node.md`
<a id="source-docs-tutorials-programming-rcl-rclc-node-node-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

ROS 2 nodes are the main participants on ROS 2 ecosystem. They will communicate between each other using publishers, subscriptions, services, etc. Further information about ROS 2 nodes can be found [here](https://docs.ros.org/en/iron/Tutorials/Understanding-ROS2-Nodes.md)


- [Initialization](#initialization)
  - [Cleaning Up](#cleaning-up)
- [Lifecycle](#lifecycle)
  - [Initialization](#initialization-1)
  - [Callbacks](#callbacks)
  - [Running](#running)
  - [Cleaning Up](#cleaning-up-1)
  - [Limitations](#limitations)

## Initialization

- Create a node with default configuration:
  ```c
  // Initialize micro-ROS allocator
  rcl_allocator_t allocator = rcl_get_default_allocator();

  // Initialize support object
  rclc_support_t support;
  rcl_ret_t rc = rclc_support_init(&support, argc, argv, &allocator);

  // Create node object
  rcl_node_t node;
  const char * node_name = "test_node";

  // Node namespace (Can remain empty "")
  const char * namespace = "test_namespace";

  // Init default node
  rc = rclc_node_init_default(&node, node_name, namespace, &support);
  if (rc != RCL_RET_OK) {
    ... // Handle error
    return -1;
  }
  ```

- Create a node with custom options:

  The configuration of the node will also be applied to its future elements (Publishers, subscribers, services, ...). The node options are configured on the `rclc_support_t` object with a custom API:

  ```c
  // Initialize micro-ROS allocator
  rcl_allocator_t allocator = rcl_get_default_allocator();

  // Initialize and modify options (Set DOMAIN ID to 10)
  rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
  rcl_init_options_init(&init_options, allocator);
  rcl_init_options_set_domain_id(&init_options, 10);

  // Initialize rclc support object with custom options
  rclc_support_t support;
  rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator);

  // Create node object
  rcl_node_t node;
  const char * node_name = "test_node";

  // Node namespace (Can remain empty "")
  const char * namespace = "test_namespace";

  // Init node with configured support object
  rclc_node_init_default(&node, node_name, namespace, &support);

  if (rc != RCL_RET_OK) {
    ... // Handle error
    return -1;
  }
  ```

### Cleaning Up

To destroy a initialized node all entities owned by the node (Publishers, subscribers, services, ...) have to be destroyed before the node itself:

```c
// Destroy created entities (Example)
rcl_publisher_fini(&publisher, &node);
...

// Destroy the node
rcl_node_fini(&node);
```

This will delete the node from ROS2 graph, including any generated infrastructure on the agent (if possible) and used memory on the client.

## Lifecycle

The rclc lifecycle package provides convenience functions in C to bundle an rcl node with the ROS 2 Node Lifecycle state machine, similar to the [rclcpp Lifecycle Node](https://github.com/ros2/rclcpp/blob/master/rclcpp_lifecycle/include/rclcpp_lifecycle/lifecycle_node.hpp) for C++. Further information about ROS 2 node lifecycle can be found [here](https://design.ros2.org/articles/node_lifecycle.md)

An usage example is given in the [rclc_examples](https://github.com/ros2/rclc/blob/master/rclc_examples/src/example_lifecycle_node.c) package.

### Initialization

Creation of a lifecycle node as a bundle of an rcl node and the rcl lifecycle state machine. Assuming an already initialized node and executor:

```c
// Create rcl state machine
rcl_lifecycle_state_machine_t state_machine =
rcl_lifecycle_get_zero_initialized_state_machine();

// Create the lifecycle node
rclc_lifecycle_node_t my_lifecycle_node;
rcl_ret_t rc = rclc_make_node_a_lifecycle_node(
  &my_lifecycle_node,
  &node,
  &state_machine,
  &allocator);

// Register lifecycle services on the allocator
rclc_lifecycle_add_get_state_service(&lifecycle_node, &executor);
rclc_lifecycle_add_get_available_states_service(&lifecycle_node, &executor);
rclc_lifecycle_add_change_state_service(&lifecycle_node, &executor);
```

*Note: Executor needsto be equipped with 1 handle per node and per service*

### Callbacks

Optional callbacks are supported to act on lifecycle state changes. Example:

```c
rcl_ret_t my_on_configure() {
  printf("  >>> my_lifecycle_node: on_configure() callback called.\n");
  return RCL_RET_OK;
}
```

To add them to the lifecycle node:

```c
// Register lifecycle service callbacks
rclc_lifecycle_register_on_configure(&lifecycle_node, &my_on_configure);
rclc_lifecycle_register_on_activate(&lifecycle_node, &my_on_activate);
rclc_lifecycle_register_on_deactivate(&lifecycle_node, &my_on_deactivate);
rclc_lifecycle_register_on_cleanup(&lifecycle_node, &my_on_cleanup);
```

### Running

To change states of the lifecycle node:

```c
bool publish_transition = true;
rc += rclc_lifecycle_change_state(
  &my_lifecycle_node,
  lifecycle_msgs__msg__Transition__TRANSITION_CONFIGURE,
  publish_transition);

rc += rclc_lifecycle_change_state(
  &my_lifecycle_node,
  lifecycle_msgs__msg__Transition__TRANSITION_ACTIVATE,
  publish_transition);
```

Except for error processing transitions, transitions are usually triggered from outside, e.g., by ROS 2 services.

### Cleaning Up

To clean everything up, simply do

```c
rc += rcl_lifecycle_node_fini(&my_lifecycle_node, &allocator);
```

### Limitations

Lifecycle services cannot yet be called via ros2 lifecycle client (`ros2 lifecycle set /node ...`). Instead use the ros2 service CLI, (Example: `ros2 service call /node/change_state lifecycle_msgs/ChangeState "{transition: {id: 1, label: configure}}"`).

---

## Source: `_docs/tutorials/programming_rcl_rclc/overview/index.md`
<a id="source-docs-tutorials-programming-rcl-rclc-overview-index-md"></a>

In this section, you'll learn the basics of the micro-ROS C API: **rclc**.

The major concepts (publishers, subscriptions, services, timers, ...) are identical with ROS 2. They even rely on the *same* implementation, as the micro-ROS C API is based on the ROS 2 client support library (rcl), enriched with a set of convenience functions by the package [rclc](https://github.com/ros2/rclc/). That is, rclc does not add a new layer of types on top of rcl (like rclcpp and rclpy do) but only provides functions that ease the programming with the rcl types. New types are introduced only for concepts that are missing in rcl, such as the concept of an executor.

* [**Nodes**](../node/)
* [**Publishers and subscribers**](../pub_sub/)
* [**Services**](../service/)
* [**Parameters**](../parameters/)
* [**Executor and timers**](../executor/)
* [**Quality of service**](../qos/)
* [**micro-ROS utilities**](../micro-ROS/)

---

## Source: `_docs/tutorials/programming_rcl_rclc/parameters/parameters.md`
<a id="source-docs-tutorials-programming-rcl-rclc-parameters-parameters-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

ROS 2 parameters allow the user to create variables on a node and manipulate/read them with different ROS 2 commands. Further information about ROS 2 parameters can be found [here](https://docs.ros.org/en/rolling/Tutorials/Parameters/Understanding-ROS2-Parameters.md)

Ready to use code examples related to this tutorial can be found in [`rclc/rclc_examples/src/example_parameter_server.c`](https://github.com/ros2/rclc/blob/master/rclc_examples/src/example_parameter_server.c).

- [Initialization](#initialization)
- [Memory requirements](#memory-requirements)
- [Add a parameter](#add-a-parameter)
- [Delete a parameter](#delete-a-parameter)
- [Parameters description](#parameters-description)
- [Callback](#callback)
- [Cleaning up](#cleaning-up)

## Initialization

- Default initialization:
    ```c
    // Parameter server object
    rclc_parameter_server_t param_server;

    // Initialize parameter server with default configuration
    rcl_ret_t rc = rclc_parameter_server_init_default(&param_server, &node);

    if (RCL_RET_OK != rc) {
        ... // Handle error
        return -1;
    }
    ```

- Initialization with custom options:

  The following options can be configured:
  - notify_changed_over_dds: Publish parameter events to other ROS 2 nodes as well.
  - max_params: Maximum number of parameters allowed on the `rclc_parameter_server_t` object.
  - allow_undeclared_parameters: Allows creation of parameters from external parameter clients. A new parameter will be created if a `set` operation is requested on a non-existing parameter.
  - low_mem_mode: Reduces the memory used by the parameter server, functionality constrains are applied.

    ```c
    // Parameter server object
    rclc_parameter_server_t param_server;

    // Initialize parameter server options
    const rclc_parameter_options_t options = {
        .notify_changed_over_dds = true,
        .max_params = 4,
        .allow_undeclared_parameters = true,
        .low_mem_mode = false; };

    // Initialize parameter server with configured options
    rcl_ret_t rc = rclc_parameter_server_init_with_option(&param_server, &node, &options);

    if (RCL_RET_OK != rc) {
      ... // Handle error
      return -1;
    }
    ```

- Low memory mode:

    This mode ports the parameter functionality to memory constrained devices. The following constrains are applied:
    - Request size limited to one parameter on Set, Get, Get types and Describe services.
    - List parameter request has no prefixes enabled nor depth.
    - Parameter description strings not allowed, `rclc_add_parameter_description` is disabled.

    Memory benchmark results on `STM32F4` for 7 parameters with `RCLC_PARAMETER_MAX_STRING_LENGTH = 50` and `notify_changed_over_dds = true`:
    - Full mode: 11736 B
    - Low memory mode: 4160 B


## Memory requirements

The parameter server uses six services and an optional publisher. These need to be taken into account on the `rmw-microxrcedds` package memory configuration:

```yaml
# colcon.meta example with memory requirements to use a parameter server
{
    "names": {
        "rmw_microxrcedds": {
            "cmake-args": [
                "-DRMW_UXRCE_MAX_NODES=1",
                "-DRMW_UXRCE_MAX_PUBLISHERS=1",
                "-DRMW_UXRCE_MAX_SUBSCRIPTIONS=0",
                "-DRMW_UXRCE_MAX_SERVICES=6",
                "-DRMW_UXRCE_MAX_CLIENTS=0"
            ]
        }
    }
}
```

At runtime, the variable `RCLC_PARAMETER_EXECUTOR_HANDLES_NUMBER` defines the necessary number of handles required by a parameter server for the rclc Executor:

```c
// Executor init example with the minimum RCLC executor handles required
rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
rc = rclc_executor_init(
    &executor, &support.context,
    RCLC_PARAMETER_EXECUTOR_HANDLES_NUMBER, &allocator);
```

*Humble: the variable is `RCLC_PARAMETER_EXECUTOR_HANDLES_NUMBER` has been renamed to `RCLC_EXECUTOR_PARAMETER_SERVER_HANDLES`.*

## Add a parameter

The micro-ROS parameter server supports the following parameter types:

- Boolean:
    ```c
    const char * parameter_name = "parameter_bool";
    bool param_value = true;

    // Add parameter to the server
    rcl_ret_t rc = rclc_add_parameter(&param_server, parameter_name, RCLC_PARAMETER_BOOL);

    // Set parameter value (Triggers `on_parameter_changed` callback, if defined)
    rc = rclc_parameter_set_bool(&param_server, parameter_name, param_value);

    // Get parameter value and store it in "param_value"
    rc = rclc_parameter_get_bool(&param_server, "param1", &param_value);

    if (RCL_RET_OK != rc) {
        ... // Handle error
        return -1;
    }
    ```

- Integer:
    ```c
    const char * parameter_name = "parameter_int";
    int param_value = 100;

    // Add parameter to the server
    rcl_ret_t rc = rclc_add_parameter(&param_server, parameter_name, RCLC_PARAMETER_INT);

    // Set parameter value
    rc = rclc_parameter_set_int(&param_server, parameter_name, param_value);

    // Get parameter value on param_value
    rc = rclc_parameter_get_int(&param_server, parameter_name, &param_value);
    ```

- Double:
    ```c
    const char * parameter_name = "parameter_double";
    double param_value = 0.15;

    // Add parameter to the server
    rcl_ret_t rc = rclc_add_parameter(&param_server, parameter_name, RCLC_PARAMETER_DOUBLE);

    // Set parameter value
    rc = rclc_parameter_set_double(&param_server, parameter_name, param_value);

    // Get parameter value on param_value
    rc = rclc_parameter_get_double(&param_server, parameter_name, &param_value);
    ```

Parameters can also be created by external clients if the `allow_undeclared_parameters` flag is set.
The client just needs to set a value on a non-existing parameter. Then this parameter will be created if the server has still capacity and the callback allows the operation.

*Max name size is controlled by the compile-time option `RCLC_PARAMETER_MAX_STRING_LENGTH`, default value is 50.*

## Delete a parameter
Parameters can be deleted by both, the parameter server and external clients:
```c
rclc_delete_parameter(&param_server, "param2");
```

*For external delete requests, the server callback will be executed, allowing the node to reject the operation.*

## Parameters description

- Parameter description
    Adds a description of a parameter and its constrains, which will be returned on a describe parameter requests:
    ```c
    rclc_add_parameter_description(&param_server, "param2", "Second parameter", "Only even numbers");
    ```

    *The maximum string size is controlled by the compilation time option `RCLC_PARAMETER_MAX_STRING_LENGTH`, default value is 50.*

- Parameter constraints
    Informative numeric constraints can be added to int and double parameters, returning this values on describe parameter requests:
    - `from_value`: Start value for valid values, inclusive.
    - `to_value`: End value for valid values, inclusive.
    - `step`: Size of valid steps between the from and to bound.

        ```c
        int64_t int_from = 0;
        int64_t int_to = 20;
        uint64_t int_step = 2;
        rclc_add_parameter_constraint_integer(&param_server, "param2", int_from, int_to, int_step);

        double double_from = -0.5;
        double double_to = 0.5;
        double double_step = 0.01;
        rclc_add_parameter_constraint_double(&param_server, "param3", double_from, double_to, double_step);
        ```

    *This constrains will not be applied by the parameter server, leaving values filtering to the user callback.*

- Read-only parameters:
    The new API offers a read-only flag. This flag blocks parameter changes from external clients, but allows changes on the server side:
    ```c
    bool read_only = true;
    rclc_set_parameter_read_only(&param_server, "param3", read_only);
    ```

## Callback

When adding the parameter server to the executor, a callback could to be configured. This callback would then be executed on the following events:
- Parameter value change: Internal and external parameter set on existing parameters.
- Parameter creation: External parameter set on unexisting parameter if `allow_undeclared_parameters` is set.
- Parameter delete: External parameter delete on existing parameter.
- The user can allow or reject this operations using the `bool` return value.

Callback parameters:
- `old_param`: Parameter actual value, `NULL` for new parameter request.
- `new_param`: Parameter new value, `NULL` for parameter removal request.
- `context`: User context, configured on `rclc_executor_add_parameter_server_with_context`.

```c
bool on_parameter_changed(const Parameter * old_param, const Parameter * new_param, void * context)
{
  (void) context;

  if (old_param == NULL && new_param == NULL) {
    printf("Callback error, both parameters are NULL\n");
    return false;
  }

  if (old_param == NULL) {
    printf("Creating new parameter %s\n", new_param->name.data);
  } else if (new_param == NULL) {
    printf("Deleting parameter %s\n", old_param->name.data);
  } else {
    printf("Parameter %s modified.", old_param->name.data);
    switch (old_param->value.type) {
      case RCLC_PARAMETER_BOOL:
        printf(
          " Old value: %d, New value: %d (bool)", old_param->value.bool_value,
          new_param->value.bool_value);
        break;
      case RCLC_PARAMETER_INT:
        printf(
          " Old value: %ld, New value: %ld (int)", old_param->value.integer_value,
          new_param->value.integer_value);
        break;
      case RCLC_PARAMETER_DOUBLE:
        printf(
          " Old value: %f, New value: %f (double)", old_param->value.double_value,
          new_param->value.double_value);
        break;
      default:
        break;
    }
    printf("\n");
  }

  return true;
}
```

Parameters modifications are disabled while the callback `on_parameter_changed` is executed, causing the following methods to return `RCLC_PARAMETER_DISABLED_ON_CALLBACK` if they are invoked:
- rclc_add_parameter
- rclc_delete_parameter
- rclc_parameter_set_bool
- rclc_parameter_set_int
- rclc_parameter_set_double
- rclc_set_parameter_read_only
- rclc_add_parameter_constraint_double
- rclc_add_parameter_constraint_integer

Once the parameter server and the executor are initialized, the parameter server must be added to the executor in order to accept parameter commands from ROS 2:
```c
// Add parameter server to the executor including defined callback
rc = rclc_executor_add_parameter_server(&executor, &param_server, on_parameter_changed);
```

Note that this callback is optional as its just an event information for the user. To use the parameter server without a callback:
```c
// Add parameter server to the executor without a callback
rc = rclc_executor_add_parameter_server(&executor, &param_server, NULL);
```

Configuration of the callback context:
```c
// Add parameter server to the executor including defined callback and a context
rc = rclc_executor_add_parameter_server_with_context(&executor, &param_server, on_parameter_changed, &context);
```

## Cleaning up

To destroy an initialized parameter server:

```c
// Delete parameter server
rclc_parameter_server_fini(&param_server, &node);
```

This will delete any automatically created infrastructure on the agent (if possible) and deallocate used memory on the parameter server side.


---

## Source: `_docs/tutorials/programming_rcl_rclc/pub_sub/pub_sub.md`
<a id="source-docs-tutorials-programming-rcl-rclc-pub-sub-pub-sub-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/>  <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

ROS 2 publishers and subscribers are the basic communication mechanism between nodes using topics. Further information about ROS 2 publish–subscribe pattern can be found [here](https://docs.ros.org/en/humble/Tutorials/Topics/Understanding-ROS2-Topics.md).

Ready to use code related to this concepts can be found in [`micro-ROS-demos/rclc/int32_publisher`](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/int32_publisher/main.c) and [`micro-ROS-demos/rclc/int32_subscriber`](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/int32_subscriber/main.c) folders. Fragments of code from this examples are used on this tutorial.

- [Publisher](#publisher)
  - [Initialization](#initialization)
  - [Publish a message](#publish-a-message)
- [Subscription](#subscription)
  - [Initialization](#initialization-1)
  - [Callbacks](#callbacks)
- [Message initialization](#message-initialization)
- [Cleaning Up](#cleaning-up)

## Publisher

### Initialization

Starting from a code where RCL is initialized and a micro-ROS node is created, there are three ways to initialize a publisher depending on the desired quality-of-service configuration:

- Reliable (default):
  ```c
  // Publisher object
  rcl_publisher_t publisher;
  const char * topic_name = "test_topic";

  // Get message type support
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // Creates a reliable rcl publisher
  rcl_ret_t rc = rclc_publisher_init_default(
    &publisher, &node,
    type_support, topic_name);

  if (RCL_RET_OK != rc) {
    ...  // Handle error
    return -1;
  }
  ```

- Best effort:
  ```c
  // Publisher object
  rcl_publisher_t publisher;
  const char * topic_name = "test_topic";

  // Get message type support
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // Creates a best effort rcl publisher
  rcl_ret_t rc = rclc_publisher_init_best_effort(
    &publisher, &node,
    type_support, topic_name);

  if (RCL_RET_OK != rc) {
    ...  // Handle error
    return -1;
  }
  ```

- Custom QoS:

  ```c
  // Publisher object
  rcl_publisher_t publisher;
  const char * topic_name = "test_topic";

  // Get message type support
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // Set publisher QoS
  const rmw_qos_profile_t * qos_profile = &rmw_qos_profile_default;

  // Creates a rcl publisher with customized quality-of-service options
  rcl_ret_t rc = rclc_publisher_init(
    &publisher, &node,
    type_support, topic_name, qos_profile);

  if (RCL_RET_OK != rc) {
    ...  // Handle error
    return -1;
  }
  ```

  For a detail on the available QoS options and the advantages and disadvantages between reliable and best effort modes, check the [QoS tutorial](../qos/).

### Publish a message

To publish messages to the topic:

```c
// Int32 message object
std_msgs__msg__Int32 msg;

// Set message value
msg.data = 0;

// Publish message
rcl_ret_t rc = rcl_publish(&publisher, &msg, NULL);

if (rc != RCL_RET_OK) {
  ...  // Handle error
  return -1;
}
```

For periodic publications,  `rcl_publish` can be placed inside a timer callback. Check the [Executor and timers](../executor/) section for details.

Note: `rcl_publish` is thread safe and can be called from multiple threads.

## Subscription

### Initialization

The suscriptor initialization is almost identical to the publisher one:

- Reliable (default):
  ```c
  // Subscription object
  rcl_subscription_t subscriber;
  const char * topic_name = "test_topic";

  // Get message type support
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // Initialize a reliable subscriber
  rcl_ret_t rc = rclc_subscription_init_default(
    &subscriber, &node,
    type_support, topic_name);

  if (RCL_RET_OK != rc) {
    ...  // Handle error
    return -1;
  }
  ```

- Best effort:

  ```c
  // Subscription object
  rcl_subscription_t subscriber;
  const char * topic_name = "test_topic";

  // Get message type support
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // Initialize best effort subscriber
  rcl_ret_t rc = rclc_subscription_init_best_effort(
    &subscriber, &node,
    type_support, topic_name);

  if (RCL_RET_OK != rc) {
    ...  // Handle error
    return -1;
  }
  ```

- Custom QoS:

  ```c
  // Subscription object
  rcl_subscription_t subscriber;
  const char * topic_name = "test_topic";

  // Get message type support
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // Set client QoS
  const rmw_qos_profile_t * qos_profile = &rmw_qos_profile_default;

  // Initialize a subscriber with customized quality-of-service options
  rcl_ret_t rc = rclc_subscription_init(
    &subscriber, &node,
    type_support, topic_name, qos_profile);

  if (RCL_RET_OK != rc) {
    ...  // Handle error
    return -1;
  }
  ```

For a detail on the available QoS options and the advantages and disadvantages between reliable and best effort modes, check the [QoS tutorial](../qos/).

### Callbacks
The executor is responsible to call the configured callback when a message is published.
The function will have the message as its only argument, containing the values sent by the publisher:

```c
// Function prototype:
void (* rclc_subscription_callback_t)(const void *);

// Implementation example:
void subscription_callback(const void * msgin)
{
  // Cast received message to used type
  const std_msgs__msg__Int32 * msg = (const std_msgs__msg__Int32 *)msgin;

  // Process message
  printf("Received: %d\n", msg->data);
}
```

Once the subscriber and the executor are initialized, the subscriber callback must be added to the executor to receive incoming publications once its spinning:

```c
// Message object to receive publisher data
std_msgs__msg__Int32 msg;

// Add subscription to the executor
rcl_ret_t rc = rclc_executor_add_subscription(
  &executor, &subscriber, &msg,
  &subscription_callback, ON_NEW_DATA);

if (RCL_RET_OK != rc) {
  ...  // Handle error
  return -1;
}

// Spin executor to receive messages
rclc_executor_spin(&executor);
```

## Message initialization
Before publishing or receiving a message, it may be necessary to initialize its memory for types with strings or sequences.
Check the [Handling messages memory in micro-ROS](../../advanced/handling_type_memory/) section for details.

## Cleaning Up

After finishing the publisher/subscriber, the node will no longer be advertising that it is publishing/listening on the topic.
To destroy an initialized publisher or subscriber:

```c
// Destroy publisher
rcl_publisher_fini(&publisher, &node);

// Destroy subscriber
rcl_subscription_fini(&subscriber, &node);
```

This will delete any automatically created infrastructure on the agent (if possible) and deallocate used memory on the client side.

---

## Source: `_docs/tutorials/programming_rcl_rclc/qos/QoS.md`
<a id="source-docs-tutorials-programming-rcl-rclc-qos-qos-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

- [Reliable QoS](#reliable-qos)
- [Best Effort](#best-effort)
- [Custom QoS configuration](#custom-qos-configuration)

## Reliable QoS

Reliable communication implies a confirmation for each message sent. This mode can detect errors in the communication process at the cost of increasing the message latency and the resources usage.

This message confirmation proccess can increase blocking time on `rcl_publish` or executor spin calls as reliable publishers, services and clients will wait for acknowledgement for each sent message. `rmw-microxrcedds` offers an API to individually configure the acknowledgement timeout on them:

  ```c
  // Confirmation timeout in milliseconds
  int ack_timeout = 1000;

  // Set reliable publisher timeout
  rc = rmw_uros_set_publisher_session_timeout(&publisher, ack_timeout);

  // Set reliable service server timeout
  rc = rmw_uros_set_service_session_timeout(&service, ack_timeout);

  // Set reliable service client timeout
  rc = rmw_uros_set_client_session_timeout(&client, ack_timeout);

  if (RCL_RET_OK != rc) {
    ...  // Handle error
    return -1;
  }
  ```

  The default value for all publishers is configured at compilation time by the cmake variable `RMW_UXRCE_PUBLISH_RELIABLE_TIMEOUT`.

## Best Effort

In best effort mode no acknowledgement is needed, the messages sent are expected to be received. This method improves publication throughput and reduces resources usage but is vulnerable to communication errors.

## Custom QoS configuration

The user can customize their own QoS using the available `rmw_qos_profile_t` struct:

```c
/// ROS MiddleWare quality of service profile.
typedef struct RMW_PUBLIC_TYPE rmw_qos_profile_t
{
  enum rmw_qos_history_policy_t history;
  /// Size of the message queue.
  size_t depth;
  /// Reliabiilty QoS policy setting
  enum rmw_qos_reliability_policy_t reliability;
  /// Durability QoS policy setting
  enum rmw_qos_durability_policy_t durability;
  /// The period at which messages are expected to be sent/received
  struct rmw_time_t deadline;
  /// The age at which messages are considered expired and no longer valid
  struct rmw_time_t lifespan;
  /// Liveliness QoS policy setting
  enum rmw_qos_liveliness_policy_t liveliness;
  /// The time within which the RMW node or publisher must show that it is alive
  struct rmw_time_t liveliness_lease_duration;

  /// If true, any ROS specific namespacing conventions will be circumvented.
  bool avoid_ros_namespace_conventions;
} rmw_qos_profile_t;
```

---

## Source: `_docs/tutorials/programming_rcl_rclc/service/services.md`
<a id="source-docs-tutorials-programming-rcl-rclc-service-services-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

ROS 2 services are another communication mechanism between nodes. Services implement a client-server paradigm based on ROS 2 messages and types. Further information about ROS 2 services can be found [here](https://docs.ros.org/en/rolling/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Services/Understanding-ROS2-Services.md)

Ready to use code related to this concepts can be found in [`micro-ROS-demos/rclc/addtwoints_server`](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/addtwoints_server/main.c) and [`micro-ROS-demos/rclc/addtwoints_client`](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/addtwoints_client/main.c) folders. Fragments of code from this examples are used on this tutorial.

- [Service server](#service-server)
  - [Initialization](#initialization)
  - [Callback](#callback)
- [Service Client](#service-client)
  - [Initialization](#initialization-1)
  - [Callback](#callback-1)
  - [Send a request](#send-a-request)
- [Message initialization](#message-initialization)
- [Cleaning Up](#cleaning-up)

## Service server

### Initialization
Starting from a code where RCL is initialized and a micro-ROS node is created, there are three ways to initialize a service server:

- Reliable (default):

  ```c
  // Service server object
  rcl_service_t service;
  const char * service_name = "/addtwoints";

  // Get message type support
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // Initialize server with default configuration
  rcl_ret_t rc = rclc_service_init_default(
    &service, &node,
    type_support, service_name);

  if (rc != RCL_RET_OK) {
    ...  // Handle error
    return -1;
  }
  ```

- Best effort:

  ```c
  // Service server object
  rcl_service_t service;
  const char * service_name = "/addtwoints";

  // Get message type support
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // Initialize server with default configuration
  rcl_ret_t rc = rclc_service_init_best_effort(
    &service, &node,
    type_support, service_name);

  if (rc != RCL_RET_OK) {
    ...  // Handle error
    return -1;
  }
  ```

- Custom QoS:

  ```c
  // Service server object
  rcl_service_t service;
  const char * service_name = "/addtwoints";

  // Get message type support
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // Set service QoS
  const rmw_qos_profile_t * qos_profile = &rmw_qos_profile_services_default;

  // Initialize server with customized quality-of-service options
  rcl_ret_t rc = rclc_service_init(
    &service, &node, type_support,
    service_name, qos_profile);

  if (rc != RCL_RET_OK) {
    ...  // Handle error
    return -1;
  }
  ```

For a detail on the available QoS options and the advantages and disadvantages between reliable and best effort modes, check the [QoS tutorial](../qos/).

### Callback

Once a request arrives, the executor will call the configured callback with the request and response messages as arguments.
The request message contains the values sent by the client, the response_msg should be modified here as it will be delivered after the callback returns.

Using `AddTwoInts.srv` type definition as an example:

```c
int64 a
int64 b
---
int64 sum
```

The client request message will contain two integers `a` and `b`, and expects the `sum` of them as a response:

```c
// Function prototype:
void (* rclc_service_callback_t)(const void *, void *);

// Implementation example:
void service_callback(const void * request_msg, void * response_msg){
  // Cast messages to expected types
  example_interfaces__srv__AddTwoInts_Request * req_in =
    (example_interfaces__srv__AddTwoInts_Request *) request_msg;
  example_interfaces__srv__AddTwoInts_Response * res_in =
    (example_interfaces__srv__AddTwoInts_Response *) response_msg;

  // Handle request message and set the response message values
  printf("Client requested sum of %d and %d.\n", (int) req_in->a, (int) req_in->b);
  res_in->sum = req_in->a + req_in->b;
}
```

Note that it is necessary to cast each message to the expected type

Once the service and the executor are initialized, the service callback must be added to the executor in order to process incoming requests once the executor is spinning:

```c
// Service message objects
example_interfaces__srv__AddTwoInts_Response response_msg;
example_interfaces__srv__AddTwoInts_Request request_msg;

// Add server callback to the executor
rc = rclc_executor_add_service(
  &executor, &service, &request_msg,
  &response_msg, service_callback);

if (rc != RCL_RET_OK) {
  ...  // Handle error
  return -1;
}

// Spin executor to receive requests
rclc_executor_spin(&executor);
```

## Service Client

### Initialization
The service client initialization is almost identical to the server one:

- Reliable (default):

  ```c
  // Service client object
  rcl_client_t client;
  const char * service_name = "/addtwoints";

  // Get message type support
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // Initialize client with default configuration
  rcl_ret_t rc = rclc_client_init_default(
    &client, &node,
    type_support, service_name);

  if (rc != RCL_RET_OK) {
    ...  // Handle error
    return -1;
  }
  ```

- Best effort:

  ```c
  // Service client object
  rcl_client_t client;
  const char * service_name = "/addtwoints";

  // Get message type support
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // Initialize client with default configuration
  rcl_ret_t rc = rclc_client_init_best_effort(
    &client, &node,
    type_support, service_name);

  if (rc != RCL_RET_OK) {
    ...  // Handle error
    return -1;
  }
  ```

- Custom QoS:

  ```c
  // Service client object
  rcl_client_t client;
  const char * service_name = "/addtwoints";

  // Get message type support
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // Set client QoS
  const rmw_qos_profile_t * qos_profile = &rmw_qos_profile_services_default;

  // Initialize server with customized quality-of-service options
  rcl_ret_t rc = rclc_client_init(
    &client, &node, type_support,
    service_name, qos_profile);

  if (rc != RCL_RET_OK) {
    ...  // Handle error
    return -1;
  }
  ```

### Callback
The executor is responsible to call the configured callback when the service response arrives.
The function will have the response message as its only argument, containing the values sent by the server.

It is necessary to cast the response message to the expected type. Example:
```c
// Function prototype:
void (* rclc_client_callback_t)(const void *);

// Implementation example:
void client_callback(const void * response_msg){
  // Cast response message to expected type
  example_interfaces__srv__AddTwoInts_Response * msgin =
    (example_interfaces__srv__AddTwoInts_Response * ) response_msg;

  // Handle response message
  printf("Received service response %ld + %ld = %ld\n", req.a, req.b, msgin->sum);
}
```

Once the client and the executor are initialized, the client callback must be added to the executor in order to receive the service response once the executor is spinning:

```c
// Response message object
example_interfaces__srv__AddTwoInts_Response res;

// Add client callback to the executor
rcl_ret_t rc = rclc_executor_add_client(&executor, &client, &res, client_callback);

if (rc != RCL_RET_OK) {
  ...  // Handle error
  return -1;
}

// Spin executor to receive requests
rclc_executor_spin(&executor);
```

### Send a request
Once the service client and server are configured, the service client can perform a request and spin the executor to get the reply.
Following the example on `AddTwoInts.srv`:

```c
// Request message object (Must match initialized client type support)
example_interfaces__srv__AddTwoInts_Request request_msg;

// Initialize request message memory and set its values
example_interfaces__srv__AddTwoInts_Request__init(&request_msg);
request_msg.a = 24;
request_msg.b = 42;

// Sequence number of the request (Populated in rcl_send_request)
int64_t sequence_number;

// Send request
rcl_send_request(&client, &request_msg, &sequence_number);

// Spin the executor to get the response
rclc_executor_spin(&executor);
```

## Message initialization
Before sending or receiving a message, it may be necessary to initialize its memory for types with strings or sequences.
Check the [Handling messages memory in micro-ROS](../../advanced/handling_type_memory/) section for details.

## Cleaning Up

To destroy an initialized service or client:

```c
// Destroy service server and client
rcl_service_fini(&service, &node);
rcl_client_fini(&client, &node);
```

This will delete any automatically created infrastructure on the agent (if possible) and deallocate used memory on the client side.
