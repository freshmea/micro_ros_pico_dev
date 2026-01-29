# micro-ROS 웹사이트 문서 (통합) _생성일: 2026-01-29_ 이 파일은 micro-ROS 웹사이트 마크다운 콘텐츠를 연결합니다. 각 섹션은 출처를 보존하기 위해 소스 경로로 시작합니다. ## 목차 - [_docs/api/overview/index.md](#source-docs-api-overview-index-md) - [_docs/api/rclc/index.md](#source-docs-api-rclc-index-md)
- [_docs/api/rmw/index.md](#source-docs-api-rmw-index-md) - [_docs/api/utils/index.md](#source-docs-api-utils-index-md)
- [_docs/concepts/benchmarking/benchmarking/index.md](#source-docs-concepts-benchmarking-benchmarking-index-md) - [_docs/concepts/benchmarking/concept/index.md](#source-docs-concepts-benchmarking-concept-index-md)
- [_docs/concepts/benchmarking/memo_prof/index.md](#source-docs-concepts-benchmarking-memo-prof-index-md) - [_docs/concepts/benchmarking/results/index.md](#source-docs-concepts-benchmarking-results-index-md)
- [_docs/concepts/build_system/external_build_systems/index.md](#source-docs-concepts-build-system-external-build-systems-index-md) - [_docs/concepts/build_system/index.md](#source-docs-concepts-build-system-index-md)
- [_docs/concepts/client_library/diagnostics/index.md](#source-docs-concepts-client-library-diagnostics-index-md) - [_docs/concepts/client_library/embedded_tf/index.md](#source-docs-concepts-client-library-embedded-tf-index-md)
- [_docs/concepts/client_library/execution_management/index.md](#source-docs-concepts-client-library-execution-management-index-md) - [_docs/concepts/client_library/features/index.md](#source-docs-concepts-client-library-features-index-md)
- [_docs/concepts/client_library/introduction/index.md](#source-docs-concepts-client-library-introduction-index-md) - [_docs/concepts/client_library/lifecycle_and_system_modes/index.md](#source-docs-concepts-client-library-lifecycle-and-system-modes-index-md)
- [_docs/concepts/fiware_interoperability/index.md](#source-docs-concepts-fiware-interoperability-index-md) - [_docs/concepts/middleware/IoT/index.md](#source-docs-concepts-middleware-iot-index-md)
- [_docs/concepts/middleware/memo_prof/index.md](#source-docs-concepts-middleware-memo-prof-index-md) - [_docs/concepts/middleware/Micro_XRCE-DDS/index.md](#source-docs-concepts-middleware-micro-xrce-dds-index-md)
- [_docs/concepts/middleware/rosserial/index.md](#source-docs-concepts-middleware-rosserial-index-md) - [_docs/concepts/rtos/comparison/index.md](#source-docs-concepts-rtos-comparison-index-md)
- [_docs/concepts/rtos/index.md](#source-docs-concepts-rtos-index-md) - [_docs/imprint.md](#source-docs-imprint-md) - [_docs/overview/comparison/index.md](#source-docs-overview-comparison-index-md)
- [_docs/overview/docker_ci_status/index.md](#source-docs-overview-docker-ci-status-index-md) - [_docs/overview/ext_tools/index.md](#source-docs-overview-ext-tools-index-md)
- [_docs/overview/features/index.md](#source-docs-overview-features-index-md) - [_docs/overview/hardware/index.md](#source-docs-overview-hardware-index-md)
- [_docs/overview/license/index.md](#source-docs-overview-license-index-md) - [_docs/overview/ROS_2_feature_comparison/index.md](#source-docs-overview-ros-2-feature-comparison-index-md)
- [_docs/overview/rtos/index.md](#source-docs-overview-rtos-index-md) - [_docs/overview/users_and_clients/index.md](#source-docs-overview-users-and-clients-index-md) - [_docs/privacy.md](#source-docs-privacy-md) - [_docs/튜토리얼/고급/벤치마킹/index.md](#source-docs-튜토리얼-고급-벤치마킹-index-md) - [_docs/튜토리얼/고급/사용자_정의_정적_라이브러리_생성/index.md](#source-docs-튜토리얼-고급-사용자_정의_정적_라이브러리_생성-index-md)
- [_docs/tutorials/advanced/create_custom_transports/index.md](#source-docs-tutorials-advanced-create-custom-transports-index-md)
- [_docs/tutorials/advanced/create_dds_entities_by_ref/index.md](#source-docs-tutorials-advanced-create-dds-entities-by-ref-index-md)
- [_docs/tutorials/advanced/create_new_type/index.md](#source-docs-tutorials-advanced-create-new-type-index-md) - [_docs/tutorials/advanced/handling_type_memory/index.md](#source-docs-tutorials-advanced-handling-type-memory-index-md)
- [_docs/tutorials/advanced/microxrcedds_rmw_configuration/index.md](#source-docs-tutorials-advanced-microxrcedds-rmw-configuration-index-md)
- [_docs/tutorials/advanced/overview/index.md](#source-docs-tutorials-advanced-overview-index-md) - [_docs/tutorials/core/first_application_linux/index.md](#source-docs-tutorials-core-first-application-linux-index-md)
- [_docs/tutorials/core/first_application_rtos/freertos.md](#source-docs-tutorials-core-first-application-rtos-freertos-md) - [_docs/tutorials/core/first_application_rtos/index.md](#source-docs-tutorials-core-first-application-rtos-index-md) - [_docs/tutorials/core/first_application_rtos/nuttx.md](#source-docs-tutorials-core-first-application-rtos-nuttx-md)
- [_docs/tutorials/core/first_application_rtos/zephyr.md](#source-docs-tutorials-core-first-application-rtos-zephyr-md) - [_docs/tutorials/core/overview/index.md](#source-docs-tutorials-core-overview-index-md)
- [_docs/tutorials/core/teensy_with_arduino/index.md](#source-docs-tutorials-core-teensy-with-arduino-index-md)
- [_docs/tutorials/core/zephyr_emulator/index.md](#source-docs-tutorials-core-zephyr-emulator-index-md) - [_docs/tutorials/demos/combined_demos/index.md](#source-docs-tutorials-demos-combined-demos-index-md)
- [_docs/tutorials/demos/crazyflie_demo/index.md](#source-docs-tutorials-demos-crazyflie-demo-index-md)
- [_docs/tutorials/demos/demobox_demo/index.md](#source-docs-tutorials-demos-demobox-demo-index-md) - [_docs/tutorials/demos/edgeimpulse/index.md](#source-docs-tutorials-demos-edgeimpulse-index-md)
- [_docs/tutorials/demos/fiware_demo/index.md](#source-docs-tutorials-demos-fiware-demo-index-md) - [_docs/tutorials/demos/kobuki_demo/index.md](#source-docs-tutorials-demos-kobuki-demo-index-md)
- [_docs/tutorials/demos/moveit2_demo/index.md](#source-docs-tutorials-demos-moveit2-demo-index-md)
- [_docs/tutorials/demos/openmanipulator_demo/index.md](#source-docs-tutorials-demos-openmanipulator-demo-index-md) - [_docs/tutorials/demos/overview/index.md](#source-docs-tutorials-demos-overview-index-md)
- [_docs/tutorials/demos/thumper_demo/index.md](#source-docs-tutorials-demos-thumper-demo-index-md) - [_docs/tutorials/demos/tof_demo/index.md](#source-docs-tutorials-demos-tof-demo-index-md)
- [_docs/tutorials/old/6lowpan/index.md](#source-docs-tutorials-old-6lowpan-index-md) - [_docs/tutorials/old/add_microros_config/index.md](#source-docs-tutorials-old-add-microros-config-index-md)
- [_docs/tutorials/old/debugging/index.md](#source-docs-tutorials-old-debugging-index-md) - [_docs/tutorials/old/microros_nuttx_bsp/index.md](#source-docs-tutorials-old-microros-nuttx-bsp-index-md)
- [_docs/tutorials/old/nsh/index.md](#source-docs-tutorials-old-nsh-index-md)
- [_docs/tutorials/programming_rcl_rclc/executor/executor.md](#source-docs-tutorials-programming-rcl-rclc-executor-executor-md)
- [_docs/tutorials/programming_rcl_rclc/micro-ROS/micro-ROS.md](#source-docs-tutorials-programming-rcl-rclc-micro-ros-micro-ros-md)
- [_docs/tutorials/programming_rcl_rclc/node/node.md](#source-docs-tutorials-programming-rcl-rclc-node-node-md)
- [_docs/tutorials/programming_rcl_rclc/overview/index.md](#source-docs-tutorials-programming-rcl-rclc-overview-index-md)
- [_docs/tutorials/programming_rcl_rclc/parameters/parameters.md](#source-docs-tutorials-programming-rcl-rclc-parameters-parameters-md)
- [_docs/tutorials/programming_rcl_rclc/pub_sub/pub_sub.md](#source-docs-tutorials-programming-rcl-rclc-pub-sub-pub-sub-md)
- [_docs/tutorials/programming_rcl_rclc/qos/QoS.md](#source-docs-tutorials-programming-rcl-rclc-qos-qos-md)
- [_docs/tutorials/programming_rcl_rclc/service/services.md](#source-docs-tutorials-programming-rcl-rclc-service-services-md)


--- ## 출처: `_docs/api/overview/index.md` <a id="source-docs-api-overview-index-md"></a> * [**RMW Micro XRCE-DDS**](../rmw/) * [**micro-ROS 유틸리티**](../utils/)
* [**RCLC**](../rclc/) --- ## 출처: `_docs/api/rclc/index.md` <a id="source-docs-api-rclc-index-md"></a>

TODO --- ## 소스: `_docs/api/rmw/index.md` <a id="source-docs-api-rmw-index-md"></a> {% include rmw_doc/Modules/group__rmw.md %} --- ## 소스: `_docs/api/utils/index.md`
<a id="source-docs-api-utils-index-md"></a> {% include utils_doc/Modules/group__typeutils.md %} {% include utils_doc/Modules/group__stringutils.md %} {% include utils_doc/Classes/structmicro__ros__utilities__memory__rule__t.md %}
{% include utils_doc/Classes/structmicro__ros__utilities__memory__conf__t.md %} --- ## 출처: `_docs/concepts/benchmarking/benchmarking/index.md` <a id="source-docs-concepts-benchmarking-benchmarking-index-md"></a>

## 목차 * [벤치마킹 소개](#introduction-to-benchmarking) * [벤치마킹 도구 프레임워크](#our-benchmarking-tool-framework)
* [추적 프레임워크 추상화](#trace-framework-abstraction) * [섀도우 빌더](#shadow-builder) * [계측된 코드용 바이너리 생성](#binary-generation-for-instrumented-code) * [입력 수신](#receiving-inputs) * [구문 분석 및 검사](#parse-and-check)
  * [TFA 실행](#tfa-execution) * [컴파일](#compilation) * [벤치마킹 시작 단계](#step-to-start-benchmarking)



## 벤치마킹 소개 작동하고 안정적인 애플리케이션을 개발하는 것은, 초기 스케치부터 최종 실행 바이너리까지 긴 과정이며 어려운 작업입니다. 이 과정에서 개발자는 안정성 및 성능 문제를 마주칠 수 있습니다. 이러한 문제 외에도 특정 QoS(서비스 품질)를 정량화하기 어려울 수 있습니다. 적절한 도구 없이 이러한 문제를 해결하는 것은 좌절감을 주고 지루한 작업이 되어 개발자 효율성을 저하시킬 수 있습니다. 적합한 벤치마킹 도구는 이러한 개발 장애물을 극복하고 개발 시간을 단축할 수 있습니다. 관심 가질 만한 다양한 KPI(핵심 성과 지표)가 존재합니다. 마이크로-ROS 프레임워크 내에서 개발자는 KPI를 자유롭게 선택할 수 있습니다. 이를 통해 벤치마킹 도구는 유연성을 유지하며 커뮤니티가 지속적으로 다양한 KPI 지원을 추가할 수 있도록 합니다.

해결하고자 하는 문제점: * 기존 벤치마킹 도구는 각기 다른 KPI를 대상으로 다양하게 존재함 * 다양한 플랫폼(Linux/Nuttx/Baremetal 등) 지원 필요 * 각 플랫폼별 벤치마킹 도구 개발을 위한 시간/자원 부족 * 코드 오버헤드 방지: 코드 가독성 유지 * 실행 오버헤드 방지: 벤치마킹 시 실행 속도 저하 방지

## 벤치마킹 도구 프레임워크 개발 중인 벤치마킹 도구는 개발자가 자체 벤치마킹 도구를 생성할 수 있는 프레임워크를 제공합니다. 개발자가 벤치마킹하고자 하는 각 부분은 제공된 프레임워크를 사용하여 플러그인으로 추가할 수 있습니다. 이를 통해 플러그인을 공유할 수 있으며 재사용성을 최대한 향상시킵니다. ## 추적 프레임워크 추상화

섀도우 빌더는 애플리케이션의 주석만 파싱하여 추적 프레임워크 추상화(TFA) 코어로 전달합니다. TFA 코어는 사용 가능한 모든 플러그인, 각 플러그인의 기능 및 플랫폼 타깃을 인식합니다. 프로세스는 다음과 같습니다: * Benchmarking::XX::YY 기능이 포함된 라인을 사용 가능한 모든 플러그인과 대조합니다.
 * 해당 기능을 처리할 수 있는 플러그인은 코드 조각으로 응답하며, 이 코드 조각이 실제 코드로 대체됩니다. * 이후 출력 파일은 플랫폼 유형과 벤치마킹 유형에 해당하는 폴더에 추가됩니다. 이 벤치마킹 도구의 핵심은 범용성입니다. 반면 플러그인은 특정 플랫폼 벤치마킹에 필요한 구체적인 구현을 제공합니다. 각 플러그인은 파서가 요청하는 정보를 제공합니다:

 * 지원 플랫폼 목록 제공 * 처리 가능한 함수 목록 제공 * 벤치마킹을 위해 추가될 코드 스니펫 제공 * 패치 및/또는 패치 코드 목록 제공 * 선택적으로 벤치마크 실행을 위한 종료 스크립트 제공 ## 섀도우 빌더 이 섹션에서는 섀도우 빌더(SB)와 관련된 몇 가지 개념을 소개합니다. 섀도우 빌더는 벤치마킹 대상 코드를 투명하게 계측하는 도구입니다. 이 도구는 나중에 일반 코드처럼 컴파일될 "계측된 코드"를 출력할 수 있습니다. 다음 단계는 섀도우 빌더 프로세스 흐름을 설명합니다: * 사용자로부터 구성 파일(벤치마킹 구성 파일)을 가져옵니다. * 적절한 소스 파일을 가져옵니다.
 * 추적 프레임워크 추상화 구성 파일 실행. * 코드 삽입에 필요한 소스 파일 파싱. * 다양한 플랫폼용 대상 바이너리 컴파일. * 수행되는 벤치마킹 유형에 따라 필요한 경우, 다른 대상 바이너리 컴파일. SB(섀도우 빌더)는 사용자에게 최대한 투명하게 작동하도록 설계되었습니다. 벤치마킹이 활성화되지 않은 경우, 해당 프로세스는 우회되어야 합니다.

SB는 벤치마킹 대상 소스 코드의 경로/Git 저장소를 확보하는 역할을 담당합니다. 벤치마킹. 소스 코드는 사용자가 벤치마킹 구성 파일에서 지정합니다. 코드 삽입을 위해 이를 허용하는 몇 가지 도구가 있습니다. CLang AST 도구를 사용하면 일부 코드를 삽입할 수 있습니다.


## 계측된 코드의 바이너리 생성 바이너리 생성은 소스 코드를 컴파일하는 과정입니다. 벤치마킹을 위해서는 소스 코드 컴파일 전에 코드를 계측해야 합니다. 이 계측은 프로그래머/사용자에게 투명하게 이루어집니다. 따라서 프로그래머가 제공한 구성 파일을 파싱하여 구성 파일에 명시된 대로 코드를 주입합니다.

### 입력 수신 바이너리 생성 파이프라인은 두 가지 입력을 처리합니다: * 구성 벤치마킹 파일 * 벤치마킹 대상 소스 코드 간단히 말해, 구성 파일은 다음을 설명합니다: * 벤치마킹 대상(소스) * 벤치마킹 위치 * 벤치마킹 유형 * 선택적으로 비교 대상 기준선(기준선 소스)

### 파싱 및 검증 입력 수신 후 **섀도우 빌더**는 구성 파일을 파싱합니다. 구성 파일로부터 섀도우 빌더는 다음을 확보합니다: * 수행할 다양한 벤치마킹 작업. * 대상 플랫폼. 파싱 외에도 섀도우 빌더는 구성 파일 내 기능 및 일관성 검증과 TFA 모듈에 등록된 다양한 TFA 플러그인 검증을 담당합니다.

### TFA 실행 구문 분석 및 TFA 모듈 기능에 대한 검사가 완료되면, 섀도우 빌더는 구성을 소스 코드로 변환하는 작업을 담당합니다. 변환된 소스 코드 역시 TFA 모듈과의 협력을 통해 생성됩니다. TFA의 세부 단계는 여기에서 확인할 수 있습니다. 이 단계가 완료되면 TFA는 컴파일 준비가 된 새로운 변조된 소스 코드를 생성합니다. 패치된 소스 코드 외에도 TFA는 벤치마크를 실행할 스크립트를 생성합니다. ### 컴파일 컴파일은 대상 벤치마크 유형과 플랫폼별로 수행됩니다. 실행되는 벤치마크 유형에 따라 벤치마크 세션당 하나 이상의 바이너리가 생성됩니다. 생성되는 바이너리 수는 사용자가 섀도우 빌더에 제공하는 플러그인에 따라 달라집니다. 섀도우 빌더는 플러그인의 기능을 가져오고 개발자에게 요청하여 이를 매칭한 후, 매칭 결과에 따라 소프트웨어를 생성합니다. ## 벤치마킹 시작 단계 섀도우 빌더는 다음과 같이 실행됩니다: * 소프트웨어 소스가 섀도우 빌더로 전달됩니다.
 * 소스 코드가 전달되며, /*Benchmarking::XX::YY*/ (태그)를 포함하는 주석이 있는 코드 라인은 추적 프레임워크 추상화(TFA) 모듈로 전달됩니다. 주석 사용이 권장됨 → 포함 파일 불필요. * TFA에 Benchmarking::XX::YY 기능을 등록한 모든 플러그인은 소스 코드에 추가될 코드 조각을 반환합니다.
 * 모든 파싱이 완료되면 섀도우 빌더는 플러그인 또는 사용자 설정에 의해 요청된 모든 플랫폼을 대상으로 컴파일합니다. --- ## 출처: `_docs/concepts/benchmarking/concept/index.md` <a id="source-docs-concepts-benchmarking-concept-index-md"></a> ## 목차 * [벤치마킹 소개](#벤치마킹-소개) * [당사의 벤치마킹 도구 프레임워크](#당사-벤치마킹-도구-프레임워크)
* [추적 프레임워크 추상화](#trace-framework-abstraction) * [섀도우 빌더](#shadow-builder) * [계측된 코드용 바이너리 생성](#binary-generation-for-instrumented-code) * [입력 수신](#receiving-inputs) * [구문 분석 및 검사](#parse-and-check)
  * [TFA 실행](#tfa-execution) * [컴파일](#compilation) * [벤치마킹 시작 단계](#step-to-start-benchmarking)



## 벤치마킹 소개 스크리블에서 최종 실행 바이너리까지 작동하고 안정적인 애플리케이션을 개발하는 것은 길고 어려운 작업입니다. 이 과정에서 개발자는 안정성 문제, 성능 문제에 직면할 수 있습니다. 이러한 문제 외에도 특정 QoS(서비스 품질)를 정량화하기 어려울 수 있습니다. 적절한 도구 없이 이러한 문제를 해결하는 것은 좌절감을 주고 지루한 작업이 되어 개발자 효율성을 저하시킬 수 있습니다. 적합한 벤치마킹 도구는 이러한 개발 장애물을 극복하고 개발 시간을 단축할 수 있습니다. 관심 가질 만한 다양한 KPI(핵심 성과 지표)가 존재합니다. 이 마이크로-ROS 프레임워크 내에서 개발자는 KPI를 자유롭게 선택할 수 있습니다. 이를 통해 벤치마킹 도구는 유연성을 유지하며 커뮤니티가 지속적으로 다양한 KPI 지원을 추가할 수 있도록 합니다.

해결하고자 하는 문제점: * 기존 벤치마킹 도구는 다양하지만 각기 다른 KPI를 대상으로 함 * 다양한 플랫폼(Linux/Nuttx/베어메탈 등) 지원 필요 * 플랫폼별 벤치마킹 도구 개발에 투입할 시간/자원 부족 * 코드 오버헤드 방지: 코드 가독성 유지 * 실행 오버헤드 방지: 벤치마킹 시 실행 속도 저하 방지

## 우리의 벤치마킹 도구 프레임워크 개발 중인 벤치마킹 도구는 개발자가 자체 벤치마킹 도구를 생성할 수 있는 프레임워크를 제공합니다. 개발자가 벤치마킹하고자 하는 각 부분은 제공된 프레임워크를 사용하여 플러그인으로 추가될 수 있습니다. 이러한 방식으로 플러그인을 공유할 수 있으며, 이는 재사용성을 최대한 향상시킵니다. ## 추적 프레임워크 추상화

섀도우 빌더는 애플리케이션의 주석만 파싱하여 추적 프레임워크 추상화(TFA) 코어로 전달합니다. TFA 코어는 사용 가능한 모든 플러그인, 각 플러그인의 기능 및 플랫폼 타깃을 인식합니다. 프로세스는 다음과 같습니다: * Benchmarking::XX::YY 기능이 포함된 라인을 사용 가능한 모든 플러그인과 대조합니다.
 * 해당 기능을 처리할 수 있는 플러그인은 코드 조각으로 응답하며, 이 코드 조각은 실제 코드로 대체됩니다. * 이후 출력 파일은 플랫폼 유형 및 벤치마킹 유형에 해당하는 폴더에 추가됩니다. 이 벤치마킹 도구의 핵심은 범용성입니다. 반면 플러그인은 특정 플랫폼 벤치마킹에 필요한 구체적인 구현을 제공합니다. 각 플러그인은 파서가 요청하는 정보를 제공합니다:

 * 지원 플랫폼 목록 제공 * 처리 가능한 함수 목록 제공 * 벤치마킹을 위해 추가될 코드 스니펫 제공 * 패치 및/또는 패치 코드 목록 제공 * 선택적으로 벤치마크 실행을 위한 종료 스크립트 제공 ## 섀도우 빌더 이 섹션에서는 섀도우 빌더(SB)와 관련된 개념을 소개합니다.

섀도우 빌더는 벤치마킹 대상 코드를 투명하게 계측하는 도구입니다. 이 도구는 나중에 일반 코드처럼 컴파일될 "계측된 코드"를 출력할 수 있습니다. 다음 단계는 섀도우 빌더 프로세스 흐름을 설명합니다: * 사용자로부터 구성 파일(벤치마킹 구성 파일)을 가져옵니다. * 적절한 소스 파일을 가져옵니다.
 * 추적 프레임워크 추상화 구성 파일 실행. * 코드 주입에 필요한 소스 파일 파싱. * 다양한 플랫폼용 대상 바이너리 컴파일. * 수행되는 벤치마크 유형에 따라 필요한 경우, 다른 대상 바이너리 컴파일. SB(섀도우 빌더)는 사용자에게 최대한 투명하게 작동하도록 설계되었습니다. 벤치마킹이 활성화되지 않은 경우, 해당 프로세스는 우회되어야 합니다. 적절한 소스 획득

SB는 벤치마킹 대상 소스 코드의 경로/Git 저장소를 확보하는 역할을 담당합니다. 벤치마킹. 소스 코드는 사용자가 벤치마킹 구성 파일에서 지정합니다. 코드 삽입 코드 삽입을 위해 이를 허용하는 몇 가지 도구가 있습니다. CLang AST 도구를 사용하면 일부 코드를 삽입할 수 있습니다.


## 계측된 코드의 바이너리 생성 바이너리 생성은 소스 코드를 컴파일하는 과정입니다. 벤치마킹을 위해 소스 코드를 컴파일하기 전에 코드를 계측해야 합니다. 이 계측은 프로그래머/사용자에게 투명하게 이루어집니다. 따라서 프로그래머가 제공한 구성 파일을 파싱하고, 구성 파일에 명시된 대로 코드를 삽입합니다.

### 입력 수신 바이너리 생성 파이프라인은 두 가지 입력을 처리합니다: * 구성 벤치마킹 파일 * 벤치마킹 대상 소스 코드 간단히 말해, 구성 파일은 다음을 설명합니다: * 벤치마킹 대상(소스) * 벤치마킹 위치 * 벤치마킹 유형 * 선택적으로 비교 대상 기준선(기준선 소스)

### 파싱 및 검증 입력 수신 후 **섀도우 빌더**는 구성 파일을 파싱합니다. 구성 파일로부터 섀도우 빌더는 다음을 확보합니다: * 수행할 다양한 벤치마킹 작업. * 대상 플랫폼. 파싱 외에도 섀도우 빌더는 구성 파일 내 기능 및 일관성 검사와 TFA 모듈에 등록된 다양한 TFA 플러그인 검증을 담당합니다.

### TFA 실행 구문 분석 및 TFA 모듈 기능에 대한 검사가 완료되면, 섀도우 빌더는 구성을 소스 코드로 변환하는 작업을 담당합니다. 변환된 소스 코드 역시 TFA 모듈과의 협력을 통해 생성됩니다. TFA의 세부 단계는 여기에서 확인할 수 있습니다. 이 단계가 완료되면 TFA는 컴파일 준비가 된 새로운 변조된 소스 코드를 생성합니다. 패치된 소스 코드 외에도 TFA는 벤치마크를 실행할 스크립트를 생성합니다. ### 컴파일 대상 벤치마크 유형과 플랫폼별로 컴파일이 수행됩니다. 실행되는 벤치마크 유형에 따라 벤치마크 세션당 하나 이상의 바이너리가 생성됩니다. 생성되는 바이너리 수는 사용자가 섀도우 빌더에 제공하는 플러그인에 따라 달라집니다. 섀도우 빌더는 플러그인의 기능을 확인하고 개발자에게 요청하여 이를 매칭한 후, 매칭 결과에 따라 소프트웨어를 생성합니다. ## 벤치마킹 시작 단계 섀도우 빌더는 다음과 같이 실행됩니다: * 소프트웨어 소스가 섀도우 빌더로 전달됩니다.
 * 소스 코드가 전달되며, /*Benchmarking::XX::YY*/ (태그)를 포함하는 주석이 있는 코드 라인은 추적 프레임워크 추상화(TFA) 모듈로 전달됩니다. 주석 사용이 권장됩니다 → 포함 파일(include)이 필요하지 않음. * TFA에 Benchmarking::XX::YY 기능을 등록한 모든 플러그인은 소스 코드에 추가될 코드 조각을 반환합니다.
 * 모든 파싱이 완료되면 섀도우 빌더는 플러그인 또는 사용자 설정에 의해 요청된 모든 플랫폼에 대해 컴파일합니다. --- ## 출처: `_docs/concepts/benchmarking/memo_prof/index.md` <a id="source-docs-concepts-benchmarking-memo-prof-index-md"></a> ## 개요

이 섹션에서는 마이크로-ROS 클라이언트 라이브러리의 메모리 사용량을 분석합니다. 프로파일링을 수행하기 위해, 알려진 크기의 ROS 토픽에 대한 퍼블리셔/서브스크라이버 애플리케이션과 클라이언트/서버 유형 애플리케이션 모두를 고려했습니다. 메시지 크기, 엔티티 수, 히스토리 크기, 전송 프로토콜과 같은 핵심 매개변수를 조정하여 여러 가지 다른 구성을 탐색했습니다. 또한 다양한 유형의 메모리를 구분했습니다. 실제로 [XRCE-DDS](https://micro-xrce-dds.docs.eprosima.com/en/latest/) 클라이언트는 완전히 동적 메모리를 사용하지 않는 반면, 마이크로-ROS 클라이언트는 정적 메모리와 동적 메모리를 모두 사용합니다. 따라서 마이크로-ROS가 각 유형의 메모리를 얼마나 소비하는지, 특히 라이브러리 동작의 실시간성과 결정론과 관련하여 평가하는 것이 중요합니다.

우리는 [FreeRTOS](https://www.freertos.org/index.md)에서 실행되는 애플리케이션과 [ESP32](https://www.espressif.com/en/products/socs/esp32) 보드(WiFi를 통해 UDP로 Linux 머신에서 실행되는 micro-ROS 에이전트에 연결됨)에서 실행되는 애플리케이션에 대한 측정을 수행했습니다.

결과에 따르면, 클라이언트의 총 메모리 소비량은 XRCE-DDS 미들웨어보다 높습니다. 적어도 라이브러리의 기본 구성 매개변수를 사용할 때는 그렇습니다. 그러나 특정 애플리케이션의 요구에 맞게 일부 매개변수(예: MTU 또는 히스토리 크기)를 적절히 조정함으로써, 대상 장치의 제한된 자원에 훨씬 더 잘 맞도록 총 메모리 소비량을 튜닝할 수 있습니다. ## 목차 * [마이크로-ROS 스택의 메모리 관리](#memory-management-of-the-micro-ros-stack) * [XRCE-DDS 라이브러리의 메모리 관리](#memory-management-of-the-xrce-dds-library) * [RMW의 메모리 관리](#memory-management-of-the-rmw)
  * [추가 고려 사항](#additional-considerations) * [메모리 버퍼](#memory-buffers) * [측정 및 방법론](#measurements-and-methodology) * [테스트 시나리오](#tested-scenarios) * [결과](#results)
    * [Pub-Sub 애플리케이션](#pub-sub-apps) * [클라이언트-서버 애플리케이션](#client-server-apps) * [결론](#conclusions)


## micro-ROS 스택의 메모리 관리 micro-ROS의 [대상 장치](https://micro-ros.github.io/_docs/overview/hardware/)는 자원이 매우 제한된 저~중급 마이크로컨트롤러 유닛(MCU)이므로, 사용자가 애플리케이션에 최적의 라이브러리 구성과 실행에 적합한 플랫폼을 선택할 수 있도록 클라이언트의 메모리 소비량을 평가하는 것이 중요합니다.

이러한 장치의 제한된 메모리 자원을 고려할 때, 메모리 사용량을 조작하고 조정할 수 있는 가능성은 핵심입니다. micro-ROS는 가능한 한 동적 메모리 대신 정적 메모리 사용을 우선시하고, 컴파일 시점에 메모리 자원과 관련된 일련의 구성 매개변수를 조정하여 애플리케이션의 메모리 사용량을 최적화함으로써 메모리 관리 문제를 해결하려 합니다.

이러한 튜닝은 두 가지 서로 다른 메모리 리소스에 작용하여 수행할 수 있습니다: [Micro XRCE-DDS](https://github.com/eProsima/Micro-XRCE-DDS) 라이브러리가 처리하는 리소스와 그 RMW 구현체인 [rmw-microxrcedds](https://github.com/micro-ROS/rmw-microxrcedds)가 처리하는 리소스입니다. 이 섹션에서는 이러한 리소스를 제어하는 가장 중요한 매개변수와 각 계층에 작용하여 마이크로-ROS 메모리 소비를 조작하는 방법을 요약합니다. ### XRCE-DDS 라이브러리의 메모리 관리

Micro XRCE-DDS 클라이언트는 완전히 동적이며 정적 메모리를 사용하지 않습니다. 이는 모든 메모리 사용량이 실행 중 스택이 성장하는 방식에만 의존함을 의미합니다. 이 리소스 처리는 컴파일 전 구성 단계에서 이루어지며, 사용자는 여러 프로파일을 활성화 또는 비활성화하여 실행 파일 크기를 고정할 수 있습니다. 이러한 프로파일의 일환으로 사용자는 최대 전송 단위(MTU)와 통신 스트림을 조작하여 메모리 증가를 제어할 수 있습니다.

MTU는 통신 스트림의 크기를 조절하며, 전송 계층의 내부 버퍼(메시지 교환 시 기록 및 저장되는 메모리 블록)의 사용 가능한 메모리와 일치합니다. micro-ROS에서 사용 가능한 모든 전송 계층에 대해 기본값은 512바이트입니다. 통신 스트림은 클라이언트와 에이전트 간 메시지 흐름 방식을 조절하며, 순차적인 정보 흐름을 나타냅니다. 스트림에는 두 가지 유형이 있습니다: 최선 노력(Best-Effort) 스트림과 신뢰성 있는(Reliable) 스트림입니다. 최선 노력 스트림은 단일 데이터 버퍼로 구성되며, 한 번에 하나의 메시지만 처리됩니다. 이 때문에 최선 노력 스트림은 전송 계층에 신뢰성을 맡긴 채 데이터를 송수신하며, 이러한 스트림이 처리하는 메시지 크기는 사용된 전송 계층에서 정의된 MTU보다 작거나 같아야 합니다. 반면, Reliable 스트림은 전송 계층과 무관하게 무손실 통신을 가능하게 하며, MTU보다 긴 메시지를 송수신하기 위해 메시지 분할을 허용합니다. 분할된 메시지를 저장할 수 있는 청크 수는 XRCE-DDS 히스토리(이하 XRCE_history)에 의해 제어되며, 기본값은 4슬롯입니다.

### RMW의 메모리 관리 `rmw-microxrcedds` 계층은 노드, 퍼블리셔, 서브스크라이버 등 ROS 클라이언트 지원 라이브러리와 관련된 리소스 할당을 위해 정적 메모리를 사용합니다. 이 메모리는 특정 애플리케이션의 모든 엔터티가 공유하는 정적 메모리 풀로 관리됩니다. 풀의 수는 RMW 메시지 히스토리(본문에서는 RMW_history로도 표기)에 의해 고정되며, 이 매개변수는 사용자가 CMake 플래그로 선택합니다. 이러한 RMW 풀은 사용자가 읽기 전에 구독 메시지를 보관하는 메시지 큐 역할을 합니다. 각 풀의 크기는 MTU × XRCE_history로 결정됩니다. ### 추가 고려 사항 지금쯤이면 클라이언트-에이전트 통신에 관여하는 두 개의 히스토리 버퍼가 본질적으로 다르다는 점이 분명해졌을 것이다: XRCE-DDS 히스토리는 신뢰성 있는 통신이 구현될 경우 조각난 메시지 청크를 저장하는 데 사용된다. 이를 통해 신뢰성 모드에서는 헤더용으로 예약된 메모리를 제외한 MTU × XRCE_history 크기까지 메시지를 송수신할 수 있는 반면, 최선 노력 통신 스트림은 MTU 이하 크기의 메시지만 교환할 수 있습니다. 반면 RMW의 히스토리는 구독 및 서비스 시 데이터 수신을 제어합니다. 이 경우 RMW 내부에 버퍼 링이 생성되어 XRCE-DDS 라이브러리로부터 수신된 데이터를 저장하고 완충합니다. 동시에 사용자 인터페이스에서 수신된 `take` 호출을 처리하여 데이터를 가져온 후 상위 계층을 거쳐 최종적으로 사용자 애플리케이션까지 전송합니다. 이는 구독 시 XRCE-DDS 라이브러리와 RMW의 서로 다른 동작 방식을 반영합니다. XRCE-DDS 라이브러리는 콜백 방식으로 작동하여 새 메시지 수신 시 사용자에게 경고하는 반면, RMW는 폴링 방식으로 작동합니다: 이 라이브러리는 사용자가 구독한 토픽을 수신 대기하며 명시적으로 요청될 때까지 데이터를 저장합니다. 마지막으로, 퍼블리케이션과 구독이 소비하는 메모리의 성격과 크기는 상당히 다릅니다. 그 이유는 구독자가 데이터를 사전 할당된 메모리 버퍼에 비축하기 때문입니다. 이를 통해 슬롯(그 수는 XRCE-DDS와 RMW 히스토리에 따라 다름)에 메시지를 저장할 수 있으며, 이는 두 가지 목적을 가집니다: 신뢰성 있는 통신이 선택된 경우(XRCE-DDS 히스토리에 반영됨) 데이터 손실을 방지하고, 다양한 계층 간 유연한 메시지 처리 및 비동기 메시지 전달을 허용하기 위함(RMW_history에 반영됨)입니다. 서비스의 경우 구독자와 매우 유사합니다. 요청/응답 패턴에서는 관련된 모든 엔터티가 데이터를 수신하고 저장하며 처리해야 하기 때문입니다. 아래 다이어그램은 본 절에서 논의된 모든 기능을 그래픽으로 설명합니다. <img alt="Pub/sub diagram" src="_docs/concepts/benchmarking/memo_prof/pubsub_diagram.png" class="center">
<p align="center"> 그림 1: 퍼블리셔 및 구독자 애플리케이션에서 micro-ROS 클라이언트 라이브러리의 메모리 관리 설명 다이어그램. </p> <img alt="서비스 다이어그램" src="_docs/concepts/benchmarking/memo_prof/services_diagram.png" class="center" width="50%">

<p align="center"> 그림 2: 서비스 애플리케이션에서 micro-ROS 클라이언트 라이브러리의 메모리 관리 설명도. </p> ### 메모리 버퍼 MCU에서 실행되는 micro-ROS 애플리케이션이 소비하는 총 메모리는 각기 다른 기능에 할당된 메모리 영역(정적 메모리, 스택, 동적 메모리)의 직접 합계로 계산할 수 있습니다.

본 절에서는 마이크로-ROS 라이브러리가 사용하는 이러한 메모리 유형에 대해 간략히 설명합니다. *정적 메모리* 정적 메모리는 .bss 및 .data 섹션에 할당된 메모리(엔티티 수가 0이 아닌 경우)와 마이크로-ROS 애플리케이션이 실행되지 않을 때 동일한 섹션에 할당된 메모리(즉, RTOS 및 라이브러리의 나머지 구성 요소가 차지하는 메모리) 간의 차이로 계산됩니다. 이를 통해 마이크로-ROS가 실제로 점유하는 메모리와 그렇지 않은 메모리를 구분할 수 있습니다. 플래시 메모리(.text 섹션)에 저장된 상수 데이터나 직렬화 전 데이터를 저장하는 데이터 버퍼는 사용자 애플리케이션에 특화되어 마이크로-ROS 클라이언트 작업과 직접 관련이 없으므로 고려 대상에서 제외합니다. *스택 메모리*

스택은 프로그램 실행 시 사용되는 함수들이 소비하는 메모리입니다. 정적 메모리는 컴파일된 바이너리 객체만 분석해도 간단히 계산할 수 있지만, 스택은 애플리케이션 실행 전에는 정확히 알 수 없는 메모리 영역입니다. 프로그램 실행 중 소비되는 스택은 FreeRTOS가 제공하는 메모리 관리 기능 중 하나인 uxTaskGetStackHighWaterMark() 함수를 통해 측정됩니다. 이 함수는 프로그램이 스택을 최대치로 사용했을 때 남아 있는 스택의 양을 반환합니다. 알려진 총 사용 가능한 스택에서 이 수치를 빼면 애플리케이션이 사용한 스택 피크를 구할 수 있습니다. *동적 메모리* 이 메모리는 C 언어의 `calloc()` 및 `malloc()` 함수 호출을 통해 프로그램이 동적으로 할당한 것입니다. 이를 측정하기 위해 ROS 2 스택이 사용자에게 맞춤형 메모리 할당기를 제공할 수 있도록 허용하므로, 동적 메모리 관련 함수 호출을 가로챘습니다.

마이크로-ROS의 동적 메모리 사용을 더 잘 이해하려면 마이크로-ROS 운영의 두 단계를 구분해야 합니다. 첫 번째 단계에서는 마이크로-ROS가 초기화되고, 노드, 퍼블리셔, 서브스크라이버와 같은 엔티티가 생성되며, 모든 레이어가 운영 준비를 마칩니다. 이는 구성 단계이며 마이크로-ROS는 여기서 모든 동적 메모리 작업을 수행합니다. 두 번째는 운영 단계로, 실제 퍼블리케이션, 서브스크립션 및 기타 모든 노드 작업이 발생하는 단계입니다. 이 단계에서는 마이크로-ROS 스택 전체에서 동적 메모리가 사용되지 않습니다. 선택적 세 번째 단계가 존재하며, 이 단계에서는 마이크로-ROS 레이어가 종료 및 정리되고 구성 단계에서 할당된 모든 동적 메모리가 해제됩니다. ## 측정 및 방법론 ### 테스트 시나리오 본 절에서는 마이크로-ROS 라이브러리의 메모리 사용량을 종합적으로 검토하기 위해 실험 설정과 탐구된 다양한 시나리오를 요약합니다.

일반적으로 우리의 목표는 총 메모리 및 그 독립적 구성 요소(정적, 스택, 동적)가 다음 요소에 의해 어떻게 영향을 받는지를 평가하는 것입니다: * 토픽 크기(가변 크기 바이트 배열 형태) * ROS 엔터티 수(게시/구독 및 서비스/클라이언트) * 사용된 통신 스트림 유형(신뢰성 vs 최선 노력)

첫 번째 설정에서는 가변 크기 토픽을 게시하거나 구독하는 애플리케이션의 총 메모리 소비량을 분석합니다. 이때 엔티티(게시자 및 구독자) 수를 스윕하며 UDP 전송을 사용합니다. 신뢰성(Reliable)과 최선 노력(Best-Effort)이라는 두 가지 QoS 유형에 대해 수행합니다. 두 번째 설정에서는 총 메모리가 정적, 스택, 동적 메모리 간에 어떻게 분배되는지 보고합니다.

세 번째 측정 세트는 고정된 메시지 크기로 단일 구독에 대해 수행되었으며, RMW 계층의 히스토리 캐시를 1에서 20개 단위로 변경했습니다. 네 번째 측정 세트에서는 클라이언트/서비스 패턴에 따라 동작하는 요청자/응답자 애플리케이션의 메모리 사용량을 측정합니다.

### 결과 본 절에서는 상기 실험 구성에 대한 메모리 프로파일링 방법론을 상세히 설명하고, 각 구성별 측정 결과를 제시합니다. 측정은 엔티티 수(퍼블리셔/서브스크라이버: 1~15개, 클라이언트/서버: 1~10개)를 가변적으로 설정하여 마이크로-ROS 클라이언트 애플리케이션에서 수행되었습니다.

테스트된 모든 애플리케이션은 FreeRTOS 기반 ESP32 보드에서 실행됩니다. 보드는 UDP 전송(WiFi)을 통해 Linux 머신에서 실행 중인 마이크로-ROS 에이전트에 연결됩니다. 앞서 설명한 바와 같이 FreeRTOS 선택은 애플리케이션 사용 메모리 계산을 용이하게 하는 메모리 관리 기능 때문입니다.

가능한 한 현실적인 평가를 제공하기 위해 다음 매개변수들은 기본값으로 설정되었습니다: 모든 테스트 사례에서 XML을 통한 생성 모드가 사용되었으며, MTU는 기본값인 512바이트로 고정되었고, XRCE-DDS 라이브러리의 히스토리 캐시는 항상 4로 고정되었습니다. #### Pub-Sub 애플리케이션 *엔티티 수와 메시지 크기에 따른 총 메모리 사용량*

본 절에서는 UDP 전송, 8개의 공유 슬롯으로 구성된 RMW 히스토리, 512바이트 MTU, 4슬롯 XRCE-DDS 히스토리를 사용하여, 최선 노력 모드와 신뢰성 모드에서 발행자 또는 구독자 애플리케이션이 사용한 총 메모리를 보고합니다. 총 메모리 소비량은 엔티티 수와 메시지 크기에 따른 함수로 보고됩니다.

게시자/구독자 수는 변경되었으며, 이는 주제 수 변경과 동일합니다. 설정 설계상 각 게시자/구독자를 단일 주제와만 연관시키기 때문입니다. 원칙적으로, 신뢰성 모드에서는 생성된 버퍼를 MTU × XRCE_history 크기까지의 메시지로 채울 수 있는 반면, 최선 노력 모드에서는 MTU 크기까지의 메시지로 채울 수 있습니다. 이는 각각 기본값으로 선택된 값을 기준으로 512 B × 4 = 2048 B와 512 B에 해당합니다. 이는 Best-Effort 통신 스트림에서는 조각화가 없기 때문이며, 반면 Reliable 모드로 통신하는 엔티티는 XRCE_history와 동일한 수의 조각으로 적절히 분할된 메시지를 MTU 크기로 송수신할 수 있습니다. 그러나 표 1에서 볼 수 있듯이, 신뢰성 있는 엔티티의 경우 메시지 크기는 0~1366B 사이이며, 최선을 다하는 모드 엔티티의 경우 0~490B 사이입니다. 이는 두 경우 모두 헤더에 의해 일부 메모리가 소모되고, 무엇보다도 신뢰성 있는 경우 하트비트 및 확인 응답(acknack)과 같은 확인 메시지에 의해 일부가 소모되기 때문입니다.

<img alt="Total memory" src="_docs/concepts/benchmarking/memo_prof/overall.png" class="center">

<p align="center"> 그림 3: UDP 전송, 기본 매개변수를 사용한 마이크로-ROS 게시자 및 구독 애플리케이션의 총 메모리 사용량(바이트 단위). 신뢰성 모드와 최선 모드 모두에서 엔티티 수(x축)와 메시지 크기(범례)에 따른 변화. </p> 이 그래프들을 통해 몇 가지 결론을 도출하고 추세를 관찰할 수 있습니다.

우선 총 메모리 소비량은 엔티티 수에 따라 변동하지만 메시지 크기에 따라 변하지 않는다는 점이 분명해 보입니다. 그 이유는 탐색된 모든 메시지 크기가 컴파일 시점에 프로그램이 사전 할당한 정적 버퍼에 모두 들어맞기 때문입니다. 따라서 토픽과 확인 메시지(신뢰성 모드에서), 오버헤드가 차지하는 총 공간이 버퍼 크기를 초과할 때만 메모리 소비량이 메시지 크기에 따라 변동할 것으로 예상됩니다. 반면 엔티티 수를 증가시킬 경우 전체 메모리는 증가합니다(아래에서 보듯이 이는 스택은 영향을 받지 않으면서 정적 메모리와 동적 메모리 모두의 증가에 기인합니다). 간단한 계산을 통해 위 실험 조건에서 하나의 퍼블리셔가 차지하는 메모리는 약 400바이트인 반면, 하나의 서브스크라이버가 차지하는 메모리는 약 500바이트임을 알 수 있습니다.
구독자가 RMW_history를 보유함에도 불구하고 이 두 엔티티의 메모리 사용량에 실질적인 차이가 거의 없는 것은, RMW의 메모리 풀이 특정 애플리케이션에 참여하는 모든 엔티티 간에 공유되기 때문이며, 따라서 상위 계층에서 메시지를 가져오기 전에 저장해야 하는 구독자와 발행자 간에 차이를 두지 않기 때문입니다.

마지막으로, 본 절 초반에 설명한 바와 같이 두 모드에서 전송 가능한 메시지 크기의 상한을 제외하면, Reliable 모드와 Best-Effort 모드 간에 실질적인 차이는 없습니다. *메모리 세부 분석* 해당 애플리케이션이 소비하는 메모리 유형을 더 잘 이해하기 위해, 아래에서는 동일한 데이터를 구성 요소별 메모리 청크로 세분화하여 제공합니다. 단일 메시지 크기(1B)에 대해서만 분석합니다. 앞서 확인한 바와 같이 이 값은 총 메모리 사용량(및 구성 요소)에 영향을 미치지 않기 때문입니다. <img alt="메모리 분할" src="_docs/concepts/benchmarking/memo_prof/3mems.png" class="center"> <p align="center">
   그림 4: UDP 전송, 기본 매개변수, 고정 메시지 크기를 사용한 마이크로-ROS 게시자 및 구독 애플리케이션의 정적, 스택, 동적 메모리 사용량(바이트 단위)을 엔티티 수의 함수로 나타낸 것(최선 노력 모드 및 신뢰성 모드 모두). </p> 이 결과에서 정적 메모리와 동적 메모리는 엔티티 수에 따라 변화하는 반면, 스택 메모리는 일정함을 확인할 수 있습니다. *RMW 기록의 역할*

이 시나리오에서는 단일 구독자 애플리케이션과 고정 크기 메시지(위에서 확인한 바와 같이 사전 할당된 버퍼 크기보다 작을 경우 메모리 소비에 영향을 미치지 않음)를 사용하며, UDP 전송과 XRCE-DDS 히스토리 4, Reliable 통신을 적용하여 RMW 히스토리가 1에서 20 단위 사이일 때 RMW 히스토리에 따른 정적 메모리 소비량을 측정했습니다. 결과는 아래 그래프에 요약되어 있습니다: <img alt="RMW history" src="_docs/concepts/benchmarking/memo_prof/rmw_history.png" class="center" width="60%"> <p align="center"> 그림 5: UDP 전송, 기본 매개변수 및 고정 메시지 크기를 사용하는 신뢰성 모드에서 마이크로-ROS 구독 애플리케이션의 정적 메모리 사용량(바이트 단위)을 RMW 기록에 따른 함수로 나타낸 것이다. </p>

이 그래프에서 볼 수 있듯이, 애플리케이션에 RMW 메모리를 단위당 추가할 때마다 총 정적 메모리 사용량은 MTU × RMW_history(사용된 매개변수 기준 512 × 4에 해당)만큼 변화합니다.

#### 클라이언트-서버 애플리케이션 이제 마지막 시나리오를 살펴보겠습니다. 퍼블리시/서브스크라이브(pub/sub) 애플리케이션과는 달리, 엔터티 간 통신이 요청/응답 패턴을 따르는 서비스라는 다른 종류의 ROS 객체를 고려합니다. 서버와 클라이언트 수가 1부터 10까지 변화하는 경우의 메모리 소비 결과를 아래에서 확인할 수 있습니다. 개별 구성 요소(정적, 스택, 동적)와 총 메모리의 행동 양상과 값을 모두 보고합니다.

<img alt="Services" src="_docs/concepts/benchmarking/memo_prof/servcli.png" class="center"> <p align="center"> 그림 6: 서버 및 클라이언트 수에 따른 마이크로-ROS 서비스 및 클라이언트 애플리케이션의 총 메모리 사용량(바이트 단위). </p>

게시자 및 구독자의 경우와 마찬가지로, 단일 엔티티가 소비하는 총 메모리를 계산할 수 있습니다. 이 계산 결과, 하나의 서버 또는 하나의 클라이언트가 차지하는 메모리는 약 300바이트 수준입니다. 이 그림에서 볼 수 있듯이, 서버가 차지하는 메모리와 클라이언트가 차지하는 메모리는 사실상 동일하며, 게시자 또는 구독자 애플리케이션이 차지하는 메모리와 동일한 규모입니다.

### 결론 요약하면 다음과 같습니다: * 메시지 크기와 오버헤드의 합이 컴파일 시점에 사전 할당된 정적 버퍼에 수용될 수 있는 한, 메모리 소비량은 메시지 크기에 따라 변하지 않습니다. * 정적 메모리와 동적 메모리는 엔티티 수에 따라 변하는 반면, 스택은 일정하게 유지됩니다.
* 기본 구성 매개변수를 사용하며 UDP 전송을 사용하는 단일 퍼블리셔/서브스크라이버 애플리케이션은 총 약 400-500바이트의 메모리를 소비합니다. * 기본 구성 매개변수를 사용하며 UDP 전송을 사용하는 단일 클라이언트/서버 애플리케이션은 총 약 300바이트의 메모리를 소비하며, 이는 퍼블리셔/서브스크라이버 애플리케이션과 동일한 수준의 규모입니다. * 단일 구독의 경우, 사용되는 총 정적 메모리는 애플리케이션에 추가되는 RMW 히스토리 단위당 MTU × XRCE_history 값만큼 변동합니다. <style type="text/css"> .center { display: block; margin-left: auto; margin-right: auto; } </style> --- ## 출처: `_docs/concepts/benchmarking/results/index.md`
<a id="source-docs-concepts-benchmarking-results-index-md"></a> ## 목차 * [추적에서 벤치마킹으로](#from-tracing-to-benchmarking) * [통신 결과](#communication-results) * [실시간 결과](#real-time-results)
* [실행 횟수](#executions) * [함수 호출 통계](#function-call-statistics) * [정적 메모리 사용량](#static-memory-usage) * [동적 메모리 사용량](#dynamic-memory-usage) * [전력 소비량](#power-consumption) ## 추적에서 벤치마킹으로

저수준 RTOS(NuttX)는 메모리, 실행 등 다양한 범주의 벤치마킹 측정값을 제공하는 특정 방식으로 계측되었습니다. 수집된 데이터는 [공통 추적 형식](https://diamon.org/ctf/)을 따릅니다. 원시 추적 데이터는 이후 [Babeltrace API](https://babeltrace.org/) 추적 조작 툴킷을 사용하여 처리됩니다. 데이터 해석은 사용자에게 달려 있습니다. 벤치마크 결과 및 방법론에 대한 자세한 내용은 다음 [문서](https://github.com/micro-ROS/benchmarking-results/blob/master/pdfs/OFERA_55_D5.4_Micro-ROS_benchmarks_-_Final.pdf)에서 다루고 있습니다.

해석이 이루어진 결과는 [benchmarking_results](https://github.com/micro-ROS/benchmarking-results/tree/master/aug2020) 저장소에서 확인할 수 있습니다. ### 일반 방법론 마이크로-ROS가 설정된 통신 매체 유형에 따라 방법론이 달라질 수 있습니다. 물론, 이러한 차이는 작으며 전송 프로토콜과 관련이 있습니다. 벤치마킹을 수행하기 위해 실시간 운영체제(RTOS)와 애플리케이션에 계측 장치를 설치했습니다. 평가 대상에 따라 RTOS의 서로 다른 부분에 다양한 프로브를 배치했습니다. 데이터 형식은 공통 추적 형식(Common Trace Format, V1.8)이라는 표준을 따릅니다. 이 표준은 마이크로-ROS 프로젝트에서 NuttX와 함께 지원하는 실시간 운영체제 중 하나인 Zephyr에서도 사용됩니다.
사실 CTF 코어는 Zephyr에서 NuttX로 포팅되었습니다. 데이터는 babeltrace와 babeltrace 파이썬 API를 통해 수집 및 분석됩니다. 모든 이벤트는 내부 자유 실행 타이머(NuttX가 Olimex STM32-E407 TIM2에서 실행되는 경우)를 사용하여 시간 측정이 이루어집니다. 이를 통해 장치는 약 10나노초 해상도의 타이머 클럭을 제공할 수 있습니다. 현재 해상도 설정은 100나노초로, 100Mbps에서 최소 이더넷 프레임(64바이트)을 고려할 때 통신 성능 평가에 충분합니다.
각 측정은 앞서 언급한 자유 실행 타이머를 사용하여 타임스탬프가 찍힙니다. 소프트웨어 구성은 변경될 가능성이 있습니다. 그러나 소프트웨어 역할은 동일하게 유지될 예정입니다: * PC에서 실행되는 에이전트 * Olimex STM32-E407에서 실행되는 구독자 * Olimex STM32-E407에서 실행되는 게시자.

하드웨어 수준에서는 이더넷 및 직렬 벤치마킹을 위해 Olimex STM32-E407 보드에서 USB - CDC/ACM 콘솔이 사용될 예정입니다. 6LoWPAN의 경우 메모리 사용량과 실행 영향을 줄이기 위해 직렬 USART6가 콘솔로 사용될 것입니다. 따라서 두 Olimex STM32-E407 보드의 USB OTG1은 컴퓨터에 연결되어야 합니다. 추가 하드웨어 설정은 토폴로지 유형(이더넷/시리얼/6LoWPAN)에 따라 수행되어야 합니다: 아래 결과는 동일한 애플리케이션인 **publisher**의 결과입니다. 마이크로-ROS 관련 기능만 벤치마킹되었습니다. 따라서 코드의 모든 시리얼/IP/무선 구성 부분은 고려되지 않습니다.

아래는 데이터 처리 과정을 설명합니다. 직렬화된 이진 CTF 데이터부터 Babeltrace API 출력까지: ![](_docs/concepts/benchmarking/results/images/bm_dataflow.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"} ## 통신 결과

다음은 통신 비트레이트 RX/TX입니다: ![](_docs/concepts/benchmarking/results/images/bm_com.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"} _관찰 사항:_ 데이터에 따르면 이더넷이 가장 우수한 성능을 보이며, 이는 예상된 결과입니다.

## 실시간 결과 실행 벤치마킹 결과를 아래에 보고합니다. Babeltrace에서 추출한 데이터는 NuttX 스케줄러에 대해 다음과 같은 정보를 보여줍니다. 추가 정보는 다음과 같습니다: * thread_id 0은 유휴 스레드입니다. * thread_id 3은 저우선순위 작업 큐(RTOS kthread)입니다. * thread_id 7은 퍼블리셔입니다. [01:00:21.445833238] (+0.000009524) 0 thread_resume: { thread_id = 7 } [01:00:21.445993047] (+0.000159809) 0 thread_suspend: { thread_id = 7 } [01:00:21.446002761] (+0.000009714) 0 thread_resume: { thread_id = 3 }
[01:00:21.446051904] (+0.000049143) 0 thread_suspend: { thread_id = 3 } [01:00:21.446061428] (+0.000009524) 0 thread_resume: { thread_id = 0 } [01:00:21.446085428] (+0.000024000) 0 thread_suspend: { thread_id = 0 }
[01:00:21.446095428] (+0.000010000) 0 thread_resume: { thread_id = 3 } [01:00:21.446133047] (+0.000037619) 0 thread_suspend: { thread_id = 3 } [01:00:21.446142571] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446273523] (+0.000130952) 0 thread_suspend: { thread_id = 0 } [01:00:21.446283523] (+0.000010000) 0 thread_resume: { thread_id = 3 } [01:00:21.446335809] (+0.000052286) 0 thread_suspend: { thread_id = 3 }
[01:00:21.446345333] (+0.000009524) 0 thread_resume: { thread_id = 7 } [01:00:21.446505333] (+0.000160000) 0 thread_suspend: { thread_id = 7 } [01:00:21.446514952] (+0.000009619) 0 thread_resume: { thread_id = 3 }
[01:00:21.446564190] (+0.000049238) 0 thread_suspend: { thread_id = 3 } [01:00:21.446573714] (+0.000009524) 0 thread_resume: { thread_id = 0 } [01:00:21.446597714] (+0.000024000) 0 thread_suspend: { thread_id = 0 }
[01:00:21.446607714] (+0.000010000) 0 thread_resume: { thread_id = 3 } [01:00:21.446645333] (+0.000037619) 0 thread_suspend: { thread_id = 3 } [01:00:21.446654857] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446779047] (+0.000124190) 0 thread_suspend: { thread_id = 0 } [01:00:21.446789142] (+0.000010095) 0 thread_resume: { thread_id = 3 } [01:00:21.446841333] (+0.000052191) 0 thread_suspend: { thread_id = 3 }
[01:00:21.446850857] (+0.000009524) 0 thread_resume: { thread_id = 7 } [01:00:21.447010571] (+0.000159714) 0 thread_suspend: { thread_id = 7 } [01:00:21.447020285] (+0.000009714) 0 thread_resume: { thread_id = 3 } ``` _관찰 사항:_ 위에서 보고된 결과에 따르면, 소프트웨어는 결정론적인 방식으로 실행되고 있습니다. 실제로 자세히 살펴보면 실행 순서가 동일하다는 점을 확인할 수 있습니다. 또한, 상관 관계가 있는 이벤트 간 타이밍 델타는 이벤트 전환(연속적인 thread_suspend/thread_resume) 시 매우 낮은 변동성을 보입니다. 더불어 스케줄러는 평균 10마이크로초가 소요되는 빠른 컨텍스트 전환을 수행합니다. ## 실행 결과 실행 벤치마킹 결과를 아래에 나타냅니다. CPU에서 소요된 시간은 두 부분(I/O 작업, 구독자 작업)으로 나뉩니다: ![](_docs/concepts/benchmarking/results/images/bm_execution.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"} _관찰 사항:_
    데이터에 따르면 대부분의 시간이 I/O 작업 중에 소요되었습니다. ## 함수 호출 통계 각 통신 매체별 함수 호출 횟수는 다음과 같습니다: **이더넷** ![](_docs/concepts/benchmarking/results/images/fusage_eth.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"} **직렬** ![](_docs/concepts/benchmarking/results/images/fusage_serial.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

**6LoWPAN** ![](_docs/concepts/benchmarking/results/images/fusage_6lowpan.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

## 정적 메모리 사용량 아래는 정적 메모리 분석 결과를 나타낸 것입니다: ![](_docs/concepts/benchmarking/results/images/bm_max_static_memory.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"} _관찰 사항:_

6LoWPAN은 IPv6 상에서 실행되는 프로토콜로, 정적 메모리를 가장 많이 소비하는 매체입니다. ## 동적 메모리 사용량 아래 그래픽은 동적 할당 총 횟수를 보여줍니다. 각 구간은 청크 메모리 블록 그룹으로 나뉩니다. 각 그룹에는 서로 다른 청크 크기가 포함됩니다. 각 그룹의 크기는 최소 크기(이전 그룹의 크기)와 최대 크기(범례에 표시된 크기) 사이에서 결정됩니다. 예를 들어, 범례가 노란색으로 표시된 블록은 이전 청크 메모리 그룹(여기서는 16바이트)보다 크지만 32바이트 이하인 모든 블록을 나타냅니다.

![](_docs/concepts/benchmarking/results/images/bm_allocation_nbr.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"} _관찰 사항:_ 통신 매체와 무관하게 할당되는 블록은 크지도 않고 많지도 않습니다. 대부분의 할당은 초기화 과정에서 발생합니다.


## 전력 소비 아래는 통신 매체별로 분류된 에너지 소비량을 나타냅니다: ![](_docs/concepts/benchmarking/results/images/bm_power.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"} _관찰 사항:_

통신 매체는 처리량에 큰 영향을 미치며, 이는 다시 전력 소비에 영향을 줍니다. 이더넷은 높은 처리량을 제공하지만, 더 높은 전력 소비를 대가로 합니다. 이에 비해 직렬 통신 매체는 낮은 비트 전송률을 제공하지만, 훨씬 적은 에너지를 소비한다는 장점이 있습니다. --- ## 출처: `_docs/concepts/build_system/external_build_systems/index.md`
<a id="source-docs-concepts-build-system-external-build-systems-index-md"></a> 공식 [**micro_ros_setup** 도구](/_docs/concepts/build_system/)에 대해 읽은 후, 이 페이지에서는 다른 빌드 시스템에 통합된 모듈 또는 구성 요소로서 micro-ROS를 빌드하는 다른 접근법을 소개합니다.

## ESP-IDF용 micro-ROS 컴포넌트 [ESP-IDF용 micro-ROS 컴포넌트](https://github.com/micro-ROS/micro_ros_espidf_component)는 Espressif ESP-IDF 빌드 시스템에 micro-ROS를 컴포넌트로 통합할 수 있게 합니다. 이 컴포넌트를 사용하면 폴더를 복제하거나 복사하기만 하면 기존에 생성된 ESP-IDF 프로젝트에 micro-ROS API 및 유틸리티를 통합할 수 있습니다. micro-ROS 라이브러리 구성은 `colcon.meta` 파일을 기반으로 합니다. 자세한 내용은 [Git 저장소](https://github.com/micro-ROS/micro_ros_espidf_component)를 참조하십시오.

## Zephyr용 micro-ROS 모듈 [Zephyr용 micro-ROS 모듈](https://github.com/micro-ROS/micro_ros_zephyr_module)은 Zephyr 기반 프로젝트에 micro-ROS를 모듈로 통합할 수 있게 합니다. 구체적으로, 기존 Zephyr 프로젝트에 폴더를 복제하거나 복사하기만 하면 micro-ROS API와 유틸리티를 통합할 수 있습니다.

빌드된 micro-ROS 라이브러리 구성 절차는 `colcon.meta`를 기반으로 합니다. 자세한 내용은 [Git 저장소](https://github.com/micro-ROS/micro_ros_espidf_component)를 참조하십시오. ## Arduino용 micro-ROS

[Arduino용 micro-ROS](https://github.com/micro-ROS/micro_ros_arduino) 지원 패키지는 특정 플랫폼용 사전 컴파일된 라이브러리 세트로 제공되는 micro-ROS의 특수 포팅 버전입니다. 이러한 접근 방식의 주된 이유는 Arduino가 micro-ROS와 같은 복잡한 라이브러리 빌드를 허용하지 않기 때문이며, 이를 통해 Arduino 사용자에게 즉시 사용 가능한 솔루션을 제공합니다.

이 지원 패키지와 함께, 기본 설정을 조정해야 하는 사용자를 위해 [Arduino용 micro-ROS 라이브러리 재빌드 방법에 대한 상세한 안내](https://github.com/micro-ROS/micro_ros_arduino#how-to-build-the-precompiled-library)가 제공됩니다.

## STM32CubeMX용 micro-ROS [STM32CubeMX용 micro-ROS](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils) 패키지는 STM32 기반 컨트롤러 프로젝트에 micro-ROS를 원활하게 구성, 설정 및 통합할 수 있게 해주는 유틸리티 세트입니다. 따라서 <a href="https://www.st.com/content/st_com/en.html">STMicroelectronics</a>에서 제공하는 모든 보드에서 micro-ROS를 사실상 지원할 수 있습니다.

사용법은 준비된 [Dockerfile](https://github.com/micro-ROS/docker/blob/humble/micro-ROS-static-library-builder/Dockerfile)을 통해 Docker 기반으로 이루어지며, 이는 ROS 2 환경 외부에서 micro-ROS 라이브러리 생성을 용이하게 합니다. ---

## 출처: `_docs/concepts/build_system/index.md` <a id="source-docs-concepts-build-system-index-md"></a> micro-ROS는 임베디드 플랫폼용 micro-ROS 애플리케이션을 빌드하는 두 가지 방법을 제공합니다: - _micro_ros_setup:_ RTOS별 빌드 도구를 ROS 2 패키지로 제공되는 몇 가지 스크립트에 통합 및 숨깁니다.
- _플랫폼별 통합:_ 여러 플랫폼 빌드 도구와 micro-ROS를 통합했습니다. 자세한 내용은 [여기](/_docs/concepts/build_system/external_build_systems/)를 클릭하세요.

**micro_ros_setup**은 일반 ROS 2 작업 공간에서 사용할 수 있는 ROS 2 패키지 형태의 독립형 빌드 시스템을 제공합니다. 이 도구는 [micro-ROS/micro_ros_setup](https://github.com/micro-ROS/micro_ros_setup) 저장소에서 이용 가능합니다.

**micro_ros_setup** 도구는 [지원되는 하드웨어](/_docs/overview/hardware/) 보드 및 [RTOS](/_docs/concepts/rtos/)용 마이크로-ROS 애플리케이션이 포함된 이미지를 컴파일하고 생성할 수 있게 합니다. **micro_ros_setup** 패키지는 다른 ROS 2 패키지와 마찬가지로 설치할 수 있으므로, 사용법은 ROS 2 CLI 도구를 통해 이루어집니다. 컴파일, 이미지 생성 및 보드 플래싱은 단 네 개의 ROS 2 명령어로 수행할 수 있습니다. 이 패키지 사용법에 대한 자세한 설명은 [튜토리얼 섹션](/_docs/tutorials/core/first_application_rtos/)에서 확인할 수 있습니다. ### micro-ROS 클라이언트 설치 후 빌드 시스템 도구는 micro-ROS 애플리케이션을 준비, 빌드, 플래싱 및 사용하기 위해 활용할 수 있는 몇 가지 유틸리티를 제공합니다. 마이크로-ROS 빌드 시스템은 네 단계로 진행됩니다. 첫 번째 단계에서 사용자는 대상 하드웨어와 RTOS를 구성하여 새로운 마이크로-ROS 애플리케이션을 생성할 수 있습니다: ```bash # 생성 단계 ros2 run micro_ros_setup create_firmware_ws.sh [RTOS] [HARDWARE BOARD]
``` 인수 없이 명령어를 실행하면 지원되는 하드웨어 목록을 확인할 수 있습니다. 이를 통해 micro-ROS가 지원하는 RTOS 및 하드웨어 외에도 이 빌드 시스템이 제공하는 세 가지 추가 옵션을 확인할 수 있습니다: - `zephyr`를 RTOS로, `host`를 하드웨어 이름으로 사용하면 호스트 컴퓨터에서 실행되는 micro-ROS 애플리케이션이 포함된 Zephyr RTOS 이미지를 얻을 수 있습니다.
- RTOS로 `host`만 사용하면, micro-ROS가 호스트 머신에서 [micro-ROS 데모 애플리케이션](https://github.com/micro-ROS/micro-ROS-demos) 세트를 네이티브로 빌드합니다. 이 애플리케이션들은 micro-ROS 앱과 동일하게 동작하며(동일한 추상화 계층 및 미들웨어 구현 사용), 사용자가 PC에서 애플리케이션을 디버깅하고 테스트할 수 있게 합니다.
- `generate_lib`을 RTOS로 사용하면 정적 라이브러리(`.a`)와 헤더 파일(`include`) 세트를 생성하도록 빌드 시스템을 구성할 수 있습니다. 이 파일들은 다른 외부 도구에서 링크할 수 있습니다. 이 옵션은 유효한 CMake 툴체인이 필요합니다. 빌드 시스템이 새 펌웨어 프로젝트를 생성한 후 다음 명령으로 구성할 수 있습니다:

```bash # 구성 단계 ros2 run micro_ros_setup configure_firmware.sh [APP] [OPTIONS] ``` 인수를 지정하지 않고 이 명령을 실행하면 선택한 RTOS에 유효한 예제 애플리케이션 목록이 출력됩니다. 이 구성 단계에서 사용할 수 있는 일반적인 옵션은 다음과 같습니다: - `--transport` 또는 `-t`: `udp`, `serial` 또는 하드웨어별 전송 레이블
  - `--dev` 또는 `-d`: 직렬 전송 방식의 에이전트 문자열 디스크립터 - `--ip` 또는 `-i`: 네트워크 전송 방식의 에이전트 IP - `--port` 또는 `-p`: 네트워크 전송 방식의 에이전트 포트 마지막으로 다음 명령어로 마이크로-ROS 애플리케이션을 빌드하고 플래시할 수 있습니다:

```bash # 빌드 단계 ros2 run micro_ros_setup build_firmware.sh # 플래시 단계 ros2 run micro_ros_setup flash_firmware.sh ``` ### micro-ROS 에이전트 micro-ROS 빌드 시스템은 다음 명령어를 사용하여 ROS 2 작업 공간에서 micro-ROS 에이전트 컴파일을 용이하게 할 수 있습니다:

```bash # micro-ROS 에이전트 패키지 다운로드 ros2 run micro_ros_setup create_agent_ws.sh ros2 run micro_ros_setup build_agent.sh source install/local_setup.bash ros2 run micro_ros_agent micro_ros_agent [OPTIONS] ```

**팁 1:** micro_ros_setup 빌드 시스템 사용법을 직접 익히려면 [핵심 튜토리얼](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/)을 참조하세요.

**팁 2 :** micro-ROS 에이전트는 다음과 같은 간단한 Docker 명령으로도 사용할 수 있습니다: `docker run -it --rm -v /dev:/dev --privileged --net=host microros/micro-ros-agent:$ROS_DISTRO [OPTIONS]`

--- ## 출처: `_docs/concepts/client_library/diagnostics/index.md` <a id="source-docs-concepts-client-library-diagnostics-index-md"></a>

진단 기능은 ROS 2 클라이언트 라이브러리 패키지(예: rclcpp, rclpy)의 일부는 아니지만, 매우 일반적이고 애플리케이션 독립적인 기능을 제공하므로 확장 클라이언트 라이브러리에 확실히 포함될 수 있습니다.

따라서 마이크로-ROS 클라이언트 라이브러리는 기본 진단 기능을 제공합니다. 이 기능들은 ROS 2 진단과 호환되며 다음 세 가지로만 구성됩니다: * 진단 메시지 유형(Micro-XRCE-DDS에 최적화됨 - 동적 배열 없음) * rclc용 업데이트 메커니즘 * 마이크로컨트롤러용 선별된 기본 진단 모니터

마이크로-ROS 진단 패키지는 집계기를 제공하지 않습니다. 표준 ROS 2를 실행하는 마이크로프로세서에서 이러한 집계가 이루어진다고 가정하기 때문입니다. 따라서 다음과 같은 전형적인 아키텍처를 가정합니다: <img src="_docs/concepts/client_library/diagnostics/diagnostics_architecture.png" style="display:block; width:60%; margin-left:auto; margin-right:auto;"/> 표준 ROS 2 진단 집계기가 마이크로-ROS 진단 메시지 유형을 집계하려면, ROS 2 에이전트가 마이크로-ROS 진단 메시지를 표준 ROS 2 진단 메시지로 변환해야 합니다(*추후 확정*).

자세한 내용은 [https://github.com/micro-ROS/micro_ros_diagnostics/](https://github.com/micro-ROS/micro_ros_diagnostics/)를 참조하십시오. ROS 2 진단에 대한 자세한 내용은 [ROS 2 진단](https://github.com/ros/diagnostics/tree/ros2-devel) 및 [ROS 2 진단 메시지](https://github.com/ros2/common_interfaces/tree/master/diagnostic_msgs)를 참조하십시오.

--- ## 출처: `_docs/concepts/client_library/embedded_tf/index.md` <a id="source-docs-concepts-client-library-embedded-tf-index-md"></a>

## 소개 및 목표 TF 변환 그래프는 시간적 이력과 분산 정보 소스를 모두 지원하며, 2008년 출시 당시 로봇 공학 프레임워크에 새로운 도구로 자리매김했습니다. 기능적으로 이는 컴퓨터 그래픽스에서 알려진 장면 그래프 개념을 기반으로 합니다 [[Foote 2013]](https://ieeexplore.ieee.org/document/6556373). 그러나 이러한 개념들은 분산 처리를 거의 제공하지 않으며, 시간적 이력을 전혀 제공하지 않았습니다(주로 컴퓨터 그래픽스와 같은 프레임 기반 렌더링 애플리케이션에는 필요하지 않기 때문입니다). 분산형 장면 그래프는 컴퓨터 그래픽스 분야에서도 점차 보편화되고 있다. 로봇공학 분야에서는 de Laet 등 [[De Laet et al. 2013]](https://ieeexplore.ieee.org/document/6696693)의 연구를 통해 변환 그래프가 트위스트(각운동) 정보를 포함하도록 확장되었으며, 컴파일 시 오류 검사가 강화되었다. 이는 현재 분산 메커니즘과 통합되지는 않았으나 단일 시스템에서 사용될 수 있습니다. 변환 그래프의 지속적인 문제점은 자원 사용량이었습니다. ROS TF는 이를 사용하는 모든 노드에서 전체 변환 트리의 복제본을 통해 작동하며, 노드 간 유니캐스트 TCP 연결로 구현됩니다. 동적 부품이 많은 시스템에서는 대량의 수신 메시지 스트림으로 인해 이를 'TF 파이어호스'라 부르기도 했습니다.
마이크로-ROS는 동적 변환 트리를 임베디드 장치에서 실행함으로써 이 최신 기술을 뛰어넘을 것이며, 실제로 필요한 공간적·시간적 세부 사항 분석을 기반으로 자원 사용을 최소화할 것입니다. 또한 마이크로-ROS 실시간 실행기와의 통합을 통해 동시 업데이트 상황에서도 실시간 쿼리를 가능하게 할 것입니다. 추가적인 전력 절감을 위해 임베디드 TF를 노드 라이프사이클과 통합할 계획입니다.


## 로드맵 본 과제는 2019년 9월 EU 프로젝트 검토에서 논의된 바와 같이 취소되었습니다. ## 감사의 말씀 본 활동은 유럽연합의 Horizon 2020 연구 및 혁신 프로그램(보조금 계약 번호 780785) 하에 유럽연구위원회(ERC)로부터 자금을 지원받았습니다.

--- ## 출처: `_docs/concepts/client_library/execution_management/index.md` <a id="source-docs-concepts-client-library-execution-management-index-md"></a>

## 목차 * [소개](#introduction) * [rclcpp 표준 실행기 분석](#analysis-of-rclcpp-standard-executor) * [아키텍처](#architecture) * [스케줄링 의미론](#scheduling-semantics) * [처리 패턴 분석](#analysis-of-processing-patterns) * [로봇공학에서의 감지-계획-실행 파이프라인](#sense-plan-act-pipeline-in-robotics) * [다중 속도 동기화](#synchronization-of-multiple-rates)
    * [고우선순위 처리 경로](#high-priority-processing-path) * [실시간 임베디드 애플리케이션](#real-time-embedded-applications) * [rclc 실행기](#rclc-executor)
    * [기능](#features) * [트리거 조건](#trigger-condition) * [순차적 실행](#sequential-execution) * [LET 의미론](#let-semantics) * [멀티스레딩 및 스케줄링 구성](#multi-threading-and-scheduling-configuration)
    * [실행기 API](#executor-api) * [구성 단계](#configuration-phase) * [실행 단계](#running-phase) * [예제](#examples) * [로봇 공학 예제의 감지-계획-실행 파이프라인](#sense-plan-act-pipeline-in-robotics-example)
      * [다중 속도 동기화 예제](#synchronization-of-multiple-rates-example) * [고우선순위 처리 경로 예제](#high-priority-processing-path-example) * [실시간 임베디드 애플리케이션 예제](#real-time-embedded-applications-example)
      * [ROS 2 실행기 워크숍 참조 시스템](#ros-2-executor-workshop-reference-system) * [향후 연구](#future-work) * [다운로드](#download) * [콜백 그룹 수준 실행기](#callback-group-level-executor) * [API 변경 사항](#api-changes)
    * [테스트 벤치](#test-bench) * [관련 연구](#related-work) * [Fawkes 프레임워크](#fawkes-framework) * [참고문헌](#references) * [감사의 말](#acknowledgments)


## 소개 주어진 실시간 제약 조건 하에서 예측 가능한 실행은 많은 로봇 응용 분야에서 필수적인 요구 사항입니다. ROS의 서비스 기반 패러다임은 다양한 기능의 신속한 통합을 가능하게 하지만, 실행 관리에 대한 충분한 제어를 제공하지는 않습니다. 예를 들어, 노드 내에서 콜백의 특정 실행 순서를 강제하는 메커니즘이 없습니다. 또한 모바일 로봇 공학의 제어 애플리케이션에서는 여러 노드의 실행 순서가 매우 중요합니다. 센서 데이터 수집, 데이터 평가, 구동 제어 등으로 구성된 인과 관계 체인(cause-effect-chains)은 이 순서대로 실행되는 ROS 노드에 매핑되어야 하지만, 이를 강제할 명시적인 메커니즘이 없습니다. 더욱이 현장 테스트에서 수집된 데이터 기록을 ROS-bag 형태로 재생할 때, 프로세스 스케줄링의 비결정성으로 인해 결과가 종종 놀라울 정도로 달라지는 경우가 있습니다.

구독 및 게시 토픽의 특정 실행 순서를 수동으로 설정하고 해당 리눅스 프로세스의 사용 사례별 우선순위를 정의하는 것은 항상 가능합니다. 그러나 이 접근 방식은 오류 발생 가능성이 높고 확장하기 어려우며 시스템에 배포된 ROS 2 패키지에 대한 심층적인 지식이 필요합니다.

따라서 마이크로-ROS의 Executor는 로봇 공학자에게 실용적이고 사용하기 쉬운 실시간 메커니즘을 지원하여 다음에 대한 해결책을 제공하는 것을 목표로 합니다: - 결정론적 실행 - 실시간 보장 - 단일 플랫폼에서의 실시간 및 비실시간 기능 통합
- RTOS 및 마이크로컨트롤러에 대한 특정 지원 ROS 1에서는 네트워크 스레드가 모든 메시지를 수신하여 FIFO 큐(roscpp 내)에 넣는 역할을 담당했습니다. 즉, 모든 콜백은 실행 관리 없이 FIFO 방식으로 호출되었습니다. ROS 2에서 DDS(데이터 배포 서비스)가 도입되면서 메시지는 DDS에 버퍼링됩니다. ROS 2에서는 실행 관리를 지원하기 위해 Executor 개념이 도입되었습니다. rcl 계층에서 수신할 핸들을 포함한 _대기 집합_이 구성되고, 두 번째 단계에서 DDS 큐에서 핸들을 가져옵니다. 핸들은 타이머, 구독, 서비스, 클라이언트 및 가드 조건을 위해 rcl 계층에서 정의된 일반 용어입니다. 그러나 C++ API(rclcpp)용 ROS 2 Executor의 표준 구현체는 다음과 같은 특이한 특징을 지닙니다: 타임어가 다른 모든 DDS 핸들보다 우선 순위를 가지며, 타임어가 아닌 핸들에 대해서는 비선점형 라운드 로빈 스케줄링을 적용하고, 각 핸들에 대해 하나의 입력 데이터만 고려합니다(여러 개가 사용 가능하더라도). 이러한 특성으로 인해 특정 상황에서는 표준 rclcpp 실행기가 결정론적이지 않으며, 실시간 요구사항 보장이 매우 어려워집니다 [[CB2019](#CB2019)]. 우리는 마이크로컨트롤러 플랫폼을 고려하고 있으며, 일반적으로 C 또는 C++ 애플리케이션이 실행될 것으로 예상되므로 Python 프론트엔드용 ROS 2 실행기 구현(rclpy)은 검토하지 않았습니다.

실시간 Executor의 목표와 ROS 2 표준 rclcpp Executor의 한계를 고려할 때, 도전 과제는 다음과 같습니다: - ROS 2 프레임워크와 실시간 운영체제(RTOS)를 위한 적절하고 명확하게 정의된 스케줄링 메커니즘 개발 - ROS 개발자를 위한 사용하기 쉬운 인터페이스 정의 - 요구사항(지연 시간, 하위 시스템의 결정성 등) 모델링
- ROS 2 프레임워크와 운영체제 스케줄러 매핑(반자동화 및 최적화된 매핑과 함께 일반적이고 잘 이해된 프레임워크 메커니즘이 바람직함) 우리의 접근 방식은 C 프로그래밍 언어로 구현된 rcl+rcl 계층([클라이언트 라이브러리 소개](../) 섹션에 설명됨)을 위한 실시간 지원 실행기를 제공하는 것입니다.

첫 단계로, 실시간 및 결정론적 실행을 지원하기 위한 여러 신규 기능을 갖춘 C 프로그래밍 언어 기반 rcl 계층용 rclc 실행기를 제안합니다: 1) 사용자 정의 정적 순차 실행, 2) 조건부 실행 의미론, 3) 스케줄링 구성을 통한 다중 스레드 실행, 4) 논리적 실행 의미론(LET)을 지원합니다. 순차적 실행은 메시지 도착 시간과 무관하게 모든 콜백이 사전 정의된 순서로 실행되는 런타임 동작을 의미합니다. 조건부 실행은 트리거 조건을 통해 가능하며, 로봇공학에서 흔히 사용되는 처리 패턴(자세한 분석은 [처리 패턴 분석](#analysis-of-processing-patterns) 섹션 참조)을 구현합니다. 멀티스레드 애플리케이션의 스케줄링 매개변수 구성은 우선순위 기반 실행을 달성합니다. 논리적 실행 시간 개념(LET)은 임베디드 애플리케이션의 고정 주기적 작업 스케줄링을 위한 데이터 동기화를 제공합니다.

마이크로-ROS를 위한 고급 실행 관리 메커니즘 외에도, 표준 ROS 2용 rclcpp의 Executor 개념 개선 및 확장에 기여했습니다: 콜백 그룹 수준 Executor입니다. 이는 새로운 Executor가 아니라, 현재 Iron 릴리스의 ROS 2 기본 Executor로는 불가능한 콜백 그룹의 우선순위 지정을 허용하는 ROS 2 Executor API의 정교화입니다.


## rclcpp 표준 Executor 분석 ROS 2는 하나의 운영체제 프로세스 내에 여러 노드를 묶을 수 있도록 합니다. 프로세스 내 노드들의 콜백 실행을 조정하기 위해 rclcpp(및 rclpy)에 Executor 개념이 도입되었습니다.

ROS 2 설계는 프로세스당 하나의 Executor([rclcpp::executor::Executor](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executor.hpp) 인스턴스)를 정의하며, 이는 일반적으로 사용자 정의 메인 함수나 런치 시스템에 의해 생성됩니다. Executor는 DDS 큐에서 사용 가능한 작업(타이머, 서비스, 메시지, 구독 등)을 확인하고 이를 하나 이상의 스레드(SingleThreadedExecutor(https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executors/single_threaded_executor.hpp)와 [MultiThreadedExecutor](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executors/multi_threaded_executor.hpp)로 구현됩니다.

디스패칭 메커니즘은 ROS 1 스핀 스레드 동작과 유사합니다: Executor는 대기 세트를 조회하여 DDS 큐에 대기 중인 콜백이 있는지 확인합니다. 대기 중인 콜백이 여러 개 있는 경우, ROS 2 Executor는 Executor에 등록된 순서대로 이를 실행합니다.

### 아키텍처 다음 다이어그램은 표준 ROS 2 Executor 구현의 관련 클래스를 보여줍니다: <center> <img src="_docs/concepts/client_library/execution_management/png/executor_class_diagram.png" alt="ROS 2 Executor 클래스 다이어그램" width="100%" /> </center> Executor 인스턴스는 노드의 NodeBaseInterfaces에 대한 약한 포인터만 유지합니다. 따라서 Executor에 알리지 않고도 노드를 안전하게 파괴할 수 있습니다. 또한 Executor는 명시적인 콜백 큐를 유지하지 않고, 아래 시퀀스 다이어그램에 설명된 바와 같이 기본 DDS 구현의 큐 메커니즘에 의존합니다:

<center> <img src="_docs/concepts/client_library/execution_management/png/executor_to_dds_sequence_diagram.png" alt="Call sequence from executor to DDS" width="100%" /> </center>

그러나 실행기 개념은 들어오는 콜백 호출의 우선순위 지정이나 분류를 위한 수단을 제공하지 않습니다. 또한 기본 운영체제 스케줄러의 실시간 특성을 활용하여 실행 순서를 더 세밀하게 제어하지도 않습니다. 이러한 동작의 전반적인 함의는 시간에 민감한 콜백이 비(非) 중요 콜백보다 늦게 처리되기 때문에 데드라인 미달과 성능 저하가 발생할 수 있다는 점입니다. 또한 FIFO 메커니즘으로 인해 각 콜백 실행이 발생시킬 수 있는 최악의 지연 시간에 대한 사용 가능한 경계를 결정하기 어렵습니다. ### 스케줄링 의미론 최근 논문 [[CB2019](#CB2019)]에서 rclcpp Executor를 상세히 분석하고 예약 기반 스케줄링 하에서 인과 관계 체인의 응답 시간 분석을 제안했습니다. Executor는 네 가지 범주의 콜백을 구분합니다: 시스템 수준 타이머에 의해 트리거되는 _타이머_, 구독된 토픽의 새 메시지에 의해 트리거되는 _구독자_, 서비스 요청에 의해 트리거되는 _서비스_, 서비스 요청에 대한 응답에 의해 트리거되는 _클라이언트_입니다. Executor는 DDS 계층의 입력 큐에서 메시지를 가져와 해당 콜백을 실행하는 역할을 담당합니다. 콜백을 완료될 때까지 실행하므로 비선점형 스케줄러입니다. 그러나 실행 가능한 모든 준비된 작업을 고려하지 않고 readySet이라 불리는 스냅샷만 고려합니다. 이 readySet은 Executor가 유휴 상태일 때 업데이트되며, 이 단계에서 DDS 계층과 상호작용하여 준비된 작업 집합을 업데이트합니다. 그런 다음 각 작업 유형별로 전용 큐(타이머, 구독, 서비스, 클라이언트)가 존재하며 순차적으로 처리됩니다. 다음과 같은 바람직하지 않은 특성이 지적되었습니다: * 타이머가 가장 높은 우선순위를 가집니다. 실행기는 항상 _타이머_를 먼저 처리합니다. 이는 과부하 상황에서 DDS 큐의 메시지가 처리되지 않는 본질적인 결과를 초래할 수 있습니다.
* 타이머 핸들이 아닌 작업에 대한 비선점식 라운드 로빈 스케줄링. 준비 세트 처리 중 도착한 메시지는 다음 업데이트 시점까지 고려되지 않으며, 이는 남은 모든 콜백의 실행 시간에 따라 달라집니다. 이는 우선순위 역전 현상을 초래하는데, 낮은 우선순위 콜백이 준비 세트의 현재 처리를 연장함으로써 암묵적으로 높은 우선순위 콜백을 차단할 수 있기 때문입니다.
* 핸들당 하나의 메시지만 고려됩니다. readySet에는 하나의 작업 인스턴스만 포함됩니다. 예를 들어, 동일한 토픽의 여러 메시지가 사용 가능하더라도, Executor가 다시 유휴 상태가 되고 DDS 계층에서 readySet이 업데이트될 때까지 하나의 인스턴스만 처리됩니다. 이는 우선순위 역전 현상을 악화시킵니다. 백로그된 콜백은 스케줄링 대상으로 고려되기까지 여러 번의 readySet 처리를 기다려야 할 수 있기 때문입니다. 이는 타이머 기반 콜백이 아닌 인스턴스가 동일한 저우선순위 콜백의 여러 인스턴스에 의해 차단될 수 있음을 의미합니다. 이러한 발견을 바탕으로 저자들은 ROS 2 시스템에 결정성과 잘 알려진 스케줄링 가능성 분석을 적용하기 위한 대안적 접근법을 제시합니다. 예약 기반 스케줄링 하에서 응답 시간 분석이 설명됩니다.

## 처리 패턴 분석 마이크로-ROS용 실행 관리 메커니즘 개발은 로봇공학 및 임베디드 시스템에서 흔히 사용되는 처리 패턴 분석을 기반으로 합니다. 먼저, 결정론적 동작 구현에 사용되는 모바일 로봇공학의 전형적인 처리 패턴을 제시합니다. 그런 다음 실시간 임베디드 시스템의 처리 패턴을 분석하는데, 여기서 주요 차이점으로 실시간 동작을 달성하기 위해 시간 트리거 방식이 적용됩니다.

### 로봇공학의 감지-계획-실행 파이프라인 이제 결정론적 동작을 달성하기 위해 모바일 로봇공학에서 사용되는 일반적인 소프트웨어 설계 패턴을 설명한다. 각 설계 패턴에 대해 개념과 결정론적 실행기(Executor)에 대한 유도된 요구사항을 기술한다. **개념:** 모바일 로봇 공학에서 흔히 사용되는 설계 패러다임은 제어 루프로, 여러 단계로 구성됩니다: 센서 데이터를 획득하는 감지 단계, 위치 파악 및 경로 계획을 위한 계획 단계, 그리고 모바일 로봇을 조종하는 실행 단계입니다. 물론 더 많은 단계가 가능하지만, 여기서는 이 세 단계를 예시로 삼겠습니다. 이러한 처리 파이프라인은 그림 1에 표시되어 있습니다.

<center> <img src="_docs/concepts/client_library/execution_management/png/sensePlanActScheme.png" alt="감지-계획-실행 파이프라인" width="60%"/> </center> <center> 그림 1: 다중 센서가 구동하는 감지-계획-실행 파이프라인. </center>

일반적으로 환경을 인지하기 위해 여러 센서가 사용됩니다. 예를 들어 IMU와 레이저 스캐너가 있습니다. 위치 추정 알고리즘의 품질은 센서 데이터가 처리될 때 얼마나 오래되었는지에 크게 좌우됩니다. 이상적으로는 모든 센서의 최신 데이터가 처리되어야 합니다. 이를 달성하는 한 가지 방법은 감지 단계에서 먼저 모든 센서 드라이버를 실행한 후 계획 단계에서 모든 알고리즘을 처리하는 것입니다.

현재 rclcpp의 기본 Executor로는 이러한 처리 순서를 정의할 수 없습니다. 원칙적으로 데이터 주도형 파이프라인을 설계할 수는 있지만, 예를 들어 레이저 스캔 데이터가 감지 단계와 계획 단계 모두에서 다른 콜백에 필요한 경우, 이러한 구독자들의 처리 순서는 임의적입니다.

이러한 감지-계획-실행 패턴을 위해 각 단계별로 별도의 실행기를 정의할 수 있습니다. 계획 단계는 감지 단계의 모든 콜백이 완료된 후에만 트리거됩니다. **파생 요구사항:** - 트리거된 실행 ### 다중 속도 동기화 **개념:**

모바일 로봇 공학에서는 환경 감지를 위해 종종 여러 센서가 사용됩니다. IMU 센서는 매우 높은 속도(예: 500Hz)로 데이터 샘플을 제공하는 반면, 레이저 스캔은 회전 시간에 의해 결정되는 훨씬 느린 주파수(예: 10Hz)로만 이용 가능합니다. 따라서 서로 다른 주파수를 가진 센서 데이터를 어떻게 결정론적으로 융합할 것인가가 과제입니다. 이 문제는 그림 2에 묘사되어 있습니다.

<center> <img src="_docs/concepts/client_library/execution_management/png/sensorFusion_01.png" alt="다양한 속도 동기화" width="30%" /> </center> <center> 그림 2: 다양한 주파수의 센서 데이터를 결정론적으로 처리하는 방법.
</center> 스케줄링 효과로 인해 레이저 스캔 평가 콜백이 IMU 데이터 수신 직전 또는 직후에 호출될 수 있습니다. 이를 해결하는 한 가지 방법은 애플리케이션 내부에 추가 동기화 코드를 작성하는 것입니다. 이는 분명히 번거롭고 이식성이 떨어지는 해결책입니다. 대안은 IMU 샘플과 레이저 스캔의 주파수를 동기화하여 평가하는 것입니다. 예를 들어, 항상 50개의 IMU 샘플을 하나의 레이저 스캔과 함께 처리하는 방식입니다. 이 접근법은 그림 3에 표시되어 있습니다. 전처리 콜백은 IMU 샘플을 집계하고 10Hz 속도로 50개 샘플이 포함된 집계 메시지를 전송합니다. 이제 두 메시지 모두 동일한 주파수를 갖게 됩니다. 두 메시지가 모두 사용 가능할 때 발동되는 트리거 조건을 통해 센서 융합 알고리즘은 항상 동기화된 입력 데이터를 기대할 수 있습니다.

<center> <img src="_docs/concepts/client_library/execution_management/png/sensorFusion_02.png" alt="트리거를 통한 동기화" width="40%" /> </center> <center> 그림 3: 트리거를 통한 다중 입력 데이터 동기화. </center>

ROS 2에서는 현재 rclcpp 및 rclpy의 실행기(Executor)에 트리거 개념이 없어 이를 모델링할 수 없습니다. 헤더의 타임스탬프를 기반으로 입력 데이터를 동기화하기 위해 메시지 필터를 사용할 수 있지만, 이는 rclcpp에서만 사용 가능하며(rcl에서는 불가) 실행기에 직접 트리거 개념을 구현하는 것이 더 효율적일 것입니다.

또 다른 아이디어는 레이저 스캔 수신 시에만 IMU 데이터를 능동적으로 요청하는 것입니다. 이 개념은 그림 4에 표시되어 있습니다. 레이저 스캔 메시지가 도착하면 먼저 집계된 IMU 샘플이 포함된 메시지를 요청합니다. 그런 다음 레이저 스캔을 처리하고 이후 센서 융합 알고리즘을 실행합니다. 콜백의 순차적 실행을 지원하는 Executor가 이 아이디어를 구현할 수 있습니다.

<center> <img src="_docs/concepts/client_library/execution_management/png/sensorFusion_03.png" alt="순차적 동기화" width="30%" /> </center> <center> 그림 4: 순차적 처리를 통한 동기화. </center>

**도출된 요구사항:** - 트리거된 실행 - 콜백의 순차적 처리 ### 고우선순위 처리 경로 **개념** 로봇은 종종 여러 활동을 동시에 수행해야 합니다. 예를 들어 경로 추종과 장애물 회피가 있습니다. 경로 추종은 지속적인 활동인 반면, 장애물 회피는 환경에 의해 유발되며 즉각적인 대응이 필요합니다. 따라서 활동에 우선순위를 지정하는 것이 바람직합니다. 이는 그림 5에 묘사되어 있습니다: <center> <img src="_docs/concepts/client_library/execution_management/png/highPriorityPath.png" alt="HighPriorityPath" width="50%" /> </center> <center> 그림 5: 순차적 순서로 관리되는 고우선순위 경로.
</center> 감지-계획-실행 활동으로 구성된 단순화된 제어 루프를 가정할 때, 로봇을 일시적으로 정지시킬 수 있는 장애물 회피는 계획 단계 전에 처리되어야 합니다. 본 예시에서는 이러한 활동들이 단일 스레드에서 처리된다고 가정합니다.

**도출된 요구사항:** - 콜백의 순차적 처리 ### 실시간 임베디드 애플리케이션 임베디드 시스템에서 실시간 동작은 시간 트리거 방식(time-triggered paradigm)을 사용하여 구현됩니다. 이는 프로세스가 주기적으로 활성화됨을 의미합니다. 프로세스에 우선순위를 할당하여 선점(preemption)을 허용할 수 있습니다. 그림 6은 고정 주기를 가진 세 개의 프로세스 예시를 보여줍니다. 중간 및 하단 프로세스는 빈 점선 상자로 표시된 것처럼 여러 번 선점됩니다. <center> <img src="_docs/concepts/client_library/execution_management/png/scheduling_01.png" alt="고정 주기 스케줄링" width="30%"/> </center> <center> 그림 6: 고정 주기 선점형 스케줄링. </center>

각 프로세스에는 그림 7과 같이 하나 이상의 작업이 할당될 수 있습니다. 이러한 작업들은 순차적으로 실행되며, 이는 흔히 협력적 스케줄링이라고 불립니다. <center> <img src="_docs/concepts/client_library/execution_management/png/scheduling_02.png" alt="고정 주기 스케줄링" width="30%"/> </center> <center>
그림 7: 순차적으로 실행되는 작업을 가진 프로세스들. </center> 주어진 수의 프로세스에 우선순위를 할당하는 방법은 다양하지만, 주기가 짧은 프로세스가 더 높은 우선순위를 가지는 속도 단조 스케줄링 할당은 프로세서 사용률이 69% 미만일 때 최적임이 입증되었습니다 [[LL1973](#LL1973)].

 지난 수십 년간 다양한 스케줄링 접근법이 제안되었으나, 고정 주기 선점형 스케줄링은 여전히 임베디드 실시간 시스템에서 널리 사용되고 있다 [[KZH2015](#KZH2015)]. 이는 현재 운영체제의 특징을 살펴보면 더욱 분명해집니다. 리눅스와 마찬가지로 NuttX, Zephyr, FreeRTOS, QNX 등의 실시간 운영체제도 고정 주기 선점 스케줄링과 우선순위 할당을 지원하여, 시간 트리거형 패러다임이 이 분야의 지배적인 설계 원칙이 되게 합니다.

그러나 선점 스케줄링을 사용하고 전역 변수를 통해 여러 프로세스 간에 데이터를 공유할 경우 데이터 일관성 문제가 종종 발생합니다. 스케줄링 효과와 프로세스 실행 시간의 변동으로 인해 이러한 변수의 쓰기 및 읽기 작업이 때로는 더 빨리 또는 더 늦게 발생할 수 있습니다. 이는 업데이트 시간(변수 변경이 다른 프로세스에 표시되는 시점)의 지연 지터로 이어집니다. 여러 프로세스가 동시에 변수에 접근할 때 경합 조건이 발생할 수 있습니다. 이 문제를 해결하기 위해 [[HHK2001](#HHK2001)]에서는 논리적 실행 시간(LET) 개념이 도입되었습니다. 이 방식에서는 데이터 통신이 미리 정의된 주기적 시간 인스턴스에서만 발생합니다: 데이터 읽기는 주기 시작 시에만, 데이터 쓰기는 주기 종료 시에만 수행됩니다. 추가적인 지연 시간의 비용은 데이터 일관성과 지터 감소와 교환됩니다. 이 개념은 최근 자동차 애플리케이션에도 적용되었습니다[[NSP2018](#NSP2018)].

<center> <img src="_docs/concepts/client_library/execution_management/png/scheduling_LET.png" alt="고정 주기 스케줄링" width="80%"/> </center> <center> 그림 8: 논리적 실행 시간 패러다임 적용 전후의 데이터 통신 비교. </center> LET 개념의 예는 그림 8에 제시되어 있다. 두 프로세스가 하나의 전역 변수를 통해 데이터를 통신한다고 가정한다. 이 데이터가 기록되는 시점은 처리 시간의 끝이다. 기본 사례(왼쪽)에서는 프로세스 p<sub>3</sub>과 p<sub>4</sub>가 업데이트를 수신한다. 그림 8의 오른쪽에서는 동일한 시나리오를 LET 의미론으로 보여준다. 여기서 데이터는 주기 경계에서만 전달됩니다. 이 경우 하위 프로세스가 주기 종료 시점에 통신하므로 항상 프로세스 p<sub>3</sub>과 p<sub>5</sub>가 새 데이터를 수신합니다. **개념:** - 프로세스의 주기적 실행 - 프로세스에 고정 우선순위 할당 - 프로세스의 선점형 스케줄링 - 프로세스 내 작업의 협력적 스케줄링 (순차적 실행) - LET 의미론에 따른 데이터 동기화 ROS 2에서는 타이머를 사용하여 주기적 활성화를 구현할 수 있지만, 선점 스케줄링은 운영체제에서 지원되며 ROS 노드에 대응하는 스레드/프로세스 단위의 우선순위 할당이 가능합니다. 데이터 의존성이 없는 콜백의 순차적 실행은 불가능합니다. 또한 데이터는 콜백 실행 직전에 DDS 큐에서 읽히고, 애플리케이션 실행 중 어느 시점에 기록됩니다. rclcpp Executor의 `spin_period` 함수는 고정된 주기로 데이터를 확인하고 데이터가 있는 콜백을 실행할 수 있지만, 이 스핀 함수는 데이터 유무와 관계없이 모든 콜백을 실행하지는 않습니다. 따라서 `spin_period`는 다수의 콜백(즉, 프로세스 내 작업)을 주기적으로 실행하는 데 유용하지 않습니다. 따라서 타이머를 기반으로 여러 콜백(즉, 작업)의 실행을 트리거하는 메커니즘이 필요합니다. 데이터 전송은 LET 의미론을 구현할 수 없는 DDS를 통해 이루어집니다. 요약하면 다음과 같은 요구사항을 도출합니다.

**도출된 요구사항:** - 실행 트리거 - 콜백의 순차적 처리 - LET 의미론에 따른 데이터 동기화 ## rclc Executor

rclc Executor는 C 프로그래밍 언어로 구현된 rcl-layer 기반의 ROS 2 Executor입니다. 앞서 논의한 바와 같이, 기본 rclcpp Executor는 세 가지 주요 이유로 실시간 애플리케이션 구현에 적합하지 않습니다: 타임어가 다른 모든 핸들보다 우선시됨, 콜백 실행의 우선순위 지정 불가, 콜백의 라운드 로빈 방식 완료 실행. 반면, 제한된 종단 간 지연 시간, 인과 관계 체인의 응답 시간 저지터 감소, 결정론적 처리, 과부하 상황에서도 짧은 응답 시간과 같은 비기능적 요구사항을 달성하기 위한 모범 사례로 여러 처리 패턴이 개발되었습니다. 이러한 처리 패턴은 기본 ROS 2 실행기에서 제공하는 개념으로는 구현하기 어려우므로, 우리는 유연한 실행기인 rclc 실행기를 개발했습니다.

### 기능 rclc Executor는 기능적으로 완성되어 있으며, 즉 기본 ROS 2 Executor와 동일한 모든 이벤트 유형을 지원합니다: - 구독(subscriptions) - 타이머(timers) - 서비스(services) - 클라이언트(clients) - 가드 조건(guard conditions) - 액션(actions) - 라이프사이클(lifecycle)

유연한 rclc Executor는 여기에 더해 다음과 같은 새로운 기능을 제공합니다: - 트리거된 실행 - 사용자 정의 순차적 실행 - 멀티스레딩 및 스케줄링 구성 (개발 중) - 주기적 프로세스 스케줄링을 위한 데이터 동기화를 위한 LET-세манти크

첫째, *트리거 조건*을 통해 콜백 처리가 시작될 시점을 정의할 수 있습니다. 이는 감지-계획-실행 제어 루프나 유향 비순환 그래프(DAG)를 활용한 복잡한 처리 구조 구현에 유용합니다. 둘째, 사용자는 이러한 콜백이 실행될 *처리 순서*를 지정할 수 있습니다. 이 기능을 통해 특정 센서의 데이터 도착에 따라 다른 센서의 데이터를 요청하는 다중 속도 센서 융합 패턴을 쉽게 구현할 수 있습니다. 셋째, 기본 운영 체제의 스케줄링 매개변수(예: 우선순위) 할당 기능입니다. 이를 통해 우선순위 처리 구현이 가능합니다. 마지막으로 주기적 애플리케이션을 위해 *LET 의미론*이 구현되어 주기적 프로세스 스케줄링의 데이터 일관성을 지원합니다. 이제 이러한 기능들을 더 자세히 설명하겠습니다. #### 순차적 실행 - 구성 시 사용자는 핸들의 순서를 정의합니다. - 구성 시 사용자는 핸들이 새 데이터가 있을 때만 호출될지(ON_NEW_DATA) 아니면 콜백이 항상 호출될지(ALWAYS)를 정의합니다.
- 실행 시 모든 핸들은 사용자가 정의한 순서대로 처리됩니다. - 핸들의 구성이 ON_NEW_DATA인 경우, 해당 콜백은 새 데이터가 있을 때만 호출됩니다. - 핸들의 구성이 ALWAYS인 경우, 해당 콜백은 항상 호출됩니다. 데이터가 없을 경우 콜백은 데이터 없이(예: NULL 포인터) 호출됩니다.

그림 9는 세 개의 콜백 A, B, C를 보여줍니다. 이들이 *B,A,C* 순서로 실행되어야 한다고 가정합니다. 그러면 사용자는 이 순서대로 콜백을 rclc 실행기에 추가합니다. 새 메시지가 도착할 때마다 새 메시지가 사용 가능한 콜백은 항상 사용자 정의 처리 순서대로 실행됩니다. <center>
<img src="_docs/concepts/client_library/execution_management/png/rclc_executor_sequential_execution.png" alt="순차적 실행 의미론" width="50%" /> </center> <center> 그림 9: 순차적 실행 의미론. </center> #### 트리거 조건

- 주어진 핸들 집합에 대해, 해당 핸들의 입력 데이터 가용성을 기반으로 하는 트리거 조건이 모든 콜백의 처리가 시작되는 시점을 결정합니다. 이는 그림 10에 표시되어 있습니다. <center> <img src="_docs/concepts/client_library/execution_management/png/trigger_01.png" alt="트리거 조건 개요" width="50%" />
</center> <center> 그림 10: 트리거 조건을 적용한 실행기 </center> - 사용 가능한 옵션: - ALL 연산: 모든 핸들에 대한 입력 데이터가 사용 가능할 때 발동 - ANY 연산: 최소 한 개의 핸들에 대한 입력 데이터가 사용 가능할 때 발동 (OR 의미론)
  - ONE: 사용자가 지정한 핸들에 대한 입력 데이터가 있을 때 발생 - 사용자 정의 함수: 사용자가 맞춤형 로직 구현 가능 그림 11은 ALL 의미론의 예시를 보여줍니다. *msg_A, msg_B, msg_C* 모든 메시지가 수신된 경우에만 트리거 조건이 충족되며, 사용자 정의 순서로 콜백이 처리됩니다.
<center> <img src="_docs/concepts/client_library/execution_management/png/trigger_ALL.png" alt="트리거 조건 ALL" width="30%" /> </center> <center>
그림 11: 트리거 조건 ALL </center> 그림 12는 ANY 의미론의 예를 보여줍니다. 즉, 메시지 *msg_A, msg_B, msg_C* 중 하나라도 수신되면 트리거 조건이 충족되며, 콜백은 사용자 정의 순서로 처리됩니다. 이는 OR 의미론과 동일합니다.
<center> <img src="_docs/concepts/client_library/execution_management/png/trigger_OR.png" alt="트리거 조건 ANY" width="30%" /> </center> <center> 그림 12: 트리거 조건 ANY (OR) </center> 그림 13은 ONE 의미론의 예를 보여줍니다. 즉, *msg_B* 메시지만 수신된 경우에만 트리거 조건이 충족되며 (잠재적으로 모든) 콜백이 사용자 정의 순서로 처리됩니다. <center> <img src="_docs/concepts/client_library/execution_management/png/trigger_ONE.png" alt="트리거 조건 ONE" width="30%" />
</center> <center> 그림 13: 트리거 조건 ONE </center> 그림 14는 사용자 정의 의미론을 설명합니다. 여러 메시지에 대한 더 복잡한 논리를 가질 수 있는 사용자 정의 트리거 조건이 실행기로 전달될 수 있습니다. 여기에는 인터럽트와 같은 하드웨어 트리거도 포함될 수 있습니다. <center>
<img src="_docs/concepts/client_library/execution_management/png/trigger_user_defined.png" alt="사용자 정의 트리거 조건" width="30%" /> </center> <center> 그림 14: 사용자 정의 트리거 조건 </center>

#### LET-세마틱스 - 가정: 시간 트리거 시스템, 실행기는 주기적으로 활성화됨 - 트리거가 발생하면 모든 입력 데이터를 읽고 로컬 복사본 생성 - 모든 콜백을 순차적 순서로 처리 - 실행기 주기 종료 시 출력 데이터 기록 (참고: 아직 구현되지 않음)

추가로 현재 rclcpp 실행기 의미론("RCLCPP")을 구현했습니다: - 모든 핸들에 대한 새 데이터 대기 (rcl_wait) - 트리거 조건 ANY 사용 - 트리거 발동 시, 사전 정의된 순차적 순서로 핸들 처리 시작 - 핸들 실행 직전에 DDS 큐에서 새 데이터 요청 (rcl_take)

실행기 의미론 선택은 선택 사항입니다. 기본 의미론은 "RCLCPP"입니다. #### 멀티스레딩 및 스케줄링 구성 rclc 실행기는 멀티스레딩을 위해 확장되었습니다. 구독 콜백에 우선순위나 예약 기반 스케줄링과 같은 고급 스케줄링 알고리즘과 같은 스케줄링 정책 할당을 지원합니다. [[풀 리퀘스트](https://github.com/ros2/rclc/pull/87), 프리프린트 [SLD2021](#SLD2021)]. 전체 아키텍처는 그림 15에 표시되어 있습니다. 하나의 Executor 스레드가 DDS 큐에서 새 데이터를 확인하는 역할을 담당합니다. 각 콜백마다 운영 체제가 제공하는 전용 스케줄링 정책으로 스레드가 생성됩니다. 그런 다음 Executor는 구독의 새 데이터를 해당 콜백 함수로 전달하며, 운영 체제가 이를 자체 스레드에서 실행합니다.

<center> <img src="_docs/concepts/client_library/execution_management/png/rclc_executor_multi_threaded.png" alt="멀티스레드 rclc Executor" width="90%" /> </center> <center> 그림 15: 멀티스레드 rclc-Executor </center>

### Executor API rclc Executor의 API는 구성(Configuration)과 실행(Running) 두 단계로 나눌 수 있습니다. #### 구성 단계 구성 단계에서 사용자는 다음을 정의해야 합니다: - 총 콜백 수 - 콜백 순서 - 트리거 조건(선택 사항, 기본값: ANY) - 데이터 통신 세마틱(선택 사항, 기본값: ROS2)

이 Executor는 임베디드 컨트롤러용으로 설계되었으므로 동적 메모리 관리가 매우 중요합니다. 따라서 rclc Executor 초기화 시 사용자는 총 콜백 수를 정의합니다. 필요한 동적 메모리는 이 단계에서만 할당되며 실행 단계에서는 추가 메모리가 할당되지 않습니다. 이는 실행 중에 추가 콜백을 추가할 수 없다는 점에서 이 Executor가 정적(static)임을 의미합니다.

그런 다음 사용자는 핸들과 해당 콜백(예: 구독 및 타이머용)을 Executor에 추가합니다. 이 작업의 순서는 실행 시 순차적 처리 순서를 정의합니다. 각 핸들에 대해 사용자는 콜백이 새 데이터가 있을 때만 실행될지(ON_NEW_DATA), 아니면 항상 실행될지(ALWAYS) 지정할 수 있습니다. 두 번째 옵션은 콜백이 고정된 속도로 호출될 것으로 예상될 때 유용합니다. 트리거 조건은 이러한 콜백의 처리가 언제 시작되어야 하는지를 정의합니다. 편의를 위해 몇 가지 기본 조건이 정의되어 있습니다: - trigger_any(기본값) : 어떤 콜백이든 새 데이터가 있으면 실행 시작 - trigger_all : 모든 콜백에 새 데이터가 있으면 실행 시작
- trigger_one(&`data`): `data`가 수신된 경우 실행 시작 - user_defined_function: 사용자가 더 복잡한 로직을 가진 자체 함수를 정의할 수 있음 'trigger_any'가 기본값으로 설정되어 있어 현재 rclcpp Executor의 의미론이 선택됩니다. 데이터 통신 의미론은 다음과 같습니다: - ROS2 (기본값) - LET

ROS2 rclcpp Executor와의 호환성을 위해 기존 rclcpp 의미론은 'ROS2'로 구현됩니다. 즉, 스핀 함수를 통해 DDS 큐를 지속적으로 모니터링하여 새 데이터를 감지합니다(rcl_wait). 새 데이터가 사용 가능해지면 콜백 실행 직전에 DDS에서 즉시 가져옵니다(rcl_take). 모든 콜백은 사용자 정의 순서대로 처리됩니다. 이는 순서 지정이 불가능한 rclcpp 실행기와 유일한 차이점입니다. 둘째, LET 의미론은 처리 시작 시점에 사용 가능한 모든 데이터를 가져와(rcl_take) 버퍼링한 후, 미리 정의된 순서에 따라 버퍼링된 복사본을 대상으로 콜백을 처리하도록 구현됩니다. #### 실행 단계

주요 기능으로, 이 Executor는 ROS2의 rclcpp Executor와 마찬가지로 DDS 큐에서 새 데이터를 지속적으로 확인하는 `spin` 함수를 제공합니다. 트리거 조건이 충족되면 DDS 큐의 사용 가능한 모든 데이터가 지정된 의미론(ROS 또는 LET)에 따라 사용자 정의 순차적 순서로 처리됩니다. 모든 콜백이 처리된 후 DDS에서 새 데이터를 다시 확인합니다.

사용 가능한 spin 함수는 다음과 같습니다. - `spin_some` - 한 번만 실행 - `spin_period` - 주기적으로 실행 - `spin` - 무한히 실행 ### 예시 위에서 설명한 처리 패턴에 맞게 rclc Executor를 설정하는 관련 코드 스니펫을 제공합니다. #### 로봇공학 예시: 감지-계획-실행 파이프라인 이 예제에서는 단일 스레드 내에서 감지-계획-실행 파이프라인을 구현하고자 합니다. 트리거 조건은 레이저와 IMU 데이터가 모두 사용 가능할 때 감지 단계를 활성화함으로써 구현됩니다. `exe_sense`, `exe_plan`, `exe_act`라는 세 개의 실행기가 필요합니다. 두 개의 센서 획득 콜백 `sense_Laser`와 `sense_IMU`는 실행기 `exe_sense`에 등록됩니다.
트리거 조건 ALL은 이 두 콜백의 모든 데이터가 준비되었을 때만 감지 단계를 활성화합니다. 마지막으로 세 실행기 모두 `while` 루프와 `spin_some` 함수를 사용하여 회전합니다. 콜백 정의는 생략합니다. ```C ... rcl_subscription_t sense_Laser, sense_IMU, plan, act;
rcle_let_executor_t exe_sense, exe_plan, exe_act; // 실행기 초기화 rclc_executor_init(&exe_sense, &context, 2, ...); rclc_executor_init(&exe_plan, &context, 1, ...);
rclc_executor_init(&exe_act, &context, 1, ...); // 감지 단계용 실행기 rclc_executor_add_subscription(&exe_sense, &sense_Laser, &my_sub_cb1, ON_NEW_DATA);
rclc_executor_add_subscription(&exe_sense, &sense_IMU, &my_sub_cb2, ON_NEW_DATA); rclc_let_executor_set_trigger(&exe_sense, rclc_executor_trigger_all, NULL);
// 계획 단계용 실행기 rclc_executor_add_subscription(&exe_plan, &plan, &my_sub_cb3, ON_NEW_DATA); // 실행 단계용 실행기 rclc_executor_add_subscription(&exe_act, &act, &my_sub_cb4, ON_NEW_DATA);

// 모든 실행기 스핀 while (true) { rclc_executor_spin_some(&exe_sense, RCL_MS_TO_NS(100)); rclc_executor_spin_some(&exe_plan, RCL_MS_TO_NS(100));
  rclc_executor_spin_some(&exe_act, RCL_MS_TO_NS(100)); } ``` #### 다중 속도 동기화 예시 트리거를 사용하여 다중 속도를 동기화하는 센서 퓨전 예시는 다음과 같습니다. ```C ... rcl_subscription_t aggr_IMU, sense_Laser, sense_IMU;
rcle_let_executor_t exe_aggr, exe_sense; // 실행기 초기화 rclc_executor_init(&exe_aggr, &context, 1, ...); rclc_executor_init(&exe_sense, &context, 2, ...); // 통합 IMU 데이터용 실행기
rclc_executor_add_subscription(&exe_aggr, &aggr_IMU, &my_sub_cb1, ON_NEW_DATA); // 센싱 단계용 실행기 rclc_executor_add_subscription(&exe_sense, &sense_Laser, &my_sub_cb2, ON_NEW_DATA);
rclc_executor_add_subscription(&exe_sense, &sense_IMU, &my_sub_cb3, ON_NEW_DATA); rclc_executor_set_trigger(&exe_sense, rclc_executor_trigger_all, NULL);

// 모든 실행기를 스핀 상태로 유지 while (true) { rclc_executor_spin_some(&exe_aggr, RCL_MS_TO_NS(100)); rclc_executor_spin_some(&exe_sense, RCL_MS_TO_NS(100)); }
``` 순차적 실행을 사용하는 센서 융합 설정은 아래와 같습니다. 순차적 순서는 `sense_IMU`(통합 IMU 메시지를 요청)와 `sense_Laser`(레이저 메시지 수신 시 트리거 발동)임을 유의하십시오. ```C ... rcl_subscription_t sense_Laser, sense_IMU;
rcle_let_executor_t exe_sense; // 실행기 초기화 rclc_executor_init(&exe_sense, &context, 2, ...); // 감지 단계용 실행기 rclc_executor_add_subscription(&exe_sense, &sense_IMU, &my_sub_cb1, ALWAYS);
rclc_executor_add_subscription(&exe_sense, &sense_Laser, &my_sub_cb2, ON_NEW_DATA); rclc_executor_set_trigger(&exe_sense, rclc_executor_trigger_one, &sense_Laser);
// 스핀 rclc_executor_spin(&exe_sense); ``` #### 고우선순위 처리 경로 예시 이 예시는 감지 단계의 콜백 실행 후, 계획 단계 `plan`의 콜백 실행 전에 장애물 회피 `obst_avoid`를 순차적으로 실행하는 순서를 보여줍니다.
레이저 메시지가 수신되면 제어 루프가 시작됩니다. 그런 다음 위 예제와 같이 통합된 IMU 메시지를 요청합니다. 이후 다른 모든 콜백이 항상 실행됩니다. 이는 해당 콜백들이 전역 데이터 구조를 통해 통신한다고 가정합니다. 콜백들이 모두 하나의 스레드에서 실행되므로 경합 상태는 발생할 수 없습니다.

```C ... rcl_subscription_t sense_Laser, sense_IMU, plan, act, obst_avoid; rcle_let_executor_t exe; // 실행기 초기화 rclc_executor_init(&exe, &context, 5, ...);
// 처리 순서 정의 rclc_executor_add_subscription(&exe, &sense_IMU, &my_sub_cb1, ALWAYS); rclc_executor_add_subscription(&exe, &sense_Laser, &my_sub_cb2, ON_NEW_DATA);
rclc_executor_add_subscription(&exe, &obst_avoid, &my_sub_cb3, ALWAYS); rclc_executor_add_subscription(&exe, &plan, &my_sub_cb4, ALWAYS);
rclc_executor_add_subscription(&exe, &act, &my_sub_cb5, ALWAYS); rclc_executor_set_trigger(&exe, rclc_executor_trigger_one, &sense_Laser); // 스핀 rclc_executor_spin(&exe); ``` #### 실시간 임베디드 애플리케이션 예시 순차적 실행을 통해 프로세스 내 작업들의 협력적 스케줄링을 모델링할 수 있습니다. 트리거 조건은 주기적으로 프로세스를 활성화하는 데 사용되며, 활성화된 프로세스는 미리 정의된 순서대로 모든 콜백을 실행합니다. 데이터는 LET-세манти스를 사용하여 통신됩니다. 각 실행기(Executor)는 자체 스레드에서 실행되며, 해당 스레드에는 적절한 우선순위가 할당될 수 있습니다.

다음 예제에서는 실행기를 4개의 핸들로 설정합니다. 프로세스가 `sub1`, `sub2`, `sub3` 세 개의 구독을 가졌다고 가정합니다. 순차적 처리 순서는 실행기에 추가되는 순서에 따라 결정됩니다. 타이머 `timer`가 주기를 정의합니다. 매개변수 `timer`를 가진 `trigger_one`을 사용하므로, 타이머가 준비될 때마다 모든 콜백이 처리됩니다. 마지막으로 데이터 통신 의미론 LET이 정의됩니다. ```C #include "rcl_executor/let_executor.h" // 구독 콜백 정의 void my_sub_cb1(const void * msgin) { // ... } // 구독 콜백 정의 void my_sub_cb2(const void * msgin) {
  // ... } // 구독 콜백 정의 void my_sub_cb3(const void * msgin) { // ... } // 타이머 콜백 정의 void my_timer_cb(rcl_timer_t * timer, int64_t last_call_time) { // ... }

// 필요한 ROS 2 객체 rcl_context_t context; rcl_node_t node; rcl_subscription_t sub1, sub2, sub3; rcl_timer_t timer; rcle_let_executor_t exe; // ROS 컨텍스트 정의 context = rcl_get_zero_initialized_context();
// ROS 노드 초기화 rcl_node_init(&node, &context,...); // 구독 생성 rcl_subscription_init(&sub1, &node, ...); rcl_subscription_init(&sub2, &node, ...); rcl_subscription_init(&sub3, &node, ...);
// 타이머 생성 rcl_timer_init(&timer, &my_timer_cb, ... ); // 4개의 핸들로 실행기 초기화 rclc_executor_init(&exe, &context, 4, ...);
// 핸들의 정적 실행 순서 정의 rclc_executor_add_subscription(&exe, &sub1, &my_sub_cb1, ALWAYS); rclc_executor_add_subscription(&exe, &sub2, &my_sub_cb2, ALWAYS);
rclc_executor_add_subscription(&exe, &sub3, &my_sub_cb3, ALWAYS);
rclc_executor_add_timer(&exe, &timer); // 핸들 'timer' 준비 완료 시 트리거 rclc_executor_set_trigger(&exe, rclc_executor_trigger_one, &timer);
// LET 의미론 선택 rclc_executor_data_comm_semantics(&exe, LET); // 무한 루프 실행 rclc_executor_spin(&exe); ``` #### ROS 2 Executor 워크숍 참조 시스템
rclc Executor는 [ROS World 2021](https://roscon.ros.org/world/2021/) (즉, ROSCon의 온라인 버전)[[S2021](#S2021)]에서 열린 'ROS 2 Executor: 효율적이고 실시간이며 결정론적으로 만드는 방법?' 워크숍에서 발표되었습니다. 이 워크숍을 위해 ROS 실행기를 테스트하고 벤치마킹하기 위한 [참조 시스템](https://github.com/ros-realtime/reference-system)이 개발되었습니다. 트리거 조건이 적용된 참조 시스템에서의 rclc 실행기 적용 예시는 [참조 시스템의 rclc-executor 브랜치](https://github.com/ros-realtime/reference-system/tree/rclc_executor)에서 확인할 수 있습니다.

<iframe width="560" height="315" src="https://www.youtube.com/embed/IazrPF3RN1U" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

슬라이드는 [여기](https://ec2a4d36-bac8-4759-b25e-bb1f794177f4.filesusr.com/ugd/984e93_749e27b917a54b45b9ccb5be930841b8.pdf)에서 다운로드할 수 있습니다. 워크숍의 다른 발표 자료와 동영상, 슬라이드는 [www.apex.ai/roscon-21](https://www.apex.ai/roscon-21)에서 확인하실 수 있습니다. ### 향후 연구 과제 - 완전한 LET 의미론 (기간 종료 시 데이터 기록) - 주기적으로 게시하는 단일 게시자
  - 실행기가 다중 스레드에서 실행될 경우, 게시 작업은 원자적이어야 함 - 기본 운영체제의 스케줄링 정책 할당을 지원하는 다중 스레드 실행기. [[풀 리퀘스트](https://github.com/ros2/rclc/pull/87), 사전 인쇄본 [SLD2021](#SLD2021)].

### 다운로드 rclc 실행기는 [ros2/rclc 저장소](https://github.com/ros2/rclc)에서 다운로드할 수 있습니다. ROS 2의 Humble, Iron 및 Rolling 버전에서 사용 가능합니다. 이 저장소에는 [rclc 실행기](https://github.com/ros2/rclc/tree/master/rclc)와 여러 응용 예제가 포함된 [rclc_examples 패키지](https://github.com/ros2/rclc/tree/master/rclc_examples) 등 여러 패키지가 제공됩니다. ## 콜백 그룹 수준 실행기 콜백 그룹 수준 실행기는 마이크로-ROS에서 개발된 정교한 rclcpp 실행기 API의 초기 프로토타입이었다. 이는 기본 rclcpp 실행기에서 파생되었으며 앞서 언급된 몇 가지 결함을 해결한다. 가장 중요한 점은, 이 실행기를 통해 기반 계층(rcl, rmw, rmw_adapter, DDS)이 부정적 간섭 없이 다중 실행기 인스턴스를 허용함을 검증하는 데 사용되었다는 것이다.

기본 rclcpp Executor는 노드 수준 세분성으로 작동하는데, 이는 노드가 서로 다른 실시간 보장이 필요한 다양한 콜백을 발행할 수 있다는 점을 고려할 때 한계입니다. 따라서 콜백 그룹 단위의 세분성으로 콜백 스케줄링을 더 정밀하게 제어할 수 있도록 API를 개선하기로 결정했습니다. 우리는 rclcpp에 존재하는 콜백 그룹 개념을 활용하여 콜백 그룹 API(즉, rclcpp/callback_group.hpp)에 RT-CRITICAL 및 BEST-EFFORT와 같은 실시간 프로파일을 도입했습니다. 특정 실시간 보장이 필요한 각 콜백은 생성 시 전용 콜백 그룹과 연결될 수 있습니다. 이를 바탕으로 Executor 및 종속 클래스(예: 메모리 할당)가 더 세분화된 콜백 그룹 단위로 작동하도록 개선했습니다. 이를 통해 단일 노드 내에서 서로 다른 Executor 인스턴스에 서로 다른 실시간 프로파일을 가진 콜백을 할당할 수 있습니다.

따라서 Executor 인스턴스는 특정 콜백 그룹에 전념할 수 있으며, Executor의 스레드는 해당 그룹의 실시간 요구사항에 따라 우선순위가 지정될 수 있습니다. 예를 들어, 모든 시간에 민감한 콜백은 최고 스케줄러 우선순위로 실행되는 "RT-CRITICAL" Executor 인스턴스에 의해 처리됩니다.

다음 그림은 하나의 프로세스 내에서 세 개의 콜백 그룹 수준 Executor가 두 노드를 서비스하는 이 접근 방식을 보여줍니다: <center> <img src="_docs/concepts/client_library/execution_management/png/cbg-executor_sample_system.png" alt="두 노드와 하나의 프로세스 내 세 개의 콜백 그룹 수준 Executor를 가진 샘플 시스템" width="60%" />
</center> 드라이브 베이스 노드의 서로 다른 콜백은 서로 다른 실행기(빨간색, 노란색, 녹색으로 시각화됨)에 분산됩니다. 예를 들어 onCmdVel 및 publishWheelTicks 콜백은 동일한 실행기(노란색)에 의해 스케줄링됩니다. 서로 다른 노드의 콜백은 동일한 실행기에 의해 처리될 수 있습니다.

### API 변경 사항 이 섹션에서는 Executor API에 필요한 변경 사항을 설명합니다: * [include/rclcpp/callback\_group.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/callback_group.hpp):

    * 노드당 최대 세 가지 실시간 등급(요구 사항)을 구분하기 위한 열거형 도입 (RealTimeCritical, SoftRealTime, BestEffort) * Executor 인스턴스와의 연관성을 노드에서 콜백 그룹으로 변경.
* [include/rclcpp/executor.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executor.hpp) * 전체 노드 외에도 개별 콜백 그룹을 추가 및 제거하는 함수를 추가했습니다.

    * 노드 전용 벡터를 콜백 그룹에서 노드로의 맵으로 대체했습니다. * [include/rclcpp/memory\_strategy.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/memory_strategy.hpp)

    * 노드 벡터를 기대하는 모든 함수를 앞서 언급한 맵으로 변경했습니다. * [include/rclcpp/node.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/node.hpp) 및 [include/rclcpp/node_interfaces/node_base.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/node_interfaces/node_base.hpp) * 실시간 클래스를 위한 create_callback_group 함수의 인수를 확장했습니다.
    * get_associated_with_executor_atomic 함수를 제거했습니다. 콜백 그룹 수준 실행기는 [풀 리퀘스트 1218](https://github.com/ros2/rclcpp/pull/1218/commits)을 통해 ROS 2 rclcpp에 병합되었습니다.

### 테스트 벤치 개념 증명을 위해 현재 패키지 cbg-executor_ping-pong_cpp에 소규모 테스트 벤치를 구현했습니다. 이 테스트 벤치는 Ping 노드와 Pong 노드로 구성되며, 두 노드는 실시간 메시지와 최선의 노력(best-effort) 메시지를 동시에 교환합니다. 각 메시지 클래스는 다음 그림과 같이 전용 실행기(Executor)로 처리됩니다.

<center> <img src="_docs/concepts/client_library/execution_management/png/ping_pong_diagram.png" alt="콜백 그룹 수준 실행기 테스트 벤치 아키텍처" width="100%" /> </center> 이 테스트 벤치를 통해 접근 방식의 작동 여부를 검증했습니다. <center> <img src="_docs/concepts/client_library/execution_management/png/cbg_executor_demo_plot.png" alt="콜백 그룹 수준 실행기 테스트 벤치 결과" width="80%" /> </center>

이 예시에서 Pong 노드 내 고우선순위 작업(빨간 선)의 콜백은 10ms, 저우선순위 작업(파란 선)은 40ms를 소모합니다. 20Hz의 핑률에서는 CPU가 포화 상태에 이릅니다(10ms×20+40ms×20=1000ms). 주파수가 높아질수록 고우선순위 작업은 퐁 메시지 전송을 지속할 수 있는 반면, 저우선순위 퐁 작업은 성능이 저하됩니다. 100Hz 주파수에서는 고우선순위 작업이 CPU 사용률 100%를 요구합니다. 더 높은 핑 레이트에서는 100Hz로 퐁 메시지를 계속 전송하는 반면, 저우선순위 작업은 더 이상 CPU 자원을 확보하지 못해 메시지를 전송할 수 없습니다.

테스트 벤치는 [cbg_executor_demo](https://github.com/ros2/examples/tree/master/rclcpp/executors/cbg_executor)에서 제공됩니다. ## 관련 연구 본 절에서는 관련 접근법을 개괄하고 해당 API로 연결합니다.

### Fawkes 프레임워크 [Fawkes](http://www.fawkesrobotics.org/)는 감지-계획-실행(sense-plan-act) 방식의 실행을 위한 동기화 지점을 지원하는 로봇 소프트웨어 프레임워크입니다. 2006년부터 RWTH 아헨 공대에서 개발되었습니다. 소스 코드는 [github.com/fawkesrobotics](https://github.com/fawkesrobotics)에서 확인할 수 있습니다.

#### 동기화 Fawkes는 개발자에게 다양한 동기화 지점을 제공하며, 이는 전형적인 감지-계획-실행 애플리케이션의 실행 순서를 정의하는 데 매우 유용합니다. 다음은 10개의 동기화 포인트(웨이크업 훅)입니다([libs/aspect/blocked_timing.h](https://github.com/fawkesrobotics/fawkes/blob/master/src/libs/aspect/blocked_timing.h) 참조):

* WAKEUP_HOOK_PRE_LOOP * WAKEUP_HOOK_SENSOR_ACQUIRE * WAKEUP_HOOK_SENSOR_PREPARE
* WAKEUP_HOOK_SENSOR_PROCESS * WAKEUP_HOOK_WORLDSTATE * WAKEUP_HOOK_THINK * WAKEUP_HOOK_SKILL * WAKEUP_HOOK_ACT * WAKEUP_HOOK_ACT_EXEC
* WAKEUP_HOOK_POST_LOOP #### 컴파일 시점 구성 컴파일 시점에 원하는 동기화 지점은 모듈 생성자 매개변수로 정의됩니다. 예를 들어, `mapLaserGenThread`가 SENSOR_ACQUIRE에서 실행되도록 하려면 생성자는 다음과 같이 구현됩니다: ```C++ MapLaserGenThread::MapLaserGenThread()
  :: Thread("MapLaserGenThread", Thread::OPMODE_WAITFORWAKEUP), BlockedTimingAspect(BlockedTimingAspect::WAKEUP_HOOK_SENSOR_ACQUIRE), TransformAspect(TransformAspect::BOTH_DEFER_PUBLISHER, "Map Laser Odometry")
``` 마찬가지로, `NaoQiButtonThread`가 SENSOR_PROCESS 훅에서 실행되도록 하려면 생성자는 다음과 같습니다:

```C++ NaoQiButtonThread::NaoQiButtonThread() :: Thread("NaoQiButtonThread", Thread::OPMODE_WAITFORWAKEUP), BlockedTimingAspect(BlockedTimingAspect::WAKEUP_HOOK_SENSOR_PROCESS) ```

#### 런타임 실행 런타임에는 *Executor*가 동기화 포인트 목록을 순회하며 등록된 모든 스레드를 완료될 때까지 실행합니다. 이후 다음 동기화 포인트의 스레드들이 호출됩니다. 모듈(스레드)은 이러한 sense-plan-act 동기화 포인트와 독립적으로 구성될 수 있습니다. 이는 해당 스레드가 이 체인과 병렬로 실행된다는 효과를 가져옵니다.

Fawkes 프레임워크의 고수준 개요는 다음 그림에 표시됩니다. 컴파일 시에는 감지-계획-실행 웨이크업 훅의 구성이 이루어지며(상단), 런타임에는 스케줄러가 이 웨이크업 훅 목록을 순회합니다(하단): <center>
<img src="_docs/concepts/client_library/execution_management/png/fawkes_executor_diagram.png" alt="Fawkes 실행기 시퀀스 다이어그램" width="50%" /> </center> 따라서 런타임에는 후크가 선점 없이 고정된 정적 스케줄로 실행됩니다. 동일한 후크에 등록된 다중 스레드는 병렬로 실행됩니다.

감지-계획-실행과 같은 애플리케이션의 순차적 실행과 별개로, `Barrier`를 통해 실행 순서에 대한 추가 제약을 정의할 수 있습니다. 배리어는 배리어를 소유한 스레드가 시작되기 전에 완료되어야 하는 스레드 수를 정의합니다. 이러한 개념들은 다음 주요 클래스들에 의해 구현됩니다: * *Wakeup hook*는 `SyncPoint` 및 `SyncPointManager`에 의해 제공되며, 이는 동기화 포인트 목록을 관리합니다.
* *실행기*는 스케줄러 역할을 하는 `FawkesMainThread` 클래스로, 사용자 스레드 호출을 담당합니다. * `ThreadManager`는 `BlockedTimingExecutor`에서 파생되었으며, 웨이크업 훅에 스레드를 추가/제거하고 웨이크업 훅을 순차적으로 실행하는 데 필요한 API를 제공합니다. * `Barrier`는 C++의 `condition_variable`과 유사한 객체입니다.

#### 논의 모든 스레드는 동일한 우선순위로 실행됩니다. 비상 정지를 정상 작동보다 우선 실행하는 등 서로 다른 우선순위로 실행해야 하는 다중 감지-계획-실행 체인이 존재할 경우, 이 프레임워크는 한계에 부딪힙니다. 또한 단일 감지-계획-실행 체인 인스턴스로는 서로 다른 실행 빈도를 모델링할 수 없습니다. 그러나 로봇공학에서는 가장 빠른 센서가 체인을 주도하며, 다른 모든 후크는 동일한 빈도로 실행됩니다.

사전 정의된 웨이크업 훅과 독립적으로 스레드를 실행할 수 있는 옵션은 진단 등에 매우 유용합니다. 배리어(Barrier) 개념은 실행 순서에서 고려해야 하는 기능적 종속성을 충족시키는 데 유용합니다. <!-- ### Orocos TODO 부분 순서 스케줄링에 대한 설명 삽입.


### CoSiMA TODO 다음 논문에서 OROCOS 기반 COSIMA의 모델 기반 접근법 설명 추가: D. L. Wigand, P. Mohammadi, E. M. Hoffman, N. G. Tsagarakis, J. J. Steil and S. Wrede, "An open-source architecture for simulation, execution and analysis of real-time robotics systems," 2018 IEEE International Conference on Simulation, Modeling, and Programming for Autonomous Robots (SIMPAR), Brisbane, QLD, 2018, pp. 93-100.
doi: 10.1109/SIMPAR.2018.8376277 URL: http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=8376277&isnumber=8376259
* [S2021]<a name="S2021"></a> J. Staschulat, "Micro-ROS: The rclc Executor", in Workshop ROS 2 Executor: How to make it efficient, real-time and deterministic? at ROS World, Oct. 2021, [[슬라이드](https://ec2a4d36-bac8-4759-b25e-bb1f794177f4.filesusr.com/ugd/984e93_749e27b917a54b45b9ccb5be930841b8.pdf)] [[동영상](https://www.youtube.com/embed/IazrPF3RN1U)]

* [SLD2021]<a name="SLD2021"></a> J. Staschulat, R. Lange 및 D. N. Dasari, "예산 기반 실시간 마이크로-ROS 실행기", arXiv 사전 인쇄본, 2021년 5월. [[논문](https://arxiv.org/abs/2105.05590)]

* [L2020]<a name="L2020"></a> Ralph Lange: ROS 2를 활용한 고급 실행 관리, ROS-Industrial 컨퍼런스, 2020년 12월 [[Slides]](https://micro-ros.github.io/download/2020-12-16_Advanced_Execution_Management_with_ROS_2.pdf)

* [SLL2020]<a name="SLL2020"></a> J. Staschulat, I. 뤼트케볼레, R. 랑게, "rclc 실행기: 마이크로컨트롤러 기반 ROS 애플리케이션을 위한 도메인 특화 결정론적 스케줄링 메커니즘: 진행 중인 연구," 2020 임베디드 소프트웨어 국제 컨퍼런스(EMSOFT), 싱가포르, 싱가포르, 2020, pp. 18-19. [[Paper]](https://ieeexplore.ieee.org/document/9244014) [[Video]](https://whova.com/embedded/session/eswe_202009/1145800/)

* [CB2019]<a name="CB2019"> </a> D. Casini, T. Blaß, I. Lütkebohle, B. Brandenburg: 예약 기반 스케줄링 하에서 ROS 2 처리 체인의 응답 시간 분석, Euromicro 실시간 시스템 컨퍼런스 2019. [[논문]](http://drops.dagstuhl.de/opus/volltexte/2019/10743/) [[슬라이드]](https://t-blass.de/talks/ECRTS2019.pdf)

* [L2018]<a name="L2018"></a> Ralph Lange: ROS 2용 콜백 그룹 수준 실행기. ROSCon 2018 라이트닝 토크. 스페인 마드리드. 2018년 9월. [[슬라이드]](https://roscon.ros.org/2018/presentations/ROSCon2018_Lightning1_4.pdf) [[동영상]](https://vimeo.com/292707644)

* [EK2018]<a name="EK2018"></a> R. Ernst, S. Kuntz, S. Quinton, M. Simons: 논리적 실행 시간 패러다임: 멀티코어 시스템을 위한 새로운 관점, 2018년 2월 25-28일 (Dagstuhl Seminar 18092). [[논문]](http://drops.dagstuhl.de/opus/volltexte/2018/9293/pdf/dagrep_v008_i002_p122_18092.pdf)

* [NSP2018]<a name="NSP2018"></a> A. Naderlinger, S. Resmerita, and W. Pree: 레거시 및 모델 기반 애플리케이션을 위한 LET,
논리적 실행 시간 패러다임: 멀티코어 시스템을 위한 새로운 관점 (Dagstuhl Seminar 18092) 논문집, 독일 바데른, 2018년 2월. * [BP2017]<a name="BP2017"></a> A. Biondi, P. Pazzaglia, A. Balsini, M. D. Natale: 멀티코어용 AUTOSAR 애플리케이션의 논리적 실행 시간 구현 및 메모리 최적화 문제, 임베디드 및 실시간 시스템 분석 도구 및 방법론 국제 워크숍 (WATERS2017), 크로아티아 두브로브니크.[[논문]](https://pdfs.semanticscholar.org/4a9e/b9a616c25fd0b4a4f7810924e73eee0e7515.pdf)

* [KZH2015]<a name="KZH2015"></a> S. Kramer, D. Ziegenbein, and A. Hamann: 무료 실제 자동차 벤치마크, 임베디드 및 실시간 시스템 분석 도구 및 방법론 국제 워크숍 (WATERS), 2015.

* [HHK2001]<a name="HHK2001"></a> Henzinger T.A., Horowitz B., Kirsch C.M. (2001) Giotto: 임베디드 프로그래밍을 위한 시간 트리거 언어. In: Henzinger T.A., Kirsch C.M. (eds) 임베디드 소프트웨어. EMSOFT 2001. Lecture Notes in Computer Science, vol 2211. Springer, Berlin, Heidelberg * [LL1973]<a name="LL1973"></a> Liu, C. L.; Layland, J.:Scheduling algorithms for multiprogramming in a hard real-time environment, Journal of the ACM, 20 (1): 46–61, 1973. ## 감사의 말 본 활동은 유럽 연합의 Horizon 2020 연구 및 혁신 프로그램(보조금 계약 번호 780785) 하에 유럽 연구 위원회(ERC)로부터 자금을 지원받았습니다.

--- ## 출처: `_docs/concepts/client_library/features/index.md` <a id="source-docs-concepts-client-library-features-index-md"></a>

표준 [ROS 2 클라이언트 지원 라이브러리(rcl)](https://github.com/ros2/rcl/)와 새로운 [ROS 2 클라이언트 라이브러리 패키지(rclc)](https://github.com/ros2/rclc/)로 구성된 마이크로-ROS 클라이언트 라이브러리는 다음과 같은 주요 ROS 개념을 모두 지원할 예정입니다. * 노드 * 퍼블리셔/서브스크립션
* 서비스/클라이언트 * 그래프 * 실행기 * 라이프사이클 * 파라미터

대부분의 기능은 Humble 릴리스에서 이미 사용할 수 있습니다. 상태에 대한 자세한 내용은 [기능 개요 페이지](/_docs/overview/features/)를 참조하십시오. rcl + rclc로 자체 애플리케이션 노드를 개발하는 방법을 배우려면 해당 [프로그래밍 튜토리얼](/_docs/tutorials/programming_rcl_rclc/)을 참조하십시오.

--- ## 출처: `_docs/concepts/client_library/introduction/index.md` <a id="source-docs-concepts-client-library-introduction-index-md"></a> 클라이언트 라이브러리는 사용자 코드, 즉 애플리케이션 수준의 마이크로-ROS 노드를 위한 마이크로-ROS API를 제공합니다. 목표는 마이크로컨트롤러에 최적화된 구현으로 모든 관련 주요 ROS 2 개념을 제공하는 것입니다. 동시에 코드 이식을 용이하게 하기 위해 API를 표준 ROS 2와 최대한 호환되도록 노력합니다. 장기적인 유지보수 비용을 최소화하기 위해 ROS 2 스택의 기존 데이터 구조와 알고리즘을 사용하고 필요한 변경 사항은 가능한 한 메인라인 스택에 반영합니다. 따라서 마이크로-ROS 클라이언트 라이브러리는 표준 [ROS 2 클라이언트 지원 라이브러리(rcl)](https://github.com/ros2/rcl/)와 새로운 [ROS 2 클라이언트 라이브러리 패키지(rclc)](https://github.com/ros2/rclc/)로 구성됩니다. 아래 그림과 같이 rcl + rclc는 C 프로그래밍 언어로 기능이 완벽한 클라이언트 라이브러리를 구성합니다. <img src="img/micro-ROS_architecture.png" style="display:block; width:50%; float:right;"/> 주요 기능 및 특성: * 래퍼로 인한 런타임 오버헤드를 피하기 위해 가능한 경우 rcl 데이터 구조체 사용.
* rclc가 제공하는 일반적인 작업(예: 퍼블리셔 생성, 구독 완료)을 위한 편의 함수. * 콜백의 트리거링 및 처리 순서를 세밀하게 제어하기 위한 전용 실행기(Executor). * 그래프, 라이프사이클 노드, 진단 등을 위한 특수 구현체. 자세한 내용은 하위 페이지(왼쪽 참조)를 확인하세요.

<br style="clear:both;" /> 관심 있는 독자를 위한 참고: rcl과 rclc의 조합을 선택한 배경은 2019년 작성된 [결정 문서(PDF)](/download/client_library_decision_paper_2019.pdf)에서 설명합니다.

--- ## 출처: `_docs/concepts/client_library/lifecycle_and_system_modes/index.md` <a id="source-docs-concepts-client-library-lifecycle-and-system-modes-index-md"></a> 목차 - [소개 및 목표](#introduction-and-goal) - [요구사항](#requirements) - [배경: ROS 2 라이프사이클](#background-ros-2-lifecycle) - [주요 기능](#main-features)
  - [기본 라이프사이클](#basic-lifecycle) - [확장 라이프사이클](#extended-lifecycle) - [시스템 계층 구조 및 모드](#system-hierarchy-and-modes) - [모드 추론](#mode-inference) - [모드 관리자](#mode-manager)
  - [오류 처리 및 규칙](#error-handling-and-rules) - [감사의 글](#acknowledgments) ## 소개 및 목표 현대 로봇 소프트웨어 아키텍처는 종종 계층적 접근 방식을 따릅니다. SLAM, 비전 기반 객체 인식, 모션 플래닝 등의 핵심 알고리즘을 포함하는 계층은 흔히 *스킬 계층* 또는 *기능 계층*으로 불립니다. 복잡한 작업을 수행하기 위해 이러한 스킬들은 *실행 계층(executive layer)* 및 *계획 계층(planning layer)*으로 명명된 하나 이상의 상위 계층에 의해 조정됩니다. 다른 일반적인 명칭으로는 *작업 및 임무 계층(task and mission layer)* 또는 *의사 결정 계층(deliberation layer(s))*이 있습니다. 이하에서는 후자의 용어를 사용합니다. 의사 결정 계층에서 처리해야 할 서로 다르지만 밀접하게 연관된 세 가지 측면을 관찰했습니다:

1. **작업 처리**: 실제 작업의 조정, 즉 *직접적이고* *오류 없는* 흐름. 2. **비상 상황 처리**: 작업별 비상 상황 처리, 예: 예상 가능한 재시도 및 실패 시도, 장애물, 배터리 부족. 3. **시스템 오류 처리**: 예외 상황 처리, 예: 센서/액추에이터 고장.

스킬을 조율하는 데 사용되는 메커니즘은 서비스 및 액션 호출, 재매개변수화, 값 설정, 컴포넌트 활성화/비활성화 등입니다. 우리는 실행 중인 스킬 컴포넌트에 대한 *기능 중심 호출*(값 설정, 액션 쿼리 등)과 개별 또는 다중 컴포넌트에 대한 *시스템 중심 호출*(컴포넌트 모드 전환, 재시작, 종료 등)을 구분합니다.

![스킬과 의사결정 계층 간의 상호작용](_docs/concepts/client_library/lifecycle_and_system_modes/interactions_between_skill_and_deliberation_layer.png)

유사하게, 우리는 장기 실행 서비스 호출에 대한 피드백 형태의 *기능 중심 알림*(환경 내 관련 이벤트에 대한 메시지 등)과 *시스템 중심 알림*(구성 요소 장애, 하드웨어 오류 등)을 구분합니다. 우리의 관찰에 따르면, 작업 처리, 비상 상황 처리, 시스템 오류 처리가 서로 얽히면 일반적으로 심의 계층의 제어 흐름이 매우 복잡해집니다. 그러나 우리는 시스템 지향 호출 및 알림에 대한 적절한 추상화를 도입함으로써 이러한 복잡성을 줄일 수 있다고 가정합니다. 따라서 본 작업의 **목표**는 (1) 시스템 런타임 구성 및 (2) 시스템 오류 및 비상 상황 진단을 위한 적합한 추상화와 프레임워크 기능을 제공하여 애플리케이션 개발자가 작업, 비상 상황 및 오류 처리를 설계하고 구현하는 노력을 줄이는 것입니다.

이 목표는 모델 파일을 기반으로 설명 및 관리되는 다음 예시 아키텍처에서 확인할 수 있습니다: ![High-level Architecture](_docs/concepts/client_library/lifecycle_and_system_modes/mode-management.png)

이 접근법의 주요 특징은 다음과 같습니다(상세 내용은 후술): 1. _확장된 라이프사이클_: 구성 요소의 런타임 상태(즉, ROS 2 라이프사이클 노드)를 지정하기 위한 확장 가능한 개념. 2. _시스템 계층 구조 및 모드_: 시스템 계층 구조와 _시스템 모드_(즉, 다양한 (하위)시스템 구성) 측면에서 ROS 시스템을 지정하기 위한 모델링 접근법.
3. _모드 관리자_: 시스템 런타임 구성을 관리하고 변경하는 모듈. 4. _모드 추론_: 관측 가능한 시스템 정보(즉, 구성 요소의 상태, 모드 및 매개변수)로부터 전체 시스템 상태와 모드를 도출하는 모듈.
5. _오류 처리_: 오류 처리 및 복구 메커니즘을 지정하기 위한 경량 개념. ## 요구사항 요구사항 목록은 micro-ROS 시스템 모드 저장소의 doc 폴더에서 관리됩니다: https://github.com/micro-ROS/system_modes/blob/master/system_modes/doc/requirements.md

## 배경: ROS 2 라이프사이클 본 접근 방식은 ROS 2 라이프사이클을 기반으로 합니다. ROS 2 라이프사이클의 주요 목표는 ROS 시스템 상태에 대한 통제력을 강화하는 것입니다. 이를 통해 런타임 중 시스템 구성 요소의 일관된 초기화, 재시작 및/또는 교체가 가능합니다. 관리되는 ROS 2 노드에 대한 기본 라이프사이클과 라이프사이클 노드 관리를 위한 일련의 도구를 제공합니다. 개념에 대한 설명은 다음에서 확인할 수 있습니다: [http://design.ros2.org/articles/node_lifecycle.html](http://design.ros2.org/articles/node_lifecycle.md)
라이프사이클 노드의 구현은 다음에서 확인할 수 있습니다: [https://design.ros2.org/articles/node_lifecycle.html](https://design.ros2.org/articles/node_lifecycle.md). ## 주요 기능 ### 기본 라이프사이클

ROS 2 라이프사이클은 C 프로그래밍 언어 클라이언트 라이브러리 *[rclc](https://github.com/ros2/rclc)*의 일부로 micro-ROS에 구현되었습니다. 소스 코드와 문서는 [rclc_lifecycle](https://github.com/ros2/rclc/tree/master/rclc_lifecycle)에서 확인할 수 있습니다.

rclc_lifecycle 패키지는 C 프로그래밍 언어에서 ROS 클라이언트 라이브러리(rcl) 노드를 ROS 2 노드 라이프사이클 상태 머신과 결합하는 편의를 제공하는 ROS 2 패키지입니다. 이는 [rclcpp 라이프사이클 노드](https://github.com/ros2/rclcpp/blob/master/rclcpp_lifecycle/include/rclcpp_lifecycle/lifecycle_node.hpp)와 유사합니다.

rclc 라이프사이클 노드 사용 예시는 [rclc_examples](https://github.com/ros2/rclc/blob/master/rclc_examples/) 패키지의 `lifecycle_node.c` 파일에서 확인할 수 있습니다.

### 확장된 라이프사이클 마이크로-ROS에서는 표준 ROS 2 매개변수 메커니즘을 기반으로 *활성* 상태를 전문화하는 모드(즉, 하위 상태)를 지정할 수 있도록 하여 ROS 2 라이프사이클을 확장합니다. 우리는 ROS 2 및 마이크로-ROS용 rclc_lifecycle과 rclcpp_lifecycle을 기반으로 이 개념을 구현했습니다.

문서와 코드는 다음에서 확인할 수 있습니다: [github.com:system_modes/README.md#lifecycle](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#lifecycle)

### 시스템 계층 구조 및 모드 우리는 노드로부터 재귀적으로 시스템의 계층적 구성을 지정하고, 노드와 유사하게 확장된 라이프사이클을 가진 시스템 및 (하위)시스템의 상태와 모드를 지정하기 위한 모델링 개념을 제공합니다. 이 시스템 모드 및 계층 구조(SMH) 모델은 또한 시스템 계층 구조를 따라 노드까지 상태와 모드를 매핑하는 애플리케이션 특화 방식을 포함합니다.

이 모델에 대한 설명은 다음에서 확인할 수 있습니다: [github.com:system_modes/README.md#system-modes](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#system-modes)
간단한 예시는 다음에서 확인할 수 있습니다: [github.com:system_modes_examples/README.md#example-mode-file](https://github.com/micro-ROS/system_modes/blob/master/system_modes_examples/README.md#example-mode-file)

### 모드 추론 모드 추론은 구성 요소(즉, ROS 2 라이프사이클 노드)의 라이프사이클 상태, 모드 및 매개변수 구성을 기반으로 전체 시스템 상태(및 모드)를 추론합니다. SMH 모델을 파싱하고 라이프사이클/모드 변경 요청, 라이프사이클/모드 변경 및 매개변수 이벤트를 구독합니다.

라이프사이클 변경 이벤트를 통해 모든 노드의 _실제_ 라이프사이클 상태를 파악합니다. 매개변수 변경 이벤트를 통해 모든 노드의 _실제_ 매개변수 값을 파악하며, 이를 바탕으로 SMH 모델에 따라 모든 노드의 _모드_를 추론할 수 있습니다. SMH 모델과 모든 노드의 추론된 상태 및 모드를 기반으로, 시스템 계층 구조를 따라 모든 (하위) 시스템의 상태와 모드를 상향식(bottom-up)으로 _추론_할 수 있습니다.
이를 최신 _요청된_ 상태 및 모드와 비교하여 편차를 감지할 수 있습니다. 문서와 코드는 다음에서 확인할 수 있습니다: [github.com:system_modes/README.md#mode-inference](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#mode-inference)
모드 추론은 콘솔 기반 디버깅 도구인 모드 모니터에서 가장 잘 관찰할 수 있습니다. 참조: [github.com:system_modes/README.md#mode-monitor](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#mode-monitor)

### 모드 관리자 _모드 추론_ 메커니즘을 기반으로 하는 모드 관리자는 SMH 모델의 사양에 따라 시스템 상태와 모드를 _관리하고 조정_하기 위한 추가 서비스와 주제를 제공합니다.

문서와 코드는 다음에서 확인할 수 있습니다: [github.com:system_modes/README.md#mode-manager](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#mode-manager)
간단한 예제는 다음에서 확인할 수 있습니다: [github.com:system_modes_examples/README.md#setup](https://github.com/micro-ROS/system_modes/blob/master/system_modes_examples/README.md#setup) ### 오류 처리 및 규칙 시스템 또는 그 구성 요소의 실제 상태/모드가 목표 상태/모드와 일치하지 않을 경우, 시스템을 유효한 목표 상태/모드(예: 저하 모드)로 복귀시키려는 규칙을 정의합니다. 규칙은 하향식 방식으로 작동하며, 즉 노드 → 하위 시스템 → 시스템 순으로 교정을 시작합니다. 규칙은 기본적으로 다음과 같이 정의됩니다:

```pseudo if: system.target == {목표 상태/모드} && system.actual != {목표 상태/모드} && part.actual == {특정 상태/모드} then: system.target := {특정 상태/모드}
``` 실제 상태/모드와 목표 상태/모드가 일치하지 않지만, 이 정확한 상황에 대한 규칙이 없는 경우, 상향식 규칙은 단순히 시스템/부품을 목표 상태/모드로 되돌리려 시도합니다. *참고:* 이 기능은 표시된 구문에 따른 단순하고 명확하게 정의된 규칙에 적합합니다. 보다 복잡한 오케스트레이션을 위해, 시스템 모드와 온톨로지 추론(*메타컨트롤*)의 통합은 [MROS 프로젝트](https://robmosys.eu/mros/)에서 검증 및 성공적으로 입증되었으며, 예를 들어 [이동 로봇의 내비게이션 하위 시스템](https://github.com/MROS-RobMoSys-ITP/Pilot-URJC) 내에서 구현되었습니다.

## 감사의 말씀 본 활동은 유럽연합의 Horizon 2020 연구 및 혁신 프로그램(보조금 계약 번호 780785) 하에 유럽연구위원회(ERC)로부터 자금을 지원받았습니다.

--- ## 출처: `_docs/concepts/fiware_interoperability/index.md` <a id="source-docs-concepts-fiware-interoperability-index-md"></a> ## 동기 마이크로-ROS 프로젝트의 목표 중 핵심 과제 중 하나는 널리 사용되는 타 플랫폼과의 상호 운용성을 제공하는 것이었습니다.
선정된 구성 요소 중 하나는 FIWARE 컨텍스트 브로커(Context Broker)로, 다양한 분야의 스마트 솔루션 개발을 촉진하기 위해 여러 EU 주도 이니셔티브에서 채택한 컨텍스트 데이터 관리 표준입니다. 본 섹션에서는 micro-ROS와 이 플랫폼 간의 상호 운용성을 달성하는 방법, 특히 후자를 ROS 2와 통합하는 과정을 설명합니다.
이러한 상호 운용성 덕분에 FIWARE의 컨텍스트 브로커는 FIWARE 생태계에 통합된 다른 시스템과 컨텍스트 정보를 공유하기 위한 마이크로-ROS의 선택 플랫폼이 됩니다. ## 상호 운용성: 가능한 다양한 솔루션의 장단점 이 하위 섹션에서는 마이크로-ROS와 FIWARE 컨텍스트 브로커 간의 상호 운용성을 위한 모든 설계 대안을 설명합니다.
이후로 micro-ROS와 FIWARE 간 상호 통신을 위해 개발된 솔루션은 **FIROS2 통합 서비스**로 명명됩니다. FIROS2는 ROS 2 메시지를 FIWARE NGSIv2 메시지로 변환하고 그 반대의 변환을 수행하기 위해 변환 라이브러리를 필요로 합니다. 각 메시지마다 하나의 변환 라이브러리가 필요합니다. ![image](http://www.plantuml.com/plantuml/svg/ZP712i8m38RlUOempuKvfrv49gYmap05BmCfhfs5hOMslhzjLuQYu1e8_E5Fyf4Mnb9jdtq77UCMhK8jseV5HcXsjq99uA9ZcA1xjQnEvmnxPWnjMIrzBK5giDpVvlXXF9RNNNNuRSqGf6f6guymr-sERHTDfU5AzzGJ39Rt2GkShJddQJeHBfyEj_o6YtQ75pRyWrkDS03XC8Hi1sW8ESeio1mtX0nT47AK3gDWil7_yW80)

이러한 변환 라이브러리 구현 시 ROS 2 메시지의 직렬화/역직렬화 기능이 필요합니다. 또한 NGSIv2 직렬화/역직렬화 메커니즘이 사용될 것입니다. FIROS2 패키지는 표준 NGSIv2 직렬화/역직렬화 메커니즘을 제공하지만, ROS 2 직렬화/역직렬화는 메시지 유형에 대한 의존성으로 인해 더 복잡합니다.
따라서 ROS 2 타입에 대한 변환 라이브러리를 자동 생성하는 간단한 사용자 중심 솔루션을 제공하는 FIROS2 통합 서비스 구현이 필요했습니다. 이를 달성하기 위해 두 가지 접근 방식이 가능합니다: * FIWARE 메시지를 마이크로-ROS(즉, ROS 2) 메시지 타입으로 변환하고 그 반대의 작업을 수행하는 임시적인 브리징 통신 도구 구현.
* 공통 유형 언어 표현을 사용하고, 일반 유형과 각 미들웨어의 특정 유형 간 변환 라이브러리를 정의하는 통합 플랫폼을 활용하는 방법. 첫 번째 접근 방식은 더 가벼운 도구를 제공할 수 있지만, 유지보수가 더 어렵고 ROS2 또는 마이크로-ROS 외 다른 미들웨어와의 통신이 불가능하다는 등 여러 결함이 있습니다.
반면 [SOSS](https://github.com/eProsima/Integration-Service)와 같은 통합 서비스 플랫폼을 사용하면, 해당 미들웨어의 시스템 핸들 구현이 존재할 경우 광범위하고 지속적으로 확장되는 미들웨어 집합과의 통신이 자동으로 가능해집니다. ## SOSS: 시스템 오브 시스템 합성기 **SOSS**는 서로 다른 언어를 사용하는 소프트웨어 플랫폼 간 통신을 위한 공통 인터페이스를 제공하는 과제를 해결합니다. 추상 인터페이스 집합을 정의하고 플러그인 기반 프레임워크를 구성하기 위한 유틸리티 클래스를 제공하는 **코어** 라이브러리로 구성됩니다.

이 플러그인 가능한 인터페이스를 통해 사용자는 DDS, ROS2, FIWARE, ROS 등 특정 미들웨어용으로 지원되는 플러그인이나 시스템 핸들(System Handles)을 활용하여 원하는 통합을 구현할 수 있습니다. SOSS는 공통 언어를 사용하는 중간 메시지 전달 도구 역할을 하여 서로 다른 통신 미들웨어에서 실행되는 여러 애플리케이션의 통합을 중앙 집중화하고 중재합니다.
SOSS 인스턴스는 **YAML** 파일을 통해 구성 및 실행되며, 이를 통해 사용자는 두 개 이상의 애플리케이션이 정보를 교환할 수 있는 다양한 주제와 서비스 간의 매핑을 제공할 수 있습니다.

사용자는 새로운 미들웨어용 자체 시스템 핸들(System Handle)을 개발할 수도 있으며, 이를 통해 지원되는 다른 모든 미들웨어와의 통신 기능이 자동으로 부여됩니다. 일반적으로 타입은 공통 언어 표현을 사용하여 정의되며, SOSS는 이를 교환된 정보의 공유 표현을 생성하는 데 활용합니다. 이를 통해 필요 시 모든 미들웨어의 타입 구현으로 처리, 변환 및 재매핑될 수 있습니다.
이 공통 표현은 사용자 관점에서 IDL 정의로 제공되며, 런타임 시 [eProsima의 XTypes-DDS](https://github.com/eProsima/xtypes) 구현을 사용하여 파싱되고 동적 유형 표현으로 변환됩니다.

<img width="600" src="_docs/concepts/fiware_interoperability/imgs/soss.png"> ## SOSS-FIWARE 시스템 핸들

[FIWARE 시스템 핸들](https://github.com/eProsima/SOSS-FIWARE/tree/feature/xtypes-support)은 FIWARE의 컨텍스트 브로커와 SOSS 환경 간에 정보를 주고받을 수 있게 합니다. 이 시스템 핸들은 다른 SOSS 시스템 핸들과 동일한 방식으로 구성 및 실행됩니다.

모든 시스템 핸들 구성에 포함되는 표준 정보(시스템 이름 및 유형 등, 이 특정 시스템 핸들의 경우 `fiware`) 외에도, FIWARE 시스템 핸들의 경우 사용자는 두 개의 추가 YAML 키-값 쌍을 지정해야 합니다. 이는 호스트의 IP와 이 시스템 핸들이 FIWARE의 Orion 컨텍스트 브로커 인스턴스에 연결을 시도할 포트를 나타냅니다.

구현에 관한 보다 구체적인 사항으로, FIWARE는 엔터티 이름에 특정 문자의 사용을 허용하지 않습니다. 따라서 구성 파일의 topics 섹션에 정의된 타입의 이름에 /가 포함된 경우, FIWARE 시스템 핸들은 해당 문자를 두 개의 밑줄(__)로 매핑합니다.
이는 ROS2에 연결할 때 주의해야 할 중요한 사항입니다. ROS2에서는 대부분의 타입 이름에 /가 포함되기 때문입니다. 이 문제를 해결하기 위해 SOSS의 리매핑 기능을 활용하는 것이 유용합니다.

물론, 마이크로-ROS 애플리케이션이 마이크로컨트롤러와 ROS 2 데이터스페이스 사이의 브릿지 역할을 수행한다는 점을 고려할 때(마이크로-ROS 에이전트 사용), FIROS2는 또한 SOSS 패키지에 기본 포함된 기존 [ROS 2 시스템 핸들](https://github.com/eProsima/Integration-Service)을 활용하여 FIWARE의 컨텍스트 브로커와 ROS 2 간의 통신을 처리해야 합니다.

아래 설명된 사용 사례는 바로 이러한 상황을 반영합니다. ## FIROS2 사용 사례: FIWARE와 ROS 2 연결 ### 설치 * *colcon* 작업 공간 생성. ```bash $ mkdir -p soss_ws/src $ cd soss_ws ```

* SOSS 프로젝트를 소스 하위 폴더에 복제합니다. ```bash $ git clone https://github.com/eProsima/Integration-Service.git src/soss --branch feature/xtypes-dds ```

* SOSS-FIWARE 프로젝트를 소스 하위 폴더에 복제합니다. ```bash $ git clone https://github.com/eProsima/SOSS-FIWARE.git src/soss-fiware --branch feature/xtypes-support ``` * 이제 작업 공간 구조는 다음과 같아야 합니다:
  ```bash soss_ws | |_ src | |_ soss | | | |_ (기타 soss 프로젝트 하위 폴더) | |_ packages | | | |_ (기타 soss 시스템 핸들 하위 폴더) | |_ soss-ros2 (ROS2 시스템 핸들) |
          |_ soss-fiware | |_ fiware (soss-fiware colcon 패키지) |_ fiware-test (soss-fiware-test colcon 패키지) ``` * 작업 공간 폴더에서 colcon을 실행합니다. ```bash $ colcon build --packages-up-to soss-ros2 soss-fiware ``` * 결과 환경을 소스 처리: ```bash $ source install/local_setup.bash ``` ### 구성 SOSS는 YAML 파일로 구성해야 하며, 이 파일은 사용자가 원하는 두 개 이상의 시스템 간 연결을 설정하기 위해 프로그램이 알아야 할 모든 정보를 제공합니다.
예를 들어, 사용자가 FIWARE와 ROS2 간에 간단한 문자열 메시지를 교환하려는 경우 SOSS의 구성 파일은 다음과 같아야 합니다: ```yaml systems: ros2: { type: ros2 } fiware: { type: fiware, host: CONTEXT_BROKER_IP, port: 1026}

    routes: fiware_to_ros2: { from: fiware, to: ros2 } ros2_to_fiware: { from: ros2, to: fiware }

    topics: hello_fiware: { type: "std_msgs/String", route: ros2_to_fiware } hello_ros2: { type: "std_msgs/String", route: fiware_to_ros2 } ```

프로젝트의 *CMakeLists.txt* 파일에서 사용자는 제공된 `soss-rosidl-mix` 매크로를 통해 SOSS 인스턴스에 필요한 ROS 2 패키지를 지정해야 합니다. 이를 통해 ROS 2 *msg/srv* 파일로부터 적절한 IDL 타입 정의 및 타입 지원 파일을 생성할 수 있습니다:
  ```cmake soss_rosidl_mix( PACKAGES geometry_msgs nav_msgs test_msgs ... MIDDLEWARES ros2 ) ```

*참고:* 패키지 목록이 수정된 경우, 전체 colcon 작업 공간을 재빌드하는 것이 권장됩니다. 그렇지 않으면, 앞서 언급한 매크로에 포함된 새로운 ROS 2 타입 패키지에 대한 `.mix` 파일이 생성되지 않을 수 있습니다. 마지막으로, colcon 작업 공간을 소스 처리한 후 다음 명령어로 FIROS2를 실행할 수 있습니다: ```bash cd <yaml_config_file_경로>
    soss <yaml_config_file_name>.yaml ``` --- ## 출처: `_docs/concepts/middleware/IoT/index.md` <a id="source-docs-concepts-middleware-iot-index-md"></a> 오늘날 거의 모든 사람이 IoT가 무엇인지 알고 있거나 이에 대해 들어본 적이 있습니다.
비공식적인 정의로는 "모든 것이 서로 연결된 상태"라고 할 수 있습니다. 그러나 좀 더 정확히 말하자면, IoT(사물인터넷)는 전통적으로 특정 기기에만 적용되던 일반적인 연결성을, 농장의 소형 센서부터 병원의 생명 모니터에 이르기까지 우리가 상상할 수 있는 거의 모든 종류의 장비로 확장하는 것입니다.
2020년에는 500억 개의 기기가 서로 연결될 것으로 추정됩니다([@evans2011cisco](https://www.cisco.com/c/dam/en_us/about/ac79/_docs/innov/IoT_IBSG_0411FINAL.pdf)).
이 500억 개의 기기들이 공유할 한 가지는 통신 필요성입니다. 바로 이 방대한 기술적 도전 속에서 미들웨어가 중요한 역할을 하는 분야입니다.
미들웨어는 네트워크 구축을 용이하게 하여 개발자가 애플리케이션 구현에 집중할 수 있도록 합니다. 이 글에서는 IoT를 염두에 두고 개발된 두 가지 표준인 MQTT와 DDS-XRCE를 소개합니다. ## MQTT 메시지 큐잉 텔레메트리 전송(MQTT)은 IoT 솔루션에서 가장 많이 사용되는 프로토콜 중 하나입니다.
TCP 전송 계층 위에서 사용하기 위해 설계된 경량 메시지 프로토콜로, 데이터 교환을 위한 표준적이고 간단한 게시/구독 인터페이스를 제공합니다. MQTT의 통신 메커니즘은 클라이언트-서버 아키텍처를 기반으로 합니다. 즉, 클라이언트(MQTT 클라이언트)는 서버(MQTT 브로커)에 연결되며, 이 서버는 게시-구독 메시징 패턴을 사용하여 데이터 교환을 조정하는 역할을 합니다.
다시 말해, 클라이언트는 브로커 내 특정 토픽(Topic)과 연관된 메시지를 게시(Publish)하고, 브로커는 이 메시지를 해당 토픽에 구독(Subscribe)한 클라이언트에게 전달합니다. 따라서 MQTT에서는 브로커(Broker), 클라이언트(Client), 토픽(Topic), 메시지(Message), 게시(Publish), 구독(Subscribe)과 같은 핵심 개념을 언급할 수 있습니다. 각 개념은 다음과 같은 역할과 의미를 가집니다: * 브로커(Broker)는 시스템의 중추 역할을 수행하며, 토픽의 메시지를 처리합니다.
* 클라이언트는 브로커로부터 데이터를 게시하고 수신하는 역할을 담당합니다. * 토픽은 정보의 채널입니다. * 메시지는 정의된 토픽에 대한 정보 조각입니다. * 게시(Publish)는 정의된 토픽에 대한 메시지를 브로커로 전송하는 행위입니다. * 구독(Subscribe)은 정의된 토픽의 모든 메시지를 수신하겠다는 의사를 반영하는 행위입니다.
이는 브로커에서 처리됩니다. ![](_docs/concepts/middleware/IoT/mqtt.png){:.img-responsive and style="max-width: 50%; margin-left: auto; margin-right: auto;"} 이 모든 작업은 TCP 프로토콜을 통해 수행되며, 이를 통해 클라이언트와 브로커 간에 WAN 및 인터넷을 통한 연결이 가능합니다. 이러한 연결은 정적으로 이루어지며, 즉 클라이언트는 첫 연결 전에 브로커 주소를 반드시 알고 있어야 합니다. 이러한 통신은 전달 동작을 지정하는 세 가지 다른 QoS를 따를 수 있습니다: | QoS | 보장된 전달 | 중복 방지 | |:-:|:-:|:-:|
| QoS0 | 없음 | 없음 | | QoS1 | 있음 | 없음 | | QoS2 | 있음 | 있음 | 앞서 언급한 바와 같이, 이러한 종류의 미들웨어에는 토픽(Topic) 개념이 존재합니다. 토픽의 유형과 이름은 애플리케이션에 의해 설정됩니다. 게시(Publication)는 토픽 이름과 사용자 정의 형식의 데이터 세트를 사용하여 수행됩니다.
마찬가지로, 구독은 토픽 이름을 대상으로 이루어지며 데이터 해석은 클라이언트의 책임입니다. MQTT 표준은 이 토픽-유형 튜플 간의 관계를 명시하지 않으므로, 토픽 이해의 책임은 사용자 측에 있습니다. 이러한 아키텍처와 통신 패턴은 본질적으로 장치 간 데이터 교환(M2M 프로토콜)을 가능하게 하여 우수한 IoT 미들웨어를 구성합니다.

## DDS-XRCE 극도로 제한된 환경용 DDS(DDS-XRCE)는 객체 관리 그룹(OMG)이 채택한 와이어 프로토콜로, 저사양 장치에서 DDS(데이터 분배 서비스) 데이터 공간에 접근할 수 있도록 하는 것이 목적입니다.
MQTT와 마찬가지로 DDS-XRCE는 클라이언트(XRCE 클라이언트)가 서버(XRCE 에이전트)에 연결되는 클라이언트-서버 아키텍처를 따릅니다. MQTT와 달리 XRCE 에이전트는 토픽의 게시/구독 관리를 담당하지 않으며, DDS 글로벌 데이터 공간에서 XRCE 클라이언트를 대신하여 작동합니다.
즉, DDS-XRCE 프로토콜은 XRCE 클라이언트가 기존 DDS 네트워크에서 완전한 주체로 활동할 수 있도록 합니다. ![](_docs/concepts/middleware/Micro_XRCE-DDS/uxrce_scope.png) 이 프로토콜은 XRCE 클라이언트가 XRCE 에이전트와 상호작용하는 방식을 정의합니다.
기본적으로 상호작용 방식은 두 가지입니다: * XRCE 클라이언트는 에이전트 상의 프록시 엔티티를 처리할 수 있습니다. 이러한 프록시 엔티티가 DDS 네트워크에서 실제 동작을 수행합니다. 이를 통해 클라이언트는 상태가 에이전트에 상주하므로 상태 비저장 시스템으로 작동할 수 있습니다. 이는 특히 슬립 사이클 구현과 리소스 제약 장치의 DDS 통신을 가능하게 합니다.
* XRCE 클라이언트는 일반 DDS 참여자처럼 모든 DDS 토픽에 게시/구독할 수 있습니다. 이로 인해 리소스 제약 장치와 DDS 네트워크 간의 경계가 모호해져, 실제 엔티티로서 DDS 세계에 참여할 수 있습니다. 요약하자면, DDS-XRCE는 XRCE 클라이언트에게 기존 DDS 네트워크와 통신할 수 있는 간단한 게시/구독 메시징 패턴을 제공합니다.

기존 DDS 네트워크와 마찬가지로 다음과 같은 개념이 계승됩니다: * 토픽(Topic). 정보 채널 * 메시지(Message). 정보 조각 * 퍼블리시(Publish). 메시지를 노출하는 작업 * 서브스크라이브(Subscribe). 선택한 메시지를 수신할 수 있게 하는 절차 또한 다음과 같은 개념이 추가됩니다: * XRCE 클라이언트(XRCE Client).
    이는 간단한 게시/구독 인터페이스를 가진 리소스 제약 장치에서의 경량 액터입니다. * XRCE 에이전트. 위에서 언급한 XRCE 클라이언트에 필요한 DDS 접근을 제공하는 프로토콜의 핵심 부분입니다. DDS-XRCE 와이어 프로토콜은 최소한 TCP 및 UDP 전송 프로토콜로 지정되지만, 다른 프로토콜로 확장할 여지가 있습니다.
현재 구현체는 직렬 링크를 지원하며, Zigbee, 6LoWPAN 등 기타 프로토콜로 확장 가능합니다. DDS-XRCE는 두 가지 다른 전달 QoS 설정을 허용합니다: * 신뢰성 보장(Reliable). * 최선의 노력(Best-effort). DDS 패밀리 표준의 일환으로 OMG의 IDL 표준 사용도 포함되었습니다.
이를 통해 사용자는 사용되는 토픽 유형을 정의하고 표준 직렬화 형식을 설정할 수 있습니다. 이는 상호 운용성을 보장하고 사용자 정의 직렬화 형식 및 유형 매칭 메커니즘 정의와 관련된 애플리케이션 계층의 활용을 가능하게 합니다. 이 프로토콜은 DDS의 모든 이점(분산 시스템, 구성 가능한 QoS, 상호 운용성)을 제공함으로써 IoT 장치에 새로운 가능성의 영역을 열어줍니다.

## MQTT vs DDS-XRCE 지금쯤 MQTT와 DDS-XRCE의 차이점이 궁금하실 것입니다. 표면적으로는 유사한 아키텍처와 통신 패턴 등 많은 공통점을 공유하는 것처럼 보이지만, 아래 표에서 확인할 수 있듯이 몇 가지 핵심 사항에서 차이가 있습니다. | | DDS-XRCE | MQTT | |:--------------------------|:------------------------:|:----------------------:| | **아키텍처 패턴** | 클라이언트-서버 | 클라이언트-서버 | | **메시징 패턴** | 퍼블리시-서브스크라이브 | 퍼블리시-서브스크라이브 | | **전송 프로토콜** | UDP/TCP/직렬/사용자 정의 | TCP |
| **보안** | DTLS/TLS (비규범적) | TLS (비규범적) | | **유형** | 표준 IDL | 불투명, 사용자 선택 | | **QoS** | 신뢰성 및 최선의 노력 | 3 메시지 전달 | | **세션 지향** | 예 | 예 |
| **최소 오버헤드** | 12 B\*\*\* | 5 B\* \*\* | | **최대 오버헤드** | 16 B\*\*\* | 2^16 B\* | | **최대 페이로드 크기** | 64 KB | 256 MB |
| **토폴로지** | 1 대 0, 1 대 1, 1 대 n | 1 대 0, 1 대 1, 1 대 n | | **디스커버리 지원** | 예 | 아니오 | _ \* 토픽 이름에 따라 확장됨._ _ \*\* 8개의 ASCII 문자(8바이트)로 구성된 토픽 이름의 경우 MQTT 오버헤드는 DDS-XRCE 오버헤드와 동일합니다. 그 이후부터 MQTT 오버헤드는 이름 크기에 따라 확장됩니다. 그러나 DDS-XRCE는 고정됩니다. _ \*\*\* DDS-XRCE의 최대 및 최소 오버헤드는 클라이언트 ID를 사용하는 메시지 여부에 따라 달라집니다._

이전 표는 두 프로토콜을 비교합니다. 이러한 프로토콜 차이 외에도, DDS-XRCE의 핵심 개념 중 하나인 소형 장치를 분산 네트워크에 연결하는 기능을 강조할 수 있습니다. 이는 이 프로토콜에 광범위한 사용 사례를 제공할 뿐만 아니라 상당한 규모로 확장될 수 있도록 준비되어 있어, 이러한 측면에서 MQTT 대안보다 훨씬 더 동적입니다.

--- ## 출처: `_docs/concepts/middleware/memo_prof/index.md` <a id="source-docs-concepts-middleware-memo-prof-index-md"></a> ## 요약 본 절에서는 Micro XRCE-DDS 클라이언트 및 에이전트 라이브러리의 메모리 사용량을 분석합니다. 두 경우 모두, 주어진 수의 게시자 및/또는 구독자가 알려진 크기의 토픽에 대한 애플리케이션을 고려합니다. 클라이언트의 경우, 실시간 운영 체제(RTOS) [FreeRTOS](https://www.freertos.org/)에서 실행되는 앱과 [Olimex STM32-E407](https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware) 보드에서 실행되는 애플리케이션에 대해 측정을 수행했으며, 이 애플리케이션은 시리얼 전송(UART)을 통해 Linux 머신에서 실행되는 Micro XRCE-DDS 에이전트에 연결되었습니다.

에이전트의 경우, 동일한 호스트 머신에서 실행되는 XRCE-DDS 클라이언트 애플리케이션과 통신하는 리눅스 머신에서 실행되는 경량 에이전트에 대한 측정을 수행했습니다. 결과에 따르면 클라이언트의 총 메모리 소비량은 이 라이브러리가 rosserial 프로토콜이 목표로 하는 동일한 범주의 저사양 마이크로컨트롤러에 적합함을 보여줍니다. 반면 경량 버전의 에이전트는 더 높은 성능의 시스템에서만 컴파일하기에 적합합니다.

# 목차 * [FreeRTOS 기반 마이크로 XRCE-DDS 클라이언트의 메모리 프로파일링](#memory-profiling-of-the-micro-xrce-dds-client-on-freertos) * [메모리 및 구성 가능성](#memory-and-configurability)
    * [방법론](#methodology) * [결과 및 논의](#results-and-discussion) * [Linux 기반 마이크로 XRCE-DDS 에이전트의 메모리 프로파일링](#memory-profiling-of-the-micro-xrce-dds-agent-on-linux)
    * [에이전트용 사용 가능한 미들웨어 구현](#에이전트용-사용-가능한-미들웨어-구현) * [방법론 및 결과](#방법론-및-결과) ## FreeRTOS 기반 마이크로 XRCE-DDS 클라이언트의 메모리 프로파일링

[Micro XRCE-DDS](https://micro-xrce-dds.docs.eprosima.com/en/latest/) 대상 애플리케이션은 메모리 자원이 극도로 제한된 저사양 마이크로컨트롤러 유닛(MCU)이므로, 사용자가 애플리케이션 개발에 적합한 플랫폼을 선택할 수 있도록 XRCE-DDS 클라이언트의 메모리 소비량을 극도로 정밀하게 평가하는 것이 중요합니다.

이 섹션에서는 실시간 운영체제(RTOS)인 FreeRTOS와 Olimex STM32-E407 보드에서 실행되는 두 가지 간단한 애플리케이션(하나는 토픽을 게시하고 다른 하나는 알려진 크기의 토픽을 구독함)에 대한 Micro XRCE-DDS 클라이언트 라이브러리의 메모리 사용량을 보고합니다. 클라이언트를 실행하는 보드는 115200 보드의 직렬 전송(UART)으로 Linux 머신에서 실행되는 Micro XRCE-DDS 에이전트에 연결됩니다. 이 선택은 FreeRTOS가 메모리 관리 기능을 제공하기 때문에 이루어졌습니다. 이 기능을 통해 프로그래머가 알고 있는 총 할당 메모리와 프로그램 실행 중 최소한으로 남겨진 스택 미사용 영역의 차이로 특정 프로그램이 사용하는 스택 메모리를 쉽게 계산할 수 있습니다. ### 메모리 및 구성 가능성 XRCE-DDS 라이브러리가 대상으로 하는 시스템이 제공하는 제한된 메모리 자원을 고려할 때, 클라이언트의 메모리 크기를 조작할 수 있는 가능성은 핵심입니다. 이는 두 가지 다른 수준에서 수행할 수 있습니다: * 구성 시: 실행 코드 크기를 고정하기 위해 라이브러리를 컴파일할 때 여러 프로파일을 활성화하거나 비활성화할 수 있습니다. 실제로 클라이언트 라이브러리는 구성 시 특정 기능을 선택, 추가 또는 제거할 수 있는 프로파일 개념을 따르므로 사용자가 크기를 맞춤 설정할 수 있습니다. 아래에서 살펴보겠지만, 이러한 프로파일의 일환으로 예를 들어 신뢰성 모드 또는 최선의 노력 모드에서 통신할지 선택할 수 있습니다. 자세한 내용은 [클라이언트 라이브러리 문서](https://micro-xrce-dds.docs.eprosima.com/en/latest/client.html#micro-xrce-dds-client-label)를 참조하십시오. * 실행 시: 클라이언트 라이브러리는 동적 및 정적 메모리를 모두 사용하지 않으므로, 메모리 사용량은 실행 중 스택이 얼마나 성장하는지에만 의존합니다. 스택을 제어하는 매개변수는 라이브러리 함수와 함께 스트림 및 최대 전송 단위(MTU)입니다. * MTU는 전송 계층에 따라 다르며 사용자가 구성할 수 있습니다. 선택된 값은 메시지를 조각화하지 않고 송수신할 수 있는 최대 메시지 크기를 나타냅니다. 전송 계층은 MTU 값을 사용하여 내부 버퍼를 생성하며, 이는 메시지가 교환될 때 기록 및 저장되는 메모리 블록입니다.
    * 스트림의 경우 사용자는 최대 127개의 베스트 이포트 스트림과 128개의 신뢰성 스트림을 정의할 수 있지만, 대부분의 용도에서는 베스트 이포트 모드나 신뢰성 모드 중 하나의 스트림만 사용됩니다. 또한 신뢰성 스트림에는 연관된 히스토리가 있으며, 그 크기는 애플리케이션의 특정 요구 사항에 맞게 조정될 수 있습니다. 이 경우 스트림의 크기는 해당 스트림에 할당된 총 메모리 양에 해당하며, 최대 메시지 크기 × 연관된 히스토리 크기로 계산됩니다. 베스트 이포트 모드에서는 히스토리가 저장되지 않으며, 스트림에 할당된 메모리는 최대 메시지 크기와 동일합니다. ### 방법론 본 절에서는 메모리 프로파일링에 사용된 방법론을 상세히 설명합니다.

다양한 수의 게시자 또는 구독자와 각자의 데이터 라이터 또는 데이터 리더를 연결한 Micro XRCE-DDS 클라이언트 애플리케이션을 생성합니다. 또한 각 애플리케이션은 알려진 크기의 주제와 입력 메시지용 및 출력 메시지용 두 개의 스트림과 연결됩니다. 마지막으로, 신뢰성 있는 통신 시 최소 히스토리 크기 2를 사용합니다.

해당 애플리케이션에서 사용하는 직렬 전송을 위해 선택된 MTU는 512바이트로 고정되었으며, 이는 전송 버퍼의 크기를 설정합니다. 메모리 소비에 대한 완전한 특성을 제공하기 위해 다음 매개변수를 변경했습니다: * 생성 모드: 컴파일 시점에 구성 가능한 프로파일 중 하나입니다. 클라이언트를 대신하여 에이전트에서 엔티티를 생성하는 방식으로는 XML 모드와 참조 모드를 모두 검토했습니다. 첫 번째 경우, 엔티티는 클라이언트 애플리케이션에서 사용자가 정의한 XML 구성 파일에 따라 생성됩니다. 두 번째 경우, 에이전트가 사전에 알고 있는 사전 구성된 참조 엔티티에 따라 클라이언트가 단순히 참조하는 방식으로 에이전트에서 직접 생성됩니다.
* 스트림 유형: 클라이언트와 에이전트 간 통신 모드(최선 노력 vs 신뢰성 보장). 최선 노력 스트림은 전송 계층에 신뢰성을 맡긴 채 데이터를 송수신하며, 해당 스트림이 처리하는 메시지 크기는 사용된 전송 계층에서 정의된 최대 전송 단위(MTU)보다 작거나 같아야 합니다. 반면, 신뢰성 있는 스트림은 전송 계층과 무관하게 손실 없이 통신을 수행하며, MTU보다 긴 메시지를 송수신하기 위해 메시지 분할을 허용합니다. 데이터 손실을 방지하기 위해 신뢰성 있는 스트림은 송수신된 메시지 기록과 함께 전달 확인을 위한 추가 메시지를 사용합니다. 결과적으로, 최선을 다하는 스트림은 신뢰성 있는 스트림보다 더 적은 자원을 소비합니다.
* 토픽 크기: 게시자(베스트 이포트 및 신뢰성 있는 모두)와 신뢰성 있는 구독자의 경우 0~약 3KB, 구독자 베스트 이포트의 경우 0~약 400바이트 범위. 후자의 이유는, 베스트 이포트 통신 스트림에는 분할(fragmentation)이 없기 때문에 베스트 이포트 구독자가 지원할 수 있는 최대 메시지 크기는 전송 버퍼 크기(또는 MTU)와 동일하며, 이를 512 B로 고정했기 때문입니다. 반면, 분할 덕분에 신뢰성 있는 구독자는 MTU 크기로 적절히 분할된 임의 크기의 메시지를 수신할 수 있습니다.
* 발행자/수신자 수: 설정 설계상 각 발행자/수신자를 단일 토픽에 연결했으므로, 이는 토픽 수 변경과 동등합니다.

이러한 XRCE-DDS 애플리케이션 하나를 통해 MCU의 메모리 사용량은 서로 다른 기능에 할당된 여러 영역으로 분할됩니다: * 데이터 버퍼: 이 버퍼는 직렬화 전 토픽 데이터를 저장합니다. 해당 메모리는 애플리케이션 전용이며 Micro XRCE-DDS 클라이언트 운영과 무관하므로 당사 메모리 사용량 계산에는 포함하지 않습니다.
* 출력 버퍼: 이 버퍼는 엔티티 생성 요청 할당에 전용된 메모리 영역이며, 게시자의 경우 직렬화된 토픽 데이터도 포함합니다. 따라서 게시자 애플리케이션에서는 생성된 엔티티 크기와 동일하지만, 구독자 애플리케이션에서는 이 값들 중 최대값과 동일합니다. 엔티티 생성 소모량은 생성 모드에 따라 크게 달라진다는 점에 유의하십시오.
* 입력 버퍼: 이 버퍼는 구독자 애플리케이션이 에이전트로부터 오는 데이터를 저장하는 데 사용되며, 신뢰성 있는 통신 시에는 발행자가 모든 정보가 에이전트에 올바르게 수신되었음을 확인하는 데 사용됩니다. * 전송 버퍼: 이는 MTU와 동일하며, 본 분석에서는 512바이트로 고정됩니다. * 스택 사용량: 스택은 프로그램 실행 시 사용되는 함수들이 소비하는 메모리입니다. 상기 버퍼들은 모두 정적 메모리에 저장되므로 컴파일된 바이너리 객체 분석만으로 간단히 계산할 수 있지만, 스택은 애플리케이션 실행 전에는 알 수 없는 메모리 영역입니다. 이를 측정하기 위해 FreeRTOS의 [uxTaskGetStackHighWaterMark()](https://www.freertos.org/uxTaskGetStackHighWaterMark.md) 함수를 활용합니다. 이 함수는 XRCE-DDS 태스크 스택이 최대 값에 도달했을 때 사용되지 않은 스택의 양을 반환합니다. 이 값을 알려진 총 사용 가능 스택에서 빼면 XRCE-DDS 애플리케이션이 사용한 스택 피크를 얻을 수 있습니다.

<img alt="diagram" src="_docs/concepts/middleware/memo_prof/diagram.png" class="center"> <p align="center"> 그림 1: XRCE-DDS 클라이언트 라이브러리의 메모리 분할을 설명하는 다이어그램. </p>

요약하면, XRCE-DDS 애플리케이션의 총 메모리 사용량은 정적 메모리 사용량(일반적으로 출력/입력 버퍼 크기와 전송 버퍼 크기의 합)과 FreeRTOS가 제공하는 uxTaskGetStackHighWaterMark() 함수를 통해 계산된 스택 사용량의 합으로 계산됩니다. ## 결과 및 논의 * 게시자(Publisher) <img alt="게시자 소비량" src="_docs/concepts/middleware/memo_prof/overall_pub.png" class="center"> <p align="center"> 그림 2: 토픽 크기(바이트)와 게시자 수에 따른 XRCE-DDS 클라이언트의 메모리 사용량(바이트). </p>

* 구독자 <img alt="subscribers consumption" src="_docs/concepts/middleware/memo_prof/overall_sub.png" class="center"> <p align="center"> 그림 3: XRCE-DDS 클라이언트의 메모리 사용량(바이트 단위)을 토픽 크기(바이트 단위)와 구독자 수에 따른 함수로 나타냄. </p>

이 그래프에서 알 수 있듯이, 고려된 인스턴스들 간에 유의미한 변동성은 나타나지 않습니다. 발행자의 경우, 네 가지 사례 모두 동일한 추세를 보입니다.

XML로 엔티티 생성이 이루어지는 경우, 발행자와 수신자 모두에서 충분히 작은 토픽 크기(< 400 kB)에서는 곡선이 평평함을 주목하십시오. 실제로 이러한 경우 출력 버퍼의 크기는 엔티티 생성에 필요한 버퍼 크기에 의해 결정되며, 토픽 크기가 엔티티 생성에 필요한 크기를 초과할 때만 변경됩니다.

게시자/구독자 수는 측정값에 영향을 미치지 않는 것으로 관찰됩니다. 이는 특정 실험 설정에서 한 번에 하나의 주제만 전송/수신되므로 주제 수가 전체 메모리 소비량에 포함되지 않기 때문에 예상되는 결과입니다. 다만, 동시에 여러 주제를 전송하거나 수신하는 다른 구성에서는 메모리 버퍼 크기가 그에 따라 증가할 것임을 유의하십시오.

퍼블리셔와 서브스크라이버 간 메모리 사용량 차이는 서브스크라이버가 항상 두 개의 정적 메모리 버퍼를 필요로 하기 때문입니다: 구독 요청을 작성 및 전송하는 출력 버퍼와 해당 요청에 대한 응답(즉, 에이전트에서 오는 데이터)을 저장하는 입력 버퍼입니다. ## 리눅스 기반 마이크로 XRCE-DDS 에이전트의 메모리 프로파일링

현재 Micro XRCE-DDS 에이전트는 Linux, Windows, Mac과 같은 표준 운영체제에서만 지원됩니다. 그러나 점점 더 많은 사용자들이 에이전트를 MCU로 포팅하고 RTOS 상에서 컴파일하는 데 관심을 보이기 시작했습니다. 이 작업은 아직 수행되지 않았으므로, 이러한 시나리오 탐색을 위한 첫 단계로 Linux 상에서 경량화된 에이전트 버전의 메모리 사용량 분석을 수행했습니다.

### 에이전트용 사용 가능한 미들웨어 구현체 에이전트는 세 가지 미들웨어 구현체를 제공합니다: FastMiddleware, FastDDSMiddleware 및 CedMiddleware (자세한 내용은 이 [링크](https://micro-xrce-dds.docs.eprosima.com/en/latest/agent.html#fastmiddleware) 참조).

FastMiddleware와 FastDDSMiddleware는 각각 eProsima Fast RTPS와 eProsima Fast DDS를 사용합니다. 이는 RTPS(실시간 게시 구독) 프로토콜과 DDS 표준의 C++ 구현체입니다. 이러한 미들웨어는 클라이언트가 DDS 글로벌 데이터 공간에서 데이터를 생성하고 소비할 수 있도록 합니다. 이 에이전트들은 DDS-XRCE 표준에 설명된 기본 동작을 따르며, 즉 각 DDS-XRCE 엔티티마다 DDS 프록시 엔티티가 생성되고, 쓰기/읽기 작업은 DDS에서 퍼블리싱/서브스크라이빙 작업을 생성합니다.

반면, CedMiddleware(중앙 집중형 미들웨어)는 에이전트를 브로커로 활용합니다. 이 브로커는 클라이언트로부터의 연결 및 게시된 메시지를 수락하고, 구독/해지 요청을 처리하며, 다른 클라이언트의 구독과 일치하는 메시지를 전달하고, 클라이언트의 연결을 종료합니다. 이 에이전트는 DDS로 출력하는 에이전트보다 훨씬 가볍기 때문에, 클라이언트 간 의사 p2p 통신을 중재할 수 있는 가장 가벼운 버전의 에이전트 메모리 소비량을 평가하기에 적합한 후보입니다. ### 방법론 및 결과 우리는 알려진 크기의 토픽을 게시하고 구독하는 Linux 기반 모의 클라이언트 애플리케이션과 통신하는 에이전트의 메모리 소비량을 조사했습니다.

한쪽에서는 컴파일된 에이전트의 바이너리 크기를 측정한 후, 힙 및 스택 사용량을 분석했습니다. 후자의 경우, 각 쌍에 하나의 토픽이 연관된 상태에서 pub/sub 쌍의 수를 1부터 32까지 변화시켰으며, 토픽 크기도 8바이트부터 256바이트까지 변화시켰습니다. 컴파일된 에이전트의 바이너리 크기는 385KB로 측정되었습니다. RAM 메모리의 경우, CedMiddleware의 메모리 사용량을 측정하는 데 사용된 도구는 동적 분석 도구 구축을 위한 계측 프레임워크인 [Valgrind](https://valgrind.org/)입니다. 구체적으로, 프로그램이 사용하는 힙 및 스택 메모리 양을 측정하는 메모리 프로파일러인 [Massif](https://valgrind.org/_docs/manual/ms-manual.md)를 활용했습니다. 보고된 측정값은 이 도구의 분석 결과로 나타난 메모리 피크에 해당합니다. 총 힙 + 스택 소비량은 주제 크기 및 개수에 따른 함수로 아래에 그래프로 표시됩니다.

<img alt="agent consumption" src="_docs/concepts/middleware/memo_prof/agent.png" class="center"> <p align="center"> 그림 4: 토픽 크기(바이트)와 토픽 수에 따른 XRCE-DDS 에이전트의 메모리 사용량(킬로바이트). </p>

이 결과에서 알 수 있듯이, 약 10~15개의 pub/sub 쌍(동일한 수의 토픽)을 포함하는 애플리케이션의 경우, 에이전트의 메모리 소비량은 ~300~400KB 수준의 RAM 메모리와 500KB 미만의 플래시를 가진 중·고사양 MCU로의 크로스 컴파일 및 후속 실행과 호환될 수 있습니다. 따라서 이 예비 분석은 Ced 에이전트를 XRCE-DDS 클라이언트가 이미 지원하는 RTOS(Zephyr, NuttX, FreeRTOS 등)로 이식할 가능성을 열어주며, 이로써 리소스 제약 시스템에도 해당 라이브러리 구성 요소를 적용할 수 있게 합니다. 현재까지 FastDDSMiddleware 및 CedMiddleware 에이전트 모두 Ubuntu와 Raspbian 기반 라즈베리 파이(RPi)에 성공적으로 포팅되었으며, 여러 마이크로-ROS 사용 사례와 데모가 이미 RPi 상의 에이전트와 함께 작동하고 있음을 언급합니다.


--- ## 출처: `_docs/concepts/middleware/Micro_XRCE-DDS/index.md` <a id="source-docs-concepts-middleware-micro-xrce-dds-index-md"></a>

이 페이지는 마이크로-ROS의 rmw 계층을 위한 기본 미들웨어 구현체인 [**Micro XRCE-DDS**](https://micro-xrce-dds.docs.eprosima.com/en/latest/index.md)의 가장 두드러진 특징을 설명하기 위해 마련되었습니다.

**eProsima Micro XRCE-DDS**는 OMG DDS를 구현하는 오픈소스 와이어 프로토콜로, 극도로 자원이 제한된 환경(**X**tremely **R**esource **C**onstrained **E**nvironment) 표준([DDS-XRCE](https://www.omg.org/spec/DDS-XRCE/))을 따릅니다.
DDS-XRCE 프로토콜의 목표는 리소스가 제한된 장치에서 DDS 글로벌 데이터 공간에 대한 액세스를 제공하는 것입니다.
이는 *XRCE 클라이언트*라고 하는 저리소스 디바이스가 *XRCE 에이전트*라고 하는 서버에 연결되어, DDS 글로벌 데이터 스페이스에서 클라이언트를 대신하여 작동하는 **클라이언트-서버** 아키텍처 덕분에 달성됩니다. ![](_docs/concepts/middleware/Micro_XRCE-DDS/uxrce_scope.png)

Micro XRCE-DDS는 두 가지 주요 요소로 구성됩니다: * [Micro XRCE-DDS 에이전트](https://github.com/eProsima/Micro-XRCE-DDS-Agent): XRCE 에이전트 기능을 구현하는 **C++11 즉시 사용 가능한 애플리케이션**입니다.
* [Micro XRCE-DDS 클라이언트](https://github.com/eProsima/Micro-XRCE-DDS-Client): XRCE 클라이언트 측 기능을 구현하는 **C99 라이브러리**입니다.

또한 Micro XRCE-DDS는 다른 두 가지 구성 요소를 사용합니다: * [Micro CDR](https://github.com/eProsima/Micro-CDR): 클라이언트 라이브러리에서 사용되는 **직렬화/역직렬화 엔진**입니다.
* [Micro XRCE-DDS Gen](https://github.com/eProsima/Micro-XRCE-DDS-Gen): IDL 소스에서 *Micro CDR* 직렬화/역직렬화 함수와 클라이언트 앱 예제를 생성하는 데 사용되는 **코드 생성 도구**입니다. ## 애플리케이션 Micro XRCE-DDS는 게시자/구독자 아키텍처에 접근해야 하는 마이크로컨트롤러 애플리케이션에 중점을 둡니다.
이러한 애플리케이션의 예로는 센서 네트워크, IoT 또는 로봇 공학에서 발견되는 것들이 있습니다.
[Renesas](https://www.sensorsmag.com/iot-wireless/mcus-support-dds-xrce-protocol-for-ros-2) 및 [ROBOTIS](https://xelnetwork.readthedocs.io/en/latest/)와 같은 일부 기업들은 미들웨어 솔루션으로 Micro XRCE-DDS를 사용하고 있습니다.
또한, 마이크로 컨트롤러에 ROS 2를 탑재하는 것을 목표로 하는 [micro-ROS](https://microros.github.io) 프로젝트는 Micro XRCE-DDS를 기본 미들웨어 계층으로 채택했습니다. ## 주요 기능 ### 낮은 리소스 소비 앞서 언급한 바와 같이, Micro XRCE-DDS는 마이크로컨트롤러 애플리케이션에 중점을 두고 있습니다. 따라서 이 미들웨어의 설계 및 구현은 해당 장치의 메모리 제약을 고려하여 수행되었습니다. XRCE 클라이언트가 완전히 동적 메모리를 사용하지 않는다는 사실이 이를 증명합니다.
메모리 사용량 측면에서, 이 라이브러리의 [최신](https://github.com/eProsima/Micro-XRCE-DDS-Client/releases/latest) 버전은 512바이트 규모의 메시지를 처리하는 완전한 게시자-구독자 애플리케이션에 대해 **플래시 메모리 75KB 미만**과 **RAM 약 3KB**의 메모리를 소비합니다.
메시지 크기, 엔티티 수 및 미들웨어 라이브러리의 내부 메모리 관리에 따른 메모리 소비에 대한 자세한 내용은 [Micro XRCE-DDS 메모리 프로파일링](/_docs/concepts/middleware/memo_prof/) 섹션을 참조하십시오.
또한 이 라이브러리는 구성 시점에 일부 기능을 선택, 추가 또는 제거할 수 있는 *프로파일* 개념 덕분에 높은 수준의 구성 가능성을 제공합니다. 이를 통해 사용하지 않는 기능이 있을 경우 XRCE 클라이언트 라이브러리 크기를 맞춤 설정할 수 있습니다. 컴파일 시점에 클라이언트 라이브러리를 구성하고 빌드하기 위한 여러 정의가 존재합니다. 이러한 정의는 애플리케이션 요구사항에 따라 라이브러리 버전을 생성할 수 있게 하며, `client.config` 파일에서 수정할 수 있습니다.
원하는 구성을 반영하려면 정의가 변경될 때마다 `cmake` 명령을 실행해야 합니다. Micro XRCE-DDS 라이브러리 또는 그 rmw 구현체 [`rmw_microxrcedds`](https://github.com/micro-ROS/rmw-microxrcedds)에서 매개변수를 적절히 조정하여 micro-ROS를 구성하는 방법에 대한 자세한 내용은 이 [튜토리얼](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/)과 `rmw_microxrcedds` [README](https://github.com/micro-ROS/rmw-microxrcedds#rmw-micro-xrce-dds-implementation)를 참조하십시오.

### 다중 전송 프로토콜 지원 이전 섹션에서 논의된 프로파일의 일환으로, 사용자는 클라이언트와 에이전트 간 통신을 위해 여러 전송 계층 중에서 선택할 수 있습니다. 실제로 MQTT나 CoaP와 같은 특정 전송 계층만 지원하는 다른 IoT 미들웨어와 달리, XRCE는 기본적으로 다중 전송 프로토콜을 지원합니다. 특히 최신 버전의 Micro XRCE-DDS는 다음을 지원합니다: **UDP**, **TCP** 및 사용자 정의 **직렬** 전송 프로토콜을 지원합니다. 이 외에도 Micro XRCE-DDS는 에이전트와 클라이언트 모두를 위한 전송 인터페이스를 제공하여 사용자 정의 전송을 간편하게 구현할 수 있게 합니다. 이로 인해 Micro XRCE-DDS의 다양한 플랫폼으로의 이식 및 새로운 전송 추가 작업이 사용자가 손쉽게 수행할 수 있는 작업이 됩니다.

### 다중 플랫폼 지원 XRCE 클라이언트는 임베디드 실시간 운영체제(RTOS)로 **FreeRTOS**, **Zephyr** 및 **NuttX**를 지원합니다. 또한 **Windows**와 **Linux**에서도 실행됩니다. 반면 XRCE 에이전트는 **Windows**와 **Linux**를 지원합니다. ### QoS 지원

XRCE 클라이언트 라이브러리는 XRCE 에이전트에서 DDS 엔티티를 생성하는 두 가지 접근 방식을 제공합니다: * XML 방식 (기본 옵션) * 참조 방식 기본 옵션을 사용할 경우, 사용자는 클라이언트 측에 작성 및 저장된 XML 파일을 통해 엔티티를 Reliable 모드 또는 Best-Effort 모드로 생성할 수 있습니다. 그러나 이러한 QoS 구성은 일부 사용자의 요구사항에 부합하지 않을 수 있습니다.
이러한 경우를 위해 Micro XRCE-DDS는 에이전트에서 직접 엔티티를 생성할 수 있도록 허용하며, 사용자는 DDS에서와 같이 사용자 정의 XML QoS를 작성할 수 있습니다. 에이전트에서 사용 가능한 각 엔티티는 레이블과 연관되므로, 클라이언트는 통신에 필요한 엔티티를 이러한 레이블을 참조하기만 하면 생성할 수 있습니다. 또한 참조 방식을 사용하면 MCU 내 클라이언트의 메모리 소비도 줄일 수 있습니다.
이는 참조 방식을 통해 XML이 저장된 코드 부분을 빌드하지 않아도 되기 때문입니다. 이 메커니즘은 micro-ROS에도 상속되므로, 결과적으로 ROS 2와 동일한 완전한 QoS 세트를 활용할 수 있습니다.
마이크로-ROS에서 커스텀 QoS 사용법에 대한 종합적인 검토는 튜토리얼 섹션의 [전용 페이지](/_docs/tutorials/advanced/create_dds_entities_by_ref/)를 참조하십시오. ## 기타 링크 * [Read the Docs의 매뉴얼](https://micro-xrce-dds.readthedocs.io/en/latest/) * [GitHub의 Micro XRCE-DDS](https://github.com/eProsima/Micro-XRCE-DDS)
* [GitHub의 XRCE 클라이언트](https://github.com/eProsima/Micro-XRCE-DDS-Client) * [GitHub의 XRCE 에이전트](https://github.com/eProsima/Micro-XRCE-DDS-Agent)
* [GitHub의 rmw_microxrcedds](https://github.com/micro-ROS/rmw-microxrcedds) * [Micro XRCE-DDS 메모리 프로파일링](/_docs/concepts/middleware/memo_prof/)
* [미들웨어 최적화 튜토리얼](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/). * [마이크로-ROS에서 사용자 정의 QoS 사용 방법](/_docs/tutorials/advanced/create_dds_entities_by_ref/)

--- ## 출처: `_docs/concepts/middleware/rosserial/index.md` <a id="source-docs-concepts-middleware-rosserial-index-md"></a> ROS에서 시리얼 통신을 통해 ROS 메시지를 전송하고자 할 때 눈에 띄는 패키지가 있습니다.
이 패키지가 바로 rosserial입니다. rosserial은 마이크로컨트롤러 기반 플랫폼이 ROS 네트워크를 통해 통신하는 일반 컴퓨터와 통신할 수 있도록 합니다. rosserial은 클라이언트-서버 아키텍처 방식을 사용하여 이러한 통신을 설정하는 프로토콜을 제공합니다. rosserial-클라이언트는 데이터를 직렬 링크로 직렬화하고, 직렬화된 데이터는 rosserial-서버가 수신하여 기존 ROS 네트워크로 전달합니다.
ROS 네트워크에서 마이크로컨트롤러로 데이터를 전달하는 과정도 유사하게 진행됩니다. 이 rosserial-server는 C++ 또는 Python으로 사용할 수 있으며, 한편 rosserial-client는 지원 가능한 일련의 마이크로프로세서를 보유하고 있습니다. 이 솔루션은 ROS를 사용하는 로봇 내 하드웨어 부품 통합에 일반적으로 활용됩니다.
이러한 경우 Rosserial은 하드웨어 통신 프로토콜과 ROS 네트워크 사이의 가교 역할을 수행합니다. ## Micro XRCE-DDS Micro XRCE-DDS의 기능 중 하나는 마이크로컨트롤러와 DDS/ROS 2 지원 컴퓨터 간 직렬 연결을 활용하는 것입니다. 이러한 연결은 OMG의 DDS-XRCE 표준과 직렬 전송 계층을 사용하여 가능합니다.
이 솔루션은 rosserial과 동일한 클라이언트-서버 아키텍처를 따르며, 마이크로컨트롤러 통신에 있어 가장 적합한 접근 방식 중 하나입니다. 이 아키텍처를 구현하는 라이브러리는 클라이언트(Client)와 에이전트(Agent)입니다. 클라이언트는 에이전트 내에서 엔티티를 생성하며, 이 엔티티는 DDS 네트워크 상에서 클라이언트를 대신하여 동작합니다.

보시다시피 이 사용법은 rosserial에서 사용하는 것과 유사하지만, 구현 방식에 미묘한 차이가 있으며 이 글에서 그 차이를 설명하겠습니다. ## Micro XRCE-DDS vs rosserial rosserial과 Micro XRCE-DDS에 대한 기본적인 이해를 바탕으로 이제 두 가지를 비교해 보겠습니다.

### 직렬 전송을 통한 Micro XRCE-DDS Micro XRCE-DDS는 직렬 전송(UDP, TCP 등 다른 전송 방식도 허용)을 통해 통신할 때 사전 정의된 형식의 직렬 프로토콜을 사용합니다. 이 형식은 다음 프레임 해체에서 설명됩니다: ``` 0 8 16 24 40 X X+16
+--------+--------+--------+--------+--------+--------//--------+--------+--------+
| FLAG | SADD | RADD | LEN | PAYLOAD | CRC | +--------+--------+--------+--------+--------+--------//--------|--------+--------+ ``` * `FLAG`: 동기화 플래그 (0xFF). * `SADD`: 소스 주소. * `RADD`: 원격 주소. * `LEN`: 프레임 처리되지 않은 페이로드 길이 (리틀 엔디안 기준 2바이트). * `PAYLOAD`: XRCE 헤더가 포함된 직렬화 메시지.
* `CRC`: 스터핑 처리 후 메시지 CRC. 링크 계층에서 직렬화되는 메시지입니다. 이는 '게시(publish)'와 '구독(subscribe)'이라는 두 가지 서로 다른 작업을 통해 마이크로컨트롤러로 전송되거나 마이크로컨트롤러에서 전송되는 메시지입니다. ## rosserial 반면, 다음은 rosserial 프레임입니다: ``` 0 8 16 32 40 56 X X+16
+-------+-------+-------+-------+-------+-------+-------+-------//-------+------+------+
| FLAG | PROT | LEN | LCRC | TOPID | PAYLOAD | MCRC | +-------+-------+-------+-------+-------+-------+-------+-------//-------|------+------+ ``` * `FLAG`: 동기화 플래그 (0xFF). * `PROT`: 프로토콜 버전.
* `LEN`: 페이로드 길이 (리틀 엔디안 기준 2바이트). * `LCRC`: 길이 CRC. * `TOPID`: 토픽 ID. * `PAYLOAD`: 직렬화된 메시지. * `MCRC`: 메시지 CRC. Micro XRCE-DDS 직렬 프레임과 비교해 보면 완전히 다른 프레임을 사용함을 알 수 있습니다. ## 비교 다음 표는 두 구현 방식의 주요 측면을 요약합니다: | | Micro XRCE-DDS serial | rosserial | |:-|:-:|:-:| | **API** | C/C++ | C++ |
| **무결성** | [HDLC](https://en.wikipedia.org/wiki/High-Level_Data_Link_Control) 프레임 | 없음 | | **보안** | [CRC-16-CCITT](https://en.wikipedia.org/wiki/Cyclic_redundancy_check) | 모호한 CRC (% 256) |
| **메모리 복사** | uxr_stream ---> serial_buffer ---> hardware_buffer | serialization_buffer ---> hardware_buffer | | **메모리 사용량** | uxr_stream + (2 * 보조 버퍼[42 B]) | 2 * serialization_buffer |
| **메시지 크기 제한** | uxr_stream 크기 | hardware_buffer 크기 | | **신뢰성** | 예 | 아니오 | | **라우팅** | 예 | 아니오 | | **오버헤드** | 7 B + 12 B* | 9 B | | **아키텍처** | 클라이언트-서버 | 클라이언트-서버 |

_* 오버헤드는 프레밍(7 B)과 DDS-XRCE 프로토콜 추가분(12 B)으로 나뉩니다._ 본 표에서 알 수 있듯, Micro XRCE-DDS 직렬화는 메모리 연산 횟수를 증가시키지만 직렬 통신에 필요한 메모리를 크게 줄입니다. 하드웨어 버퍼가 직렬화 버퍼와 동일한 크기를 가질 필요가 없기 때문입니다.
이러한 버퍼 사용 방식은 메모리 사용량을 절감합니다. 또한 Micro XRCE-DDS 시리얼은 rosserial과 달리 라우팅 및 신뢰성 기능을 제공합니다. DDS-XRCE 프로토콜은 표준 CRC 사용이나 표준 프레임 구성과 같은 일부 부분에서 표준을 채택하고 있습니다. ---

## 출처: `_docs/concepts/rtos/comparison/index.md` <a id="source-docs-concepts-rtos-comparison-index-md"></a> 본 섹션에서는 micro-ROS가 지원하는 세 가지 RTOS 간의 기술적 비교를 제시합니다: * [NuttX](https://nuttx.apache.org/)
* [FreeRTOS](https://www.freertos.org/) * [Zephyr](https://www.zephyrproject.org/) 비교 항목은 다음과 같습니다: * 애플리케이션 레벨 표준화 API * 성숙도 * 지원 하드웨어 * 스케줄링 옵션 * IO 지원 (네이티브 또는 벤더별 모듈 필요)
* 네트워킹 스택 * 저장 장치 및 디스플레이 * 메모리 사용량 * 안전 인증 * 라이선스 * POSIX 수준 지원 **주요 질문:** * RTOS의 POSIX 준수성 평가. * micro-ROS 또는 ROS 2와 관련해 비-POSIX RTOS에 추가 레이어를 제공하는 데 필요한 노력은 어느 정도인가? * 특정 하드웨어 플랫폼에 대한 RTOS 지원 ## 비교표 | **OS** | **NuttX** | **FreeRTOS** | **Zephyr** | | ------------------------------------------------------------ | ---------------------------------------- | ------------------------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------- | | **기능** | | | | | **표준화** | | | | | POSIX | 예 | 부분적 | 부분적 |
| POSIX.1 <sup>1</sup> | [예](http://nuttx.org/) | [래퍼](https://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_POSIX/index.md) | 부분적 |
| POSIX.1b <sup>2</sup> | 예 | 부분적 | 부분적 | | POSIX.1c <sup>3</sup> | 예 | 예 | 부분적 | | | | | |
| OSEK/VDX | 아니요 | 아니요 | 아니요 | | **성숙도** | | | | | 첫 출시 | 2007 | 2003 | 2016 |
| 최종 릴리스 | 2019 | 2020 | 2019 | | 업데이트 주기 | 약 3개월 | 불규칙     | 3개월 | | 커뮤니티 | 오픈소스 | 오픈소스 | 리눅스 재단 협력 프로젝트 (인텔, 리나로(ARM), 노르딕, 엔엑스피, 시노프시스) | | | | | |
| **지원 하드웨어** | | | |
| Olimex STM32-E407 (Cortex-M4) | 예 | 예 | 예, [명시적](https://docs.zephyrproject.org/latest/kernel/services/scheduling/index.md) |
| Bosch XDK <sup>5</sup> | 명시적 지원 없음, 그러나 유사 <sup>6</sup> | 예 | 아니오<sup>5</sup> | | MPC57xx | 아니오 | 아니오 | 아니오 |
| **스케줄링** | | | | | 우선순위 기반 | FIFO | 예 | 예 |
| 라운드 로빈 <sup>4</sup> | 예 | 예 <sup>6</sup> | [협동](https://docs.zephyrproject.org/latest/kernel/services/scheduling/index.md) | | 산발적 서버 | 예 | 아니오 | 아니오 |
| 예약 기반 스케줄링 (RBS) | 아니요 | 아니요 | 아니요 | | 속도 단조 스케줄링 (RMS) | ? | 예 <sup>10</sup> | 예 <sup>10</sup> |
| 세마포어/뮤텍스 관리 | 예 (우선순위 상속) | 예 | 예 | | **IO** | |                                                                                                         | | | I2C | 예 | 예 <sup>8</sup> | 예 | | SPI | 예 | 예 <sup>8</sup> | 예 | |
| UART | 하드웨어 특정 | 예 <sup>8</sup> | 예 | | USB | 예 | 벤더 특정 | 예 | | CAN | 예 | 벤더 특정 | 예 |
| CAnopen | 아니요 | 벤더별 | 예 | | Modbus | 예 | 벤더별 | ? |
| **네트워킹** <sup>7</sup> | | | | | BLE-Stack | 불명 | 예 <sup>8</sup> | 예 | | 6LoWPAN | 예 | 아니오 | 예 |
| TLS | | 예 <sup>8</sup> | 예 | | Thread | | 아니요 | ? | | 이더넷 | 예 | 예 <sup>8</sup> | 예 | | Wi-Fi                                             | 예 | 예 <sup>8</sup> | 예 | | NFC | 불분명 | 아니오 | 예 | | RFID | 예 | 아니오 | 예 |
| **저장 및 표시** <sup>7</sup> | | | | | 파일 시스템 | 예 | 예 | 예 | | 그래픽 사용자 인터페이스 | | 벤더별 | ? |
| **메모리 점유량** | | | | | RAM | "소형 점유량" | 스케줄러 236바이트 + 작업당 64바이트 | "소형 점유량" |
| ROM | "작은 공간 차지" | 5 - 10 kB | "작은 공간 차지" | | **안전 인증** | | | |
| 소프트웨어 개발 프로세스 DO178B 레벨 A / EUROCAE ED-12B | 아니요 | [SafeRTOS: DO178C (항공우주) by Wittenstein](https://www.highintegritysystems.com/safertos/certification-and-standards/) | 아니요 |
| 기능 안전 IEC-61508 | 아니오 | [SafeRTOS (SIL 3)](http://www.openrtos.net/FreeRTOS-Plus/Safety_Critical_Certified/SafeRTOS-Safety-Critical-Certification.shtml) | 곧 |
| **라이선스** | BSD | MIT 및 상업용 | Apache 2 |

<sup>1</sup> 프로세스, 신호, fpe, 세그멘테이션, 버스 오류, 타이머, 파일 및 디렉터리 작업, 파이프, C 라이브러리, IO 포트 인터페이스 <sup>2</sup> 실시간, 클럭, 세마포어, 메시지, 공유 메모리, 비동기 IO, 메모리 잠금. <sup>3</sup> 스레드.

<sup>4</sup> 모든 작업을 라운드 로빈 방식으로 실행하지만 미리 정의된 시간 슬라이스 동안만 실행. <sup>5</sup> XDK는 Silicon Labs의 ARM Cortex M3 EFM32GG390F1024 Giant Gecko 계열 마이크로컨트롤러를 기반으로 합니다. XDK에 사용된 버전은 Zephyr에서 완전히 지원되지 않음을 유의하십시오.

<sup>6</sup> [참고: 타임 슬라이싱](https://www.freertos.org/media/2018/161204_Mastering_the_FreeRTOS_Real_Time_Kernel-A_Hands-On_Tutorial_Guide.pdf)

<sup>7</sup> 네트워킹 및 스토리지에 대한 하드웨어 지원은 플랫폼에 따라 다르며, 특정 운영 체제에서 작동하는 하드웨어 공급업체 패키지가 제공되는 경우도 있습니다. 그러나 일반적으로 특정 RTOS의 하드웨어 지원 여부를 판단하기는 어렵습니다.

<sup>8</sup> FreeRTOS 인터페이스는 https://github.com/aws/amazon-freertos의 FreeRTOS 참조 배포 저장소를 통해 제공됩니다. <sup>9</sup> FreeRTOS 이더넷 지원은 FreeRTOS+TCP 스택을 통해 제공됩니다.

<sup>10</sup> 속도 단조 스케줄링(Rate Monotonic Scheduling)은 소위 속도 단조 정책(rate-monotonic policy)으로 스레드의 우선순위를 할당함으로써 달성할 수 있습니다. 즉, 가장 높은 속도를 가진 스레드가 가장 높은 우선순위를 가지며, 가장 낮은 속도를 가진 스레드가 가장 낮은 우선순위를 가집니다. 모든 스레드가 고정된 속도로 주기적으로 활성화된다고 가정합니다.

관련 연구: * [IoT 플랫폼에 적합한 RTOS 선택, Milinkovic 외, INFOTEH-JAHORINA Vol. 14, 2015](http://infoteh.rs.ba/zbornik/2015/radovi/RSS-2/RSS-2-2.pdf): FreeRTOS, ChibiOS/RT, Erika, RIOT 비교
* [FreeRTOS 아키텍처](https://www.freertos.org/) --- ## 출처: `_docs/concepts/rtos/index.md` <a id="source-docs-concepts-rtos-index-md"></a>

실시간 운영체제(RTOS)의 사용은 현대 임베디드 시스템에서 일반적인 관행입니다. 이러한 시스템은 일반적으로 외부 구성 요소와의 상호 작용이 필요한 애플리케이션을 실행하는 리소스 제약 마이크로컨트롤러로 구성됩니다. 많은 경우 이 애플리케이션에는 엄격한 시간 제한이나 결정론적 응답이 필요한 시간 민감형 작업이 포함됩니다.

베어메탈 애플리케이션도 현재 사용되지만, 매우 저수준의 프로그래밍 기술이 필요하며 RTOS가 제공하는 하드웨어 추상화 계층이 부족합니다. 반면 RTOS는 일반적으로 타이머나 통신 버스 같은 하드웨어 리소스 사용을 용이하게 하여 개발을 간소화하고 코드 재사용을 가능하게 하는 하드웨어 추상화 계층(HAL)을 사용합니다. 또한 스레드와 태스크 엔티티를 제공하며, 스케줄러와 함께 사용함으로써 애플리케이션에 결정론을 구현하는 데 필요한 도구를 제공합니다. 스케줄링은 다양한 알고리즘으로 구성되며, 사용자는 자신의 애플리케이션에 가장 적합한 알고리즘을 선택할 수 있습니다. RTOS가 일반적으로 제공하는 또 다른 기능은 스택 관리로, 임베디드 시스템에서 귀중한 자원인 MCU 리소스의 올바른 메모리 사용을 돕습니다.

## 마이크로-ROS의 RTOS 상기 이점들로 인해 마이크로-ROS는 소프트웨어 스택에 RTOS를 통합합니다. 이는 마이크로-ROS의 기능을 강화하고 RTOS가 제공하는 모든 도구 및 기능의 재사용을 가능하게 합니다. 마이크로-ROS 소프트웨어 스택은 모듈식 구조이므로 RTOS 계층을 포함한 모든 수준에서 소프트웨어 엔티티의 교환이 예상되며 바람직합니다.

컴퓨터용 운영체제(OS)와 마찬가지로, RTOS 역시 표준 인터페이스에 대한 다양한 지원을 제공합니다. 이는 [POSIX](https://pubs.opengroup.org/onlinepubs/9699919799/)라는 표준 계열에서 정립되었습니다. ROS 2의 코드를 리눅스(대부분 POSIX 호환 OS)에서 네이티브로 작성된 상태로 포팅하거나 재사용하는 것을 목표로 하기 때문에, 이러한 표준을 준수하는 RTOS를 사용하면 코드 포팅 작업이 최소화되어 유리합니다. NuttX와 Zephyr는 POSIX 표준을 상당히 준수하여 포팅 노력이 최소화되는 반면, FreeRTOS는 *FreeRTOS+POSIX* 플러그인을 제공하여 기존 POSIX 호환 애플리케이션을 FreeRTOS 생태계로 쉽게 포팅할 수 있게 함으로써 모든 기능을 활용할 수 있게 합니다. RTOS 함수 호출은 마이크로-ROS 스택 내 여러 추상화 계층을 통해 이루어짐을 유의하십시오. RTOS 기본 기능을 주로 사용하는 계층은 미들웨어입니다. 실제로 미들웨어는 정상 작동하기 위해 RTOS의 전송 자원(예: 직렬, UDP 또는 6LoWPAN 통신)과 시간 자원에 접근해야 합니다. 또한 스케줄링이나 전력 관리 같은 메커니즘을 처리하기 위해 마이크로-ROS 클라이언트 라이브러리(rcl, rclc)도 RTOS 자원에 접근할 수 있어야 합니다. 이를 통해 개발자는 다양한 수준에서 애플리케이션을 최적화할 수 있습니다.

현재 마이크로-ROS는 세 가지 RTOS를 지원하며, 이들 모두 (기본) POSIX 구현을 제공합니다: FreeRTOS, Zephyr 및 NuttX는 모두 [마이크로-ROS 빌드 시스템에 통합되어 있습니다](/_docs/concepts/build_system/). 아래 로고를 클릭하면 각 RTOS의 주요 측면과 핵심 기능이 소개된 개요 섹션으로 이동합니다.

<table style="border:none;"> <tr> <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="/_docs/overview/rtos/#freertos"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="263" height="100" src="https://upload.wikimedia.org/wikipedia/commons/4/4e/Logo_freeRTOS.png"><br/>FreeRTOS</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="/_docs/overview/rtos/#zephyr"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="220" height="114" src="img/_posts/logo-zephyr.jpg"><br/>Zephyr</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="/_docs/overview/rtos/#nuttx"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="125" height="125" src="https://upload.wikimedia.org/wikipedia/commons/b/b0/NuttX_logo.png"><br/>NuttX</a></td> </tr> </table>

이러한 RTOS 간의 철저한 기술적 비교는 [여기](/_docs/concepts/rtos/comparison/)에서 확인할 수 있습니다. {% include logos_disclaimer.md %} --- ## 출처: `_docs/imprint.md` <a id="source-docs-imprint-md"></a>

# 발행처: eProsima, Plaza de la Encina 10-11 Nucleo 4 2ª Planta, 28760 Tres Cantos, Madrid, Spain. 이메일: info@eprosima.com 전화: +34 918043448

대표이사: Jaime Martin Losa. # 편집: EU 프로젝트 [OFERA](http://ofera.eu/) 참여 기관: * eProsima. * Robert Bosch GmbH. * ŁUKASIEWICZ - Instytut PIAP. * FIWARE Foundation.

# 면책 조항 편집진은 본 웹사이트의 내용이 최신 상태로 유지되고 정확하며 완전하도록 노력하였습니다. 그럼에도 불구하고 오류가 존재할 수 있습니다. 편집진 및 발행인은 본 웹사이트 자료의 정확성 또는 완전성에 대해 어떠한 보증도 하지 않으며, 본 웹사이트에서 얻은 콘텐츠 사용으로 인해 발생한 손실 또는 손해에 대한 모든 책임을 부인합니다.

발행인 및 편집자는 외부 페이지의 내용에 대해 어떠한 책임도 지지 않습니다. 해당 외부 페이지의 소유자가 그 내용에 대한 전적인 책임을 집니다. 등록 상표 및 저작권이 있는 텍스트와 이미지는 본 웹사이트 콘텐츠에서 (일반적으로) 별도로 표시되지 않습니다. 이러한 표시가 없다는 것은 해당 이름, 이미지 또는 텍스트가 공적 영역에 속한다는 것을 의미하지 않으며, 원 소유권은 그대로 유지됩니다.

--- ## 출처: `_docs/overview/comparison/index.md` <a id="source-docs-overview-comparison-index-md"></a> Micro-ROS는 마이크로컨트롤러에 ROS 2를 적용합니다. 여기서는 관련 접근법을 분석하고 최종적으로 비교표를 제시합니다.

## ROSSerial ROSSerial은 표준 ROS 직렬화 메시지를 래핑하고 직렬 포트나 네트워크 소켓 같은 장치에서 여러 토픽과 서비스를 다중화하는 프로토콜입니다. 프로토콜 정의 외에도 이 제품군에는 세 가지 유형의 패키지가 포함됩니다: - 클라이언트 라이브러리: 클라이언트 라이브러리를 통해 사용자는 다양한 시스템에서 ROS 노드를 쉽게 실행할 수 있습니다. 이 클라이언트는 일반적인 ANSI C++ rosserial_client 라이브러리의 포팅 버전입니다.

- ROS 측 인터페이스: 이 패키지들은 호스트 머신이 rosserial 프로토콜에서 보다 일반적인 ROS 네트워크로의 연결을 브리지할 수 있는 노드를 제공합니다. - 예제 및 사용 사례. 이 옵션은 micro-ROS와 완전히 비교할 수 없다는 점을 언급할 가치가 있습니다. 이 접근 방식은 ROS 2에 초점을 맞춘 micro-ROS가 아닌 ROS 1과 함께 작동하도록 설계되었기 때문입니다. 참고: [ROSserial 위키](http://wiki.ros.org/rosserial) ## RIOT-ROS2 RIOT-ROS2는 RIOT 운영체제를 통해 마이크로컨트롤러에서 실행될 수 있도록 주요 ROS 2 스택을 수정하여 만든 것입니다.

ROS 2는 여러 계층으로 구성됩니다. 일부 계층은 마이크로컨트롤러에서 실행될 수 있도록 수정되었으며, RIOT-ROS2 프로젝트에서 사용할 수 있는 계층 목록은 다음과 같습니다: - ROS 클라이언트 라이브러리 바인딩: RCLC - ROS 클라이언트 라이브러리: RCL - ROS 미들웨어: rmw_ndn - ROS IDL 생성기: generator_c - ROS IDL 타입 지원: CBOR
- ROS IDL 인터페이스: - common_interfaces - rcl_interfaces 최종 데이터로 볼 때 개발이 중단된 것으로 보입니다. 이는 마지막 커밋이 [2018년 7월](https://github.com/astralien3000/riot-ros2/commits/master)로 거슬러 올라가기 때문입니다.

참고:[RIOT-ROS2](https://github.com/astralien3000/riot-ros2/wiki) ## 비교표 | | rosserial | RIOT-ROS2 | micro-ROS | |-------|-----------|-----------|-----------| | OS | 베어 메탈 | RIOT | NuttX, FreeRTOS 및 Zephyr | | 통신 아키텍처 | 브리지드 | 해당 없음 | 브리지드 | | 메시지 형식 | ROS1 | 해당 없음 | CDR (DDS 기반) | | 통신 링크 | UART | UART | UART, SPI, IP (UDP), 6LowPAN, ... |
| 통신 프로토콜 | 커스텀 | NDN | XRCE-DDS (또는 임의 rmw 구현체) | | 코드베이스 | 독립적 구현체 | RCL까지 표준 ROS 2 스택 | RCL까지 표준 ROS 2 스택 (RCLCPP 예정) | | 노드 API | 커스텀 rosserial API | RCL, RCLC | RCL (곧 RCLCPP) |
| 콜백 실행 | 순차적, 메시지 순서대로 | 해당 없음 | ROS 2 실행기 또는 MCU 최적화 실행기 선택 | | 타이머 | 포함되지 않음 | 포함되지 않음 | 일반 ROS 2 타이머 | | 호스트와의 시간 동기화 | 커스텀 | 해당 없음 | NTP/PTP | | 라이프사이클 | 지원되지 않음 | 부분적 | 부분적, 전체 지원 예정 | ---

## 출처: `_docs/overview/docker_ci_status/index.md` <a id="source-docs-overview-docker-ci-status-index-md"></a> <style> .table td img{ height: 18px; max-width: fit-content; } </style> ## 툴링 상태 | 저장소 | 설명 | CI | 이슈 / 풀 리퀘스트 | 문서 | | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------- | | [micro-ros-setup](https://github.com/micro-ROS/micro_ros_setup) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/rolling) | 모든 지원 플랫폼에 Micro-ROS를 빌드하고 플래시하는 마이크로-ROS 도구 | [![GitHub Actions 상태](https://github.com/micro-ROS/micro_ros_setup/actions/workflows/nightly.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_setup/actions/workflows/nightly.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_setup.svg)](https://github.com/micro-ROS/micro_ros_setup/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_setup.svg)](https://github.com/micro-ROS//micro_ros_setup/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_setup/blob/humble/README.md) |
| [micro-ros-espidf-component](https://github.com/micro-ROS/micro_ros_espidf_component) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/rolling) | ESP IDF 빌드 시스템에서 Micro-ROS 사용을 위한 컴포넌트 | [![GitHub Actions 상태](https://github.com/micro-ROS/micro_ros_espidf_component/actions/workflows/nightly.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_espidf_component/actions/workflows/nightly.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_espidf_component.svg)](https://github.com/micro-ROS/micro_ros_espidf_component/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_esp[idf_component.svg](https://github.com/micro-ROS/micro_ros_espidf_component/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_espidf_component/blob/humble/README.md) |
| [마이크로-ROS-아두이노](https://github.com/micro-ROS/micro_ros_arduino) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/rolling) | Arduino IDE와 직접 연동하기 위한 Micro-ROS 사전 컴파일 라이브러리 | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_arduino/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_arduino/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_arduino.svg)](https://github.com/micro-ROS/micro_ros_arduino/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_arduino.svg)](https://github.com/micro-ROS/micro_ros_arduino/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_arduino/blob/humble/README.md) |
| [micro-ros-zephyr-module](https://github.com/micro-ROS/micro_ros_zephyr_module) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/rolling) | Zephyr West 빌드 시스템 내 마이크로-ROS 통합 | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_zephyr_module/actions/workflows/nightly.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_zephyr_module/actions/workflows/nightly.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_zephyr_module.svg)](https://github.com/micro-ROS/micro_ros_zephyr_module/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_zephyr_module.svg)](https://github.com/micro-ROS/micro_ros_zephyr_module/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_zephyr_module/blob/humble/README.md) |
| [micro_ros_raspberrypi_pico_sdk](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/rolling) | 라즈베리 파이 피코 SDK 내 마이크로-ROS 통합 | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_raspberrypi_pico_sdk.svg)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_raspberrypi_pico_sdk.svg)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/blob/humble/README.md) |
| [micro_ros_mbed](https://github.com/micro-ROS/micro_ros_mbed) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/rolling) | Mbed RTOS 내 마이크로-ROS 통합 | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_mbed/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_mbed/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_mbed.svg)](https://github.com/micro-ROS/micro_ros_mbed/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_mbed.svg)](https://github.com/micro-ROS/micro_ros_mbed/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_mbed/blob/humble/README.md) |
| [micro_ros_nuttx_app](https://github.com/micro-ROS/micro_ros_nuttx_app) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/rolling)| Nuttx 10 내 마이크로-ROS 통합 | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_nuttx_app/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_nuttx_app/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_nuttx_app.svg)](https://github.com/micro-ROS/micro_ros_nuttx_app/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_nuttx_app.svg)](https://github.com/micro-ROS/micro_ros_nuttx_app/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_nuttx_app/blob/humble/README.md) |
| [micro_ros_stm32cubemx_utils](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/rolling) | STM32CubeMX 및 STM32CubeIDE 내 마이크로-ROS 통합 | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_stm32cubemx_utils.svg)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_stm32cubemx_utils.svg)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/blob/humble/README.md) |
| [NuttX 포크](https://github.com/micro-ROS/NuttX) | 마이크로-ROS와 함께 사용하기 위한 NuttX 포크. 현재 상태는 **중단됨** | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/NuttX.svg)](https://github.com/micro-ROS/NuttX/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/NuttX.svg)](https://github.com/micro-ROS/NuttX/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/NuttX/blob/master/README.md) |

소스 코드 저장소 현황 대부분의 저장소는 GitHub의 micro-ROS 조직에서 확인할 수 있습니다: [github.com/micro-ROS/](https://github.com/micro-ROS/). | 저장소 | 설명 | CI | 이슈 / 풀 리퀘스트 | 문서 | | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------- | | [Micro XRCE-DDS 클라이언트](https://github.com/eProsima/Micro-XRCE-DDS-Client) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) | eProsima의 DDS-XRCE 오픈소스 구현체 클라이언트 C99 라이브러리 | [![빌드 상태](https://img.shields.io/jenkins/build?jobUrl=http%3A%2F%2Fjenkins.eprosima.com%3A8080%2Fview%2FMicro%2520XRCE%2Fjob%2FMicro-XRCE-DDS-Client%2520Github%2F)](http://jenkins.eprosima.com:8080/view/Micro%20XRCE/job/Micro-XRCE-DDS-Client%20Github/) | [![](https://img.shields.io/github/issues/eProsima/Micro-XRCE-DDS-Client.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Client/issues) [![](https://img.shields.io/github/issues-pr/eProsima/Micro-XRCE-DDS-Client.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Client/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://micro-xrce-dds.docs.eprosima.com/en/latest/client.md) |
| [Micro XRCE-DDS 에이전트](https://github.com/eProsima/Micro-XRCE-DDS-Agent) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) [![](https://img.shields.io/badge/ROS-킬트-밝은초록색)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2)                                                                                                                                         | 에이전트 (DDS 브릿지) eProsima의 DDS-XRCE 오픈소스 구현체 C++11 라이브러리 | [![빌드 상태](https://img.shields.io/jenkins/build?jobUrl=http%3A%2F%2Fjenkins.eprosima.com%3A8080%2Fview%2FMicro%2520XRCE%2Fjob%2FMicro-XRCE-DDS-Agent%2520Github%2F)](http://jenkins.eprosima.com:8080/view/Micro%20XRCE/job/Micro-XRCE-DDS-Agent%20Github/)   | [![](https://img.shields.io/github/issues/eProsima/Micro-XRCE-DDS-Agent.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/issues) [![](https://img.shields.io/github/issues-pr/eProsima/Micro-XRCE-DDS-Agent.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/pulls)                                                 | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://micro-xrce-dds.docs.eprosima.com/en/latest/agent.md) |
| [rmw-microxrcedds](https://github.com/micro-ROS/rmw-microxrcedds) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/rolling) | ROS 2 RMW 어댑터용 Micro-XRCE-DDS 클라이언트 라이브러리 | [![빌드 상태](https://img.shields.io/github/actions/workflow/status/micro-ROS/rmw-microxrcedds/ci.yml)](https://github.com/micro-ROS/rmw-microxrcedds/actions?query=workflow%3A%22CI+rmw_microxrcedds_c%22)                                                      | [![](https://img.shields.io/github/issues/micro-ROS/rmw-microxrcedds.svg)](https://github.com/micro-ROS/rmw-microxrcedds/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/rmw-microxrcedds.svg)](https://github.com/micro-ROS/rmw-microxrcedds/pulls)                                                             | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/rmw-microxrcedds/blob/humble/README.md) | | [rosidl-typesupport-microxrcedds](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/rolling) | ROS 2 타입 지원: Micro-XRCE-DDS 클라이언트 라이브러리 | [![빌드 상태](https://img.shields.io/github/actions/workflow/status/micro-ROS/rosidl_typesupport_microxrcedds/ci.yml)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/actions?query=workflow%3A%22CI+rosidl_typesupport_microxrcedds%22)           | [![](https://img.shields.io/github/issues/micro-ROS/rosidl_typesupport_microxrcedds.svg)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/rosidl_typesupport_microxrcedds.svg)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/blob/master/README.md) |
| [micro-ROS-Agent](https://github.com/micro-ROS/micro-ROS-Agent) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/humble)  [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/rolling)                                                                                                                                                     | ROS 2 에이전트 (브리지)                                                                                                | [![](https://img.shields.io/github/actions/workflow/status/micro-ROS/micro-ROS-Agent/ci.yml)](https://github.com/micro-ROS/micro-ROS-Agent/actions?query=workflow%3A%22CI+micro-ROS+Agent%22)                                                               | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS-Agent.svg)](https://github.com/micro-ROS/micro-ROS-Agent/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS-Agent.svg)](https://github.com/micro-ROS/micro-ROS-Agent/pulls)                                                                 | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro-ROS-Agent/blob/master/README.md)                 |
| [micro-ros-msgs](https://github.com/micro-ROS/micro_ros_msgs) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/rolling)                                                                                                                                                          | micro-ROS 아키텍처 내에서 사용되는 특정 ROS 2 메시지                                                             | [![](https://img.shields.io/badge/-unavailable-lightgrey)]()                                                                                                                                                                                                        | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_msgs.svg)](https://github.com/micro-ROS/micro_ros_msgs/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_msgs.svg)](https://github.com/micro-ROS/micro_ros_msgs/pulls)                                                                     | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_msgs/blob/main/README.md)                    |
| [micro_ros_utilities](https://github.com/micro-ROS/micro_ros_utilities) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/rolling)                                                                                                                                                                                                                                                               | 임베디드 애플리케이션을 위한 micro-ROS 유틸리티                                                                          | [![빌드 상태](https://github.com/micro-ROS/micro_ros_utilities/actions/workflows/ci.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_utilities/actions/workflows/ci.yml)                                                                                   | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_utilities.svg)](https://github.com/micro-ROS/micro_ros_utilities/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_utilities.svg)](https://github.com/micro-ROS/micro_ros_utilities/pulls)                                                 | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_utilities/blob/main/README.md)               |
| [system_modes](https://github.com/micro-ROS/system_modes) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master)                                                                                                                                                                    | `rclcpp` 확장                                                                                                 | [!빌드 상태](https://github.com/micro-ROS/system_modes/actions/workflows/ci.yaml?query=workflow%3A%22Test+system+modes%22)                                                           | [!](https://github.com/micro-ROS/system_modes/issues) [!](https://github.com/micro-ROS/system_modes/pulls)                                                                             | [!](https://github.com/micro-ROS/system_modes/blob/master/README.md)                    |
| rclc [!](https://github.com/ros2/rclc/tree/humble) [!](https://github.com/ros2/rclc/tree/jazzy) [!](https://github.com/ros2/rclc/tree/kilted) [!](https://github.com/ros2/rclc/tree/rolling) | C 언어에서 ROS 2 `rcl`의 기능을 확장하기 위한 편의 함수 및 추가 개념(예: 실행기) 세트 | [!빌드 상태](https://github.com/ros2/rclc/actions/workflows/ci.yml?query=workflow%3A%22CI+R