# micro-ROS 웹사이트 문서 (통합)

생성일: 2026년 1월 29일

이 파일은 micro-ROS 웹사이트의 마크다운 콘텐츠를 연결합니다.
각 섹션은 출처를 보존하기 위해 소스 경로로 시작합니다.

## 목차
- [micro-ROS 웹사이트 문서 (통합)](#micro-ros-웹사이트-문서-통합)
  - [목차](#목차)
  - [출처: `_docs/api/overview/index.md`](#출처-_docsapioverviewindexmd)
  - [출처: `_docs/api/rclc/index.md`](#출처-_docsapirclcindexmd)
  - [출처: `_docs/api/rmw/index.md`](#출처-_docsapirmwindexmd)
  - [출처: `_docs/api/utils/index.md`](#출처-_docsapiutilsindexmd)
  - [출처: `_docs/concepts/benchmarking/benchmarking/index.md`](#출처-_docsconceptsbenchmarkingbenchmarkingindexmd)
  - [목차](#목차-1)
  - [벤치마킹 소개](#벤치마킹-소개)
  - [당사의 벤치마킹 도구 프레임워크](#당사의-벤치마킹-도구-프레임워크)
  - [트레이스 프레임워크 추상화](#트레이스-프레임워크-추상화)
  - [섀도우 빌더](#섀도우-빌더)
  - [계측 코드용 바이너리 생성](#계측-코드용-바이너리-생성)
    - [입력 수신](#입력-수신)
    - [구문 분석 및 확인](#구문-분석-및-확인)
    - [TFA 실행](#tfa-실행)
    - [컴파일](#컴파일)
  - [출처: `_docs/concepts/benchmarking/concept/index.md`](#출처-_docsconceptsbenchmarkingconceptindexmd)
  - [목차](#목차-2)
  - [벤치마킹 소개](#벤치마킹-소개-1)
  - [당사의 벤치마킹 도구 프레임워크](#당사의-벤치마킹-도구-프레임워크-1)
  - [트레이스 프레임워크 추상화](#트레이스-프레임워크-추상화-1)
  - [섀도우 빌더](#섀도우-빌더-1)
  - [계측 코드용 바이너리 생성](#계측-코드용-바이너리-생성-1)
    - [입력 수신](#입력-수신-1)
    - [구문 분석 및 확인](#구문-분석-및-확인-1)
    - [TFA 실행](#tfa-실행-1)
    - [컴파일](#컴파일-1)
  - [출처: `_docs/concepts/benchmarking/memo_prof/index.md`](#출처-_docsconceptsbenchmarkingmemo_profindexmd)
  - [추상적인](#추상적인)
  - [목차](#목차-3)
  - [micro-ROS 스택의 메모리 관리](#micro-ros-스택의-메모리-관리)
    - [XRCE-DDS 라이브러리의 메모리 관리](#xrce-dds-라이브러리의-메모리-관리)
    - [RMW의 메모리 관리](#rmw의-메모리-관리)
    - [추가 고려 사항](#추가-고려-사항)
    - [메모리 버퍼](#메모리-버퍼)
  - [측정 및 방법론](#측정-및-방법론)
    - [테스트된 시나리오](#테스트된-시나리오)
    - [결과](#결과)
      - [Pub-Sub 앱](#pub-sub-앱)
  - [출처: `_docs/concepts/benchmarking/results/index.md`](#출처-_docsconceptsbenchmarkingresultsindexmd)
  - [목차](#목차-4)
  - [추적에서 벤치마킹까지](#추적에서-벤치마킹까지)
    - [일반적인 방법론](#일반적인-방법론)
  - [커뮤니케이션 결과](#커뮤니케이션-결과)
  - [실시간 결과](#실시간-결과)
  - [실행](#실행)
  - [함수 호출 통계](#함수-호출-통계)
  - [정적 메모리 사용량](#정적-메모리-사용량)
  - [동적 메모리 사용량](#동적-메모리-사용량)
  - [전력 소비량](#전력-소비량)
  - [출처: `_docs/concepts/build_system/external_build_systems/index.md`](#출처-_docsconceptsbuild_systemexternal_build_systemsindexmd)
  - [ESP-IDF용 micro-ROS 구성 요소](#esp-idf용-micro-ros-구성-요소)
  - [Zephyr용 micro-ROS 모듈](#zephyr용-micro-ros-모듈)
  - [아두이노용 micro-ROS](#아두이노용-micro-ros)
  - [STM32CubeMX용 micro-ROS](#stm32cubemx용-micro-ros)
  - [출처: `_docs/concepts/build_system/index.md`](#출처-_docsconceptsbuild_systemindexmd)
    - [micro-ROS 클라이언트](#micro-ros-클라이언트)
    - [마이크로 ROS 에이전트](#마이크로-ros-에이전트)
  - [출처: `_docs/concepts/client_library/diagnostics/index.md`](#출처-_docsconceptsclient_librarydiagnosticsindexmd)
  - [출처: `_docs/concepts/client_library/embedded_tf/index.md`](#출처-_docsconceptsclient_libraryembedded_tfindexmd)
  - [소개 및 목표](#소개-및-목표)
  - [로드맵](#로드맵)
  - [감사의 글](#감사의-글)
  - [출처: `_docs/concepts/client_library/execution_management/index.md`](#출처-_docsconceptsclient_libraryexecution_managementindexmd)
  - [목차](#목차-5)
  - [소개](#소개)
  - [rclcpp 표준 실행기 분석](#rclcpp-표준-실행기-분석)
    - [건축학](#건축학)
    - [스케줄링 의미론](#스케줄링-의미론)
  - [처리 패턴 분석](#처리-패턴-분석)
    - [로봇 공학에서의 감지-계획-실행 파이프라인](#로봇-공학에서의-감지-계획-실행-파이프라인)
    - [여러 속도의 동기화](#여러-속도의-동기화)
    - [최우선 처리 경로](#최우선-처리-경로)
    - [실시간 임베디드 애플리케이션](#실시간-임베디드-애플리케이션)
  - [rclc 실행기](#rclc-실행기)
    - [특징](#특징)
      - [순차 실행](#순차-실행)
      - [트리거 조건](#트리거-조건)
      - [LET-의미론](#let-의미론)
      - [멀티스레딩 및 스케줄링 구성](#멀티스레딩-및-스케줄링-구성)
    - [실행기 API](#실행기-api)
      - [구성 단계](#구성-단계)
      - [실행 단계](#실행-단계)
    - [예시](#예시)
      - [로봇 공학에서의 감지-계획-실행 파이프라인 예시](#로봇-공학에서의-감지-계획-실행-파이프라인-예시)
      - [여러 속도 동기화 예시](#여러-속도-동기화-예시)
      - [우선순위가 높은 처리 경로 예시](#우선순위가-높은-처리-경로-예시)
      - [실시간 임베디드 애플리케이션 예시](#실시간-임베디드-애플리케이션-예시)
      - [ROS 2 실행기 워크샵 참조 시스템](#ros-2-실행기-워크샵-참조-시스템)
    - [향후 작업](#향후-작업)
    - [다운로드](#다운로드)
  - [콜백 그룹 레벨 실행기](#콜백-그룹-레벨-실행기)
    - [API 변경 사항](#api-변경-사항)
    - [테스트 벤치](#테스트-벤치)
  - [관련 작업](#관련-작업)
    - [포크스 프레임워크](#포크스-프레임워크)
      - [동기화](#동기화)
      - [컴파일 시 설정](#컴파일-시-설정)
      - [런타임 실행](#런타임-실행)
      - [논의](#논의)
  - [참고자료](#참고자료)
  - [감사의 글](#감사의-글-1)
  - [출처: `_docs/concepts/client_library/features/index.md`](#출처-_docsconceptsclient_libraryfeaturesindexmd)
  - [출처: `_docs/concepts/client_library/introduction/index.md`](#출처-_docsconceptsclient_libraryintroductionindexmd)
  - [출처: `_docs/concepts/client_library/lifecycle_and_system_modes/index.md`](#출처-_docsconceptsclient_librarylifecycle_and_system_modesindexmd)
  - [소개 및 목표](#소개-및-목표-1)
  - [요구사항](#요구사항)
  - [배경: ROS 2 라이프사이클](#배경-ros-2-라이프사이클)
  - [주요 기능](#주요-기능)
    - [기본 라이프사이클](#기본-라이프사이클)
    - [확장된 라이프사이클](#확장된-라이프사이클)
    - [시스템 계층 구조 및 모드](#시스템-계층-구조-및-모드)
    - [모드 추론](#모드-추론)
    - [모드 관리자](#모드-관리자)
    - [오류 처리 및 규칙](#오류-처리-및-규칙)
  - [감사의 글](#감사의-글-2)
  - [출처: `_docs/concepts/fiware_interoperability/index.md`](#출처-_docsconceptsfiware_interoperabilityindexmd)
  - [동기 부여](#동기-부여)
  - [SOSS: 시스템 오브 시스템 합성기](#soss-시스템-오브-시스템-합성기)
  - [SOSS-FIWARE 시스템 핸들](#soss-fiware-시스템-핸들)
  - [FIROS2 사용 사례: FIWARE와 ROS 2 연결](#firos2-사용-사례-fiware와-ros-2-연결)
    - [설치](#설치)
    - [구성](#구성)
  - [출처: `_docs/concepts/middleware/IoT/index.md`](#출처-_docsconceptsmiddlewareiotindexmd)
  - [MQTT](#mqtt)
  - [DDS-XRCE](#dds-xrce)
  - [MQTT vs DDS-XRCE](#mqtt-vs-dds-xrce)
  - [출처: `_docs/concepts/middleware/memo_prof/index.md`](#출처-_docsconceptsmiddlewarememo_profindexmd)
  - [추상적인](#추상적인-1)
- [목차](#목차-6)
  - [FreeRTOS에서 실행되는 Micro XRCE-DDS 클라이언트의 메모리 프로파일링](#freertos에서-실행되는-micro-xrce-dds-클라이언트의-메모리-프로파일링)
    - [메모리 및 구성 가능성](#메모리-및-구성-가능성)
    - [방법론](#방법론)
  - [결과 및 논의](#결과-및-논의)
  - [Linux 환경에서 Micro XRCE-DDS 에이전트의 메모리 프로파일링](#linux-환경에서-micro-xrce-dds-에이전트의-메모리-프로파일링)
    - [에이전트에서 사용 가능한 미들웨어 구현](#에이전트에서-사용-가능한-미들웨어-구현)
    - [방법론 및 결과](#방법론-및-결과)
  - [출처: `_docs/concepts/middleware/Micro_XRCE-DDS/index.md`](#출처-_docsconceptsmiddlewaremicro_xrce-ddsindexmd)
  - [애플리케이션](#애플리케이션)
  - [주요 기능](#주요-기능-1)
    - [낮은 자원 소모량](#낮은-자원-소모량)
    - [다중 운송 지원](#다중-운송-지원)
    - [멀티 플랫폼 지원](#멀티-플랫폼-지원)
    - [QoS 지원](#qos-지원)
  - [기타 링크](#기타-링크)
  - [출처: `_docs/concepts/middleware/rosserial/index.md`](#출처-_docsconceptsmiddlewarerosserialindexmd)
  - [마이크로 XRCE-DDS](#마이크로-xrce-dds)
  - [Micro XRCE-DDS vs rosserial](#micro-xrce-dds-vs-rosserial)
    - [직렬 전송을 통한 마이크로 XRCE-DDS](#직렬-전송을-통한-마이크로-xrce-dds)
  - [rosserial](#rosserial)
  - [비교](#비교)
  - [출처: `_docs/concepts/rtos/comparison/index.md`](#출처-_docsconceptsrtoscomparisonindexmd)
  - [비교표](#비교표)
  - [출처: `_docs/concepts/rtos/index.md`](#출처-_docsconceptsrtosindexmd)
  - [micro-ROS의 RTOS](#micro-ros의-rtos)
  - [출처: `_docs/imprint.md`](#출처-_docsimprintmd)
- [게시자:](#게시자)
- [편집자:](#편집자)
- [면책 조항](#면책-조항)
  - [출처: `_docs/overview/comparison/index.md`](#출처-_docsoverviewcomparisonindexmd)
  - [로시리얼](#로시리얼)
  - [RIOT-ROS2](#riot-ros2)
  - [비교표](#비교표-1)
  - [출처: `_docs/overview/docker_ci_status/index.md`](#출처-_docsoverviewdocker_ci_statusindexmd)
  - [툴링 상태](#툴링-상태)
  - [소스 코드 저장소 현황](#소스-코드-저장소-현황)
  - [예시 애플리케이션 저장소 상태](#예시-애플리케이션-저장소-상태)
  - [Docker 이미지 상태](#docker-이미지-상태)
  - [웹페이지 소스 코드 저장소 상태](#웹페이지-소스-코드-저장소-상태)
  - [코드 저장소 ros2/rclc의 Bloom 릴리스 상태](#코드-저장소-ros2rclc의-bloom-릴리스-상태)
  - [출처: `_docs/overview/ext_tools/index.md`](#출처-_docsoverviewext_toolsindexmd)
    - [**Vulcanexus 마이크로 ROS 요소**](#vulcanexus-마이크로-ros-요소)
    - [**ESP-IDF용 micro-ROS 구성 요소**](#esp-idf용-micro-ros-구성-요소-1)
    - [**Zephyr 빌드 시스템용 micro-ROS 모듈**](#zephyr-빌드-시스템용-micro-ros-모듈)
    - [**아두이노용 micro-ROS**](#아두이노용-micro-ros-1)
    - [**STM32CubeMX용 micro-ROS**](#stm32cubemx용-micro-ros-1)
  - [출처: `_docs/overview/features/index.md`](#출처-_docsoverviewfeaturesindexmd)
  - [출처: `_docs/overview/hardware/index.md`](#출처-_docsoverviewhardwareindexmd)
  - [공식적으로 지원되는 보드](#공식적으로-지원되는-보드)
  - [커뮤니티 지원 게시판](#커뮤니티-지원-게시판)
  - [출처: `_docs/overview/license/index.md`](#출처-_docsoverviewlicenseindexmd)
  - [출처: `_docs/overview/ROS_2_feature_comparison/index.md`](#출처-_docsoverviewros_2_feature_comparisonindexmd)
    - [모든 주요 ROS 개념을 지원하는 마이크로컨트롤러 최적화 클라이언트 API](#모든-주요-ros-개념을-지원하는-마이크로컨트롤러-최적화-클라이언트-api)
    - [ROS 2와의 완벽한 통합](#ros-2와의-완벽한-통합)
    - [자원 제약이 매우 심하지만 유연한 미들웨어](#자원-제약이-매우-심하지만-유연한-미들웨어)
    - [범용 빌드 시스템을 통한 멀티 RTOS 지원](#범용-빌드-시스템을-통한-멀티-rtos-지원)
    - [마이크로 ROS 관련 특징](#마이크로-ros-관련-특징)
  - [출처: `_docs/overview/rtos/index.md`](#출처-_docsoverviewrtosindexmd)
  - [프로젝트에서 공식적으로 지원하는 실시간 운영 체제](#프로젝트에서-공식적으로-지원하는-실시간-운영-체제)
    - [**FreeRTOS**](#freertos)
    - [**제피르**](#제피르)
    - [**NuttX**](#nuttx)
  - [베어메탈 서포트](#베어메탈-서포트)
    - [**아두이노 베어메탈 지원**](#아두이노-베어메탈-지원)
  - [실험적으로 지원되는 실시간 운영 체제](#실험적으로-지원되는-실시간-운영-체제)
    - [**Arm® Mbed™ OS**](#arm-mbed-os)
  - [출처: `_docs/overview/users_and_clients/index.md`](#출처-_docsoverviewusers_and_clientsindexmd)
  - [출처: `_docs/privacy.md`](#출처-_docsprivacymd)
    - [개인정보 보호정책](#개인정보-보호정책)
      - [당사가 귀하의 데이터를 관리하는 방식에 대한 정보](#당사가-귀하의-데이터를-관리하는-방식에-대한-정보)
      - [사용자 및 데이터 주체의 권리](#사용자-및-데이터-주체의-권리)
      - [데이터 처리 관련 정보](#데이터-처리-관련-정보)
    - [쿠키 사용](#쿠키-사용)
  - [출처: `_docs/tutorials/advanced/benchmarking/index.md`](#출처-_docstutorialsadvancedbenchmarkingindexmd)
  - [TFA 섀도우 빌더를 사용한 애플리케이션 벤치마킹](#tfa-섀도우-빌더를-사용한-애플리케이션-벤치마킹)
  - [필수 조건](#필수-조건)
  - [TFA 플러그인](#tfa-플러그인)
  - [TFA 플러그인 생성](#tfa-플러그인-생성)
    - [파일 트리 구조](#파일-트리-구조)
    - [섀도우 빌더의 TFA 코어에 새 플러그인을 등록합니다.](#섀도우-빌더의-tfa-코어에-새-플러그인을-등록합니다)
    - [리스너 생성](#리스너-생성)
    - [선언하다](#선언하다)
      - [시작](#시작)
      - [멈추다](#멈추다)
      - [모든 것을 하나로 합치세요](#모든-것을-하나로-합치세요)
      - [리스너를 등록하세요](#리스너를-등록하세요)
    - [컴파일 파일](#컴파일-파일)
    - [컴파일](#컴파일-2)
  - [구성](#구성-1)
    - [TFA 구성](#tfa-구성)
    - [섀도우 빌더 구성](#섀도우-빌더-구성)
  - [섀도우 빌더 실행 중](#섀도우-빌더-실행-중)
  - [출처: `_docs/tutorials/advanced/create_custom_static_library/index.md`](#출처-_docstutorialsadvancedcreate_custom_static_libraryindexmd)
  - [CMake 툴체인의 예시](#cmake-툴체인의-예시)
  - [colcon 메타 파일 예시](#colcon-메타-파일-예시)
  - [사용자 정의 라이브러리 빌드](#사용자-정의-라이브러리-빌드)
  - [출처: `_docs/tutorials/advanced/create_custom_transports/index.md`](#출처-_docstutorialsadvancedcreate_custom_transportsindexmd)
  - [micro-ROS 클라이언트](#micro-ros-클라이언트-1)
    - [열기 기능](#열기-기능)
    - [닫기 기능](#닫기-기능)
    - [함수 작성](#함수-작성)
    - [읽기 함수](#읽기-함수)
  - [마이크로 ROS 에이전트](#마이크로-ros-에이전트-1)
    - [사용자 정의 엔드포인트](#사용자-정의-엔드포인트)
    - [열기 기능](#열기-기능-1)
    - [닫기 기능](#닫기-기능-1)
    - [함수 작성](#함수-작성-1)
    - [읽기 함수](#읽기-함수-1)
  - [출처: `_docs/tutorials/advanced/create_dds_entities_by_ref/index.md`](#출처-_docstutorialsadvancedcreate_dds_entities_by_refindexmd)
  - [출처: `_docs/tutorials/advanced/create_new_type/index.md`](#출처-_docstutorialsadvancedcreate_new_typeindexmd)
  - [타입 합성을 사용하세요](#타입-합성을-사용하세요)
  - [출처: `_docs/tutorials/advanced/handling_type_memory/index.md`](#출처-_docstutorialsadvancedhandling_type_memoryindexmd)
- [수동 할당](#수동-할당)
  - [micro-ROS의 시퀀스 유형](#micro-ros의-시퀀스-유형)
  - [마이크로 ROS의 화합물 유형](#마이크로-ros의-화합물-유형)
  - [화합물 유형의 순서](#화합물-유형의-순서)
- [마이크로-ROS 유틸리티](#마이크로-ros-유틸리티)
  - [출처: `_docs/tutorials/advanced/microxrcedds_rmw_configuration/index.md`](#출처-_docstutorialsadvancedmicroxrcedds_rmw_configurationindexmd)
  - [메모리 리소스 최적화](#메모리-리소스-최적화)
    - [마이크로 XRCE-DDS](#마이크로-xrce-dds-1)
    - [rmw-microxrcedds](#rmw-microxrcedds)
  - [런타임 구성](#런타임-구성)
  - [출처: `_docs/tutorials/advanced/overview/index.md`](#출처-_docstutorialsadvancedoverviewindexmd)
  - [출처: `_docs/tutorials/core/first_application_linux/index.md`](#출처-_docstutorialscorefirst_application_linuxindexmd)
  - [펌웨어 빌드 중](#펌웨어-빌드-중)
    - [bashrc에 micro-ROS 환경 변수를 추가합니다(선택 사항).](#bashrc에-micro-ros-환경-변수를-추가합니다선택-사항)
  - [micro-ROS 앱 실행하기](#micro-ros-앱-실행하기)
  - [여러 개의 핑퐁 노드](#여러-개의-핑퐁-노드)
  - [출처: `_docs/tutorials/core/first_application_rtos/freertos.md`](#출처-_docstutorialscorefirst_application_rtosfreertosmd)
  - [출처: `_docs/tutorials/core/first_application_rtos/index.md`](#출처-_docstutorialscorefirst_application_rtosindexmd)
  - [출처: `_docs/tutorials/core/first_application_rtos/nuttx.md`](#출처-_docstutorialscorefirst_application_rtosnuttxmd)
  - [펌웨어 구성](#펌웨어-구성)
  - [micro-ROS 앱 실행하기](#micro-ros-앱-실행하기-1)
  - [출처: `_docs/tutorials/core/first_application_rtos/zephyr.md`](#출처-_docstutorialscorefirst_application_rtoszephyrmd)
  - [출처: `_docs/tutorials/core/overview/index.md`](#출처-_docstutorialscoreoverviewindexmd)
  - [출처: `_docs/tutorials/core/teensy_with_arduino/index.md`](#출처-_docstutorialscoreteensy_with_arduinoindexmd)
  - [대상 플랫폼](#대상-플랫폼)
  - [호스트 컴퓨터에 ROS 2 및 micro-ROS 설치:](#호스트-컴퓨터에-ros-2-및-micro-ros-설치)
  - [아두이노 IDE, 틴시두이노 설치 및 micro-ROS와 ROS2 Foxy를 틴시와 함께 사용하기 위한 패치 설정:](#아두이노-ide-틴시두이노-설치-및-micro-ros와-ros2-foxy를-틴시와-함께-사용하기-위한-패치-설정)
  - [틴시 프로그래밍하기](#틴시-프로그래밍하기)
  - [ROS 2 Foxy에서 micro-ROS 에이전트 실행](#ros-2-foxy에서-micro-ros-에이전트-실행)
  - [출처: `_docs/tutorials/core/zephyr_emulator/index.md`](#출처-_docstutorialscorezephyr_emulatorindexmd)
  - [펌웨어 빌드 중](#펌웨어-빌드-중-1)
  - [micro-ROS 앱 실행하기](#micro-ros-앱-실행하기-2)
  - [펌웨어 플래싱](#펌웨어-플래싱)
  - [여러 개의 핑퐁 노드](#여러-개의-핑퐁-노드-1)
  - [출처: `_docs/tutorials/demos/combined_demos/index.md`](#출처-_docstutorialsdemoscombined_demosindexmd)
  - [출처: `_docs/tutorials/demos/crazyflie_demo/index.md`](#출처-_docstutorialsdemoscrazyflie_demoindexmd)
  - [출처: `_docs/tutorials/demos/demobox_demo/index.md`](#출처-_docstutorialsdemosdemobox_demoindexmd)
  - [출처: `_docs/tutorials/demos/edgeimpulse/index.md`](#출처-_docstutorialsdemosedgeimpulseindexmd)
  - [출처: `_docs/tutorials/demos/fiware_demo/index.md`](#출처-_docstutorialsdemosfiware_demoindexmd)
  - [출처: `_docs/tutorials/demos/kobuki_demo/index.md`](#출처-_docstutorialsdemoskobuki_demoindexmd)
  - [출처: `_docs/tutorials/demos/moveit2_demo/index.md`](#출처-_docstutorialsdemosmoveit2_demoindexmd)
  - [출처: `_docs/tutorials/demos/openmanipulator_demo/index.md`](#출처-_docstutorialsdemosopenmanipulator_demoindexmd)
  - [출처: `_docs/tutorials/demos/overview/index.md`](#출처-_docstutorialsdemosoverviewindexmd)
  - [출처: `_docs/tutorials/demos/thumper_demo/index.md`](#출처-_docstutorialsdemosthumper_demoindexmd)
  - [출처: `_docs/tutorials/demos/tof_demo/index.md`](#출처-_docstutorialsdemostof_demoindexmd)
  - [출처: `_docs/tutorials/old/6lowpan/index.md`](#출처-_docstutorialsold6lowpanindexmd)
  - [6LoWPAN이란 무엇인가요?](#6lowpan이란-무엇인가요)
  - [필요한 하드웨어](#필요한-하드웨어)
  - [보드 설정](#보드-설정)
    - [하드웨어 설정](#하드웨어-설정)
    - [소프트웨어 설정](#소프트웨어-설정)
  - [사용 방법은 무엇인가요?](#사용-방법은-무엇인가요)
  - [출처: `_docs/tutorials/old/add_microros_config/index.md`](#출처-_docstutorialsoldadd_microros_configindexmd)
  - [필수 하드웨어](#필수-하드웨어)
  - [작업 공간 설정](#작업-공간-설정)
  - [기본 설정을 지정합니다](#기본-설정을-지정합니다)
  - [Micro-ROS 설정.](#micro-ros-설정)
  - [출처: `_docs/tutorials/old/debugging/index.md`](#출처-_docstutorialsolddebuggingindexmd)
  - [GDB와 OpenOCD를 이용한 NuttX 타겟 디버깅](#gdb와-openocd를-이용한-nuttx-타겟-디버깅)
    - [필수 조건](#필수-조건-1)
      - [소프트웨어](#소프트웨어)
    - [OpenOCD-Nuttx 설치](#openocd-nuttx-설치)
      - [코드 가져오기](#코드-가져오기)
      - [NuttX 설정을 확인하세요](#nuttx-설정을-확인하세요)
      - [NuttX 지원을 위한 OpenOCD 구성](#nuttx-지원을-위한-openocd-구성)
      - [OpenOCD 컴파일](#openocd-컴파일)
      - [OpenOCD 테스트](#openocd-테스트)
    - [OpenOCD를 사용하여 GDB 실행하기](#openocd를-사용하여-gdb-실행하기)
      - [프로그램을 검사하세요](#프로그램을-검사하세요)
  - [Visual Studio Code를 사용한 디버깅](#visual-studio-code를-사용한-디버깅)
    - [동기 부여](#동기-부여-1)
    - [필수 조건](#필수-조건-2)
    - [Cortex-Debug 설치](#cortex-debug-설치)
    - [디버깅을 위해 프로젝트를 설정하세요](#디버깅을-위해-프로젝트를-설정하세요)
      - [NuttX용 Visual Studio Code 실행 구성을 생성합니다.](#nuttx용-visual-studio-code-실행-구성을-생성합니다)
      - [디버거 실행](#디버거-실행)
      - [SVD 파일 추가하기](#svd-파일-추가하기)
  - [출처: `_docs/tutorials/old/microros_nuttx_bsp/index.md`](#출처-_docstutorialsoldmicroros_nuttx_bspindexmd)
    - [주의사항](#주의사항)
    - [기본 사항](#기본-사항)
    - [배경: NuttX 보드 구성](#배경-nuttx-보드-구성)
    - [디렉토리 구조](#디렉토리-구조)
  - [Micro-ROS 지원 추가](#micro-ros-지원-추가)
    - [올바른 C++ 설정 활성화](#올바른-c-설정-활성화)
    - [C++ 원자 연산 내장 함수 추가](#c-원자-연산-내장-함수-추가)
  - [출처: `_docs/tutorials/old/nsh/index.md`](#출처-_docstutorialsoldnshindexmd)
  - [하드웨어 요구 사항:](#하드웨어-요구-사항)
  - [펌웨어 생성](#펌웨어-생성)
- [펌웨어를 플래싱합니다](#펌웨어를-플래싱합니다)
  - [콘솔에 연결](#콘솔에-연결)
  - [출처: `_docs/tutorials/programming_rcl_rclc/executor/executor.md`](#출처-_docstutorialsprogramming_rcl_rclcexecutorexecutormd)
  - [타이머](#타이머)
    - [초기화](#초기화)
    - [콜백](#콜백)
    - [청소하기](#청소하기)
  - [집행자](#집행자)
    - [예시 1: 'Hello World'](#예시-1-hello-world)
    - [예시 2: 트리거된 실행](#예시-2-트리거된-실행)
  - [출처: `_docs/tutorials/programming_rcl_rclc/micro-ROS/micro-ROS.md`](#출처-_docstutorialsprogramming_rcl_rclcmicro-rosmicro-rosmd)
  - [할당자](#할당자)
    - [사용자 정의 할당자](#사용자-정의-할당자)
  - [시간 동기화](#시간-동기화)
  - [핑 에이전트](#핑-에이전트)
  - [연속 직렬화](#연속-직렬화)
  - [출처: `_docs/tutorials/programming_rcl_rclc/node/node.md`](#출처-_docstutorialsprogramming_rcl_rclcnodenodemd)
  - [초기화](#초기화-1)
    - [청소하기](#청소하기-1)
  - [라이프사이클](#라이프사이클)
    - [초기화](#초기화-2)
    - [콜백](#콜백-1)
    - [달리기](#달리기)
    - [청소하기](#청소하기-2)
    - [제한 사항](#제한-사항)
  - [출처: `_docs/tutorials/programming_rcl_rclc/overview/index.md`](#출처-_docstutorialsprogramming_rcl_rclcoverviewindexmd)
  - [출처: `_docs/tutorials/programming_rcl_rclc/parameters/parameters.md`](#출처-_docstutorialsprogramming_rcl_rclcparametersparametersmd)
  - [초기화](#초기화-3)
  - [메모리 요구 사항](#메모리-요구-사항)
  - [매개변수 추가](#매개변수-추가)
  - [매개변수 삭제](#매개변수-삭제)
  - [매개변수 설명](#매개변수-설명)
  - [콜백](#콜백-2)
  - [정리 중](#정리-중)
  - [출처: `_docs/tutorials/programming_rcl_rclc/pub_sub/pub_sub.md`](#출처-_docstutorialsprogramming_rcl_rclcpub_subpub_submd)
  - [출판사](#출판사)
    - [초기화](#초기화-4)
    - [메시지 게시](#메시지-게시)
  - [구독](#구독)
    - [초기화](#초기화-5)
    - [콜백](#콜백-3)
  - [메시지 초기화](#메시지-초기화)
  - [청소하기](#청소하기-3)
  - [출처: `_docs/tutorials/programming_rcl_rclc/qos/QoS.md`](#출처-_docstutorialsprogramming_rcl_rclcqosqosmd)
  - [안정적인 QoS](#안정적인-qos)
  - [최선을 다함](#최선을-다함)
  - [사용자 지정 QoS 구성](#사용자-지정-qos-구성)
  - [출처: `_docs/tutorials/programming_rcl_rclc/service/services.md`](#출처-_docstutorialsprogramming_rcl_rclcserviceservicesmd)
  - [서비스 서버](#서비스-서버)
    - [초기화](#초기화-6)
    - [콜백](#콜백-4)
  - [서비스 클라이언트](#서비스-클라이언트)
    - [초기화](#초기화-7)
    - [콜백](#콜백-5)
    - [요청 보내기](#요청-보내기)
  - [메시지 초기화](#메시지-초기화-1)
  - [청소하기](#청소하기-4)


---

## 출처: `_docs/api/overview/index.md`
<a id="source-docs-api-overview-index-md"></a>

* [**RMW 마이크로 XRCE-DDS**](../rmw/)
* [**마이크로 ROS 유틸리티**](../utils/)
* [**RCLC**](../rclc/)

---

## 출처: `_docs/api/rclc/index.md`
<a id="source-docs-api-rclc-index-md"></a>

할 일

---

## 출처: `_docs/api/rmw/index.md`
<a id="source-docs-api-rmw-index-md"></a>

{% include rmw_doc/Modules/group__rmw.md %}

---

## 출처: `_docs/api/utils/index.md`
<a id="source-docs-api-utils-index-md"></a>

{% include utils_doc/Modules/group__typeutils.md %}
{% include utils_doc/Modules/group__stringutils.md %}
{% include utils_doc/Classes/structmicro__ros__utilities__memory__rule__t.md %}
{% include utils_doc/Classes/structmicro__ros__utilities__memory__conf__t.md %}

---

## 출처: `_docs/concepts/benchmarking/benchmarking/index.md`
<a id="source-docs-concepts-benchmarking-benchmarking-index-md"></a>

## 목차

* [벤치마킹 소개](#introduction-to-benchmarking)
* [당사의 벤치마킹 도구 프레임워크](#our-benchmarking-tool-framework)
* [트레이스 프레임워크 추상화](#trace-framework-abstraction)
* [섀도우 빌더](#shadow-builder)
* 계측 코드용 바이너리 생성](#binary-generation-for-instrumented-code)
  * [입력 수신](#receiving-inputs)
  * [파싱 및 검사](#parse-and-check)
  * [TFA 실행](#tfa-execution)
  * [컴파일](#컴파일)
* [벤치마킹 시작 단계](#step-to-start-benchmarking)



## 벤치마킹 소개

초기 구상부터 최종 결과물까지, 안정적이고 제대로 작동하는 애플리케이션 개발
바이너리 파일을 실행하는 것은 길고 어려운 작업입니다. 이 과정에서 개발자들은 여러 가지 문제에 직면할 수 있습니다.
안정성 및 성능 문제 전반에 걸쳐 발생합니다. 이러한 문제 외에도 몇 가지 문제가 있습니다.
명시된 QoS를 정량화하기는 어려울 수 있습니다. 이러한 문제를 해결하려면...
적절한 도구를 사용하는 것은 번거롭고 지루한 작업일 수 있으며, 이는 개발자들의 생산성 저하로 이어질 수 있습니다.
효율성. 적절한 벤치마킹 도구를 사용하면 이러한 모든 개발상의 문제점을 극복할 수 있습니다.
장애물이 존재하며 개발 시간을 증가시킵니다. 다양한 KPI(지속적인 성과 지표)가 있습니다.
개인이 관심을 가질 만한 성과 지표(Performance Indicators) 등이 있습니다. 이러한 틀 안에서
micro-ROS에서는 개발자가 KPI를 자유롭게 선택할 수 있습니다. 이러한 방식으로,
벤치마킹 도구는 유연성을 유지하여 커뮤니티가 지속적으로 기능을 추가할 수 있도록 할 것입니다.
다양한 KPI를 지원합니다.

우리가 해결하고자 하는 문제는 다음과 같습니다.

 * 시중에는 다양한 벤치마킹 도구가 있으며, 각 도구는 서로 다른 KPI를 목표로 합니다.
 * 다양한 플랫폼(리눅스/너트엑스/베어메탈 등).
 * 각 항목별 벤치마킹 도구를 개발할 시간/자원이 부족합니다.
 * 코드 오버헤드를 피하고 코드의 명확성을 유지하세요.
 * 실행 오버헤드 방지: 벤치마킹 시 실행 속도를 저하시키고 싶지 않습니다.

## 당사의 벤치마킹 도구 프레임워크

개발 중인 벤치마킹 도구는 다음과 같은 기능을 제공하는 프레임워크를 갖추고 있습니다.
개발자들이 자신만의 벤치마킹 도구를 만들 수 있도록 합니다. 개발자가 원하는 각 부분은 다음과 같습니다.
제공된 프레임워크를 사용하여 벤치마크를 플러그인으로 추가할 수 있습니다. 이렇게 하면 됩니다.
플러그인은 공유할 수 있으며, 이를 통해 재사용성을 최대한 높일 수 있습니다.


## 트레이스 프레임워크 추상화

Shadow Builder는 애플리케이션에서 댓글을 파싱하여 전달하는 기능만 단독으로 수행합니다.
Trace Framework Abstraction(TFA) 코어와 함께. TFA 코어는 이를 인지하고 있습니다.
사용 가능한 플러그인, 모든 플러그인의 기능 및 플랫폼
목표. 과정은 아래와 같이 진행됩니다.

 * Benchmarking::XX::YY 기능을 포함하는 줄이 검사됩니다.
   사용 가능한 모든 플러그인에 대해.
 * 기능을 처리할 수 있는 플러그인은 다음과 같은 응답을 보냅니다.
   해당 코드는 다른 코드로 대체될 것입니다.
 * 그러면 출력 파일이 해당 플랫폼에 맞는 폴더에 추가됩니다.
   유형 및 벤치마킹 유형.

이 벤치마킹 도구의 핵심은 범용성입니다. 플러그인은 다음과 같은 기능을 제공할 것입니다.
반대로 특정 벤치마킹에 필요한 구체적인 구현을 제시합니다.
플랫폼. 모든 플러그인은 파서가 요청하는 정보를 제공합니다.

 * 지원되는 플랫폼 목록을 제공하십시오.
 * 처리되는 함수의 목록을 제공하십시오.
 벤치마킹에 사용할 코드 조각을 제공해 주세요.
 * 패치 목록 및/또는 패치 코드를 제공하십시오.
 * 선택 사항으로 벤치마크를 실행하기 위한 종료 스크립트를 제공할 수 있습니다.


## 섀도우 빌더

이 섹션에서는 섀도우 빌더(SB)와 관련된 몇 가지 개념을 소개합니다.

Shadow Builder는 코드를 투명하게 계측하는 도구입니다.
벤치마크. 해당 도구는 "계측된 코드"를 출력할 수 있을 것입니다.
나중에 일반 코드로 컴파일됩니다. 다음 단계는 섀도우가 무엇인지 설명합니다.
건설 프로세스 흐름:

 * 사용자로부터 구성 파일(벤치마킹 구성 파일)을 가져옵니다.
 * 적절한 출처를 확보하세요.
 * 추적 프레임워크 추상화 구성 파일을 실행합니다.
 * 소스 파일을 파싱하여 코드 삽입에 필요한 작업을 수행합니다.
 * 다양한 플랫폼에 맞게 대상 바이너리를 컴파일합니다.
 * 필요한 경우, 수행하는 벤치마크 유형에 따라 다른 벤치마크를 컴파일하십시오.
   타겟 바이너리 벤치마킹.

SB(섀도우 빌더)는 사용자가 최대한 투명하게 사용할 수 있도록 설계되었습니다.
벤치마킹이 활성화되어 있지 않으면 해당 기능을 건너뛰어야 합니다.

SB는 소스 코드의 경로/Git 저장소를 가져오는 일을 담당합니다.
벤치마킹이 필요합니다. 벤치마킹. 소스는 다음과 같이 지정됩니다.
벤치마킹 구성 파일의 사용자입니다.

코드 삽입을 위해 이를 가능하게 하는 몇 가지 도구가 있습니다. CLang AST 도구가 그 예입니다.
일부 코드를 삽입할 수 있도록 허용합니다.


## 계측 코드용 바이너리 생성

바이너리 생성은 소스 코드를 컴파일하는 과정입니다. 이를 위해
벤치마크를 실행하기 전에 소스 코드를 컴파일하려면 먼저 계측이 필요합니다.
해당 코드는 투명한 방식으로 계측될 것입니다.
프로그래머/사용자. 따라서 프로그래머가 제공한 설정 파일이 사용됩니다.
구성 파일에 설명된 대로 구문 분석되고 코드가 삽입됩니다.

### 입력 수신

이진수 생성 파이프라인은 처리할 두 개의 입력을 받습니다.
 * 구성 벤치마킹 파일.
 * 벤치마킹용 소스 코드.

요약하자면, 해당 구성은 다음과 같은 내용을 설명합니다.

 * 벤치마킹 대상 (출처).
 * 벤치마킹 대상.
 * 어떤 유형의 벤치마크인가요?
 * 선택적으로 비교 대상 기준선(기준선 출처)을 지정할 수 있습니다.

### 구문 분석 및 확인

입력이 수신되면 **섀도우 빌더**는 구성을 분석합니다.
파일. 구성 파일에서 Shadow 빌더는 다음 정보를 가져옵니다.

 * 달성해야 할 다양한 벤치마킹 기준.
 * 대상 플랫폼.

Shadow Builder는 구문 분석 외에도 검사 작업을 담당합니다.
구성 파일 내의 기능과 일관성 및 다양한
TFA 모듈에 등록된 TFA 플러그인입니다.

### TFA 실행

일단 구문 분석이 완료되고 TFA 모듈 기능과 비교하여 확인되면 Shadow는
빌더는 설정 내용을 소스 코드로 변환하는 역할을 담당합니다.
번역된 자료는 TFA 모듈과의 협력을 통해 제공될 것입니다.
TFA의 자세한 단계는 여기에서 확인할 수 있습니다. 이 단계가 끝나면 TFA가 완료됩니다.
컴파일 준비가 완료된 새로운 위조 소스 코드를 생성합니다. 또한
패치된 소스 코드를 사용하면 TFA는 벤치마크를 수행하는 스크립트를 생성합니다.

### 컴파일

컴파일은 모든 종류의 벤치마크에 대해 진행됩니다.
대상 플랫폼. 실행되는 벤치마크 유형에 따라 다릅니다.
벤치마크 세션당 하나 이상의 바이너리 파일이 생성됩니다. 바이너리 파일의 개수는 다음과 같습니다.
생성되는 방식은 사용자가 섀도우에 제공하는 플러그인에 따라서도 달라집니다.
빌더. 섀도우 빌더는 플러그인의 기능을 가져옵니다.
개발자의 요청을 받아 일치시킨 후 그에 맞는 소프트웨어를 생성합니다.
성냥.


벤치마킹 시작 단계

섀도우 빌더는 다음과 같이 실행됩니다.

 * 소프트웨어 소스가 Shadow Builder로 전달됩니다.
 * 소스 코드는 전달되며 /*Benchmarking::XX::YY*/를 포함하는 주석이 표시됩니다.
   (태그) 해당 코드 라인은 Trace Framework 추상화 모듈로 전달됩니다.
   주석을 사용하는 것이 좋습니다 → include 문이 필요 없습니다.
 * TFA에 등록된 모든 플러그인은 Benchmarking::XX::YY 기능을 지원합니다.
   소스 코드에 추가될 코드 조각을 반환합니다.
 * 모든 구문 분석이 완료되면 섀도우 빌더는 모든 다른 항목에 대해 컴파일합니다.
   플러그인이나 사용자 설정에 의해 요청된 플랫폼.

---

## 출처: `_docs/concepts/benchmarking/concept/index.md`
<a id="source-docs-concepts-benchmarking-concept-index-md"></a>

## 목차

* [벤치마킹 소개](#introduction-to-benchmarking)
* [당사의 벤치마킹 도구 프레임워크](#our-benchmarking-tool-framework)
* [트레이스 프레임워크 추상화](#trace-framework-abstraction)
* [섀도우 빌더](#shadow-builder)
* 계측 코드용 바이너리 생성](#binary-generation-for-instrumented-code)
  * [입력 수신](#receiving-inputs)
  * [파싱 및 검사](#parse-and-check)
  * [TFA 실행](#tfa-execution)
  * [컴파일](#컴파일)
* [벤치마킹 시작 단계](#step-to-start-benchmarking)



## 벤치마킹 소개

초기 스케치부터 최종 결과물까지, 안정적이고 제대로 작동하는 애플리케이션 개발
바이너리 실행은 시간이 오래 걸리고 어려운 작업입니다. 이 과정에서 개발자들은 여러 가지 문제에 직면할 수 있습니다.
안정성 문제, 성능 문제 등 여러 가지 문제가 있습니다. 이러한 문제 외에도 몇 가지 문제가 더 있습니다.
명시된 QoS를 정량화하기는 어려울 수 있습니다. 이러한 문제를 해결하려면...
적절한 도구를 사용하는 것은 번거롭고 지루한 작업일 수 있으며, 이는 개발자들의 생산성 저하로 이어질 수 있습니다.
효율성. 적절한 벤치마킹 도구를 사용하면 이러한 모든 개발상의 문제점을 극복할 수 있습니다.
장애물이 존재하며 개발 시간을 증가시킵니다. 다양한 KPI(지속적인 성과 지표)가 있습니다.
개인이 관심을 가질 만한 성과 지표(Performance Indicators) 등이 있습니다. 이러한 틀 안에서
이 마이크로 ROS에서는 개발자가 KPI를 자유롭게 선택할 수 있습니다. 이러한 방식으로,
벤치마킹 도구는 유연성을 유지하여 커뮤니티가 지속적으로 기능을 추가할 수 있도록 할 것입니다.
다양한 KPI에 대한 지원을 제공합니다.

우리가 해결하고자 하는 문제는 다음과 같습니다.

 * 시중에는 다양한 벤치마킹 도구가 있으며, 각 도구는 서로 다른 KPI를 목표로 합니다.
 * 다양한 플랫폼(리눅스/너트엑스/베어메탈 등).
 * 각 항목별 벤치마킹 도구를 개발할 시간/자원이 부족합니다.
 * 코드 오버헤드를 피하고 코드의 명확성을 유지하세요.
 * 실행 오버헤드 방지: 벤치마킹 시 실행 속도를 저하시키고 싶지 않습니다.

## 당사의 벤치마킹 도구 프레임워크

개발 중인 벤치마킹 도구는 다음과 같은 기능을 제공하는 프레임워크를 갖추고 있습니다.
개발자들이 자신만의 벤치마킹 도구를 만들 수 있도록 합니다. 개발자가 원하는 각 부분은 다음과 같습니다.
제공된 프레임워크를 사용하여 벤치마크를 플러그인으로 추가할 수 있습니다. 이렇게 하면 됩니다.
플러그인은 공유할 수 있으며, 이를 통해 재사용성을 최대한 높일 수 있습니다.


## 트레이스 프레임워크 추상화

Shadow Builder는 애플리케이션에서 댓글을 파싱하여 전달하는 기능만 단독으로 수행합니다.
Trace Framework Abstraction(TFA) 코어와 함께. TFA 코어는 이를 인지하고 있습니다.
사용 가능한 플러그인, 모든 플러그인의 기능 및 플랫폼
목표. 과정은 아래와 같이 진행됩니다.

 * Benchmarking::XX::YY 기능을 포함하는 줄이 검사됩니다.
   사용 가능한 모든 플러그인에 대해.
 * 기능을 처리할 수 있는 플러그인은 다음과 같은 응답을 보냅니다.
   해당 코드는 다른 코드로 대체될 것입니다.
 * 그러면 출력 파일이 해당 플랫폼에 맞는 폴더에 추가됩니다.
   유형 및 벤치마킹 유형.

이 벤치마킹 도구의 핵심은 범용성입니다. 플러그인은 다음과 같은 기능을 제공할 것입니다.
반대로 특정 벤치마킹에 필요한 구체적인 구현을 제시합니다.
플랫폼. 모든 플러그인은 파서가 요청하는 정보를 제공합니다.

 * 지원되는 플랫폼 목록을 제공하십시오.
 * 처리되는 함수의 목록을 제공하십시오.
 벤치마킹에 사용할 코드 조각을 제공해 주세요.
 * 패치 목록 및/또는 패치 코드를 제공하십시오.
 * 선택 사항으로 벤치마크를 실행하기 위한 종료 스크립트를 제공할 수 있습니다.


## 섀도우 빌더

이 섹션에서는 섀도우 빌더(SB)와 관련된 몇 가지 개념을 소개합니다.

Shadow Builder는 코드를 투명하게 계측하는 도구입니다.
벤치마크. 해당 도구는 "계측된 코드"를 출력할 수 있을 것입니다.
나중에 일반 코드로 컴파일됩니다. 다음 단계는 섀도우가 무엇인지 설명합니다.
건설 프로세스 흐름:

 * 사용자로부터 구성 파일(벤치마킹 구성 파일)을 가져옵니다.
 * 적절한 출처를 확보하세요.
 * 추적 프레임워크 추상화 구성 파일을 실행합니다.
 * 소스 파일을 파싱하여 코드 삽입에 필요한 작업을 수행합니다.
 * 다른 플랫폼용 대상 바이너리를 컴파일합니다.
 * 필요한 경우, 수행하는 벤치마크 유형에 따라 다른 벤치마크를 컴파일하십시오.
   타겟 바이너리 벤치마킹.

SB(섀도우 빌더)는 사용자가 최대한 투명하게 사용할 수 있도록 설계되었습니다.
벤치마킹이 활성화되어 있지 않으면 해당 기능을 건너뛰어야 합니다.
적절한 출처

SB는 소스 코드의 경로/Git 저장소를 가져오는 일을 담당합니다.
벤치마킹이 필요합니다. 벤치마킹. 소스는 다음과 같이 지정됩니다.
벤치마킹 구성 파일의 사용자. 코드 삽입

코드 삽입을 위해 이를 가능하게 하는 몇 가지 도구가 있습니다. CLang AST 도구가 그 예입니다.
일부 코드를 삽입할 수 있도록 허용합니다.


## 계측 코드용 바이너리 생성

바이너리 생성은 소스 코드를 컴파일하는 과정입니다. 이를 위해
벤치마크를 실행하기 전에 소스 코드를 컴파일하려면 먼저 계측이 필요합니다.
해당 코드는 투명한 방식으로 계측될 것입니다.
프로그래머/사용자. 따라서 프로그래머가 제공한 설정 파일이 사용됩니다.
구성 파일에 설명된 대로 구문 분석되고 코드가 삽입됩니다.

### 입력 수신

이진수 생성 파이프라인은 처리할 두 개의 입력을 받습니다.
 * 구성 벤치마킹 파일.
 * 벤치마킹용 소스 코드.

요약하자면, 해당 구성은 다음과 같은 내용을 설명합니다.

 * 벤치마킹 대상 (출처).
 * 벤치마킹 대상.
 * 어떤 유형의 벤치마크인가요?
 * 선택적으로 비교 대상 기준선(기준선 출처)을 지정할 수 있습니다.

### 구문 분석 및 확인

입력이 수신되면 **섀도우 빌더**는 구성을 분석합니다.
파일. 구성 파일에서 Shadow 빌더는 다음 정보를 가져옵니다.

 * 달성해야 할 다양한 벤치마킹 기준.
 * 대상 플랫폼.

Shadow Builder는 구문 분석 외에도 검사 작업을 담당합니다.
구성 파일 내의 기능과 일관성 및 다양한
TFA 모듈에 등록된 TFA 플러그인입니다.

### TFA 실행

일단 구문 분석이 완료되고 TFA 모듈 기능과 비교하여 확인되면 Shadow는
빌더는 설정 내용을 소스 코드로 변환하는 역할을 담당합니다.
번역된 자료는 TFA 모듈과의 협력을 통해 제공될 것입니다.
TFA의 자세한 단계는 여기에서 확인할 수 있습니다. 이 단계가 끝나면 TFA가 완료됩니다.
컴파일 준비가 완료된 새로운 위조 소스 코드를 생성합니다. 또한
패치된 소스 코드를 사용하면 TFA는 벤치마크를 수행하는 스크립트를 생성합니다.

### 컴파일

컴파일은 모든 종류의 벤치마크에 대해 진행됩니다.
대상 플랫폼. 실행되는 벤치마크 유형에 따라 다릅니다.
벤치마크 세션당 하나 이상의 바이너리 파일이 생성됩니다. 바이너리 파일의 개수는 다음과 같습니다.
생성되는 방식은 사용자가 섀도우에 제공하는 플러그인에 따라서도 달라집니다.
빌더. 섀도우 빌더는 플러그인의 기능을 가져옵니다.
개발자의 요청을 받아 일치시킨 후 그에 맞는 소프트웨어를 생성합니다.
성냥.


벤치마킹 시작 단계

섀도우 빌더는 다음과 같이 실행됩니다.

 * 소프트웨어 소스가 Shadow Builder로 전달됩니다.
 * 소스 코드는 전달되며 /*Benchmarking::XX::YY*/를 포함하는 주석이 표시됩니다.
   (태그) 해당 코드 라인은 Trace Framework 추상화 모듈로 전달됩니다.
   주석을 사용하는 것이 좋습니다 → include 문이 필요 없습니다.
 * TFA에 등록된 모든 플러그인은 Benchmarking::XX::YY 기능을 지원합니다.
   소스 코드에 추가될 코드 조각을 반환합니다.
 * 모든 구문 분석이 완료되면 섀도우 빌더는 모든 다른 항목에 대해 컴파일합니다.
   플러그인이나 사용자 설정에 의해 요청된 플랫폼.


---

## 출처: `_docs/concepts/benchmarking/memo_prof/index.md`
<a id="source-docs-concepts-benchmarking-memo-prof-index-md"></a>

## 추상적인

이 섹션에서는 micro-ROS 클라이언트 라이브러리의 메모리 사용량을 분석합니다. 프로파일링을 위해 알려진 크기의 ROS 토픽에 대한 퍼블리셔/서브스크라이버 애플리케이션과 클라이언트/서버 유형의 애플리케이션을 모두 고려했습니다. 메시지 크기, 엔티티 수, 히스토리 크기 및 전송 프로토콜과 같은 주요 매개변수를 조정하여 여러 가지 구성을 살펴보았습니다. 또한, 다양한 유형의 메모리를 구분하여 분석했습니다. XRCE-DDS 클라이언트는 동적 메모리를 전혀 사용하지 않는 반면, micro-ROS 클라이언트는 정적 메모리와 동적 메모리를 모두 사용합니다. 따라서 micro-ROS가 각 유형의 메모리를 얼마나 소비하는지 평가하는 것은 라이브러리 동작의 실시간성과 결정성에 중요한 영향을 미칩니다.

본 연구에서는 [FreeRTOS](https://www.freertos.org/index.md)에서 실행되는 애플리케이션과 UDP(WiFi 경유)로 Linux 머신에서 실행되는 micro-ROS 에이전트에 연결된 [ESP32](https://www.espressif.com/en/products/socs/esp32) 보드에서 실행되는 애플리케이션에 대한 측정을 수행했습니다.

결과에 따르면, 클라이언트의 총 메모리 사용량은 XRCE-DDS 미들웨어보다 높은 것으로 나타났습니다. 적어도 라이브러리의 기본 설정 매개변수를 사용할 경우에는 그렇습니다. 하지만 특정 애플리케이션의 요구 사항에 맞게 이러한 매개변수(예: MTU 또는 히스토리 크기)를 적절히 조정하면 대상 장치의 제한된 리소스에 훨씬 더 잘 맞도록 총 메모리 사용량을 최적화할 수 있습니다.

## 목차

* [micro-ROS 스택의 메모리 관리](#memory-management-of-the-micro-ros-stack)
  * [XRCE-DDS 라이브러리의 메모리 관리](#memory-management-of-the-xrce-dds-library)
  * [RMW의 메모리 관리](#memory-management-of-the-rmw)
  * [추가 고려 사항](#additional-considerations)
  * [메모리 버퍼](#memory-buffers)
* [측정 및 방법론](#measurements-and-methodology)
  * [테스트된 시나리오](#tested-scenarios)
  * [결과](#results)
    * [Pub-Sub 앱](#pub-sub-apps)
    * [클라이언트-서버 앱](#client-server-apps)
  * [결론](#결론)


## micro-ROS 스택의 메모리 관리

micro-ROS의 [대상 장치](https://micro-ros.github.io/_docs/overview/hardware/)는 리소스가 매우 제한적인 저사양 또는 중사양 마이크로컨트롤러 유닛(MCU)이므로, 사용자가 애플리케이션에 최적의 라이브러리 구성과 실행에 적합한 플랫폼을 선택할 수 있도록 클라이언트의 메모리 사용량을 평가하는 것이 매우 중요합니다.

이러한 장치의 제한된 메모리 자원을 고려할 때, 메모리 사용량을 제어하고 조정할 수 있는 능력은 매우 중요합니다. micro-ROS는 가능한 한 동적 메모리보다 정적 메모리 사용을 우선시하고, 컴파일 시점에 메모리 자원과 관련된 구성 매개변수들을 조정하여 애플리케이션의 메모리 사용량을 최적화함으로써 메모리 관리 문제를 해결하고자 합니다.

이러한 튜닝은 [Micro XRCE-DDS](https://github.com/eProsima/Micro-XRCE-DDS) 라이브러리에서 처리하는 메모리 리소스와 해당 라이브러리의 RMW 구현체인 [rmw-microxrcedds](https://github.com/micro-ROS/rmw-microxrcedds)에서 처리하는 메모리 리소스, 이렇게 두 가지 서로 다른 메모리 리소스를 조작함으로써 수행할 수 있습니다. 이 섹션에서는 이러한 리소스를 제어하는 ​​가장 중요한 매개변수와 사용자가 각 레이어를 조작하여 micro-ROS의 메모리 사용량을 조절하는 방법을 요약합니다.

### XRCE-DDS 라이브러리의 메모리 관리

Micro XRCE-DDS 클라이언트는 동적 및 정적 메모리를 전혀 사용하지 않으므로, 메모리 사용량은 실행 중 스택 증가량에만 의존합니다. 메모리 관리는 구성 시점에 이루어지며, 사용자는 컴파일 전에 여러 프로파일을 활성화 또는 비활성화하여 실행 코드 크기를 고정할 수 있습니다. 이러한 프로파일을 통해 사용자는 최대 전송 단위(MTU)와 통신 스트림을 조정하여 메모리 증가량을 제어할 수 있습니다.

MTU는 통신 스트림의 크기를 조절하며, 전송 계층의 내부 버퍼(메시지가 교환될 때 기록되고 저장되는 메모리 블록)에서 사용 가능한 메모리 크기와 일치합니다. micro-ROS에서 사용 가능한 모든 전송 방식에 대해 기본값은 512B입니다.

통신 스트림은 클라이언트와 에이전트 간의 메시지 흐름을 제어하고 정보의 순서 있는 흐름을 나타냅니다. 스트림에는 최선형(Best-Effort) 스트림과 신뢰성(Reliable) 스트림의 두 가지 유형이 있습니다. 최선형 스트림은 한 번에 하나의 메시지만 처리하는 단일 데이터 버퍼로 구성됩니다. 따라서 최선형 스트림은 전송 계층에 신뢰성 책임을 맡기고 데이터를 송수신하며, 이러한 스트림에서 처리하는 메시지 크기는 사용되는 전송 계층에 정의된 MTU보다 작거나 같아야 합니다. 반면, 신뢰성 스트림은 전송 계층에 관계없이 무손실 통신을 가능하게 하며, MTU보다 긴 메시지를 송수신하기 위해 메시지 분할을 허용합니다. 분할된 메시지를 저장할 수 있는 청크 수는 XRCE-DDS 히스토리(이하 XRCE_history)에 의해 제어되며, 기본값은 4슬롯입니다.

### RMW의 메모리 관리

`rmw-microxrcedds` 레이어는 노드, 퍼블리셔, 서브스크라이버 등 ROS 클라이언트 지원 라이브러리와 관련된 리소스를 할당하기 위해 정적 메모리를 사용합니다. 이 메모리는 특정 애플리케이션의 모든 엔티티가 공유하는 정적 메모리 풀에 의해 관리됩니다. 풀의 개수는 RMW 메시지 기록(이하 RMW_history)에 의해 고정되며, 이 매개변수는 사용자가 CMake 플래그로 선택합니다.
이 RMW 풀은 사용자가 메시지를 읽기 전에 구독 메시지를 보관하는 메시지 큐 역할을 합니다. 각 풀의 크기는 MTU 'XRCE_history'로 지정됩니다.

### 추가 고려 사항

클라이언트-에이전트 통신에 사용되는 두 개의 히스토리 버퍼가 본질적으로 다르다는 점은 이제 명확해졌을 것입니다. XRCE-DDS 히스토리는 신뢰성 통신이 구현된 경우 조각난 메시지 덩어리를 저장하는 데 사용됩니다. 덕분에 신뢰성 모드에서는 헤더에 할당된 메모리를 제외한 MTU × XRCE_history 크기의 메시지를 송수신할 수 있습니다. 반면 최선형 통신 스트림은 MTU보다 작거나 같은 크기의 메시지만 교환할 수 있습니다. RMW의 히스토리는 구독 및 서비스의 경우 데이터 수신을 제어합니다. 이 경우 RMW에 버퍼 링이 생성되어 XRCE-DDS 라이브러리에서 수신한 데이터를 저장하고 완충하는 동시에 사용자 인터페이스에서 수신한 `take` 호출을 처리하여 데이터를 가져와 상위 계층을 통해 사용자 애플리케이션까지 전송합니다.

이는 XRCE-DDS 라이브러리와 RMW의 구독 방식에서 서로 다른 동작 방식을 보여줍니다. XRCE-DDS 라이브러리는 콜백을 사용하여 새 메시지가 수신될 때마다 사용자에게 경고하는 반면, RMW는 폴링 방식을 사용합니다. 즉, 사용자가 구독한 토픽을 수신 대기하고 명시적으로 요청할 때까지 해당 토픽을 저장합니다.

마지막으로, 발행과 구독이 소비하는 메모리의 종류와 크기가 상당히 다르다는 점에 주목하십시오. 그 이유는 구독자가 미리 할당된 메모리 버퍼에 데이터를 저장하기 때문입니다. 이를 통해 메시지는 슬롯(슬롯 수는 XRCE-DDS 및 RMW 기록에 따라 달라짐)에 저장되는데, 이는 두 가지 목적을 위한 것입니다. 첫째, 신뢰할 수 있는 통신이 선택된 경우 데이터 손실을 방지하기 위한 것이며, 이는 XRCE-DDS 기록에 반영됩니다. 둘째, 다양한 계층 간의 유연한 메시지 처리 및 비동기 메시지 전달을 가능하게 하기 위한 것이며, 이는 RMW 기록에 반영됩니다. 서비스의 경우도 구독자의 경우와 매우 유사한데, 요청/응답 패턴에서 관련된 모든 주체는 데이터를 수신하고 저장 및 처리해야 하기 때문입니다.

아래 그림들은 이 절에서 논의된 모든 특징들을 시각적으로 보여줍니다.

<img alt="Pub/sub 다이어그램" src="_docs/concepts/benchmarking/memo_prof/pubsub_diagram.png" class="center">
<p align="center">
  그림 1: 게시자 및 구독자 애플리케이션에서 micro-ROS 클라이언트 라이브러리의 메모리 관리 방식을 보여주는 예시 다이어그램.
</p>

<img alt="서비스 다이어그램" src="_docs/concepts/benchmarking/memo_prof/services_diagram.png" class="center" width="50%">

<p align="center">
  그림 2: 서비스 애플리케이션에서 micro-ROS 클라이언트 라이브러리의 메모리 관리 방식을 보여주는 예시 다이어그램.
</p>

### 메모리 버퍼

MCU에서 실행되는 micro-ROS 애플리케이션이 사용하는 총 메모리 양은 정적 메모리, 스택 메모리, 동적 메모리 등 각기 다른 기능에 할당된 다양한 메모리 영역의 합으로 계산할 수 있습니다.

이 섹션에서는 micro-ROS 라이브러리에서 사용되는 이러한 종류의 메모리에 대해 간략하게 설명합니다.

*정적 메모리*

정적 메모리는 엔티티 수가 0이 아닌 .bss 및 .data 섹션이 차지하는 메모리와 micro-ROS 애플리케이션이 실행되지 않을 때, 즉 RTOS 및 라이브러리의 나머지 구성 요소가 차지하는 메모리 간의 차이로 계산됩니다. 이를 통해 micro-ROS가 실제로 차지하는 메모리와 micro-ROS와 관련 없는 메모리를 구분할 수 있습니다. 플래시 메모리에 저장된 고정 데이터(.text 섹션)와 직렬화 전 데이터를 저장하는 데이터 버퍼는 사용자 애플리케이션에 특화되어 있고 micro-ROS 클라이언트 작업과 직접적인 관련이 없으므로 고려하지 않습니다.

스택 메모리

스택은 프로그램 실행 시 사용되는 함수들이 차지하는 메모리 영역입니다. 정적 메모리는 컴파일된 바이너리 객체를 분석하여 간단히 계산할 수 있지만, 스택은 애플리케이션 실행 전에 정확한 값을 알 수 없는 메모리 덩어리입니다. 프로그램 실행 중 사용되는 스택은 FreeRTOS의 메모리 관리 기능에 포함된 uxTaskGetStackHighWaterMark() 함수를 통해 계산됩니다. 이 함수는 프로그램이 사용하는 스택이 최대값에 도달했을 때 사용되지 않은 스택의 양을 반환합니다. 이 값을 알려진 전체 사용 가능한 스택에서 빼면 애플리케이션이 사용하는 스택의 최대값을 구할 수 있습니다.

*동적 메모리*

이는 C 언어의 `calloc()` 및 `malloc()` 함수 호출을 통해 프로그램이 동적으로 할당한 메모리입니다. ROS 2 스택은 사용자가 사용자 지정 메모리 할당자를 프로그램에 제공할 수 있으므로, 우리는 동적 메모리 관련 함수 호출을 가로채서 이를 측정했습니다.

micro-ROS의 동적 메모리 사용 방식을 더 잘 이해하기 위해서는 micro-ROS 작동의 두 단계를 구분해야 합니다. 첫 번째 단계는 micro-ROS가 초기화되는 단계로, 노드, 퍼블리셔, 서브스크라이버와 같은 엔티티가 생성되고 모든 계층이 작동 준비를 마칩니다. 이 단계를 구성 단계라고 하며, micro-ROS는 이 단계에서 모든 동적 메모리 작업을 수행합니다. 두 번째 단계는 운영 단계로, 실제 게시, 구독 및 기타 모든 노드 작업이 이루어지는 단계입니다. 이 단계에서는 micro-ROS 스택 전체에서 동적 메모리가 사용되지 않습니다. 선택적으로 세 번째 단계가 있는데, 이 단계에서는 micro-ROS 계층이 종료되고 정리되어 구성 단계에서 할당된 모든 동적 메모리가 해제됩니다.

## 측정 및 방법론

### 테스트된 시나리오

이 섹션에서는 마이크로 ROS 라이브러리의 메모리 사용량에 대한 포괄적인 검토를 제공하기 위해 실험 설정과 다양한 시나리오를 요약합니다.

일반적으로 우리의 목표는 전체 메모리와 그 구성 요소(정적, 스택 및 동적)가 다음과 같은 요인들에 의해 어떻게 영향을 받는지 평가하는 것입니다.

* 토픽 크기(가변 크기의 바이트 배열 형태)
* ROS 엔티티(pub/sub 및 service/client)의 수
* 사용된 통신 스트림 유형(신뢰성 vs 최선 노력)

첫 번째 설정에서는 UDP 전송 방식을 사용하는 다양한 크기의 토픽을 발행하거나 구독하는 애플리케이션의 총 메모리 사용량을 분석합니다. 이때 발행자와 구독자의 수를 다양하게 변화시키면서 분석을 진행하며, 두 가지 QoS 유형(신뢰성 QoS와 최선형 QoS)을 모두 고려합니다.

두 번째 설정에서는 전체 메모리가 정적, 스택 및 동적 메모리 간에 어떻게 분배되는지 보고합니다.

세 번째 측정은 고정된 메시지 크기를 사용하고 RMW 계층의 기록 캐시를 1에서 20 단위까지 변화시키면서 하나의 구독에 대해서만 수행되었습니다.

네 번째 측정 항목에서는 클라이언트/서비스 패턴에 따라 작동하는 요청자/응답자 애플리케이션의 활동 범위를 측정합니다.

### 결과

이 섹션에서는 위에서 설명한 실험 구성에 대한 메모리 프로파일링에 사용된 방법론을 자세히 설명하고, 각 구성에 대해 얻은 결과를 제시합니다.

측정은 엔티티 수가 다양한 마이크로 ROS 클라이언트 애플리케이션에서 수행됩니다. 엔티티 수는 게시자/구독자(1~15개) 또는 클라이언트/서버(1~10개)로 구성됩니다.

테스트에 사용된 모든 앱은 FreeRTOS 운영체제를 기반으로 ESP32 보드에서 실행됩니다. 이 보드는 UDP(Wi-Fi) 통신을 통해 Linux 머신에서 실행되는 micro-ROS 에이전트에 연결됩니다. 앞서 설명했듯이 FreeRTOS를 선택한 이유는 애플리케이션에서 사용되는 메모리 양을 쉽게 계산할 수 있는 메모리 관리 기능 때문입니다.

가능한 한 현실적인 평가를 제공하기 위해 다음 매개변수는 기본값으로 설정되었습니다. 테스트된 모든 경우에서 생성 모드는 XML을 사용했고, MTU는 기본값인 512B로 고정되었으며, XRCE-DDS 라이브러리 기록 캐시는 항상 4로 고정되었습니다.

#### Pub-Sub 앱

*엔티티 수 및 메시지 크기에 따른 총 메모리 사용량*

이 섹션에서는 UDP 전송, 8개의 공유 슬롯을 사용하는 RMW 히스토리, 512B의 MTU, 그리고 4개의 슬롯을 사용하는 XRCE-DDS 히스토리를 이용하여 최선형(Best-Effort) 모드와 신뢰성(Reliable) 모드 모두에서 게시자 또는 구독자 애플리케이션이 사용한 총 메모리 사용량을 보고합니다. 총 메모리 사용량은 엔티티 수와 메시지 크기의 함수로 표시됩니다.

게시자/구독자 수를 다양하게 설정했는데, 이는 토픽 수를 변경하는 것과 같습니다. 왜냐하면 저희 설정에서는 각 게시자/구독자를 하나의 토픽에만 연결하기 때문입니다.

원칙적으로, 신뢰 모드(Reliable mode)에서는 생성된 버퍼에 최대 MTU × XRCE_history 크기의 메시지를 저장할 수 있는 반면, 최선 노력 모드(Best-Effort mode)에서는 최대 MTU 크기의 메시지로 버퍼를 채울 수 있습니다. 이는 기본값으로 설정된 값들을 기준으로 각각 512B × 4 = 2048B와 512B에 해당합니다. 최선 노력 모드 통신 스트림에서는 단편화가 발생하지 않는 반면, 신뢰 모드에서 통신하는 개체는 단편화를 통해 XRCE_history 개수만큼의 조각(각 조각은 MTU 크기)으로 메시지를 분할하여 송수신할 수 있기 때문입니다. 그러나 표 1에서 볼 수 있듯이, 신뢰 모드 개체의 메시지 크기는 0에서 1366B 사이이고, 최선 노력 모드 개체의 메시지 크기는 0에서 490B 사이입니다. 이는 두 경우 모두 헤더에 일부 메모리가 소모되고, 특히 Reliable 방식의 경우 하트비트 및 승인과 같은 확인 메시지에 일부 메모리가 소모되기 때문입니다.

<img alt="총 메모리" src="_docs/concepts/benchmarking/memo_prof/overall.png" class="center">

<p align="center">
  그림 3: UDP 전송, 기본 매개변수를 사용하고 엔티티 수(x축)와 메시지 크기(범례)에 따라 최선형 모드와 신뢰성 모드 모두에서 micro-ROS 게시자 및 구독 애플리케이션의 총 메모리 사용량(바이트)을 나타낸 그래프.
</p>

이 그래프들을 통해 몇 가지 결론을 도출하고 추세를 파악할 수 있습니다.

우선, 전체 메모리 사용량은 엔티티 수에 따라 달라지지만 메시지 크기에 따라서는 달라지지 않는다는 점이 분명해 보입니다. 그 이유는 검토된 모든 메시지 크기가 컴파일 시 프로그램이 미리 할당한 정적 버퍼에 적합하기 때문입니다. 따라서 토픽과 확인 메시지(신뢰할 수 있는 경우) 및 오버헤드가 차지하는 총 공간이 버퍼 크기를 초과할 때만 메모리 사용량이 메시지 크기에 따라 달라질 것으로 예상됩니다. 반대로 엔티티 수를 늘리면 전체 메모리 사용량이 증가합니다(아래에서 살펴보겠지만, 이는 정적 메모리와 동적 메모리 모두의 증가에 기인하며 스택은 영향을 받지 않습니다).

간단한 계산을 통해 위의 실험 조건에서 하나의 게시자가 차지하는 메모리는 약 400B이고, 하나의 구독자가 차지하는 메모리는 약 500B임을 알 수 있습니다.
구독자가 RMW_history를 가지고 있음에도 불구하고 이 두 엔티티의 메모리 사용량에 실질적인 차이가 거의 없는 이유는 RMW의 메모리 풀이 특정 애플리케이션에 참여하는 모든 엔티티 간에 공유되기 때문이며, 따라서 이는 (상위 계층에서 메시지를 가져오기 전에 저장해야 하는) 구독자와 게시자 간의 차이를 나타내지 않습니다.

결론적으로, 이 섹션의 시작 부분에서 설명했듯이 두 모드에서 전송할 수 있는 메시지 크기의 상한선을 제외하면 신뢰성 모드와 최선 노력 모드 사이에 실질적인 차이가 없다는 것을 알 수 있습니다.

*메모리 오류*

이러한 애플리케이션이 사용하는 메모리 유형을 더 잘 이해하기 위해 아래에 동일한 데이터를 구성 요소별 메모리 청크 단위로 나누어 제공합니다. 메시지 크기는 1B로 설정했는데, 이는 앞서 살펴본 바와 같이 메시지 크기가 전체 메모리 사용량(및 그 구성 요소)에 영향을 미치지 않기 때문입니다.

<img alt="메모리 분석" src="_docs/concepts/benchmarking/memo_prof/3mems.png" class="center">

<p align="center">
   그림 4: UDP 전송, 기본 매개변수 및 고정 메시지 크기를 사용하는 micro-ROS 퍼블리셔 및 구독 애플리케이션의 정적, 스택 및 동적 메모리 사용량(바이트)을 엔티티 수에 따라 나타낸 그래프. 이 그래프는 최선형 모드와 신뢰성 모드 모두에서 나타납니다.
</p>

이러한 결과에서 정적 메모리와 동적 메모리는 모두 엔티티 수에 따라 변화하는 반면 스택은 일정하게 유지됨을 알 수 있습니다.

*RMW 역사의 역할*

이 시나리오에서는 단일 가입자 애플리케이션과 고정 크기 메시지(앞서 언급했듯이, 이 크기는 사전 할당된 버퍼 크기보다 작으면 메모리 사용량에 영향을 미치지 않음)를 사용하고, UDP 전송 방식과 XRCE-DDS 히스토리 4를 설정하여 신뢰할 수 있는 통신 환경에서 RMW 히스토리(1~20 단위)에 따른 정적 메모리 사용량을 측정했습니다. 결과는 아래 그림에 요약되어 있습니다.

<img alt="RMW 역사" src="_docs/concepts/benchmarking/memo_prof/rmw_history.png" class="center" width="60%">

<p align="center">
   그림 5: UDP 전송, 기본 매개변수 및 고정 메시지 크기를 사용하는 안정 모드에서 작동하는 micro-ROS 구독 애플리케이션의 RMW 기록에 따른 정적 메모리 사용량(바이트) 그래프.
</p>

이 그래프에서 우리는 애플리케이션에 추가하는 RMW 메모리 단위마다 총 정적 메모리 사용량이 MTU × RMW_history(사용된 매개변수의 경우 512 × 4와 같음)만큼 변화하는 것을 볼 수 있습니다.

클라이언트-서버 애플리케이션

이제 마지막 사례 시나리오를 살펴보겠습니다. 발행/구독 앱과는 달리, 이번에는 요청/응답 패턴을 따르는 엔티티 간 통신을 하는 서비스라는 다른 유형의 ROS 객체를 고려해 보겠습니다. 아래는 서버와 클라이언트의 수를 1개에서 10개까지 변화시켰을 때의 메모리 사용량 결과입니다. 각 구성 요소(정적, 스택, 동적)와 전체 메모리 사용량의 동작 및 값을 모두 보고합니다.

<img alt="서비스" src="_docs/concepts/benchmarking/memo_prof/servcli.png" class="center">

<p align="center">
   그림 6: 서버 및 클라이언트 수에 따른 micro-ROS 서비스 및 클라이언트 애플리케이션의 총 메모리 사용량(바이트).
</p>

이미 게시자와 구독자의 경우에서와 마찬가지로, 단일 개체가 사용하는 총 메모리 양을 계산할 수 있습니다. 이 계산 결과에 따르면 서버 또는 클라이언트 하나가 사용하는 메모리는 약 300B 정도입니다. 이 수치를 보면 서버와 클라이언트가 사용하는 메모리 양이 거의 동일하며, 게시자 또는 구독자 애플리케이션이 사용하는 메모리 양과 비슷한 수준임을 알 수 있습니다.

결론

요약하자면, 우리는 다음과 같은 사실을 확인했습니다.

* 메시지 크기와 오버헤드의 합이 컴파일 시점에 미리 할당된 정적 버퍼에 수용될 수 있는 한, 메모리 사용량은 메시지 크기에 따라 변하지 않습니다.
* 정적 메모리와 동적 메모리는 엔티티 수에 따라 달라지지만, 스택은 일정하게 유지됩니다.
* 기본 설정 매개변수와 UDP 전송 방식을 사용하는 단일 게시자/구독자 앱은 총 약 400~500B의 메모리를 소비합니다.
* 기본 설정 매개변수와 UDP 전송 방식을 사용하는 단일 클라이언트/서버 앱은 총 약 300B의 메모리를 소비하며, 이는 발행/구독 애플리케이션과 비슷한 수준입니다.
* 단일 구독의 경우, 사용되는 총 정적 메모리는 애플리케이션에 추가되는 각 RMW 기록 단위에 대해 MTU × XRCE_history만큼 변경됩니다.

<style type="text/css">

.center {
  표시: 블록;
  왼쪽 여백: 자동;
  오른쪽 여백: 자동;
}

</style>


---

## 출처: `_docs/concepts/benchmarking/results/index.md`
<a id="source-docs-concepts-benchmarking-results-index-md"></a>

## 목차

* [추적에서 벤치마킹까지](#from-tracing-to-benchmarking)
* [커뮤니케이션 결과](#communication-results)
* [실시간 결과](#real-time-results)
* [실행 횟수](#실행 횟수)
* [함수 호출 통계](#function-call-statistics)
* [정적 메모리 사용량](#static-memory-usage)
* [동적 메모리 사용량](#dynamic-memory-usage)
* [전력 소비량](#전력 소비량)

## 추적에서 벤치마킹까지

저수준 RTOS(NuttX)는 다양한 벤치마킹 측정 항목(메모리, 실행 등)을 제공하도록 특정 방식으로 계측되었습니다. 수집된 데이터는 [Common Trace Format](https://diamon.org/ctf/)을 따릅니다. 원시 트레이스는 [Babeltrace API](https://babeltrace.org/) 트레이스 조작 툴킷을 사용하여 처리됩니다. 데이터 해석은 사용자에게 달려 있습니다.

벤치마크 결과 및 방법론에 대한 자세한 내용은 다음 [문서](https://github.com/micro-ROS/benchmarking-results/blob/master/pdfs/OFERA_55_D5.4_Micro-ROS_benchmarks_-_Final.pdf)에서 확인할 수 있습니다.

해석이 이루어지는 결과는 [benchmarking_results](https://github.com/micro-ROS/benchmarking-results/tree/master/aug2020) 저장소에서 확인할 수 있습니다.

### 일반적인 방법론

micro-ROS가 어떤 통신 매체를 사용하는지에 따라 방법론이 달라질 수 있습니다. 물론 이러한 차이는 미미하며 전송 프로토콜과 관련이 있습니다.

벤치마킹을 위해 RTOS와 애플리케이션에 계측 장비를 설치했습니다. 평가 대상에 따라 RTOS의 여러 부분에 서로 다른 프로브를 배치했습니다. 데이터 형식은 Common Trace Format(V1.8)이라는 표준을 따릅니다. 이 표준은 micro-ROS 프로젝트에서 NuttX와 함께 지원하는 RTOS 중 하나인 Zephyr에서도 사용됩니다.
사실 CTF 코어는 Zephyr에서 NuttX로 포팅되었습니다.

데이터는 babeltrace와 babeltrace 파이썬 API를 사용하여 검색 및 분석됩니다.

모든 이벤트는 내부 자유 실행 타이머(Olimex STM32-E407 TIM2에서 실행되는 NuttX의 경우)를 사용하여 타이밍됩니다. 덕분에 이 장치는 거의 10나노초의 해상도를 제공하는 타이머 클록을 가질 수 있습니다. 현재 해상도 구성은 100나노초이며, 100Mbps의 최소 이더넷 프레임(64바이트)을 고려할 때 통신 성능을 평가하기에 충분합니다.
각 측정값은 앞서 언급한 자유 실행 타이머를 사용하여 타임스탬프가 기록됩니다.

소프트웨어 구성은 변경될 가능성이 있습니다. 하지만 소프트웨어의 역할은 동일하게 유지될 것입니다.

 * PC에서 실행되는 에이전트
 * 구독자는 Olimex STM32-E407 한 대에서 실행 중입니다.
 * 퍼블리셔는 Olimex STM32-E407 한 대에서 실행 중입니다.

하드웨어 수준에서 USB-CDC/ACM 콘솔은 Olimex STM32-E407 보드에서 이더넷 및 시리얼 벤치마킹에 사용될 예정입니다. 6LoWPAN의 경우 메모리 사용량과 실행 성능 저하를 줄이기 위해 시리얼 USART6이 콘솔로 사용됩니다. 따라서 두 Olimex STM32-E407 보드의 USB OTG1은 모두 컴퓨터에 연결되어야 합니다. 추가적인 하드웨어 설정이 필요하지만, 이는 토폴로지 유형(이더넷/시리얼/6LoWPAN)에 따라 달라집니다.

아래에 표시된 결과는 동일한 애플리케이션의 결과물입니다: **출판사**.
micro-ROS 관련 기능만 벤치마킹했습니다. 따라서 코드의 시리얼/IP/라디오 설정 부분은 고려 대상에서 제외됩니다.

아래에서는 데이터 처리 과정을 설명합니다. 직렬화된 바이너리 CTF 데이터부터 Babeltrace API 출력까지의 과정을 설명합니다.

![](_docs/concepts/benchmarking/results/images/bm_dataflow.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

## 커뮤니케이션 결과

다음은 수신/송신 통신 비트 전송률입니다.

![](_docs/concepts/benchmarking/results/images/bm_com.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}


관찰 내용:

  데이터에 따르면 이더넷이 가장 좋은 성능을 보였는데, 이는 예상했던 결과입니다.

## 실시간 결과

아래는 실행 벤치마킹 결과입니다.

Babeltrace에서 추출한 데이터는 NuttX 스케줄러에 대해 다음과 같은 정보를 보여줍니다.
추가 정보는 다음과 같습니다.

 * thread_id 0은 유휴 스레드입니다.
 * 스레드 ID 3은 우선순위가 낮은 작업 큐(RTOS k번째 스레드)입니다.
 * 스레드 ID 7은 게시자입니다.

```
[01:00:21.445833238] (+0.000009524) 0 thread_resume: { thread_id = 7 }
[01:00:21.445993047] (+0.000159809) 0 스레드 일시 중지: { 스레드 ID = 7 }
[01:00:21.446002761] (+0.000009714) 0 thread_resume: { thread_id = 3 }
[01:00:21.446051904] (+0.000049143) 0 스레드 일시 중지: { 스레드 ID = 3 }
[01:00:21.446061428] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446085428] (+0.000024000) 0 스레드 일시 중지: { thread_id = 0 }
[01:00:21.446095428] (+0.000010000) 0 thread_resume: { thread_id = 3 }
[01:00:21.446133047] (+0.000037619) 0 스레드 일시 중지: { 스레드 ID = 3 }
[01:00:21.446142571] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446273523] (+0.000130952) 0 스레드 일시 중지: { thread_id = 0 }
[01:00:21.446283523] (+0.000010000) 0 thread_resume: { thread_id = 3 }
[01:00:21.446335809] (+0.000052286) 0 스레드 일시 중지: { 스레드 ID = 3 }
[01:00:21.446345333] (+0.000009524) 0 thread_resume: { thread_id = 7 }
[01:00:21.446505333] (+0.000160000) 0 스레드 일시 중지: { 스레드 ID = 7 }
[01:00:21.446514952] (+0.000009619) 0 thread_resume: { thread_id = 3 }
[01:00:21.446564190] (+0.000049238) 0 스레드 일시 중지: { 스레드 ID = 3 }
[01:00:21.446573714] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446597714] (+0.000024000) 0 스레드 일시 중지: { thread_id = 0 }
[01:00:21.446607714] (+0.000010000) 0 thread_resume: { thread_id = 3 }
[01:00:21.446645333] (+0.000037619) 0 스레드 일시 중지: { 스레드 ID = 3 }
[01:00:21.446654857] (+0.000009524) 0 thread_resume: { thread_id = 0 }
[01:00:21.446779047] (+0.000124190) 0 스레드 일시 중지: { thread_id = 0 }
[01:00:21.446789142] (+0.000010095) 0 thread_resume: { thread_id = 3 }
[01:00:21.446841333] (+0.000052191) 0 스레드 일시 중지: { 스레드 ID = 3 }
[01:00:21.446850857] (+0.000009524) 0 thread_resume: { thread_id = 7 }
[01:00:21.447010571] (+0.000159714) 0 스레드 일시 중지: { 스레드 ID = 7 }
[01:00:21.447020285] (+0.000009714) 0 thread_resume: { thread_id = 3 }
```

관찰 내용:

위 결과에 따르면 소프트웨어는 결정론적인 방식으로 실행되고 있습니다. 실제로 자세히 살펴보면 실행 순서가 항상 동일하다는 것을 알 수 있습니다.

또한, 상관 관계가 있는 이벤트 간의 시간 차이는 이벤트 전환 시(연속적인 thread_suspend/thread_resume) 매우 낮은 변동성을 보입니다.

또한 스케줄러는 평균 10마이크로초가 소요되는 빠른 컨텍스트 전환을 수행합니다.

## 실행

다음은 실행 벤치마킹 결과입니다. CPU 사용 시간은 입출력 작업과 구독자 작업의 두 부분으로 나뉩니다.

![](_docs/concepts/benchmarking/results/images/bm_execution.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}


관찰 내용:
    데이터에 따르면 대부분의 시간은 I/O 작업에 소요되었습니다.

## 함수 호출 통계

다음은 각 통신 매체별 함수 호출 횟수입니다.

**이더넷**
![](_docs/concepts/benchmarking/results/images/fusage_eth.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

**연속물**
![](_docs/concepts/benchmarking/results/images/fusage_serial.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

**6LoWPAN**
 ![](_docs/concepts/benchmarking/results/images/fusage_6lowpan.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

## 정적 메모리 사용량

아래는 정적 메모리 분석 결과를 나타낸 그림입니다.

![](_docs/concepts/benchmarking/results/images/bm_max_static_memory.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

관찰 내용:

6LoWPAN은 IP 버전 6을 기반으로 실행되는 프로토콜이므로 정적 메모리를 가장 많이 소비하는 매체입니다.

## 동적 메모리 사용량

아래 그림은 동적 할당의 총 개수를 보여줍니다. 각 빈은 청크 메모리 블록 그룹으로 나뉘며, 각 그룹에는 서로 다른 청크 크기가 포함됩니다. 각 그룹의 크기는 최소 크기(이전 그룹의 크기)와 최대 크기(범례에 표시된 크기) 사이의 값으로 구성됩니다.
예를 들어, 노란색 범례가 있는 블록은 이전 청크 메모리 그룹(여기서는 16바이트)보다 크지만 32바이트 이하인 모든 블록을 나타냅니다.

![](_docs/concepts/benchmarking/results/images/bm_allocation_nbr.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

관찰 내용:

통신 매체와 관계없이 할당된 블록의 규모도 크지 않고 수도 많지 않습니다.
메모리 할당의 대부분은 초기화 과정에서 발생합니다.


## 전력 소비량

아래는 통신 매체별 에너지 소비량을 나타낸 표입니다.

![](_docs/concepts/benchmarking/results/images/bm_power.png){:.img-responsive and style="max-width: 100%; margin-left: auto; margin-right: auto;"}

관찰 내용:

통신 매체는 처리량에 큰 영향을 미치며, 이는 다시 전력 소비에 영향을 줍니다. 이더넷은 높은 처리량을 제공하지만, 그만큼 전력 소비량도 높습니다. 반면 직렬 통신 매체는 낮은 비트 전송률을 제공하는 대신 훨씬 적은 에너지를 소비한다는 장점이 있습니다.

---

## 출처: `_docs/concepts/build_system/external_build_systems/index.md`
<a id="source-docs-concepts-build-system-external-build-systems-index-md"></a>

공식 [**micro_ros_setup** 도구](/_docs/concepts/build_system/)에 대한 내용을 읽으신 후, 이 페이지에서는 다른 빌드 시스템에 통합된 모듈 또는 구성 요소로 micro-ROS를 빌드하는 몇 가지 다른 접근 방식을 소개합니다.

## ESP-IDF용 micro-ROS 구성 요소

[micro-ROS ESP-IDF 컴포넌트](https://github.com/micro-ROS/micro_ros_espidf_component)를 사용하면 micro-ROS를 Espressif ESP-IDF 빌드 시스템의 컴포넌트로 통합할 수 있습니다. 이 컴포넌트를 사용하면 폴더를 복제하거나 복사하는 것만으로 이미 생성된 ESP-IDF 프로젝트에 micro-ROS API 및 유틸리티를 통합할 수 있습니다.

micro-ROS 라이브러리의 설정은 `colcon.meta` 파일을 기반으로 합니다. 자세한 내용은 [Git 저장소](https://github.com/micro-ROS/micro_ros_espidf_component)를 참조하십시오.

## Zephyr용 micro-ROS 모듈

[micro-ROS Zephyr 모듈](https://github.com/micro-ROS/micro_ros_zephyr_module)을 사용하면 micro-ROS를 Zephyr 기반 프로젝트에 모듈로 통합할 수 있습니다. 자세히 설명하면, 폴더를 복제하거나 복사하는 것만으로 기존 Zephyr 프로젝트에 micro-ROS API와 유틸리티를 통합할 수 있습니다.

빌드된 micro-ROS 라이브러리를 구성하는 절차는 `colcon.meta` 파일을 기반으로 합니다. 자세한 내용은 [Git 저장소](https://github.com/micro-ROS/micro_ros_espidf_component)를 참조하십시오.

## 아두이노용 micro-ROS

[micro-ROS for Arduino](https://github.com/micro-ROS/micro_ros_arduino) 지원 패키지는 특정 플랫폼용으로 미리 컴파일된 라이브러리 세트 형태로 제공되는 micro-ROS의 특별한 포트입니다. 이러한 접근 방식을 택한 주된 이유는 아두이노가 micro-ROS와 같은 복잡한 라이브러리를 직접 빌드하는 것을 허용하지 않기 때문입니다. 따라서 이 방식을 통해 아두이노 사용자에게 바로 사용할 수 있는 솔루션을 제공합니다.

이 지원 패키지에는 기본 설정을 조정해야 하는 사용자를 위해 micro-ROS for Arduino 라이브러리를 다시 빌드하는 방법에 대한 [자세한 지침](https://github.com/micro-ROS/micro_ros_arduino#how-to-build-the-precompiled-library)이 포함되어 있습니다.

## STM32CubeMX용 micro-ROS

[micro-ROS for STM32CubeMX](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils) 패키지는 micro-ROS를 STM32 컨트롤러 기반 프로젝트에 원활하게 구성, 설정 및 통합할 수 있도록 지원하는 유틸리티 모음입니다. 따라서 이 패키지를 사용하면 <a href="https://www.st.com/content/st_com/en.html">STMicroelectronics</a>에서 제공하는 거의 모든 보드에서 micro-ROS를 사용할 수 있습니다.

이 도구는 Docker를 기반으로 하며, 미리 준비된 [Dockerfile](https://github.com/micro-ROS/docker/blob/humble/micro-ROS-static-library-builder/Dockerfile)을 통해 ROS 2 환경 외부에서도 micro-ROS 라이브러리 생성을 간소화합니다.

---

## 출처: `_docs/concepts/build_system/index.md`
<a id="source-docs-concepts-build-system-index-md"></a>

micro-ROS는 임베디드 플랫폼용 micro-ROS 애플리케이션을 구축하는 두 가지 방법을 제공합니다.
- _micro_ros_setup:_은 ROS 2 패키지로 제공되는 몇 개의 스크립트에 RTOS 관련 빌드 도구를 통합하고 숨깁니다.
- 플랫폼별 통합: micro-ROS는 여러 플랫폼의 빌드 도구와 통합되었습니다. 자세한 내용은 [여기](/_docs/concepts/build_system/external_build_systems/)를 클릭하세요.

**micro_ros_setup**은 일반적인 ROS 2 워크스페이스에서 사용할 수 있는 ROS 2 패키지 형태의 독립형 빌드 시스템을 제공합니다. 이 도구는 [micro-ROS/micro_ros_setup](https://github.com/micro-ROS/micro_ros_setup) 저장소에서 사용할 수 있습니다.

**micro_ros_setup** 도구를 사용하면 [지원되는 하드웨어](/_docs/overview/hardware/) 보드 및 [RTOS](/_docs/concepts/rtos/)용 micro-ROS 앱이 포함된 이미지를 컴파일하고 생성할 수 있습니다.

**micro_ros_setup** 패키지는 다른 ROS 2 패키지와 마찬가지로 설치할 수 있으며, ROS 2 CLI 도구를 통해 사용하게 됩니다. 컴파일, 이미지 생성 및 보드 플래싱은 단 네 개의 ROS 2 명령어로 수행할 수 있습니다. 이 패키지의 자세한 사용법은 [튜토리얼 섹션](/_docs/tutorials/core/first_application_rtos/)에서 확인할 수 있습니다.

### micro-ROS 클라이언트

설치가 완료되면 빌드 시스템 도구는 micro-ROS 애플리케이션을 준비, 빌드, 플래싱 및 사용하는 데 사용할 수 있는 몇 가지 유틸리티를 제공합니다. micro-ROS 빌드 시스템은 4단계 절차로 구성됩니다. 첫 번째 단계에서 사용자는 대상 하드웨어와 RTOS를 구성하여 새로운 micro-ROS 애플리케이션을 생성할 수 있습니다.

```bash
# 단계 생성
ros2 run micro_ros_setup create_firmware_ws.sh [RTOS] [하드웨어 보드]
```

인자 없이 명령어를 실행하면 지원되는 하드웨어 목록을 얻을 수 있습니다. 이렇게 하면 micro-ROS에서 지원하는 RTOS 및 하드웨어 외에도 이 빌드 시스템이 세 가지 추가 옵션을 제공한다는 것을 확인할 수 있습니다.
- `zephyr`를 RTOS로, `host`를 하드웨어 이름으로 사용하면 호스트 컴퓨터에서 실행되는 micro-ROS 앱이 포함된 Zephyr RTOS 이미지를 얻을 수 있습니다.
- `host`만 RTOS로 사용하면 micro-ROS는 호스트 머신에서 [micro-ROS 데모 애플리케이션](https://github.com/micro-ROS/micro-ROS-demos) 세트를 네이티브로 빌드합니다. 이러한 애플리케이션은 micro-ROS 앱과 동일하게 동작하며(동일한 추상화 계층 및 미들웨어 구현 사용), 사용자는 PC에서 애플리케이션을 디버깅하고 테스트할 수 있습니다.
- `generate_lib`를 RTOS로 사용하면 빌드 시스템을 구성하여 정적 라이브러리(`.a`)와 외부 도구에서 링크할 수 있는 헤더 파일(`include`) 세트를 생성할 수 있습니다. 이 옵션을 사용하려면 유효한 CMake 툴체인이 필요합니다.

빌드 시스템이 새 펌웨어 프로젝트를 생성하면 다음 명령어를 사용하여 구성할 수 있습니다.

```bash
# 구성 단계
ros2 run micro_ros_setup configure_firmware.sh [APP] [OPTIONS]
```

이 명령어를 인자 없이 실행하면 선택한 RTOS에서 사용 가능한 예제 애플리케이션 목록이 출력됩니다.
이 설정 단계에서 사용할 수 있는 일반적인 옵션은 다음과 같습니다.
  - `--transport` 또는 `-t`: `udp`, `serial` 또는 하드웨어별 전송 레이블
  - `--dev` 또는 `-d`: 직렬 전송과 유사한 방식에서 에이전트 문자열 설명자
  - `--ip` 또는 `-i`: 네트워크와 유사한 전송에서 에이전트 IP 주소
  - `--port` 또는 `-p`: 네트워크와 유사한 전송 방식에서 에이전트 포트


마지막으로, 다음 명령어를 사용하여 micro-ROS 앱을 빌드하고 플래싱할 수 있습니다.

```bash
# 빌드 단계
ros2 run micro_ros_setup build_firmware.sh

# 플래시 단계
ros2 run micro_ros_setup flash_firmware.sh
```

### 마이크로 ROS 에이전트

micro-ROS 빌드 시스템은 다음 명령어를 사용하여 ROS 2 워크스페이스에서 micro-ROS 에이전트의 컴파일을 간소화할 수도 있습니다.

```bash
# micro-ROS-Agent 패키지 다운로드
ros2 run micro_ros_setup create_agent_ws.sh
ros2 run micro_ros_setup build_agent.sh
소스 install/local_setup.bash
ros2 run micro_ros_agent micro_ros_agent [옵션]
```

**팁 1:** micro_ros_setup 빌드 시스템 사용법을 직접 배우려면 [코어 튜토리얼](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/)을 참조하세요.

**팁 2:** micro-ROS 에이전트는 다음 간단한 Docker 명령어를 사용하여 실행할 수도 있다는 점을 기억하세요. `docker run -it --rm -v /dev:/dev --privileged --net=host microros/micro-ros-agent:$ROS_DISTRO [OPTIONS]`

---

## 출처: `_docs/concepts/client_library/diagnostics/index.md`
<a id="source-docs-concepts-client-library-diagnostics-index-md"></a>

진단 기능은 ROS 2 클라이언트 라이브러리 패키지(예: rclcpp, rclpy)에는 포함되어 있지 않지만, 매우 일반적이고 애플리케이션에 독립적인 기능을 제공하므로 확장된 클라이언트 라이브러리의 일부로 간주될 수 있습니다.

그래서 micro-ROS 클라이언트 라이브러리에는 기본적인 진단 기능이 포함되어 있습니다. 이 기능은 ROS 2 진단 기능과 호환되며, 단 세 가지 기능으로 구성됩니다.

* 진단 메시지 유형 (Micro-XRCE-DDS에 최적화됨 - 동적 어레이 없음)
* rclc용 업데이트 메커니즘
* 마이크로컨트롤러용 기본 진단 모니터 모음

micro-ROS 진단 패키지는 집계 기능을 제공하지 않습니다. 이는 집계가 표준 ROS 2를 실행하는 마이크로프로세서에서 이루어진다고 가정하기 때문입니다. 따라서 다음과 같은 일반적인 아키텍처를 가정합니다.

<img src="_docs/concepts/client_library/diagnostics/diagnostics_architecture.png" style="display:block; width:60%; margin-left:auto; margin-right:auto;"/>

표준 ROS 2 진단 집계기가 마이크로 ROS 진단 메시지 유형을 집계하려면 ROS 2 에이전트가 마이크로 ROS 진단 메시지를 표준 ROS 2 진단 메시지로 변환해야 합니다(*미정*).

자세한 내용은 [https://github.com/micro-ROS/micro_ros_diagnostics/](https://github.com/micro-ROS/micro_ros_diagnostics/)를 참조하십시오. ROS 2 진단에 대한 자세한 내용은 [ROS 2 diagnostics](https://github.com/ros/diagnostics/tree/ros2-devel) 및 [ROS 2 diagnostic_msgs](https://github.com/ros2/common_interfaces/tree/master/diagnostic_msgs)를 참조하십시오.

---

## 출처: `_docs/concepts/client_library/embedded_tf/index.md`
<a id="source-docs-concepts-client-library-embedded-tf-index-md"></a>

## 소개 및 목표

시간적 이력과 분산 정보 소스를 모두 지원하는 TF 변환 그래프는 2008년 출시 당시 로봇 공학 프레임워크에 혁신적인 도구로 자리 잡았습니다. 기능적으로는 컴퓨터 그래픽스에서 알려진 장면 그래프 개념을 기반으로 하지만[[Foote 2013]](https://ieeexplore.ieee.org/document/6556373) 이러한 장면 그래프는 분산 정보를 제공하는 경우가 드물었고, 시간적 이력은 전혀 제공하지 않았습니다(주로 컴퓨터 그래픽스처럼 프레임 기반 렌더링 애플리케이션에서는 필요하지 않았기 때문입니다). 분산 장면 그래프는 컴퓨터 그래픽스에서도 널리 사용되고 있습니다. 로봇 공학 분야에서는 de Laet 등이 수행한 연구[[De Laet et al. 2013]](https://ieeexplore.ieee.org/document/6696693)를 통해 변환 그래프가 비틀림(즉, 각도 운동) 정보도 포함하고 컴파일 시간 오류 검사를 강화하도록 확장되었습니다. 현재는 배포 메커니즘과 통합되어 있지 않지만, 단일 시스템에서 사용될 수 있습니다.
변환 그래프의 지속적인 문제점 중 하나는 리소스 사용량입니다. ROS TF는 변환 트리 전체를 사용하는 모든 노드에 복제본을 생성하고, 노드 간 유니캐스트 TCP 연결을 통해 구현됩니다. 동적인 부분이 많은 시스템에서는 이러한 방식이 대량의 메시지 유입으로 인해 "TF 파이어호스"라고 불리기도 합니다.
micro-ROS는 공간적, 시간적 세부 정보에 대한 분석을 기반으로 리소스 사용을 최소화하면서 임베디드 장치에서 동적 변환 트리를 실행함으로써 현재의 기술 수준을 뛰어넘을 것입니다. 또한 micro-ROS 실시간 실행기와의 통합을 통해 동시 업데이트 상황에서도 실시간 쿼리가 가능하도록 구현할 것입니다. 나아가 임베디드 변환 트리를 노드 수명 주기와 통합하여 전력 소비를 더욱 절감할 계획입니다.


## 로드맵

이 과제는 2019년 9월 EU 프로젝트 검토에서 논의된 바와 같이 취소되었습니다.


## 감사의 글

본 활동은 유럽 연합의 Horizon 2020 연구 및 혁신 프로그램에 따라 유럽 연구 위원회(ERC)로부터 자금 지원을 받았습니다(보조금 계약 번호 780785).

---

## 출처: `_docs/concepts/client_library/execution_management/index.md`
<a id="source-docs-concepts-client-library-execution-management-index-md"></ a>

## 목차

* [소개](#소개)

* [rclcpp 표준 실행기 분석](#analysis-of-rclcpp-standard-executor)
    * [아키텍처](#architecture)
    * [스케줄링 시맨틱스](#scheduling-semantics)

* [처리 패턴 분석](#analysis-of-processing-patterns)
    * [로봇 공학에서의 감지-계획-실행 파이프라인](#sense-plan-act-pipeline-in-robotics)
    * [다중 속도 동기화](#synchronization-of-multiple-rates)
    * [고우선순위 처리 경로](#high-priority-processing-path)
    * [실시간 임베디드 애플리케이션](#real-time-embedded-applications)
* [rclc 실행기](#rclc-executor)
    * [특징](#features)
      * [트리거 조건](#트리거 조건)
      * [순차 실행](#sequential-execution)
      * [LET-Semantics](#let-semantics)
      * [멀티스레딩 및 스케줄링 구성](#multi-threading-and-scheduling-configuration)
    * [실행기 API](#executor-api)
      * [구성 단계](#configuration-phase)
      * [실행 단계](#running-phase)
    * [예시](#예시)
      * [로봇 공학에서의 감지-계획-실행 파이프라인 예시](#sense-plan-act-pipeline-in-robotics-example)
      * [다중 속도 동기화 예시](#synchronization-of-multiple-rates-example)
      * [고우선순위 처리 경로 예시](#high-priority-processing-path-example)
      * [실시간 임베디드 애플리케이션 예시](#real-time-embedded-applications-example)
      * [ROS 2 Executor 워크샵 참조 시스템](#ros-2-executor-workshop-reference-system)
    * [향후 작업](#future-work)
    * [다운로드](#download)

* [콜백 그룹 레벨 실행기](#callback-group-level-executor)
    * [API 변경 사항](#api-changes)
    * [테스트 벤치](#test-bench)

* [관련 작업](#related-work)
    * [포크스 프레임워크](#fawkes-framework)
* [참고문헌](#참고문헌)
* [감사의 글](#acknowledments)


## 소개

주어진 실시간 제약 조건 하에서 예측 가능한 실행은 많은 로봇 애플리케이션에 필수적인 요구 사항입니다. ROS의 서비스 기반 패러다임은 다양한 기능을 빠르게 통합할 수 있도록 해주지만, 실행 관리 측면에서는 충분한 제어 기능을 제공하지 못합니다. 예를 들어, 노드 내 콜백의 실행 순서를 특정 순서로 강제하는 메커니즘이 없습니다. 또한, 모바일 로봇 공학의 제어 애플리케이션에서는 여러 노드의 실행 순서가 매우 중요합니다. 센서 데이터 수집, 데이터 평가, 액추에이션 제어로 구성된 인과 관계는 해당 순서대로 실행되는 ROS 노드에 매핑되어야 하지만, 이를 명시적으로 강제하는 메커니즘은 없습니다. 더욱이, 현장 테스트에서 ROS-bag 형태로 수집된 데이터를 재생할 때, 프로세스 스케줄링의 비결정성으로 인해 결과가 예상과 다르게 나타나는 경우가 종종 발생합니다.

구독 및 토픽 게시의 특정 실행 순서를 수동으로 설정하고 해당 Linux 프로세스의 사용 사례별 우선순위를 정의하는 것은 항상 가능합니다. 그러나 이 접근 방식은 오류 발생 가능성이 높고 확장이 어려우며 시스템에 배포된 ROS 2 패키지에 대한 심층적인 지식이 필요합니다.

따라서 micro-ROS의 Executor의 목표는 다음과 같은 문제에 대한 해결책을 제공하는 실용적이고 사용하기 쉬운 실시간 메커니즘을 통해 로봇 공학자들을 지원하는 것입니다.
- 결정론적 실행
- 실시간 보장
- 하나의 플랫폼에서 실시간 및 비실시간 기능 통합
- RTOS 및 마이크로컨트롤러에 대한 특별 지원


ROS 1에서는 네트워크 스레드가 모든 메시지를 수신하여 FIFO 큐(roscpp)에 저장하는 역할을 담당했습니다. 즉, 모든 콜백 함수는 실행 관리 없이 FIFO 방식으로 호출되었습니다. ROS 2에서 DDS(데이터 분산 서비스)가 도입되면서 메시지는 DDS에 버퍼링됩니다. ROS 2에서는 실행 관리를 지원하기 위해 Executor 개념이 도입되었습니다. rcl 계층에서는 수신할 핸들을 포함하는 _wait-set_이 구성되고, 두 번째 단계에서 DDS 큐에서 해당 핸들을 가져옵니다. 핸들은 rcl 계층에서 타이머, 구독, 서비스, 클라이언트 및 가드 조건을 나타내는 일반적인 용어입니다.

C++ API용 ROS 2 Executor의 표준 구현(rclcpp)에는 타이머가 다른 모든 DDS 핸들보다 우선순위를 갖는 점, 타이머가 아닌 핸들에 대해서는 비선점형 라운드 로빈 스케줄링을 사용하는 점, 그리고 각 핸들에 대해 하나의 입력 데이터만 고려하는 점(여러 개의 입력 데이터가 있을 수 있음에도 불구하고)과 같은 몇 가지 특이한 기능이 있습니다. 이러한 기능으로 인해 특정 상황에서 표준 rclcpp Executor는 비결정적이며 실시간 요구 사항을 보장하기가 매우 어렵습니다[[CB2019](#CB2019)]. 마이크로컨트롤러 플랫폼을 고려하고 있으며, 이러한 플랫폼에서는 일반적으로 C 또는 C++ 애플리케이션이 실행되므로 Python 프런트엔드용 ROS 2 Executor 구현(rclpy)은 살펴보지 않았습니다.

실시간 실행기의 목표와 ROS 2 표준 rclcpp 실행기의 한계를 고려할 때, 다음과 같은 과제가 있습니다.
- ROS 2 프레임워크 및 실시간 운영 체제(RTOS)에 적합하고 명확하게 정의된 스케줄링 메커니즘을 개발합니다.
- ROS 개발자들이 쉽게 사용할 수 있는 인터페이스를 정의합니다.
- 요구사항 모델링 (예: 지연 시간, 하위 시스템의 결정성)
- ROS 2 프레임워크와 운영체제 스케줄러 간의 매핑 (반자동화 및 최적화된 매핑이 바람직하며, 일반적이고 잘 이해되는 프레임워크 메커니즘도 필요함)

본 논문에서는 C 프로그래밍 언어로 작성된 rcl+rclc 레이어(섹션 [클라이언트 라이브러리 소개](../)에 설명됨)에 대해 실시간 기능을 갖춘 실행기를 제공하는 것을 목표로 합니다.

첫 번째 단계로, 실시간 및 결정적 실행을 지원하는 몇 가지 새로운 기능을 갖춘 C 프로그래밍 언어 기반의 rcl 레이어용 rclc Executor를 제안합니다. 이 Executor는 1) 사용자 정의 정적 순차 실행, 2) 조건부 실행 의미론, 3) 스케줄링 설정을 통한 멀티스레드 실행, 4) 논리적 실행 의미론(LET)을 지원합니다. 순차 실행은 메시지 도착 시간과 관계없이 모든 콜백이 미리 정의된 순서대로 실행되는 런타임 동작을 의미합니다. 조건부 실행은 트리거 조건을 통해 구현되며, 로봇 공학에서 흔히 사용되는 처리 패턴을 지원합니다(자세한 내용은 [처리 패턴 분석](#analysis-of-processing-patterns)에서 다룹니다). 멀티스레드 애플리케이션의 스케줄링 매개변수 설정을 통해 우선순위 실행을 구현할 수 있습니다. 논리적 실행 시간(LET) 개념은 임베디드 애플리케이션의 고정 주기적 태스크 스케줄링을 위한 데이터 동기화를 제공합니다.

micro-ROS를 위한 고급 실행 관리 메커니즘 외에도, 저희는 표준 ROS 2용 rclcpp에서 Executor 개념을 개선하고 확장하는 데 기여했습니다. 바로 콜백 그룹 수준의 Executor를 구현한 것입니다. 이는 완전히 새로운 Executor가 아니라, ROS 2 Executor API를 개선하여 현재 Iron 릴리스의 ROS 2 기본 Executor로는 불가능했던 콜백 그룹의 우선순위 지정을 가능하게 한 것입니다.


## rclcpp 표준 실행기 분석

ROS 2는 여러 노드를 하나의 운영 체제 프로세스로 묶을 수 있도록 합니다. 프로세스 내 노드들의 콜백 실행을 조정하기 위해 rclcpp(및 rclpy)에서 Executor 개념이 도입되었습니다.

ROS 2 설계에서는 프로세스당 하나의 Executor([rclcpp::executor::Executor](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executor.hpp)의 인스턴스)를 정의하며, 이는 일반적으로 사용자 정의 메인 함수 또는 실행 시스템에 의해 생성됩니다. Executor는 DDS 큐에서 사용 가능한 작업(타이머, 서비스, 메시지, 구독 등)을 확인하고 이를 하나 이상의 스레드에 분배하여 이러한 노드에서 발행된 모든 콜백의 실행을 조정합니다. 이러한 스레드는 각각 [SingleThreadedExecutor](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executors/single_threaded_executor.hpp) 및 [MultiThreadedExecutor](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executors/multi_threaded_executor.hpp)에 구현되어 있습니다.

디스패칭 메커니즘은 ROS 1의 스핀 스레드 동작과 유사합니다. Executor는 대기 세트를 조회하여 DDS 큐에 대기 중인 콜백이 있는지 확인합니다. 대기 중인 콜백이 여러 개인 경우, ROS 2 Executor는 등록된 순서대로 콜백을 실행합니다.

### 건축학

다음 다이어그램은 표준 ROS 2 Executor 구현의 관련 클래스를 보여줍니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/executor_class_diagram.png" alt="ROS 2 Executor 클래스 다이어그램" width="100%" />
</center>

Executor 인스턴스는 노드의 NodeBaseInterface에 대한 약한 포인터만 유지한다는 점에 유의하십시오. 따라서 노드는 Executor에 알리지 않고도 안전하게 파괴할 수 있습니다.

또한, 실행기는 명시적인 콜백 큐를 유지하지 않고, 다음 시퀀스 다이어그램에 나와 있는 것처럼 기본 DDS 구현의 큐 메커니즘에 의존합니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/executor_to_dds_sequence_diagram.png" alt="실행기에서 DDS로의 호출 시퀀스" width="100%" />
</center>

하지만 Executor 개념은 들어오는 콜백 호출의 우선순위 지정이나 분류 기능을 제공하지 않습니다. 더욱이, 기본 운영 체제 스케줄러의 실시간 특성을 활용하여 실행 순서를 세밀하게 제어하지도 않습니다. 이러한 동작의 전반적인 결과는 시간 제약이 있는 콜백이 중요하지 않은 콜백보다 늦게 처리되어 마감 시간을 놓치거나 성능이 저하될 수 있다는 것입니다. 또한, FIFO 메커니즘으로 인해 각 콜백 실행에서 발생할 수 있는 최악의 경우 지연 시간을 정확하게 예측하기 어렵습니다.

### 스케줄링 의미론

최근 논문 [[CB2019](#CB2019)]에서는 rclcpp Executor를 자세히 분석하고 예약 기반 스케줄링 하에서 인과 관계 체인의 응답 시간 분석을 제안했습니다. Executor는 시스템 수준 타이머에 의해 트리거되는 _타이머_, 구독한 토픽에 새 메시지가 수신될 때 트리거되는 _구독자_, 서비스 요청에 의해 트리거되는 _서비스_, 그리고 서비스 요청에 대한 응답에 의해 트리거되는 _클라이언트_의 네 가지 범주의 콜백을 구분합니다. Executor는 DDS 계층의 입력 큐에서 메시지를 가져와 해당 콜백을 실행하는 역할을 합니다. 콜백을 완료될 때까지 실행하기 때문에 비선점형 스케줄러입니다. 그러나 모든 준비된 태스크를 실행 대상으로 고려하는 것이 아니라 readySet이라는 스냅샷만 고려합니다. 이 readySet은 Executor가 유휴 상태일 때 업데이트되며, 이 단계에서 DDS 계층과 상호 작용하여 준비된 태스크 집합을 업데이트합니다. 각 작업 유형마다 전용 대기열(타이머, 구독, 서비스, 클라이언트)이 있으며, 이러한 대기열은 순차적으로 처리됩니다. 다음과 같은 바람직하지 않은 특성이 지적되었습니다.

* 타이머는 최우선 순위를 갖습니다. 실행기는 항상 타이머를 먼저 처리합니다. 이로 인해 과부하 상황에서 DDS 큐의 메시지가 처리되지 않는 현상이 발생할 수 있습니다.
* 타이머 핸들이 아닌 핸들에 대해서는 비선점형 라운드 로빈 스케줄링 방식을 사용합니다. readySet 처리 중에 도착하는 메시지는 다음 업데이트 시점까지 고려되지 않으며, 이 업데이트 시점은 나머지 모든 콜백의 실행 시간에 따라 달라집니다. 이로 인해 우선순위 역전 현상이 발생할 수 있는데, 우선순위가 낮은 콜백이 readySet의 현재 처리를 지연시켜 우선순위가 높은 콜백을 암묵적으로 차단할 수 있기 때문입니다.
* 핸들당 하나의 메시지만 고려됩니다. readySet에는 하나의 태스크 인스턴스만 포함됩니다. 예를 들어, 동일한 토픽의 메시지가 여러 개 있더라도 Executor가 다시 유휴 상태가 되어 DDS 계층에서 readySet이 업데이트될 때까지 하나의 인스턴스만 처리됩니다. 이는 우선순위 역전을 악화시키는데, 대기 중인 콜백이 스케줄링 대상으로 고려될 때까지 여러 readySet의 처리를 기다려야 할 수 있기 때문입니다. 즉, 타이머 콜백이 아닌 인스턴스는 우선순위가 낮은 동일한 콜백의 여러 인스턴스에 의해 차단될 수 있습니다.

이러한 연구 결과를 바탕으로, 저자들은 결정론을 제공하고 잘 알려진 스케줄링 가능성 분석을 ROS 2 시스템에 적용하는 대안적인 접근 방식을 제시합니다. 예약 기반 스케줄링 하에서 응답 시간 분석이 설명됩니다.

## 처리 패턴 분석
micro-ROS의 실행 관리 메커니즘 개발은 로봇 공학 및 임베디드 시스템에서 일반적으로 사용되는 처리 패턴 분석을 기반으로 합니다. 먼저, 결정론적 동작 구현에 사용되는 모바일 로봇 공학의 전형적인 처리 패턴을 제시합니다. 그 다음, 실시간 임베디드 시스템의 처리 패턴을 분석하는데, 여기서 가장 큰 차이점은 실시간 동작 구현을 위해 시간 트리거 방식이 적용된다는 점입니다.

### 로봇 공학에서의 감지-계획-실행 파이프라인
이제 모바일 로봇 공학에서 결정론적 동작을 구현하는 데 사용되는 일반적인 소프트웨어 설계 패턴에 대해 설명합니다. 각 설계 패턴에 대해 개념과 결정론적 실행기를 위한 요구 사항을 설명합니다.

**개념:**

모바일 로봇 공학에서 흔히 사용되는 설계 패러다임은 여러 단계로 구성된 제어 루프입니다. 센서 데이터를 획득하는 감지 단계, 위치 파악 및 경로 계획을 위한 계획 단계, 그리고 모바일 로봇을 조종하는 구동 단계가 그것입니다. 물론 더 많은 단계를 포함할 수도 있지만, 여기서는 이 세 단계를 예시로 들겠습니다. 이러한 처리 파이프라인은 그림 1에 나와 있습니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/sensePlanActScheme.png" alt="계획 실행 파이프라인 파악" width="60%"/>
</center>
<센터>
그림 1: 감지-계획-실행 파이프라인을 구동하는 여러 센서.
</center>

일반적으로 주변 환경을 인식하기 위해 여러 센서가 사용됩니다. 예를 들어 IMU와 레이저 스캐너가 있습니다. 위치 추정 알고리즘의 정확도는 센서 데이터가 처리될 때의 최신성에 크게 좌우됩니다. 이상적으로는 모든 센서의 최신 데이터를 처리해야 합니다. 이를 달성하는 한 가지 방법은 감지 단계에서 모든 센서 드라이버를 먼저 실행한 다음 계획 단계에서 모든 알고리즘을 처리하는 것입니다.

현재 rclcpp의 기본 실행기에서는 이러한 처리 순서를 정의할 수 없습니다. 원칙적으로 데이터 기반 파이프라인을 설계할 수는 있지만, 예를 들어 레이저 스캔 데이터가 감지 단계와 계획 단계 모두에서 다른 콜백 함수에 필요한 경우, 이러한 구독자들의 처리 순서는 임의적입니다.

이러한 감지-계획-실행 패턴에서는 각 단계마다 하나의 실행기를 정의할 수 있습니다. 계획 단계는 감지 단계의 모든 콜백이 완료된 후에만 실행됩니다.

**파생 요구사항:**
- 실행을 트리거함

### 여러 속도의 동기화

**개념:**

이동 로봇에서는 환경을 감지하기 위해 여러 센서가 사용되는 경우가 많습니다. IMU 센서는 매우 빠른 속도(예: 500Hz)로 데이터 샘플을 제공하는 반면, 레이저 스캔은 회전 시간에 따라 훨씬 느린 주파수(예: 10Hz)로 데이터를 제공합니다. 이때 중요한 과제는 서로 다른 주파수를 가진 센서 데이터를 어떻게 결정론적으로 융합하는가입니다. 이 문제는 그림 2에 나타나 있습니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/sensorFusion_01.png" alt="다중 속도 동기화" width="30%" />
</center>
<센터>
그림 2: 다중 주파수 센서 데이터를 결정론적으로 처리하는 방법.
</center>

스케줄링 문제로 인해 레이저 스캔 평가 콜백 함수가 IMU 데이터 수신 직전 또는 직후에 호출될 수 있습니다. 이를 해결하는 한 가지 방법은 애플리케이션 내부에 추가적인 동기화 코드를 작성하는 것입니다. 하지만 이는 번거롭고 이식성이 떨어지는 해결책입니다.

또 다른 방법은 IMU 샘플과 레이저 스캔의 주파수를 동기화하여 평가하는 것입니다. 예를 들어, 레이저 스캔 한 번에 항상 50개의 IMU 샘플을 처리하는 방식입니다. 이 접근 방식은 그림 3에 나와 있습니다. 전처리 콜백 함수는 IMU 샘플들을 집계하여 50개의 샘플이 포함된 집계 메시지를 10Hz의 속도로 전송합니다. 이제 두 메시지는 동일한 주파수를 갖게 됩니다. 두 메시지가 모두 수신될 때 트리거 조건이 실행되도록 설정하면, 센서 융합 알고리즘은 항상 동기화된 입력 데이터를 기대할 수 있습니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/sensorFusion_02.png" alt="트리거를 사용한 동기화" width="40%" />
</center>
<센터>
그림 3: 트리거를 이용한 여러 입력 데이터의 동기화.
</center>

ROS 2에서는 rclcpp와 rclpy의 Executor에 트리거 개념이 없기 때문에 현재로서는 이러한 모델링이 불가능합니다. 메시지 필터를 사용하여 헤더의 타임스탬프를 기반으로 입력 데이터를 동기화할 수 있지만, 이는 rclcpp에서만 가능하고 rcl에서는 불가능합니다. 또한, Executor에 직접 트리거 개념을 구현하는 것이 더 효율적일 것입니다.

또 다른 아이디어는 레이저 스캔이 수신될 때만 IMU 데이터를 적극적으로 요청하는 것입니다. 이 개념은 그림 4에 나와 있습니다. 레이저 스캔 메시지가 도착하면 먼저 집계된 IMU 샘플이 포함된 메시지를 요청합니다. 그런 다음 레이저 스캔을 처리하고 센서 융합 알고리즘을 실행합니다. 콜백의 순차적 실행을 지원하는 Executor를 사용하면 이 아이디어를 구현할 수 있습니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/sensorFusion_03.png" alt="시퀀스와의 동기화" width="30%" />
</center>
<센터>
그림 4: 순차 처리를 통한 동기화.
</center>

**파생 요구사항:**
- 실행을 트리거함
- 콜백의 순차적 처리

### 최우선 처리 경로
**개념**
로봇은 종종 여러 가지 활동을 동시에 수행해야 합니다. 예를 들어 경로를 따라가면서 장애물을 피하는 것과 같은 활동입니다. 경로 따라가기는 지속적인 활동인 반면, 장애물 회피는 주변 환경에 의해 발생하며 즉각적인 반응이 필요합니다. 따라서 각 활동에 우선순위를 지정하는 것이 바람직합니다. 그림 5는 이러한 우선순위 지정 방식을 보여줍니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/highPriorityPath.png" alt="HighPriorityPath" width="50%" />
</center>
<센터>
그림 5: 우선순위가 높은 경로를 순차적으로 관리하는 방법.
</center>

감지-계획-실행 활동으로 구성된 단순화된 제어 루프를 가정할 때, 로봇을 일시적으로 멈추게 할 수 있는 장애물 회피는 계획 단계 이전에 처리되어야 합니다. 이 예에서는 이러한 활동들이 하나의 스레드에서 처리된다고 가정합니다.

**파생 요구사항:**
- 콜백의 순차적 처리


### 실시간 임베디드 애플리케이션
임베디드 시스템에서 실시간 동작은 시간 트리거 방식을 통해 구현되는데, 이는 프로세스가 주기적으로 활성화됨을 의미합니다. 프로세스에는 우선순위가 할당되어 선점될 수 있습니다. 그림 6은 고정된 주기를 가진 세 개의 프로세스를 보여주는 예시입니다. 중간 및 하단 프로세스는 점선으로 표시된 빈 상자로 나타내면 여러 번 선점되는 것을 알 수 있습니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/scheduling_01.png" alt="고정된 기간으로 스케줄링" width="30%"/>
</center>
<센터>
그림 6: 고정 주기적 선점형 스케줄링.
</center>

그림 7에서 보는 바와 같이 각 프로세스에는 하나 이상의 작업이 할당될 수 있습니다. 이러한 작업은 순차적으로 실행되며, 이를 협력적 스케줄링이라고 합니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/scheduling_02.png" alt="고정된 기간으로 스케줄링" width="30%"/>
</center>
<센터>
그림 7: 순차적으로 실행되는 작업을 포함하는 프로세스.
</center>

주어진 여러 프로세스에 우선순위를 부여하는 방법은 다양하지만,
프로세스 기간이 짧을수록 우선순위가 높아지는 속도 단조 스케줄링 할당은 프로세서 사용률이 69% 미만인 경우 최적임이 입증되었습니다[[LL1973](#LL1973)].

 지난 수십 년 동안 다양한 스케줄링 접근 방식이 제시되었지만, 고정 주기 선점형 스케줄링은 임베디드 실시간 시스템에서 여전히 널리 사용되고 있습니다[[KZH2015](#KZH2015)]. 이는 최신 운영 체제의 특징을 살펴보면 더욱 분명해집니다. Linux와 같은 NuttX, Zephyr, FreeRTOS, QNX 등의 실시간 운영 체제는 고정 주기 선점형 스케줄링과 우선순위 할당을 지원하며, 이는 시간 기반 트리거 방식이 이 분야에서 지배적인 설계 원칙임을 보여줍니다.

하지만 선점형 스케줄링을 사용하고 전역 변수를 통해 여러 프로세스 간에 데이터를 공유하는 경우 데이터 일관성 문제가 자주 발생합니다. 스케줄링 효과와 프로세스의 가변적인 실행 시간으로 인해 이러한 변수에 대한 쓰기 및 읽기 작업이 때로는 더 빨리 또는 더 늦게 발생할 수 있습니다. 이는 업데이트 시간(변수 변경 사항이 다른 프로세스에 표시되는 시점)의 지연 시간 변동(지터)을 초래합니다. 여러 프로세스가 동시에 변수에 접근할 경우 경쟁 조건(race condition)이 발생할 수 있습니다. 이러한 문제를 해결하기 위해 [[HHK2001](#HHK2001)]에서 논리적 실행 시간(LET) 개념이 도입되었습니다. LET에서는 데이터 통신이 미리 정의된 주기적인 시간 간격에서만 발생합니다. 즉, 주기의 시작 부분에만 데이터를 읽고 주기의 끝 부분에만 데이터를 씁니다. 추가적인 지연 시간 증가를 감수하는 대신 데이터 일관성과 지터 감소를 얻습니다. 이 개념은 최근 자동차 애플리케이션에도 적용되었습니다[[NSP2018](#NSP2018)].

<센터>
<img src="_docs/concepts/client_library/execution_management/png/scheduling_LET.png" alt="고정된 기간으로 스케줄링" width="80%"/>
</center>
<센터>
그림 8: 논리적 실행 시간 패러다임을 적용하지 않은 경우와 적용한 경우의 데이터 통신.
</center>

그림 8은 LET 개념의 예시를 보여줍니다. 두 프로세스가 하나의 전역 변수를 통해 데이터를 주고받는다고 가정해 보겠습니다. 이 데이터가 기록되는 시점은 처리 시간의 끝입니다. 기본 경우(왼쪽)에는 프로세스 p<sub>3</sub>과 p<sub>4</sub>가 업데이트를 수신합니다. 그림 8의 오른쪽은 동일한 시나리오를 LET 의미론을 적용하여 보여줍니다. 여기서는 데이터가 주기 경계에서만 전달됩니다. 따라서 하위 프로세스는 주기의 끝에 데이터를 전달하므로 프로세스 p<sub>3</sub>과 p<sub>5</sub>는 항상 새로운 데이터를 수신합니다.

**개념:**
- 주기적인 프로세스 실행
- 프로세스에 고정된 우선순위 할당
- 프로세스의 선제적 스케줄링
- 프로세스 내 작업의 협력적 스케줄링(순차적 실행)
- LET 시맨틱스를 이용한 데이터 동기화


ROS 2에서는 타이머를 사용하여 주기적인 활성화가 가능하지만, 운영체제는 선점형 스케줄링을 지원하며 ROS 노드에 해당하는 스레드/프로세스 단위로 우선순위를 할당합니다. 따라서 데이터 종속성이 없는 콜백을 순차적으로 실행하는 것은 불가능합니다. 또한, 데이터는 콜백 실행 직전에 DDS 큐에서 읽어오고, 데이터는 애플리케이션 실행 중에 기록됩니다. rclcpp Executor의 `spin_period` 함수는 고정된 주기로 데이터를 확인하고 데이터가 있는 콜백만 실행하도록 하지만, 데이터 유무와 관계없이 모든 콜백을 실행하지는 않습니다. 따라서 `spin_period`는 여러 콜백(프로세스 내의 태스크)을 주기적으로 실행하는 데 적합하지 않습니다. 그러므로 타이머를 기반으로 여러 콜백(태스크)의 실행을 트리거하는 메커니즘이 필요합니다. 데이터 전송은 DDS를 통해 이루어지는데, 이는 LET(Let-End Time) 시맨틱스를 구현할 수 없게 합니다. 요약하자면, 다음과 같은 요구사항을 도출할 수 있습니다.

**파생 요구사항:**
- 실행을 시작합니다
- 콜백의 순차적 처리
- LET 시맨틱스를 이용한 데이터 동기화

## rclc 실행기

rclc Executor는 C 프로그래밍 언어로 작성된 rcl 레이어를 기반으로 하는 ROS 2 Executor입니다. 앞서 설명했듯이 기본 rclcpp Executor는 세 가지 주요 이유 때문에 실시간 애플리케이션 구현에 적합하지 않습니다. 첫째, 타이머가 다른 모든 핸들보다 우선시됩니다. 둘째, 콜백 실행에 우선순위가 없습니다. 셋째, 콜백이 라운드 로빈 방식으로 완료될 때까지 실행됩니다. 한편, 종단 간 지연 시간 제한, 인과 관계 체인의 응답 시간 변동 최소화, 결정론적 처리, 과부하 상황에서도 짧은 응답 시간 유지와 같은 비기능적 요구 사항을 달성하기 위한 여러 처리 패턴이 모범 사례로 개발되었습니다. 이러한 처리 패턴은 기본 ROS 2 Executor에서 제공하는 개념으로는 구현하기 어렵습니다. 따라서 우리는 유연한 Executor인 rclc Executor를 개발했습니다.

### 특징

rclc Executor는 모든 기능을 갖추고 있으며, 기본 ROS 2 Executor에서 지원하는 모든 이벤트 유형을 지원합니다. 지원되는 이벤트 유형은 다음과 같습니다.
- 구독
- 타이머
- 서비스
- 고객
- 경비 조건
- 행동
- 생명주기

유연한 rclc 실행기는 다음과 같은 새로운 기능을 추가로 제공합니다.
- 실행을 트리거함
- 사용자 정의 순차 실행
- 멀티스레딩 및 스케줄링 구성 (개발 중)
- 주기적 프로세스 스케줄링의 데이터 동기화를 위한 LET 의미론

첫째, *트리거 조건*을 통해 콜백 처리가 시작되는 시점을 정의할 수 있습니다. 이는 감지-계획-실행 제어 루프 또는 방향성 비순환 그래프를 사용하는 더욱 복잡한 처리 구조를 구현하는 데 유용합니다. 둘째, 사용자는 이러한 콜백이 실행될 *처리 순서*를 지정할 수 있습니다. 이 기능을 통해 여러 센서의 데이터 수집 속도를 고려한 센서 융합 패턴, 즉 다른 센서의 도착 여부에 따라 특정 센서에 데이터 요청이 이루어지는 방식을 쉽게 구현할 수 있습니다. 셋째, 기본 운영 체제의 스케줄링 매개변수(예: 우선순위)를 지정할 수 있습니다. 이 기능을 통해 우선순위 기반 처리를 구현할 수 있습니다. 마지막으로, 주기적인 애플리케이션의 경우, 주기적인 프로세스 스케줄링에 대한 데이터 일관성을 지원하기 위해 *LET 시맨틱스*가 구현되었습니다. 이제 이러한 기능들을 더 자세히 설명합니다.

#### 순차 실행

- 설정 시 사용자는 핸들의 순서를 정의합니다.
- 설정 시 사용자는 새로운 데이터가 있을 때만 핸들을 호출할지(ON_NEW_DATA) 아니면 항상 콜백을 호출할지(ALWAYS)를 정의합니다.
- 실행 시 모든 핸들은 사용자가 정의한 순서대로 처리됩니다.
  - 핸들의 구성이 ON_NEW_DATA인 경우, 새 데이터가 있을 때만 해당 콜백이 호출됩니다.
  - 핸들의 설정이 항상(ALWAYS)으로 되어 있으면 해당 콜백 함수도 항상 호출됩니다. 데이터가 없는 경우 콜백 함수는 데이터 없이(예: NULL 포인터) 호출됩니다.

그림 9는 세 개의 콜백 함수 A, B, C를 보여줍니다. 이 함수들은 *B, A, C* 순서로 실행된다고 가정합니다. 사용자는 이 순서대로 콜백 함수들을 rclc 실행기에 추가합니다. 새로운 메시지가 도착할 때마다, 새 메시지를 처리할 수 있는 콜백 함수들이 사용자가 정의한 처리 순서대로 실행됩니다.
<센터>
<img src="_docs/concepts/client_library/execution_management/png/rclc_executor_sequential_execution.png" alt="순차 실행 의미론" width="50%" />
</center>
<센터>
그림 9: 순차 실행 의미론.
</center>

#### 트리거 조건

- 주어진 핸들 집합에서, 해당 핸들의 입력 데이터 가용성을 기반으로 하는 트리거 조건에 따라 모든 콜백 처리가 시작되는 시점이 결정됩니다. 이는 그림 10에 나와 있습니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/trigger_01.png" alt="트리거 조건 개요" width="50%" />
</center>
<센터>
그림 10: 트리거 조건이 있는 실행기
</center>

- 이용 가능한 옵션:
  - ALL 작업: 모든 핸들에 대해 입력 데이터가 사용 가능할 때 발생합니다.
  - 모든 작업: 하나 이상의 핸들에 대해 입력 데이터가 사용 가능한 경우 발생합니다(OR 의미론).
  - ONE: 사용자가 지정한 핸들에 대한 입력 데이터가 사용 가능할 때 발생합니다.
  - 사용자 정의 함수: 사용자가 사용자 지정 로직을 구현할 수 있습니다.

그림 11은 ALL 의미론의 예를 보여줍니다. 모든 메시지 *msg_A, msg_B, msg_C*가 수신된 경우에만 트리거 조건이 충족되고 콜백은 사용자가 정의한 순서대로 처리됩니다.
<센터>
<img src="_docs/concepts/client_library/execution_management/png/trigger_ALL.png" alt="모든 조건 트리거" width="30%" />
</center>
<센터>
그림 11: 트리거 조건 ALL
</center>

그림 12는 ANY 의미론의 예시를 보여줍니다. 즉, 메시지 *msg_A, msg_B, msg_C* 중 하나라도 수신되면 트리거 조건이 충족되고 콜백은 사용자가 정의한 순서대로 처리됩니다. 이는 OR 의미론과 동일합니다.
<센터>
<img src="_docs/concepts/client_library/execution_management/png/trigger_OR.png" alt="모든 조건 트리거" width="30%" />
</center>
<센터>
그림 12: 트리거 조건 ANY (OR)
</center>

그림 13은 ONE 시맨틱스의 예시를 보여줍니다. 즉, 메시지 *msg_B*가 수신된 경우에만 트리거 조건이 충족되고 (잠재적으로 모든) 콜백이 사용자가 정의한 순서대로 처리됩니다.
<센터>
<img src="_docs/concepts/client_library/execution_management/png/trigger_ONE.png" alt="트리거 조건 ONE" width="30%" />
</center>
<센터>
그림 13: 트리거 조건 1
</center>

그림 14는 사용자 정의 의미론을 설명합니다. 여러 메시지로 구성된 보다 복잡한 논리를 포함하는 사용자 정의 트리거 조건을 실행기에 전달할 수 있습니다. 여기에는 인터럽트와 같은 하드웨어 트리거도 포함될 수 있습니다.
<센터>
<img src="_docs/concepts/client_library/execution_management/png/trigger_user_defined.png" alt="사용자 정의 트리거 조건" width="30%" />
</center>
<센터>
그림 14: 사용자 정의 트리거 조건
</center>

#### LET-의미론
- 가정: 시간 트리거 시스템, 실행기는 주기적으로 활성화됨
- 트리거가 실행되면 모든 입력 데이터를 읽고 로컬에 복사본을 만듭니다.
- 모든 콜백을 순차적으로 처리합니다.
- 실행기 기간이 끝날 때 출력 데이터를 기록합니다(참고: 이 기능은 아직 구현되지 않았습니다).

또한, 현재 rclcpp 실행기 의미론("RCLCPP")을 구현했습니다.
- 모든 핸들에 대한 새 데이터 대기 중(rcl_wait)
- 트리거 조건 ANY 사용
- 트리거가 발생하면 미리 정의된 순서대로 핸들 처리를 시작합니다.
- 핸들이 실행되기 직전에 DDS 큐에서 새 데이터를 요청합니다(rcl_take).

실행기 의미 체계 선택은 선택 사항입니다. 기본 의미 체계는 "RCLCPP"입니다.

#### 멀티스레딩 및 스케줄링 구성

rclc Executor는 멀티스레딩을 지원하도록 확장되었습니다. 우선순위나 예약 기반 스케줄링과 같은 고급 스케줄링 알고리즘을 구독 콜백에 할당할 수 있습니다. [[Pull Request](https://github.com/ros2/rclc/pull/87), Pre-print [SLD2021](#SLD2021)]. 전체 아키텍처는 그림 15에 나와 있습니다. 하나의 Executor 스레드는 DDS 큐에서 새 데이터가 있는지 확인하는 역할을 합니다. 각 콜백에 대해 운영 체제에서 제공하는 전용 스케줄링 정책을 가진 스레드가 생성됩니다. Executor는 구독의 새 데이터를 해당 콜백 함수로 전달하고, 운영 체제는 해당 콜백 함수를 자체 스레드에서 실행합니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/rclc_executor_multi_threaded.png" alt="다중 스레드 rclc 실행기" width="90%" />
</center>
<센터>
그림 15: 멀티스레드 rclc 실행기
</center>

### 실행기 API
rclc 실행기의 API는 구성 단계와 실행 단계의 두 단계로 나눌 수 있습니다.
#### 구성 단계
설정 단계에서 사용자는 다음 사항을 정의해야 합니다.
- 콜백의 총 개수
- 콜백의 순서
- 트리거 조건 (선택 사항, 기본값: ANY)
- 데이터 통신 의미론 (선택 사항, 기본값은 ROS2)

이 실행기는 임베디드 컨트롤러용으로 설계되었으므로 동적 메모리 관리가 매우 중요합니다. 따라서 rclc 실행기 초기화 시 사용자는 콜백 함수의 총 개수를 정의합니다. 필요한 동적 메모리는 이 단계에서만 할당되며 실행 단계에서는 추가 메모리가 할당되지 않습니다. 이러한 특징 때문에 이 실행기는 런타임 중에 추가 콜백 함수를 추가할 수 없다는 점에서 정적 실행기라고 할 수 있습니다.

그다음 사용자는 핸들과 해당 콜백(예: 구독 및 타이머용)을 실행기에 추가합니다. 이 과정이 진행되는 순서는 런타임 중 순차적 처리 순서를 결정합니다.

사용자는 각 핸들에 대해 새 데이터가 있을 때만 콜백을 실행할지(ON_NEW_DATA) 또는 항상 실행할지(ALWAYS)를 지정할 수 있습니다. 두 번째 옵션은 콜백이 일정한 주기로 호출될 것으로 예상되는 경우에 유용합니다.

트리거 조건은 이러한 콜백 처리가 시작되는 시점을 정의합니다. 편의를 위해 몇 가지 기본 조건이 정의되어 있습니다.
- trigger_any(기본값): 콜백 중 하나라도 새 데이터가 있으면 실행을 시작합니다.
- trigger_all: 모든 콜백에 새 데이터가 있는 경우 실행을 시작합니다.
- trigger_one(&`data`) : `data`가 수신되면 실행을 시작합니다.
- user_defined_function: 사용자는 더 복잡한 논리를 가진 자신만의 함수를 정의할 수도 있습니다.

'trigger_any'가 기본값이므로 rclcpp 실행기의 현재 의미 체계가 선택됩니다.

데이터 통신 의미론은 다음과 같습니다.
- ROS2 (기본값)
- 허락하다

ROS2 rclcpp Executor와의 호환성을 위해 기존 rclcpp 시맨틱을 'ROS2' 방식으로 구현했습니다. 즉, spin 함수를 사용하여 DDS 큐에서 새로운 데이터가 있는지 지속적으로 모니터링합니다(rcl_wait). 새로운 데이터가 발생하면 콜백이 실행되기 직전에 DDS에서 데이터를 가져옵니다(rcl_take). 모든 콜백은 사용자가 정의한 순서대로 처리되며, 이는 순서를 지정할 수 없는 rclcpp Executor와의 유일한 차이점입니다.

둘째로, LET 시맨틱스는 처리 시작 시 사용 가능한 모든 데이터를 가져와(rcl_take) 버퍼링한 다음, 버퍼링된 복사본에 대해 미리 정의된 연산을 통해 콜백을 처리하도록 구현됩니다.

#### 실행 단계

Executor의 주요 기능은 ROS2의 rclcpp Executor처럼 DDS 큐에 새로운 데이터가 있는지 지속적으로 확인하는 'spin' 함수입니다. 트리거 조건이 충족되면 DDS 큐에 있는 모든 데이터가 지정된 시맨틱(ROS 또는 LET)에 따라 사용자 정의 순서대로 처리됩니다. 모든 콜백이 처리된 후 DDS에서 새로운 데이터가 있는지 다시 확인합니다.

사용 가능한 스핀 기능은 다음과 같습니다.
- `spin_some` - 한 번 회전
- `spin_period` - 주기를 갖는 스핀
- `스핀` - 무한히 회전

### 예시
위에서 설명한 처리 패턴에 맞게 rclc 실행기를 설정하는 방법에 대한 관련 코드 조각을 제공합니다.

#### 로봇 공학에서의 감지-계획-실행 파이프라인 예시

이 예제에서는 감지-계획-실행 파이프라인을 단일 스레드에서 구현하고자 합니다. 트리거 조건은 활성화를 통해 확인할 수 있습니다.
레이저와 IMU 데이터가 모두 사용 가능한 시점을 감지 단계로 정의합니다. 이를 위해서는 `exe_sense`, `exe_plan`, `exe_act` 세 개의 실행기가 필요합니다. 두 개의 센서 데이터 획득 콜백 함수인 `sense_Laser`와 `sense_IMU`는 `exe_sense` 실행기에 등록됩니다.
`ALL` 트리거 조건은 이 두 콜백에 필요한 모든 데이터가 준비되었을 때만 감지 단계를 활성화하는 역할을 합니다. 마지막으로 세 개의 실행기는 `while` 루프와 `spin_some` 함수를 사용하여 순차적으로 실행됩니다.

콜백 함수의 정의는 생략되었습니다.

```C
...
rcl_subscription_t sense_Laser, sense_IMU, plan, act;
rcle_let_executor_t exe_sense, exe_plan, exe_act;
// 실행기 초기화
rclc_executor_init(&exe_sense, &context, 2, ...);
rclc_executor_init(&exe_plan, &context, 1, ...);
rclc_executor_init(&exe_act, &context, 1, ...);
// 감지 단계 실행기
rclc_executor_add_subscription(&exe_sense, &sense_Laser, &my_sub_cb1, ON_NEW_DATA);
rclc_executor_add_subscription(&exe_sense, &sense_IMU, &my_sub_cb2, ON_NEW_DATA);
rclc_let_executor_set_trigger(&exe_sense, rclc_executor_trigger_all, NULL);
// 계획 단계 실행기
rclc_executor_add_subscription(&exe_plan, &plan, &my_sub_cb3, ON_NEW_DATA);
// 행위 단계 실행자
rclc_executor_add_subscription(&exe_act, &act, &my_sub_cb4, ON_NEW_DATA);

// 모든 실행기를 회전시키세요
(참인 동안) {
  rclc_executor_spin_some(&exe_sense, RCL_MS_TO_NS(100));
  rclc_executor_spin_some(&exe_plan, RCL_MS_TO_NS(100));
  rclc_executor_spin_some(&exe_act, RCL_MS_TO_NS(100));
}
```

#### 여러 속도 동기화 예시

아래 그림은 트리거를 이용하여 여러 속도를 동기화하는 센서 융합 과정을 보여줍니다.

```C
...
rcl_subscription_t aggr_IMU, sense_Laser, sense_IMU;
rcle_let_executor_t exe_aggr, exe_sense;
// 실행기 초기화
rclc_executor_init(&exe_aggr, &context, 1, ...);
rclc_executor_init(&exe_sense, &context, 2, ...);
// IMU 데이터 집계를 위한 실행기
rclc_executor_add_subscription(&exe_aggr, &aggr_IMU, &my_sub_cb1, ON_NEW_DATA);
// 감지 단계 실행기
rclc_executor_add_subscription(&exe_sense, &sense_Laser, &my_sub_cb2, ON_NEW_DATA);
rclc_executor_add_subscription(&exe_sense, &sense_IMU, &my_sub_cb3, ON_NEW_DATA);
rclc_executor_set_trigger(&exe_sense, rclc_executor_trigger_all, NULL);

// 모든 실행기를 회전시키세요
(참인 동안) {
  rclc_executor_spin_some(&exe_aggr, RCL_MS_TO_NS(100));
  rclc_executor_spin_some(&exe_sense, RCL_MS_TO_NS(100));
}
```

순차 실행을 이용한 센서 융합 설정은 아래와 같습니다.
순서는 집계된 IMU 메시지를 요청하는 `sense_IMU`이고, 그 다음이 `sense_Laser`라는 점에 유의하십시오.
레이저 메시지가 수신되면 트리거가 작동합니다.

```C
...
rcl_subscription_t sense_Laser, sense_IMU;
rcle_let_executor_t exe_sense;
// 실행기 초기화
rclc_executor_init(&exe_sense, &context, 2, ...);
// 감지 단계 실행기
rclc_executor_add_subscription(&exe_sense, &sense_IMU, &my_sub_cb1, ALWAYS);
rclc_executor_add_subscription(&exe_sense, &sense_Laser, &my_sub_cb2, ON_NEW_DATA);
rclc_executor_set_trigger(&exe_sense, rclc_executor_trigger_one, &sense_Laser);
// 스핀
rclc_executor_spin(&exe_sense);
```
#### 우선순위가 높은 처리 경로 예시

이 예시는 장애물 회피 함수 `obst_avoid`를 실행하는 순차적 처리 순서를 보여줍니다.
감지 단계의 콜백 이후, 그리고 계획 단계의 콜백 `plan` 이전에 발생합니다.
레이저 메시지가 수신되면 제어 루프가 시작됩니다. 그런 다음 집계된 IMU 메시지가 요청됩니다.
위 예시처럼 말이죠. 그러면 다른 모든 콜백 함수들이 항상 실행됩니다. 이는 이러한 콜백 함수들이 다음과 같다고 가정할 때입니다.
전역 데이터 구조를 통해 통신합니다. 콜백 함수가 있기 때문에 경쟁 조건이 발생할 수 없습니다.
모든 작업을 하나의 스레드에서 실행합니다.

```C
...
rcl_subscription_t sense_Laser, sense_IMU, plan, act, obst_avoid;
rcle_let_executor_t 실행;
// 실행기 초기화
rclc_executor_init(&exe, &context, 5, ...);
// 처리 순서 정의
rclc_executor_add_subscription(&exe, &sense_IMU, &my_sub_cb1, ALWAYS);
rclc_executor_add_subscription(&exe, &sense_Laser, &my_sub_cb2, ON_NEW_DATA);
rclc_executor_add_subscription(&exe, &obst_avoid, &my_sub_cb3, ALWAYS);
rclc_executor_add_subscription(&exe, &plan, &my_sub_cb4, ALWAYS);
rclc_executor_add_subscription(&exe, &act, &my_sub_cb5, 항상);
rclc_executor_set_trigger(&exe, rclc_executor_trigger_one, &sense_Laser);
// 스핀
rclc_executor_spin(&exe);
```

#### 실시간 임베디드 애플리케이션 예시

순차 실행 방식을 사용하면 프로세스 내 작업들의 협력적 스케줄링을 모델링할 수 있습니다. 트리거 조건은 프로세스를 주기적으로 활성화하는 데 사용되며, 활성화된 프로세스는 미리 정의된 순서대로 모든 콜백 함수를 실행합니다. 데이터는 LET 시맨틱스를 사용하여 전달됩니다. 각 실행기는 자체 스레드에서 실행되며, 적절한 우선순위를 할당할 수 있습니다.

다음 예제에서는 Executor가 4개의 핸들로 설정되어 있습니다. 프로세스가 `sub1`, `sub2`, `sub3` 세 개의 구독을 가지고 있다고 가정합니다. 순차적인 처리 순서는 Executor에 추가된 순서대로 결정됩니다. `timer`라는 타이머가 주기를 정의합니다. `timer` 매개변수를 사용하는 `trigger_one`을 통해 타이머가 준비되면 모든 콜백이 처리됩니다. 마지막으로 데이터 통신 의미 체계인 LET가 정의됩니다.
```C
# "rcl_executor/let_executor.h"를 포함하세요

// 구독 콜백 정의
void my_sub_cb1(const void * msgin)
{
  // ...
}
// 구독 콜백 정의
void my_sub_cb2(const void * msgin)
{
  // ...
}
// 구독 콜백 정의
void my_sub_cb3(const void * msgin)
{
  // ...
}

// 타이머 콜백 정의
void my_timer_cb(rcl_timer_t * timer, int64_t last_call_time)
{
  // ...
}

// 필수 ROS 2 객체
rcl_context_t 컨텍스트;
rcl_node_t 노드;
rcl_subscription_t sub1, sub2, sub3;
rcl_timer_t 타이머;
rcle_let_executor_t 실행;

// ROS 컨텍스트 정의
컨텍스트 = rcl_get_zero_initialized_context();
// ROS 노드 초기화
rcl_node_init(&node, &context,...);
// 구독 생성
rcl_subscription_init(&sub1, &node, ...);
rcl_subscription_init(&sub2, &node, ...);
rcl_subscription_init(&sub3, &node, ...);
// 타이머를 생성합니다
rcl_timer_init(&timer, &my_timer_cb, ... );
// 4개의 핸들로 실행기를 초기화합니다.
rclc_executor_init(&exe, &context, 4, ...);
// 핸들의 정적 실행 순서를 정의합니다
rclc_executor_add_subscription(&exe, &sub1, &my_sub_cb1, 항상);
rclc_executor_add_subscription(&exe, &sub2, &my_sub_cb2, 항상);
rclc_executor_add_subscription(&exe, &sub3, &my_sub_cb3, 항상);
rclc_executor_add_timer(&exe, &timer);
// '타이머' 핸들이 준비되면 트리거됩니다.
rclc_executor_set_trigger(&exe, rclc_executor_trigger_one, &timer);
// LET-semantics를 선택합니다
rclc_executor_data_comm_semantics(&exe, LET);
// 영원히 회전합니다
rclc_executor_spin(&exe);
```

#### ROS 2 실행기 워크샵 참조 시스템
rclc Executor는 [ROS World 2021](https://roscon.ros.org/world/2021/)(즉, ROSCon의 온라인 버전)[[S2021](#S2021)]에서 개최된 워크숍 'ROS 2 Executor: 효율적이고 실시간이며 결정론적인 실행을 구현하는 방법은?'에서 발표되었습니다. 이 워크숍을 위해 ROS Executor의 테스트 및 벤치마킹을 위한 [참조 시스템](https://github.com/ros-realtime/reference-system)이 개발되었습니다. 트리거 조건을 사용한 rclc Executor의 참조 시스템 적용 사례는 [참조 시스템의 rclc-executor 브랜치](https://github.com/ros-realtime/reference-system/tree/rclc_executor)에서 확인할 수 있습니다.

<iframe width="560" height="315" src="https://www.youtube.com/embed/IazrPF3RN1U" title="YouTube 비디오 플레이어" frameborder="0" allow="가속도계; 자동 재생; 클립보드 쓰기; 암호화된 미디어; 자이로스코프; 화면 속 화면" allowfullscreen></iframe>

발표 자료는 [여기](https://ec2a4d36-bac8-4759-b25e-bb1f794177f4.filesusr.com/ugd/984e93_749e27b917a54b45b9ccb5be930841b8.pdf)에서 다운로드할 수 있습니다. 워크숍의 다른 발표에 대한 모든 정보와 비디오 및 슬라이드는 [www.apex.ai/roscon-21](https://www.apex.ai/roscon-21)에서 확인할 수 있습니다.

### 향후 작업

- 완전한 LET 의미 체계 (기간 종료 시점에 데이터 기록)
  - 정기적으로 출판하는 출판사 한 곳
  - 실행기가 여러 스레드에서 실행되는 경우,
    출판은 원자적이어야 한다
- 기본 운영 체제의 스케줄링 정책을 할당하는 멀티스레드 실행기. [[Pull Request](https://github.com/ros2/rclc/pull/87), pre-print [SLD2021](#SLD2021)].

### 다운로드
rclc 실행기는 [ros2/rclc 저장소](https://github.com/ros2/rclc)에서 다운로드할 수 있습니다. ROS 2의 Humble, Iron, Rolling 버전에서 사용 가능합니다. 이 저장소에는 [rclc 실행기](https://github.com/ros2/rclc/tree/master/rclc)와 여러 응용 예제가 포함된 [rclc_examples 패키지](https://github.com/ros2/rclc/tree/master/rclc_examples)를 비롯한 여러 패키지가 제공됩니다.

## 콜백 그룹 레벨 실행기

콜백 그룹 레벨 실행기는 micro-ROS에서 개발된 개선된 rclcpp 실행기 API의 초기 프로토타입입니다. 기본 rclcpp 실행기를 기반으로 하며 앞서 언급한 몇 가지 단점을 개선했습니다. 가장 중요한 점은 하위 계층(rcl, rmw, rmw_adapter, DDS)에서 여러 실행기 인스턴스가 부정적인 간섭 없이 실행될 수 있는지 검증하는 데 사용되었다는 것입니다.

기본 rclcpp Executor는 노드 단위로 작동하는데, 이는 하나의 노드에서 서로 다른 실시간 보장이 필요한 여러 콜백을 실행할 수 있다는 점에서 한계가 있습니다. 따라서 콜백 그룹 단위로 콜백 스케줄링을 더욱 세밀하게 제어할 수 있도록 API를 개선했습니다. rclcpp에 이미 존재하는 콜백 그룹 개념을 활용하여 RT-CRITICAL 및 BEST-EFFORT와 같은 실시간 프로파일을 콜백 그룹 API(rclcpp/callback_group.hpp)에 도입했습니다. 특정 실시간 보장이 필요한 각 콜백은 생성 시 전용 콜백 그룹과 연결될 수 있습니다. 이를 통해 Executor와 관련 클래스(예: 메모리 할당)가 더욱 세밀한 콜백 그룹 단위로 작동하도록 개선했습니다. 결과적으로 하나의 노드에서 서로 다른 실시간 프로파일을 가진 콜백을 하나의 프로세스 내에서 서로 다른 Executor 인스턴스에 할당할 수 있습니다.

따라서 Executor 인스턴스는 특정 콜백 그룹에 전용으로 사용될 수 있으며, Executor의 스레드는 이러한 그룹의 실시간 요구 사항에 따라 우선순위가 지정될 수 있습니다. 예를 들어, 모든 시간 제약적인 콜백은 가장 높은 스케줄러 우선순위로 실행되는 "RT-CRITICAL" Executor 인스턴스에서 처리됩니다.

다음 그림은 하나의 프로세스에서 세 개의 콜백 그룹 수준 실행기가 두 개의 노드를 처리하는 이 접근 방식을 보여줍니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/cbg-executor_sample_system.png" alt="하나의 프로세스에 두 개의 노드와 세 개의 콜백 그룹 레벨 실행기가 있는 샘플 시스템" width="60%" />
</center>

Drive-Base 노드의 다양한 콜백은 서로 다른 Executor(빨간색, 노란색, 녹색으로 표시됨)에 분산됩니다. 예를 들어 onCmdVel 및 publishWheelTicks 콜백은 동일한 Executor(노란색)에서 실행됩니다. 서로 다른 노드의 콜백이 동일한 Executor에서 처리될 수도 있습니다.

### API 변경 사항

이 섹션에서는 Executor API에 필요한 변경 사항을 설명합니다.
* [include/rclcpp/callback_group.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/callback_group.hpp):

    * 노드당 최대 3개의 실시간 클래스(요구사항)(RealTimeCritical, SoftRealTime, BestEffort)를 구분하기 위한 열거형을 도입했습니다.
    * Executor 인스턴스와의 연결 방식을 노드에서 콜백 그룹으로 변경했습니다.
* [include/rclcpp/executor.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/executor.hpp)

    * 전체 노드뿐만 아니라 개별 콜백 그룹을 추가 및 제거하는 기능을 추가했습니다.

    * 노드에 대한 개인 벡터를 콜백 그룹과 노드를 매핑하는 방식으로 대체했습니다.

* [include/rclcpp/memory_strategy.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/memory_strategy.hpp)

    * 노드 벡터를 인수로 받는 모든 함수를 앞서 언급한 맵으로 변경했습니다.
* [include/rclcpp/node.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/node.hpp) 및 [include/rclcpp/node_interfaces/node_base.hpp](https://github.com/ros2/rclcpp/blob/master/rclcpp/include/rclcpp/node_interfaces/node_base.hpp)

    * 실시간 클래스의 create_callback_group 함수에 대한 확장된 인수입니다.
    * get_associated_with_executor_atomic 함수를 제거했습니다.

콜백 그룹 수준 실행기가 [풀 요청 1218](https://github.com/ros2/rclcpp/pull/1218/commits)을 통해 ROS 2 rclcpp에 병합되었습니다.

### 테스트 벤치

개념 증명으로서, 본 패키지 cbg-executor_ping-pong_cpp에 간단한 테스트 벤치를 구현했습니다. 이 테스트 벤치는 실시간 및 최선형 메시지를 동시에 교환하는 Ping 노드와 Pong 노드로 구성됩니다. 각 메시지 유형은 다음 그림과 같이 전용 Executor를 통해 처리됩니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/ping_pong_diagram.png" alt="콜백 그룹 수준 실행기 테스트 벤치 아키텍처" width="100%" />
</center>

테스트 벤치를 통해 해당 접근 방식의 작동을 검증했습니다.

<센터>
<img src="_docs/concepts/client_library/execution_management/png/cbg_executor_demo_plot.png" alt="콜백 그룹 수준 실행기 테스트 벤치 결과" width="80%" />
</center>

이 예시에서, 우선순위가 높은 작업(빨간색 선)의 콜백은 Pong 노드에서 10ms를 소모하고, 우선순위가 낮은 작업(파란색 선)은 40ms를 소모합니다. 핑 속도가 20Hz일 때 CPU는 포화 상태에 이릅니다(10ms*20+40ms*20=1000ms). 핑 속도가 높아지면 우선순위가 높은 작업은 계속해서 Pong 메시지를 보낼 수 있지만, 우선순위가 낮은 Pong 작업의 성능은 저하됩니다. 핑 속도가 100Hz일 때, 우선순위가 높은 작업은 CPU 사용률이 100%에 도달합니다. 핑 속도가 높아지면 우선순위가 높은 작업은 100Hz로 Pong 메시지를 계속 보낼 수 있지만, 우선순위가 낮은 작업은 더 이상 CPU 리소스를 확보하지 못해 메시지를 보낼 수 없게 됩니다.

테스트 벤치는 [cbg_executor_demo](https://github.com/ros2/examples/tree/master/rclcpp/executors/cbg_executor)에서 제공됩니다.

## 관련 작업

이 섹션에서는 관련 접근 방식에 대한 개요를 제공하고 해당 API에 대한 링크를 제공합니다.

### 포크스 프레임워크

[Fawkes](http://www.fawkesrobotics.org/)는 감지-계획-실행과 같은 실행을 위한 동기화 지점을 지원하는 로봇 소프트웨어 프레임워크입니다. RWTH 아헨 대학교에서 2006년부터 개발해 왔으며, 소스 코드는 [github.com/fawkesrobotics](https://github.com/fawkesrobotics)에서 확인할 수 있습니다.

#### 동기화
Fawkes는 개발자에게 다양한 동기화 지점을 제공하며, 이는 일반적인 감지-계획-실행 애플리케이션의 실행 순서를 정의하는 데 매우 유용합니다. 이러한 10개의 동기화 지점(웨이크업 훅)은 다음과 같습니다([libs/aspect/blocked_timing.h](https://github.com/fawkesrobotics/fawkes/blob/master/src/libs/aspect/blocked_timing.h) 참조).

* 웨이크업_훅_프리_루프
* 웨이크업 후크 센서 획득
* 웨이크업 후크 센서 준비
* 웨이크업 후크 센서 프로세스
* 웨이크업_훅_월드스테이트
* 깨어나세요_갈고리_생각하세요
* 웨이크업_훅_스킬
* 웨이크업_훅_액트
* 웨이크업_훅_액트_실행
* 웨이크업_훅_포스트_루프

#### 컴파일 시 설정
컴파일 시점에 원하는 동기화 지점이 모듈의 생성자 매개변수로 정의됩니다. 예를 들어, `mapLaserGenThread`가 SENSOR_ACQUIRE에서 실행되어야 한다고 가정하면 생성자는 다음과 같이 구현됩니다.

```C++
MapLaserGenThread::MapLaserGenThread()
  :: 스레드("MapLaserGenThread", 스레드::OPMODE_WAITFORWAKEUP),
     BlockedTimingAspect(BlockedTimingAspect::WAKEUP_HOOK_SENSOR_ACQUIRE),
     TransformAspect(TransformAspect::BOTH_DEFER_PUBLISHER, "레이저 주행 거리 측정 지도")
```

마찬가지로, `NaoQiButtonThread`를 SENSOR_PROCESS 훅에서 실행하려면 생성자는 다음과 같습니다.

```C++
NaoQiButtonThread::NaoQiButtonThread()
  :: 스레드("NaoQiButtonThread", 스레드::OPMODE_WAITFORWAKEUP),
     BlockedTimingAspect(BlockedTimingAspect::WAKEUP_HOOK_SENSOR_PROCESS)
```

#### 런타임 실행
실행 시, 실행기(Executor)는 동기화 지점 목록을 순회하며 등록된 모든 스레드를 완료될 때까지 실행합니다. 그런 다음 다음 동기화 지점의 스레드가 호출됩니다.

모듈(스레드)은 이러한 감지-계획-실행 동기화 지점과 독립적으로 구성될 수 있습니다. 이렇게 하면 해당 스레드는 해당 체인과 병렬로 실행됩니다.

다음 그림은 Fawkes 프레임워크의 개략적인 구조를 보여줍니다. 컴파일 시점에 감지-계획-실행-깨우기 후크의 구성이 이루어지고(상단), 런타임에는 스케줄러가 이러한 깨우기 후크 목록을 순회합니다(하단).

<센터>
<img src="_docs/concepts/client_library/execution_management/png/fawkes_executor_diagram.png" alt="Fawkes Executor의 시퀀스 다이어그램" width="50%" />
</center>

따라서 실행 시 후크는 선점 없이 고정된 정적 스케줄에 따라 실행됩니다. 동일한 후크에 등록된 여러 스레드는 병렬로 실행됩니다.

감지-계획-실행과 같은 애플리케이션의 순차적 실행과는 별개로, '배리어'를 통해 실행 순서에 추가적인 제약을 정의할 수 있습니다. 배리어는 자신이 속한 스레드가 시작하기 전에 완료되어야 하는 스레드들의 개수를 정의합니다.

이러한 개념들은 다음과 같은 주요 클래스들에 의해 구현됩니다.

* `SyncPoint` 및 `SyncPointManager`를 통한 웨이크업 후크*는 동기화 지점 목록을 관리합니다.
* `FawkesMainThread` 클래스에 의해 실행되는 실행기*는 스케줄러로서 사용자 스레드를 호출하는 역할을 합니다.
* `BlockedTimingExecutor`에서 파생된 `ThreadManager`는 웨이크업 훅에 스레드를 추가 및 제거하고 웨이크업 훅을 순차적으로 실행하는 데 필요한 API를 제공합니다.
* `Barrier`는 C++의 `condition_variable`과 유사한 객체입니다.

#### 논의

모든 스레드는 동일한 우선순위로 실행됩니다. 만약 여러 개의 감지-계획-실행 체인이 서로 다른 우선순위로 실행되어야 하는 경우, 예를 들어 비상 정지 실행을 정상 작동 실행보다 우선시해야 하는 경우, 이 프레임워크는 한계에 도달합니다.

또한, 서로 다른 실행 빈도는 이 감지-계획-실행 체인의 단일 인스턴스로 모델링할 수 없습니다. 하지만 로봇 공학에서는 가장 빠른 센서가 체인을 주도하고 나머지 모든 연결 고리는 동일한 빈도로 실행됩니다.

미리 정의된 웨이크업 훅과 무관하게 스레드를 실행할 수 있는 옵션은 진단 등에 매우 유용합니다. 배리어 개념은 실행 순서에서 고려해야 하는 함수 종속성을 충족하는 데 유용합니다.

<!--
### 오로코스

부분 주문 일정에 대한 설명을 추가하세요.


### 코시마

TODO 다음 논문에서 COSIMA의 모델 기반 접근 방식(OROCOS 기반)에 대한 설명을 삽입하세요:

DL Wigand, P. Mohammadi, EM Hoffman, NG Tsagarakis, JJ Steil 및 S. Wrede, "실시간 로봇 시스템의 시뮬레이션, 실행 및 분석을 위한 오픈 소스 아키텍처", 2018 IEEE 자율 로봇 시뮬레이션, 모델링 및 프로그래밍 국제 컨퍼런스(SIMPAR), 브리즈번, 퀸즐랜드, 2018, 93-100쪽.
도이: 10.1109/SIMPAR.2018.8376277
URL: http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=8376277&isnumber=8376259
-->


## 참고자료
* [S2021]<a name="S2021"></a> J. Staschulat, "Micro-ROS: rclc Executor", ROS World 워크숍 "ROS 2 Executor: 효율적이고 실시간이며 결정론적인 실행을 위한 방법은 무엇일까요?", 2021년 10월, [[슬라이드](https://ec2a4d36-bac8-4759-b25e-bb1f794177f4.filesusr.com/ugd/984e93_749e27b917a54b45b9ccb5be930841b8.pdf)] [[비디오](https://www.youtube.com/embed/IazrPF3RN1U)]

* [SLD2021]<a name="SLD2021"></a> J. Staschulat, R. Lange 및 DN Dasari, "Micro-ROS를 위한 예산 기반 실시간 실행기", arXiv 사전 공개 논문, 2021년 5월. [[논문](https://arxiv.org/abs/2105.05590)]

* [L2020]<a name="L2020"></a> Ralph Lange: ROS 2를 활용한 고급 실행 관리, ROS 산업 컨퍼런스, 2020년 12월 [[슬라이드]](https://micro-ros.github.io/download/2020-12-16_Advanced_Execution_Management_with_ROS_2.pdf)

* [SLL2020]<a name="SLL2020"></a> J. Staschulat, I. Lütkebohle 및 R. Lange, "rclc Executor: 마이크로컨트롤러에서 ROS 애플리케이션을 위한 도메인별 결정론적 스케줄링 메커니즘: 진행 중인 작업", 2020 국제 임베디드 소프트웨어 컨퍼런스(EMSOFT), 싱가포르, 2020, pp. 18-19. [[논문]](https://ieeexplore.ieee.org/document/9244014) [[비디오]](https://whova.com/embedded/session/eswe_202009/1145800/)

* [CB2019]<a name="CB2019"> </a> D. Casini, T. Blaß, I. Lütkebohle, B. Brandenburg: 예약 기반 스케줄링 하에서의 ROS 2 처리 체인의 응답 시간 분석, Euromicro 실시간 시스템 컨퍼런스 2019. [[논문]](http://drops.dagstuhl.de/opus/volltexte/2019/10743/) [[슬라이드]](https://t-blass.de/talks/ECRTS2019.pdf)

* [L2018]<a name="L2018"></a> Ralph Lange: ROS 2용 콜백 그룹 레벨 실행기. ROSCon 2018 라이트닝 토크. 스페인 마드리드. 2018년 9월. [[슬라이드]](https://roscon.ros.org/2018/presentations/ROSCon2018_Lightning1_4.pdf) [[비디오]](https://vimeo.com/292707644)

* [EK2018]<a name="EK2018"></a> R. Ernst, S. Kuntz, S. Quinton, M. Simons: 논리적 실행 시간 패러다임: 멀티코어 시스템을 위한 새로운 관점, 2018년 2월 25-28일 (다그슈툴 세미나 18092). [[논문]](http://drops.dagstuhl.de/opus/volltexte/2018/9293/pdf/dagrep_v008_i002_p122_18092.pdf)

* [NSP2018]<a name="NSP2018"></a> A. Naderlinger, S. Resmerita, 및 W. Pree: 레거시 및 모델 기반 애플리케이션을 위한 LET,
논리적 실행 시간 패러다임: 멀티코어 시스템을 위한 새로운 관점 (다그슈툴 세미나 18092), 독일 바데른, 2018년 2월.

* [BP2017]<a name="BP2017"></a> A. Biondi, P. Pazzaglia, A. Balsini, MD Natale: 멀티코어용 AUTOSAR 애플리케이션의 논리적 실행 시간 구현 및 메모리 최적화 문제, 임베디드 및 실시간 시스템 분석 도구 및 방법론 국제 워크숍(WATERS2017), 크로아티아 두브로브니크.[[논문]](https://pdfs.semanticscholar.org/4a9e/b9a616c25fd0b4a4f7810924e73eee0e7515.pdf)

* [KZH2015]<a name="KZH2015"></a> S. Kramer, D. Ziegenbein, 및 A. Hamann: 무료 실제 자동차 벤치마크, 임베디드 및 실시간 시스템을 위한 분석 도구 및 방법론에 관한 국제 워크숍(WATERS), 2015.

* [HHK2001]<a name="HHK2001"></a> Henzinger TA, Horowitz B., Kirsch CM (2001) Giotto: 임베디드 프로그래밍을 위한 시간 트리거 언어. Henzinger TA, Kirsch CM (편저) 임베디드 소프트웨어. EMSOFT 2001. 컴퓨터 과학 강의록, 2211권. Springer, Berlin, Heidelberg

* [LL1973]<a name="LL1973"></a> Liu, CL; Layland, J.: 하드 실시간 환경에서 멀티프로그래밍을 위한 스케줄링 알고리즘, ACM 저널, 20(1): 46–61, 1973.

## 감사의 글

본 활동은 유럽 연합의 Horizon 2020 연구 및 혁신 프로그램에 따라 유럽 연구 위원회(ERC)로부터 자금 지원을 받았습니다(보조금 계약 번호 780785).

---

## 출처: `_docs/concepts/client_library/features/index.md`
<a id="source-docs-concepts-client-library-features-index-md"></a>

표준 [ROS 2 클라이언트 지원 라이브러리(rcl)](https://github.com/ros2/rcl/)와 새로운 [ROS 2 클라이언트 라이브러리 패키지(rclc)](https://github.com/ros2/rclc/)로 구성된 마이크로 ROS 클라이언트 라이브러리는 다음과 같은 모든 주요 ROS 개념을 포함할 예정입니다.

* 노드
* 출판사/구독
* 서비스/고객
* 그래프
* 유언집행자
* 라이프사이클
* 매개변수

대부분의 기능은 이미 Humble 릴리스에서 사용할 수 있습니다. 자세한 내용은 [기능 개요 페이지](/_docs/overview/features/)를 참조하십시오. rcl + rclc를 사용하여 자체 애플리케이션 노드를 개발하는 방법을 알아보려면 해당 [프로그래밍 튜토리얼](/_docs/tutorials/programming_rcl_rclc/)을 참조하십시오.

---

## 출처: `_docs/concepts/client_library/introduction/index.md`
<a id="source-docs-concepts-client-library-introduction-index-md"></a>

클라이언트 라이브러리는 사용자 코드, 즉 애플리케이션 수준의 마이크로 ROS 노드를 위한 마이크로 ROS API를 제공합니다. 목표는 마이크로컨트롤러에 최적화된 구현으로 ROS 2의 주요 개념들을 모두 제공하는 것입니다. 동시에, 코드 이식을 용이하게 하기 위해 표준 ROS 2와의 호환성을 최대한 높이는 데에도 힘쓰고 있습니다.

장기적인 유지보수 비용을 최소화하기 위해, 기존 ROS 2 스택의 데이터 구조와 알고리즘을 활용하고, 필요한 변경 사항은 가능한 한 메인라인 스택에 반영합니다. 이러한 이유로 마이크로 ROS 클라이언트 라이브러리는 표준 [ROS 2 클라이언트 지원 라이브러리(rcl)](https://github.com/ros2/rcl/)와 새로운 [ROS 2 클라이언트 라이브러리 패키지(rclc)](https://github.com/ros2/rclc/)로 구성됩니다. 아래 그림과 같이, rcl과 rclc는 함께 C 프로그래밍 언어로 작성된, 모든 기능을 갖춘 클라이언트 라이브러리를 구성합니다.

<img src="img/micro-ROS_architecture.png" style="display:block; width:50%; float:right;"/>

주요 특징 및 속성:

* 래퍼로 인한 런타임 오버헤드를 방지하기 위해 가능한 경우 rcl 데이터 구조를 사용합니다.
* rclc에서 제공하는 일반적인 작업(예: 게시자 생성, 구독 완료)을 위한 편의 기능.
* 콜백 실행 및 처리 순서를 세밀하게 제어할 수 있는 전용 실행기.
* 그래프, 라이프사이클 노드, 진단 등을 위한 특수 구현

자세한 내용은 하위 페이지(왼쪽 참조)를 확인하세요.

<br style="clear:both;" />

관심 있는 독자를 위해 알려드립니다. rcl과 rclc를 조합하여 사용하기로 결정한 근거는 2019년에 발표된 [결정 문서(PDF)](/download/client_library_decision_paper_2019.pdf)에 설명되어 있습니다.

---

## 출처: `_docs/concepts/client_library/lifecycle_and_system_modes/index.md`
<a id="source-docs-concepts-client-library-lifecycle-and-system-modes-index-md"></a>

목차
- [소개 및 목표](#introduction-and-goal)
- [요구사항](#requirements)
- [배경: ROS 2 생명주기](#background-ros-2-lifecycle)
- [주요 기능](#main-features)
  - [기본 라이프사이클](#basic-lifecycle)
  - [확장된 라이프사이클](#extended-lifecycle)
  - [시스템 계층 구조 및 모드](#system-hierarchy-and-modes)
  - [모드 추론](#mode-inference)
  - [모드 관리자](#mode-manager)
  - [오류 처리 및 규칙](#error-handling-and-rules)
- [감사의 글](#acknowledgments)

## 소개 및 목표

현대 로봇 소프트웨어 아키텍처는 흔히 계층형 접근 방식을 따릅니다. SLAM, 비전 기반 객체 인식, 동작 계획 등을 위한 핵심 알고리즘이 포함된 계층을 일반적으로 *스킬 계층* 또는 *기능 계층*이라고 합니다. 복잡한 작업을 수행하기 위해 이러한 스킬들은 *실행 계층 및 계획 계층*이라고 하는 하나 이상의 상위 계층에 의해 조율됩니다. 다른 일반적인 명칭으로는 *작업 및 임무 계층* 또는 *심사 계층*이 있습니다. 이하에서는 후자의 용어를 사용합니다.

우리는 심의 단계에서 다뤄야 할 서로 다르지만 밀접하게 연관된 세 가지 측면을 관찰했습니다.

1. **작업 처리**: 실제 작업의 진행 과정, 즉 *간단하고* *오류 없는* 흐름을 조율합니다.
2. **비상 상황 처리**: 작업별 비상 상황 처리(예: 예상되는 재시도 및 실패, 장애물, 배터리 부족).
3. **시스템 오류 처리**: 예외 처리(예: 센서/액추에이터 오류).

스킬을 제어하는 ​​데 사용되는 메커니즘은 서비스 및 액션 호출, 재매개변수화, 값 설정, 구성 요소 활성화/비활성화 등입니다. 실행 중인 스킬 구성 요소에 대한 *기능 지향 호출*(값 설정, 액션 쿼리 등)과 개별 또는 여러 구성 요소에 대한 *시스템 지향 호출*(구성 요소 모드 전환, 재시작, 종료 등)을 구분합니다.

![기술 및 숙고 계층 간 상호 작용](_docs/concepts/client_library/lifecycle_and_system_modes/interactions_between_skill_and_deliberation_layer.png)

마찬가지로, 우리는 스킬 계층에서 발생하는 장기 서비스 호출에 대한 피드백, 환경의 관련 이벤트에 대한 메시지 등과 같은 *기능 지향적 알림*과 구성 요소 오류, 하드웨어 오류 등에 대한 *시스템 지향적 알림*을 구분합니다.

우리는 작업 처리, 비상 상황 처리 및 시스템 오류 처리가 서로 얽혀 있는 것이 일반적으로 심의 계층의 제어 흐름을 매우 복잡하게 만든다는 것을 관찰했습니다. 그러나 시스템 지향적인 호출 및 알림에 적절한 추상화를 도입하면 이러한 복잡성을 줄일 수 있다는 가설을 세웠습니다.

따라서 본 작업의 **목표**는 (1.) 시스템 런타임 구성 및 (2.) 시스템 오류 및 비상 진단을 위한 적절한 추상화 및 프레임워크 기능을 제공하여 애플리케이션 개발자가 작업, 비상 및 오류 처리를 설계하고 구현하는 데 드는 노력을 줄이는 것입니다.

이 목표는 다음 예시 아키텍처에서 확인할 수 있으며, 해당 아키텍처는 모델 파일을 기반으로 설명 및 관리됩니다.

![고수준 아키텍처](_docs/concepts/client_library/lifecycle_and_system_modes/mode-management.png)

이 접근 방식의 주요 특징은 다음과 같습니다(자세한 내용은 아래에서 설명).

1. _확장된 라이프사이클_: 컴포넌트의 런타임 상태, 즉 ROS 2 라이프사이클 노드를 지정하기 위한 확장 가능한 개념입니다.
2. _시스템 계층 구조 및 모드_: ROS 시스템을 시스템 계층 구조 및 _시스템 모드_, 즉 다양한 (하위) 시스템 구성 측면에서 명시하기 위한 모델링 접근 방식.
3. _모드 관리자_: 시스템 런타임 구성을 관리하고 변경하는 모듈입니다.
4. _모드 추론_: 관찰 가능한 시스템 정보, 즉 구성 요소의 상태, 모드 및 매개변수로부터 전체 시스템 상태와 모드를 도출하는 모듈입니다.
5. 오류 처리: 오류 처리 및 복구 메커니즘을 명시하기 위한 간소화된 개념입니다.

## 요구사항

요구사항 목록은 micro-ROS 시스템 모드 저장소의 doc 폴더에 보관되어 있습니다.
https://github.com/micro-ROS/system_modes/blob/master/system_modes/doc/requirements.md

## 배경: ROS 2 라이프사이클

저희 접근 방식은 ROS 2 라이프사이클을 기반으로 합니다. ROS 2 라이프사이클의 주요 목표는 ROS 시스템의 상태를 더욱 세밀하게 제어할 수 있도록 하는 것입니다. 이를 통해 런타임 중에 시스템 구성 요소의 일관된 초기화, 재시작 및/또는 교체가 가능합니다. 또한 관리되는 ROS 2 노드에 대한 기본 라이프사이클과 해당 라이프사이클 노드를 관리하기 위한 도구 세트를 제공합니다.

해당 개념에 대한 설명은 다음에서 확인할 수 있습니다.
[http://design.ros2.org/articles/node_lifecycle.html](http://design.ros2.org/articles/node_lifecycle.md)
라이프사이클 노드의 구현은 다음에서 설명합니다.
[https://design.ros2.org/articles/node_lifecycle.html](https://design.ros2.org/articles/node_lifecycle.md).

## 주요 기능

### 기본 라이프사이클

ROS 2 라이프사이클은 C 프로그래밍 언어 클라이언트 라이브러리 *[rclc](https://github.com/ros2/rclc)*의 일부로 micro-ROS에 구현되었습니다. 소스 코드 및 문서는 [rclc_lifecycle](https://github.com/ros2/rclc/tree/master/rclc_lifecycle)을 참조하십시오.

rclc_lifecycle 패키지는 ROS 2 노드 라이프사이클 상태 머신을 C 프로그래밍 언어로 구현한 ROS 2 클라이언트 라이브러리(rcl) 노드와 함께 묶어주는 편리한 함수를 제공하는 ROS 2 패키지입니다. 이는 C++용 [rclcpp 라이프사이클 노드](https://github.com/ros2/rclcpp/blob/master/rclcpp_lifecycle/include/rclcpp_lifecycle/lifecycle_node.hpp)와 유사합니다.

rclc 라이프사이클 노드를 사용하는 방법에 대한 예시는 [rclc_examples](https://github.com/ros2/rclc/blob/master/rclc_examples/) 패키지의 `lifecycle_node.c` 파일에 나와 있습니다.

### 확장된 라이프사이클

micro-ROS에서는 표준 ROS 2 파라미터 메커니즘을 기반으로 *활성* 상태를 특수화하는 모드, 즉 하위 상태를 지정할 수 있도록 ROS 2 라이프사이클을 확장했습니다 . 이 개념은 ROS 2 및 micro-ROS용 rclc_lifecycle 및 rclcpp_lifecycle을 기반으로 구현되었습니다.

문서와 코드는 다음에서 확인할 수 있습니다.
[github.com:system_modes/README.md#lifecycle](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#lifecycle)

### 시스템 계층 구조 및 모드

본 논문에서는 노드로부터 재귀적으로 시스템의 계층적 구성을 명시하고, 노드와 유사하게 확장된 수명주기를 갖는 시스템 및 (하위) 시스템의 상태와 모드를 명시하기 위한 모델링 개념을 제시합니다. 이 시스템 모드 및 계층(SMH) 모델은 또한 시스템 계층 구조를 따라 노드까지의 상태와 모드에 대한 애플리케이션별 매핑을 포함합니다.

이 모델에 대한 설명은 다음에서 확인할 수 있습니다.
[github.com:system_modes/README.md#system-modes](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#system-modes)
간단한 예시는 다음에서 확인할 수 있습니다.
[github.com:system_modes_examples/README.md#example-mode-file](https://github.com/micro-ROS/system_modes/blob/master/system_modes_examples/README.md#example-mode-file)

### 모드 추론

모드 추론은 ROS 2 라이프사이클 노드와 같은 구성 요소의 라이프사이클 상태, 모드 및 파라미터 설정을 기반으로 전체 시스템 상태(및 모드)를 추론합니다. 이 기능은 SMH 모델을 분석하고 라이프사이클/모드 변경 요청, 라이프사이클/모드 변경 및 파라미터 이벤트를 구독합니다.

생명주기 변화 이벤트를 기반으로 모든 노드의 실제 생명주기 상태를 파악할 수 있습니다. 매개변수 변화 이벤트를 기반으로 모든 노드의 실제 매개변수 값을 파악할 수 있으며, 이를 통해 SMH 모델을 기반으로 모든 노드의 모드를 추론할 수 있습니다.
SMH 모델과 모든 노드의 추론된 상태 및 모드를 기반으로, 모든 (하위) 시스템의 상태 및 모드는 시스템 계층 구조를 따라 하향식으로 추론될 수 있습니다.
이는 최근 요청된 상태 및 모드와 비교하여 편차를 감지할 수 있습니다.

문서와 코드는 다음에서 확인할 수 있습니다.
[github.com:system_modes/README.md#mode-inference](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#mode-inference)
모드 추론은 콘솔 기반 디버깅 도구인 모드 모니터에서 가장 잘 확인할 수 있습니다. 자세한 내용은 다음을 참조하십시오.
[github.com:system_modes/README.md#mode-monitor](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#mode-monitor)

### 모드 관리자

_모드 추론_ 메커니즘을 기반으로 구축된 모드 관리자는 SMH 모델의 사양에 따라 시스템 상태 및 모드를 _관리하고 조정_하기 위한 추가 서비스 및 토픽을 제공합니다.

문서와 코드는 다음에서 확인할 수 있습니다.
[github.com:system_modes/README.md#mode-manager](https://github.com/micro-ROS/system_modes/blob/master/system_modes/README.md#mode-manager)
간단한 예시는 다음에서 확인할 수 있습니다.
[github.com:system_modes_examples/README.md#setup](https://github.com/micro-ROS/system_modes/blob/master/system_modes_examples/README.md#setup)

### 오류 처리 및 규칙

시스템 또는 시스템의 일부 구성 요소의 _실제_ 상태/모드가 _목표_ 상태/모드에서 벗어나는 경우, 시스템을 유효한 _목표_ 상태/모드(예: 성능 저하 모드)로 되돌리기 위한 규칙을 정의합니다. 규칙은 하향식 방식으로, 즉 하위 시스템, 시스템 전체 순으로 수정 노드부터 시작하여 상위 노드를 수정하는 방식으로 작동합니다. 규칙은 기본적으로 다음과 같이 정의됩니다.

```가짜
만약에:
 system.target == {대상 상태/모드} && system.actual != {대상 상태/모드} && part.actual == {특정 상태/모드}
그 다음에:
 system.target := {특정 상태/모드}
```

실제 상태/모드와 목표 상태/모드가 일치하지 않지만, 이러한 상황에 대한 정확한 규칙이 없는 경우, 하향식 규칙은 시스템/부품을 목표 상태/모드로 되돌리려고 시도합니다.

*참고:* 이 기능은 제시된 구문에 따라 간단하고 명확하게 정의된 규칙에 적합합니다. 보다 복잡한 오케스트레이션을 위해서는 시스템 모드와 온톨로지 추론(*메타컨트롤*)의 통합이 [MROS 프로젝트](https://robmosys.eu/mros/)에서 검증되었으며, 예를 들어 [모바일 로봇의 내비게이션 서브시스템](https://github.com/MROS-RobMoSys-ITP/Pilot-URJC)에서 성공적으로 구현되었습니다.

## 감사의 글

본 활동은 유럽 연합의 Horizon 2020 연구 및 혁신 프로그램에 따라 유럽 연구 위원회(ERC)로부터 자금 지원을 받았습니다(보조금 계약 번호 780785).

---

## 출처: `_docs/concepts/fiware_interoperability/index.md`
<a id="source-docs-concepts-fiware-interoperability-index-md"></a>

## 동기 부여
micro-ROS 프로젝트의 목표 중 핵심 과제 중 하나는 널리 사용되는 타사 플랫폼과의 상호 운용성을 제공하는 것이었습니다.
선정된 구성 요소 중 하나는 FIWARE Context Broker로, 다양한 분야의 스마트 솔루션 개발을 촉진하기 위해 여러 EU 지원 사업에서 채택한 컨텍스트 데이터 관리 표준입니다.

이 섹션에서는 micro-ROS와 이 플랫폼 간의 상호 운용성을 달성하는 방법을 설명하며, 특히 후자를 ROS 2와 통합하는 과정을 거칩니다.
이러한 상호 운용성 덕분에 FIWARE의 컨텍스트 브로커는 micro-ROS가 FIWARE 생태계에 통합된 다른 모든 시스템과 컨텍스트 정보를 공유하는 데 가장 적합한 플랫폼이 되었습니다.

상호 운용성: 다양한 해결책의 장단점

이 하위 섹션에서는 micro-ROS와 FIWARE Context Broker 간의 상호 운용성을 위한 모든 설계 대안을 설명합니다.
앞으로 micro-ROS와 FIWARE 간의 상호 통신을 위해 개발된 솔루션은 **FIROS2 통합 ​​서비스**라고 부릅니다.

FIROS2는 ROS 2 메시지를 FIWARE NGSIv2 메시지로 변환하고 그 반대로 변환하기 위한 변환 라이브러리가 필요합니다.
메시지 하나당 하나의 변환 라이브러리가 필요합니다.

![이미지](http://www.plantuml.com/plantuml/svg/ZP712i8m38RlUOempuKvfrv49gYmap05BmCfhfs5hOMslhzjLuQYu1e8_E5Fyf4Mnb9jdtq77UCMhK8jseV5HcXsjq99uA9Zc A1xjQnEvmnxPWnjMIrzBK5giDpVvlXXF9RNNNNuRSqGf6f6guymr-sERHTDfU5AzzGJ39Rt2 GkShJddQJeHBfyEj_o6YtQ75pRyWrkDS03XC8Hi1sW8ESeio1mtX0nT47AK3gDWil7_yW80)

이러한 변환 라이브러리를 구현할 때 ROS 2 메시지를 직렬화/역직렬화할 수 있어야 합니다.
또한, NGSIv2 직렬화/역직렬화 메커니즘이 사용될 것입니다.

FIROS2 패키지는 표준 NGSIv2 직렬화/역직렬화 메커니즘을 제공하지만, ROS 2의 직렬화/역직렬화는 메시지 유형에 대한 의존성 때문에 더 복잡합니다.
따라서 ROS 2 유형에 대한 변환 라이브러리를 자동으로 생성하는 간단한 사용자 친화적 솔루션을 제공하는 FIROS2 통합 ​​서비스를 구현해야 했습니다.

이를 달성하기 위해 두 가지 다른 접근 방식을 취할 수 있습니다.
* FIWARE 메시지를 micro-ROS(즉, ROS 2) 메시지 유형으로 변환하고, 그 반대로도 변환하는 임시 브리징 통신 도구를 구현합니다.
* 공통 타입 언어 표현을 사용하는 통합 플랫폼에 의존하고, 제네릭 타입과 각 미들웨어의 특정 타입 간의 변환 라이브러리를 정의합니다.

첫 번째 접근 방식은 더 가벼운 도구를 만들 수 있지만, 유지 관리가 더 어렵고 ROS2 또는 micro-ROS 이외의 다른 미들웨어와 통신할 수 없다는 등의 몇 가지 단점이 있습니다.
반면에 [SOSS](https://github.com/eProsima/Integration-Service)와 같은 통합 서비스 플랫폼을 사용하면 시스템 핸들 구현이 가능한 경우 광범위하고 (점점 더 늘어나는) 미들웨어와 자동으로 통신할 수 있습니다.

## SOSS: 시스템 오브 시스템 합성기

**SOSS**는 서로 다른 언어를 사용하는 소프트웨어 플랫폼 간의 통신을 위한 공통 인터페이스를 제공하는 과제를 다룹니다.
이는 추상 인터페이스 집합을 정의하고 플러그인 기반 프레임워크를 구성하는 데 필요한 몇 가지 유틸리티 클래스를 제공하는 **핵심** 라이브러리로 구성됩니다.

이 플러그형 인터페이스를 통해 사용자는 DDS, ROS2, FIWARE 또는 ROS와 같은 특정 미들웨어에 대해 지원되는 플러그인이나 시스템 핸들을 활용하여 원하는 통합을 구현할 수 있습니다.

SOSS는 공통 언어를 사용하여 서로 다른 통신 미들웨어에서 실행되는 여러 애플리케이션의 통합을 중앙 집중화하고 중재하는 중간 메시지 전달 도구 역할을 할 수 있습니다.
SOSS 인스턴스는 **YAML** 파일을 통해 구성 및 실행되며, 이 파일을 통해 사용자는 두 개 이상의 애플리케이션이 정보를 교환할 수 있는 다양한 토픽과 서비스 간의 매핑을 제공할 수 있습니다.

사용자는 새로운 미들웨어에 대한 자체 시스템 핸들을 개발하여 지원되는 다른 모든 미들웨어와의 통신 기능을 자동으로 부여할 수도 있습니다.

일반적으로 타입은 SOSS에서 교환되는 정보의 공유 표현을 생성하기 위해 사용되는 공통 언어 표현을 사용하여 정의됩니다. 이를 통해 필요에 따라 해당 정보를 처리, 변환 및 모든 미들웨어의 타입 구현에 다시 매핑할 수 있습니다.
이 공통 표현은 사용자 측면에서 IDL 정의를 사용하여 제공되며, 이러한 정의는 런타임에 구문 분석되어 [eProsima의 XTypes-DDS](https://github.com/eProsima/xtypes) 구현을 사용하여 동적 유형 표현으로 변환됩니다.

<img width="600" src="_docs/concepts/fiware_interoperability/imgs/soss.png">

## SOSS-FIWARE 시스템 핸들

[FIWARE 시스템 핸들](https://github.com/eProsima/SOSS-FIWARE/tree/feature/xtypes-support)을 사용하면 FIWARE의 컨텍스트 브로커에서 SOSS 환경으로 정보를 가져오거나 FIWARE 컨텍스트 브로커에서 SOSS 환경으로 정보를 가져올 수 있습니다.
이 시스템 핸들은 다른 SOSS 시스템 핸들과 동일한 방식으로 구성 및 실행됩니다.

시스템 핸들의 구성에 포함된 표준 정보(예: 시스템 이름 및 유형, 이 특정 시스템 핸들의 경우 `fiware`) 외에도,
FIWARE 시스템 핸들의 경우 사용자는 호스트의 IP 주소와 포트 번호, 이 두 개의 추가 YAML 키-값 쌍을 지정해야 합니다. 이 IP 주소와 포트 번호는 해당 시스템 핸들이 FIWARE의 Orion Context Broker 인스턴스에 연결을 시도하는 데 사용됩니다.

구현과 관련하여 좀 더 구체적인 내용을 말씀드리자면, FIWARE는 엔티티 이름에 특정 문자를 허용하지 않습니다.
이러한 이유로 구성 파일의 토픽 섹션에 정의된 유형 이름에 슬래시(/)가 포함되어 있으면 FIWARE 시스템 핸들은 해당 문자를 두 개의 밑줄로 매핑합니다.
ROS2에 연결할 때 알아두어야 할 중요한 점은 ROS2에서는 대부분의 타입 이름에 '/'가 포함되어 있다는 것입니다.
이 문제를 해결하기 위해 SOSS의 리매핑 기능을 활용하는 것이 유용합니다.

물론, micro-ROS 애플리케이션이 마이크로컨트롤러와 ROS 2 데이터 공간 사이의 브리지 역할을 한다는 점을 고려할 때(micro-ROS 에이전트를 사용), FIROS2는 SOSS 패키지에 기본적으로 포함된 [ROS 2 시스템 핸들](https://github.com/eProsima/Integration-Service)을 활용하여 FIWARE의 컨텍스트 브로커와 ROS 2 간의 통신도 처리해야 합니다.

이는 아래 설명된 사용 사례에 정확히 반영된 상황입니다.

## FIROS2 사용 사례: FIWARE와 ROS 2 연결

### 설치

* colcon 워크스페이스를 생성합니다.
  ```bash
    $ mkdir -p soss_ws/src
    $ cd soss_ws
  ```

* SOSS 프로젝트를 소스 하위 폴더에 복제합니다.
  ```bash
    $ git clone https://github.com/eProsima/Integration-Service.git src/soss --branch feature/xtypes-dds
  ```

* SOSS-FIWARE 프로젝트를 source 하위 폴더에 복제합니다.
  ```bash
    $ git clone https://github.com/eProsima/SOSS-FIWARE.git src/soss-fiware --branch feature/xtypes-support
  ```

* 이제 작업 공간 레이아웃은 다음과 같아야 합니다.
  ```bash
    소스_ws
      |
      |_ 소스
          |
          |_ 소스
          | |
          | |_ (다른 soss 프로젝트 하위 폴더)
          | |_ 패키지
          | |
          | |_ (다른 soss 시스템 처리 하위 폴더)
          | |_ soss-ros2 (ROS2 시스템 핸들)
          |
          |_ 소스-파이웨어
                 |
                 |_ fiware (soss-fiware 콜콘 패키지)
                 |_ fiware-test (soss-fiware-test 콜콘 패키지)
  ```

* 작업 공간 폴더에서 colcon을 실행합니다.
  ```bash
    $ colcon build --packages-up-to soss-ros2 soss-fiware
  ```

* 결과 환경의 출처:
  ```bash
    $ source install/local_setup.bash
  ```

### 구성

SOSS는 YAML 파일로 구성해야 하며, 이 파일은 사용자가 원하는 두 개 이상의 시스템 간의 연결을 설정하는 데 필요한 모든 정보를 프로그램에 알려줍니다.
예를 들어, 사용자가 FIWARE와 ROS2 간에 간단한 문자열 메시지를 교환하려는 경우 SOSS의 구성 파일은 다음과 같아야 합니다.

  ```yaml
    시스템:
        ros2: { type: ros2 }
        fiware: { type: fiware, host: CONTEXT_BROKER_IP, port: 1026}

    경로:
        fiware_to_ros2: { from: fiware, to: ros2 }
        ros2_to_fiware: { from: ros2, to: fiware }

    주제:
        hello_fiware: { type: "std_msgs/String", route: ros2_to_fiware }
        hello_ros2: { type: "std_msgs/String", route: fiware_to_ros2 }
  ```

사용자는 프로젝트의 *CMakeLists.txt* 파일에서 SOSS 인스턴스에 필요한 ROS 2 패키지를 지정해야 합니다.
제공된 `soss-rosidl-mix` 매크로를 사용하여 ROS 2 *msg/srv* 파일에서 생성되는 적절한 IDL 타입 정의 및 타입 지원 파일을 생성합니다.
  ```cmake
    소스_로시들_믹스(
      패키지 geometry_msgs nav_msgs test_msgs ...
      미들웨어 ros2
    )
  ```

*참고:* 패키지 목록이 수정된 경우, colcon 워크스페이스 전체를 다시 빌드하는 것이 좋습니다. 그렇지 않으면 앞서 언급한 매크로에 포함된 새로운 ROS 2 유형 패키지에 대한 `.mix` 파일이 생성되지 않을 수 있습니다.

마지막으로 colcon 워크스페이스를 소싱한 후 다음 명령으로 FIROS2를 실행할 수 있습니다.
  ```bash
    cd <yaml_config_file 경로>
    soss <yaml_config_file_name>.yaml
  ```

---

## 출처: `_docs/concepts/middleware/IoT/index.md`
<a id="source-docs-concepts-middleware-iot-index-md"></a>

요즘은 거의 모든 사람이 IoT가 무엇인지 알거나 들어본 적이 있습니다.
비공식적인 정의로는 "모든 것이 서로 연결된 것"이라고 할 수 있습니다.
하지만 좀 더 정확히 말하자면, IoT(사물 인터넷)는 전통적으로 특정 기기에만 적용되던 연결성을 농장이나 들판에 설치된 소형 센서부터 병원의 생체 모니터링 장치에 이르기까지 우리가 상상할 수 있는 거의 모든 종류의 장비로 확장하는 것을 의미합니다.
2020년에는 이와 같은 장치가 500억 개에 달할 것으로 추산됩니다([@evans2011cisco](https://www.cisco.com/c/dam/en_us/about/ac79/_docs/innov/IoT_IBSG_0411FINAL.pdf)).
이 500억 개의 기기가 공통적으로 필요로 하는 한 가지는 바로 통신입니다. 바로 이 부분에서 미들웨어가 거대한 기술적 과제 해결에 중요한 역할을 합니다.
미들웨어는 네트워크 배포를 용이하게 하여 개발자가 애플리케이션 구현에 집중할 수 있도록 하는 역할을 합니다.

이 글에서는 IoT를 염두에 두고 개발된 두 가지 표준인 MQTT와 DDS-XRCE를 소개합니다.

## MQTT

MQTT(Message Queuing Telemetry Transport)는 IoT 솔루션에서 가장 널리 사용되는 프로토콜 중 하나입니다.
TCP 전송 프로토콜을 통해 사용될 수 있도록 설계된 경량 메시지 프로토콜로, 데이터 교환을 위한 표준적이고 간단한 발행/구독 인터페이스를 제공합니다.

MQTT의 통신 메커니즘은 클라이언트-서버 아키텍처를 기반으로 합니다.
이는 클라이언트(MQTT 클라이언트)가 발행-구독 메시징 패턴을 사용하여 데이터 교환을 조정하는 서버(MQTT 브로커)에 연결된다는 것을 의미합니다.
즉, 클라이언트는 브로커의 특정 토픽과 관련된 메시지를 게시하고, 브로커는 해당 토픽을 구독하는 클라이언트에게 이러한 메시지를 전달합니다.

MQTT에서는 브로커, 클라이언트, 토픽, 메시지, 발행, 구독과 같은 몇 가지 핵심 개념을 이야기할 수 있습니다.
이러한 개념들은 각각 고유한 역할과 의미를 지니고 있습니다.

브로커는 시스템의 핵심 역할을 합니다.
    주제와 관련된 메시지를 다룹니다.
* 클라이언트는 브로커로부터 구독 데이터를 게시하고 수신하는 역할을 담당하는 주체입니다.
* 토픽은 정보 채널입니다.
* 특정 주제에 대한 정보를 메시지로 보내세요.
* '게시'는 정의된 토픽에 대한 메시지를 브로커로 전송하는 동작입니다.
* 구독은 특정 주제에 대한 모든 메시지를 수신하는 데 관심을 나타내는 행위입니다.
그 일은 중개인이 처리합니다.

![](_docs/concepts/middleware/IoT/mqtt.png){:.img-responsive and style="max-width: 50%; margin-left: auto; margin-right: auto;"}

이 모든 것은 TCP 프로토콜을 통해 이루어지며, 이를 통해 클라이언트와 브로커 간의 연결이 WAN 및 인터넷을 통해 가능합니다.
이러한 연결은 정적으로 이루어지므로, 클라이언트는 첫 연결이 이루어지기 전에 브로커 주소를 알고 있어야 합니다.
이러한 통신은 전달 동작을 지정하는 세 가지 서로 다른 QoS를 따를 수 있습니다.

| 품질 서비스 | 배송 보장 | 중복 방지 |
|:-:|:-:|:-:|
| QoS0 | 아니요 | 아니요 |
| QoS1 | 예 | 아니오 |
| QoS2 | 예 | 예 |

앞서 언급했듯이 이러한 종류의 미들웨어에는 토픽이라는 개념이 있습니다.
토픽의 유형은 이름과 마찬가지로 애플리케이션에서 설정합니다.
논문은 주제명과 사용자가 정의한 형식의 데이터 세트를 사용하여 발표됩니다.
마찬가지로 구독은 토픽 이름을 기준으로 이루어지며, 데이터 해석은 클라이언트의 책임입니다.
MQTT 표준은 이 토픽-유형 튜플이 어떻게 관련되어 있는지 명시하지 않으므로 토픽을 이해하는 책임은 사용자에게 있습니다.

이러한 아키텍처와 통신 패턴은 장치 간 데이터 교환(M2M 프로토콜)을 기본적으로 허용하여 우수한 IoT 미들웨어를 구성합니다.

## DDS-XRCE

극도로 자원이 제한된 환경을 위한 DDS(DDS-XRCE)는 OMG(Object Management Group)에서 채택한 와이어 프로토콜입니다.
이들의 목표는 자원이 부족한 기기에서도 DDS(데이터 배포 서비스) 데이터 공간에 접근할 수 있도록 하는 것입니다.
MQTT의 경우와 마찬가지로 DDS-XRCE는 클라이언트(XRCE 클라이언트)가 서버(XRCE 에이전트)에 연결되는 클라이언트-서버 아키텍처를 따릅니다.
MQTT와 달리 XRCE 에이전트는 토픽의 발행/구독 관리를 담당하지 않고, DDS 글로벌 데이터 공간에서 XRCE 클라이언트를 대신하여 작동합니다.
즉, DDS-XRCE 프로토콜을 사용하면 XRCE 클라이언트가 기존 DDS 네트워크에서 일급 구성원처럼 작동할 수 있습니다.

![](_docs/concepts/middleware/Micro_XRCE-DDS/uxrce_scope.png)

이 프로토콜은 XRCE 클라이언트가 XRCE 에이전트와 상호 작용하는 방식을 명시합니다.
기본적으로 둘 사이에는 두 가지 상호 작용 방식이 있습니다.

* XRCE 클라이언트는 에이전트에서 프록시 엔티티를 처리할 수 있습니다.
    그러한 프록시 개체들이 DDS 네트워크에서 작동하는 주체들입니다.
    이를 통해 클라이언트는 상태가 에이전트에 저장되므로 상태 비저장 시스템으로 작동할 수 있습니다.
    이는 무엇보다도 수면 주기를 가능하게 하고, 리소스가 제한된 장치가 DDS와 통신할 수 있도록 해줍니다.
* XRCE 클라이언트는 일반 DDS 참여자와 마찬가지로 모든 DDS 토픽에 게시/구독할 수 있습니다.
    이를 통해 자원이 제한된 장치와 DDS 네트워크 간의 분리가 완화되어 이러한 장치들이 DDS 세계에서 진정한 주체로 참여할 수 있게 됩니다.

간단히 말해, DDS-XRCE는 XRCE 클라이언트가 기존 DDS 네트워크와 통신할 수 있도록 간단한 발행/구독 메시징 패턴을 제공합니다.

기존 DDS 네트워크와 마찬가지로 몇 가지 계승된 개념이 있습니다.

* 주제.
    정보 채널
* 메시지.
    정보 자료.
* 게시.
    메시지를 노출하는 작업입니다.
* 구독하다.
    선택한 메시지를 수신할 수 있도록 하는 절차.

또한, 추가된 항목은 다음과 같습니다.

* XRCE 클라이언트.
    이들은 리소스가 제한된 장치에서 작동하는 경량 액터로, 간단한 발행/구독 인터페이스를 제공합니다.
* XRCE 에이전트.
    위에서 언급한 XRCE 클라이언트에 필요한 DDS 접근 권한을 제공하는 프로토콜의 핵심 부분입니다.

DDS-XRCE 와이어 프로토콜은 최소한 TCP 및 UDP 전송 프로토콜을 사용하도록 명시되어 있지만, 다른 프로토콜로 확장할 여지가 있습니다.
현재 구현된 방식은 직렬 링크를 지원하며, 향후 Zigbee, 6LoWPAN 등 다른 링크 방식으로 확장될 수 있습니다.
DDS-XRCE는 두 가지 서로 다른 전송 QoS 설정을 허용합니다.

* 믿을 수 있는.
*최선을 다하겠습니다.

DDS 제품군 표준의 일부로 OMG의 IDL 표준 사용도 포함되었습니다.
이를 통해 사용자는 사용할 토픽 유형을 정의하고 표준 직렬화 형식을 설정할 수 있습니다.
이렇게 하면 상호 운용성이 보장되고 사용자 지정 직렬화 형식 및 유형 일치 메커니즘을 정의하는 문제에 대한 애플리케이션 계층을 활용할 수 있습니다.

이 프로토콜은 DDS(분산 시스템, 구성 가능한 QoS, 상호 운용성)의 모든 이점을 제공함으로써 IoT 장치에 새로운 가능성을 열어줍니다.

## MQTT vs DDS-XRCE

이쯤 되면 MQTT와 DDS-XRCE의 차이점이 무엇인지 궁금하실 겁니다.
언뜻 보기에 유사한 아키텍처와 통신 패턴과 같은 많은 기본 요소를 공유하는 것처럼 보이지만, 다음 표에 나타난 것처럼 몇 가지 중요한 사항에서 차이가 있습니다.

| | DDS-XRCE | MQTT |
|:--------------------------|:------------------------:|:----------------------:|
| **아키텍처 패턴** | 클라이언트-서버 | 클라이언트-서버 |
| **메시징 패턴** | 발행-구독 | 발행-구독 |
| **전송 프로토콜** | UDP/TCP/직렬/사용자 지정 | TCP |
| **보안** | DTLS/TLS (비표준) | TLS (비표준) |
| **유형** | 표준 IDL | 불투명, 사용자 선택 |
| **QoS** | 신뢰성 및 최선 노력 | 3 메시지 전달 |
| **세션 중심** | 예 | 예 |
| **최소 오버헤드** | 12 B** | 5 B** |
| **최대 오버헤드** | 16 B*** | 2^16 B* |
| **최대 페이로드 크기** | 64KB | 256MB |
| **토폴로지** | 1에서 0, 1에서 1, 1에서 n | 1에서 0, 1에서 1, 1에서 n |
| **검색 지원** | 예 | 아니오 |

_ \* 주제 이름에 따라 크기가 달라집니다._

_ \*** 토픽 이름이 8개의 ASCII 문자(8바이트)로 구성된 경우 MQTT 오버헤드는 DDS-XRCE 오버헤드와 동일합니다.
그 시점부터 MQTT 오버헤드는 이름 크기에 비례하여 증가합니다.
하지만 DDS-XRCE는 정적일 것입니다.

_ \***\** DDS-XRCE 오버헤드의 최대 및 최소값은 메시지에 클라이언트 ID를 사용하는지 여부에 따라 달라집니다._

위의 표들은 두 프로토콜을 비교합니다.
이러한 프로토콜 차이점 외에도, DDS-XRCE의 핵심 개념 중 하나는 소형 장치를 분산 네트워크에 통합하는 것이라는 점을 지적할 수 있습니다.
이러한 특징 덕분에 이 프로토콜은 매우 다양한 사용 사례를 제공할 뿐만 아니라, MQTT 대안보다 훨씬 더 역동적인 방식으로 상당한 규모로 확장될 수 있도록 준비되어 있습니다.

---

## 출처: `_docs/concepts/middleware/memo_prof/index.md`
<a id="source-docs-concepts-middleware-memo-prof-index-md"></a>

## 추상적인

이 섹션에서는 Micro XRCE-DDS 클라이언트 및 에이전트 라이브러리의 메모리 사용량을 분석합니다. 두 경우 모두, 알려진 크기의 토픽에 대한 특정 수의 퍼블리셔 및/또는 서브스크라이버를 사용하는 애플리케이션을 고려합니다.

클라이언트 측에서는 실시간 운영 체제(RTOS)인 FreeRTOS(https://www.freertos.org/)와 Olimex STM32-E407 보드에서 실행되는 앱에 대해 측정을 수행했으며, 이 앱은 UART를 통해 Linux 머신에서 실행되는 Micro XRCE-DDS 에이전트에 연결되었습니다.

에이전트의 경우, 동일한 호스트 머신에서 실행되는 XRCE-DDS 클라이언트 애플리케이션과 통신하는 Linux 머신에서 실행되는 경량 에이전트를 대상으로 측정을 수행했습니다.

결과에 따르면 클라이언트의 총 메모리 사용량은 이 라이브러리가 rosserial 프로토콜에서 대상으로 하는 저사양 마이크로컨트롤러에 적합함을 보여줍니다.
반면, 에이전트의 경량 버전은 성능이 더 뛰어난 시스템에서만 컴파일되도록 설계되었습니다.

# 목차

* [FreeRTOS에서 실행되는 Micro XRCE-DDS 클라이언트의 메모리 프로파일링](#memory-profiling-of-the-micro-xrce-dds-client-on-freertos)
    * [메모리 및 구성 가능성](#memory-and-configurability)
    * [방법론](#방법론)
    * [결과 및 토론](#results-and-discussion)
* [리눅스에서 Micro XRCE-DDS 에이전트의 메모리 프로파일링](#memory-profiling-of-the-micro-xrce-dds-agent-on-linux)
    * [에이전트에서 사용 가능한 미들웨어 구현](#available-middleware-implementations-for-the-agent)
    * [방법론 및 결과](#방법론 및 결과)

## FreeRTOS에서 실행되는 Micro XRCE-DDS 클라이언트의 메모리 프로파일링

[Micro XRCE-DDS](https://micro-xrce-dds.docs.eprosima.com/en/latest/)의 대상 애플리케이션은 메모리 자원이 매우 제한적인 저사양 마이크로컨트롤러 유닛(MCU)이므로, 사용자가 애플리케이션 개발에 적합한 플랫폼을 선택할 수 있도록 XRCE-DDS 클라이언트의 메모리 사용량을 매우 정밀하게 평가하는 것이 중요합니다.

이 섹션에서는 FreeRTOS(실시간 운영 체제)와 Olimex STM32-E407 보드에서 실행되는 두 가지 간단한 애플리케이션(하나는 토픽을 발행하고 다른 하나는 알려진 크기의 토픽을 구독하는 애플리케이션)에 대한 Micro XRCE-DDS 클라이언트 라이브러리의 메모리 사용량을 보고합니다. 클라이언트가 실행되는 보드는 115200bps의 속도로 UART(무선 아트레이트)를 통해 Linux 머신에서 실행되는 Micro XRCE-DDS 에이전트에 연결됩니다.

이러한 선택은 FreeRTOS가 프로그래머가 알고 있는 전체 할당 메모리와 프로그램 실행 중에 사용되지 않고 남은 최소 스택 메모리 간의 차이를 계산하여 특정 프로그램에서 사용되는 스택 메모리를 쉽게 계산할 수 있는 메모리 관리 기능을 제공하기 때문에 이루어졌습니다.

### 메모리 및 구성 가능성

XRCE-DDS 라이브러리가 대상으로 하는 시스템의 제한된 메모리 자원을 고려할 때, 클라이언트의 메모리 크기를 조작할 수 있는 기능은 매우 중요합니다. 이는 두 가지 수준에서 수행할 수 있습니다.

* 설정 시: 실행 파일 크기를 고정하기 위해 라이브러리를 컴파일할 때 여러 프로필을 활성화 또는 비활성화할 수 있습니다. 실제로,
클라이언트 라이브러리는 프로필 개념을 따르므로 구성 시 일부 기능을 선택, 추가 또는 제거하여 사용자가 크기를 사용자 지정할 수 있습니다. 아래에서 살펴보겠지만, 이러한 프로필의 일부로 예를 들어 안정적인 모드 또는 최선 노력 모드로 통신할지 선택할 수 있습니다. 자세한 내용은 [클라이언트 라이브러리 문서](https://micro-xrce-dds.docs.eprosima.com/en/latest/client.html#micro-xrce-dds-client-label)를 참조하십시오.
* 실행 시: 클라이언트 라이브러리는 동적 및 정적 메모리를 모두 사용하지 않으므로, 모든 메모리 사용량은 스택이 실행되는 동안 어떻게 증가하는지에 따라서만 달라집니다.
실행 과정에서 라이브러리 함수와 함께 스택을 제어하는 ​​매개변수는 스트림과 최대 전송 단위(MTU)입니다.
    * MTU는 전송 프로토콜에 따라 다르며 사용자가 구성할 수 있습니다. 선택된 값은 메시지 조각화 없이 송수신할 수 있는 최대 메시지 크기를 나타냅니다. 전송 프로토콜은 MTU 값을 사용하여 내부 버퍼를 생성하는데, 이 버퍼는 메시지가 교환될 때 기록되고 저장되는 메모리 블록입니다.
    * 스트림의 경우, 사용자는 최대 127개의 최선형 스트림과 128개의 안정형 스트림을 정의할 수 있지만, 대부분의 경우 최선형 또는 안정형 모드 중 하나의 스트림만 사용됩니다. 또한 안정형 스트림에는 기록이 저장되며, 그 크기는 애플리케이션의 특정 요구 사항에 맞게 조정할 수 있습니다. 이 경우 스트림 크기는 스트림에 할당된 총 메모리 용량(최대 메시지 크기에 기록 크기를 곱한 값)에 해당합니다. 최선형 스트림의 경우 기록이 저장되지 않으며, 스트림에 할당된 메모리 용량은 최대 메시지 크기와 같습니다.

### 방법론

이 섹션에서는 메모리 프로파일링에 사용된 방법론을 자세히 설명합니다.

마이크로 XRCE-DDS 클라이언트 애플리케이션은 다양한 수의 게시자 또는 구독자로 구성되며, 각각 자체 데이터 기록기 또는 데이터 판독기와 연결됩니다. 또한, 각 게시자 또는 구독자는 알려진 크기의 토픽과 두 개의 스트림(하나는 입력용, 다른 하나는 출력용)에 연결됩니다. 마지막으로, 안정적인 통신을 위해 최소 히스토리 크기는 2로 설정됩니다.

이러한 애플리케이션에서 사용하는 직렬 전송에 선택된 MTU는 512B로 고정되었으며, 이는 전송 버퍼의 크기를 결정합니다.

메모리 사용량을 완벽하게 파악하기 위해 다음과 같은 매개변수를 변경했습니다.

* 생성 모드: 이는 컴파일 시점에 구성할 수 있는 프로필 중 하나입니다. 클라이언트를 대신하여 에이전트에 엔티티를 생성하는 데 XML 모드와 참조 모드 모두를 검토했습니다. 첫 번째 경우, 엔티티는 클라이언트 앱에서 사용자가 정의한 XML 구성 파일에 따라 생성됩니다. 두 번째 경우, 엔티티는 에이전트가 미리 알고 있는 사전 구성된 참조 엔티티에 따라 에이전트에 직접 생성되며, 클라이언트는 단순히 해당 참조 엔티티를 참조하기만 하면 됩니다.
* 스트림 유형: 클라이언트와 에이전트 간의 최선형(best-effort) 통신 모드와 신뢰성(reliable) 통신 모드. 최선형 스트림은 전송 계층에 신뢰성 책임을 맡기고 데이터를 송수신하며, 최선형 스트림에서 처리할 수 있는 메시지 크기는 사용되는 전송 계층에 정의된 최대 전송 단위(MTU)보다 작거나 같아야 합니다. 반면, 신뢰성 스트림은 전송 계층에 관계없이 데이터 손실 없이 통신을 수행하며, MTU보다 긴 메시지를 송수신하기 위해 메시지 분할을 허용합니다. 데이터 손실을 방지하기 위해 신뢰성 스트림은 전송 및 수신된 메시지 이력과 함께 전달 확인을 위한 추가 메시지를 사용합니다. 결과적으로 최선형 스트림은 신뢰성 스트림보다 더 적은 리소스를 소비합니다.
* 토픽 크기는 발행자(최선 노력 방식과 신뢰 방식 모두)와 신뢰 구독자의 경우 0~약 3KB, 구독자 최선 노력 방식의 경우 0~약 400B 범위입니다. 후자의 경우 최선 노력 통신 스트림에서는 단편화가 없으므로 최선 노력 구독자가 지원할 수 있는 최대 메시지 크기가 전송 버퍼 크기(MTU)와 같기 때문이며, 이 값을 512B로 고정했습니다. 반면, 단편화 덕분에 신뢰 구독자는 MTU 크기의 조각으로 분할된 임의 크기의 메시지를 수신할 수 있습니다.
* 게시자/구독자 수는 토픽 수를 변경하는 것과 같습니다. 왜냐하면 저희 설정에서는 각 게시자/구독자가 하나의 토픽에만 연결되도록 설계했기 때문입니다.

XRCE-DDS 애플리케이션 중 하나를 통해 MCU의 메모리를 사용하는 방식은 여러 부분으로 나뉘며, 각 부분은 서로 다른 기능을 수행합니다.

* 데이터 버퍼: 이 버퍼는 직렬화 전에 토픽 데이터를 저장합니다. 이 메모리는 애플리케이션별로 사용되며 Micro XRCE-DDS 클라이언트 작업과 관련이 없으므로 메모리 사용량 계산에 포함하지 않습니다.
* 출력 버퍼: 이 버퍼는 엔티티 생성 요청 할당에 사용되는 메모리 영역이며, 게시자의 경우 직렬화된 토픽의 메모리도 포함됩니다. 따라서 이 경우 버퍼 크기는 이 두 값 중 최대값이 되며, 구독자 애플리케이션의 경우 생성된 엔티티의 크기와 같습니다. 엔티티 생성에 소요되는 메모리 양은 생성 모드에 따라 크게 달라진다는 점에 유의하십시오.
* 입력 버퍼: 이 버퍼는 구독자 애플리케이션이 에이전트에서 전송되는 데이터를 저장하는 데 사용되며, 신뢰할 수 있는 통신의 경우 게시자는 모든 정보가 에이전트에 정확하게 수신되었음을 확인하는 데 사용합니다.
* 전송 버퍼: 이는 MTU와 동일하며, 본 분석에서는 512B로 고정되었습니다.
* 스택 사용량: 스택은 프로그램 실행 시 사용되는 함수들이 차지하는 메모리 영역입니다. 위에서 언급한 정적 메모리에 저장된 버퍼들의 메모리 사용량은 컴파일된 바이너리 객체를 분석하여 간단히 계산할 수 있지만, 스택은 애플리케이션 실행 전에 알 수 없는 메모리 영역입니다. 스택 사용량을 측정하기 위해 FreeRTOS의 [uxTaskGetStackHighWaterMark()](https://www.freertos.org/uxTaskGetStackHighWaterMark.md) 함수를 사용합니다. 이 함수는 XRCE-DDS 태스크 스택이 최대값을 기록했을 때 사용되지 않은 스택 영역의 크기를 반환합니다. 이 값을 사용 가능한 총 스택 크기(알려져 있음)에서 빼면 XRCE-DDS 애플리케이션이 사용한 스택 최대값을 얻을 수 있습니다.

<img alt="다이어그램" src="_docs/concepts/middleware/memo_prof/diagram.png" class="center">
<p align="center">
  그림 1: XRCE-DDS 클라이언트 라이브러리의 메모리 파티션에 대한 설명도.
</p>

요약하자면, XRCE-DDS 앱의 총 메모리 사용량은 정적 메모리 사용량(일반적으로 출력/입력 버퍼 크기와 전송 버퍼 크기의 합)과 FreeRTOS에서 제공하는 uxTaskGetStackHighWaterMark() 함수를 사용하여 계산한 스택 사용량의 합으로 계산됩니다.

## 결과 및 논의

* 출판사

<img alt="publishers consumption" src="_docs/concepts/middleware/memo_prof/overall_pub.png" class="center">
<p align="center">
  그림 2: 토픽 크기(바이트) 및 게시자 수에 따른 XRCE-DDS 클라이언트의 메모리 사용량(바이트).
</p>

* 구독자

<img alt="구독자 소비량" src="_docs/concepts/middleware/memo_prof/overall_sub.png" class="center">
<p align="center">
  그림 3: 토픽 크기(바이트) 및 가입자 수에 따른 XRCE-DDS 클라이언트의 메모리 사용량(바이트).
</p>

이 그래프에서 알 수 있듯이, 검토된 사례들 간에는 유의미한 차이가 나타나지 않습니다. 출판사별로 살펴보면, 네 가지 사례 모두 동일한 추세를 보입니다.

게시자와 구독자 모두 토픽 크기가 충분히 작을 경우(< 400kB) XML을 통해 엔티티가 생성될 때 곡선이 평평해지는 것을 알 수 있습니다. 실제로 이러한 경우 출력 버퍼 크기는 엔티티 생성에 필요한 버퍼 크기에 따라 결정되며, 토픽 크기가 엔티티 생성에 필요한 크기를 초과할 때만 변경됩니다.

게시자/구독자 수는 측정 결과에 영향을 미치지 않는 것으로 나타났습니다. 이는 한 번에 하나의 토픽만 송수신되는 특정 실험 설정에서 예상되는 결과이며, 따라서 토픽 수는 전체 메모리 사용량에 영향을 주지 않습니다. 하지만 여러 토픽이 동시에 송수신되는 다른 설정에서는 메모리 버퍼 크기가 그에 따라 증가하는 것을 확인할 수 있습니다.

게시자와 구독자의 메모리 사용량 차이가 발생하는 이유는 구독자가 항상 두 개의 정적 메모리 버퍼, 즉 구독 요청을 작성하고 전송하는 출력 버퍼와 해당 요청에 대한 응답, 즉 에이전트에서 오는 데이터를 저장하는 입력 버퍼를 필요로 하기 때문입니다.

## Linux 환경에서 Micro XRCE-DDS 에이전트의 메모리 프로파일링

현재 Micro XRCE-DDS 에이전트는 Linux, Windows, Mac과 같은 표준 운영 체제에서만 지원됩니다. 하지만 점점 더 많은 사용자들이 에이전트를 MCU로 포팅하고 RTOS에서 컴파일하는 데 관심을 보이고 있습니다. 이러한 작업은 아직 수행되지 않았기 때문에, 첫 단계로 Linux 환경에서 경량 버전 에이전트의 메모리 사용량을 분석했습니다.

### 에이전트에서 사용 가능한 미들웨어 구현

에이전트는 FastMiddleware, FastDDSMiddleware 및 CedMiddleware의 세 가지 미들웨어 구현을 제공합니다(자세한 내용은 [링크](https://micro-xrce-dds.docs.eprosima.com/en/latest/agent.html#fastmiddleware)를 참조하십시오).

FastMiddleware와 FastDDSMiddleware는 각각 RTPS(실시간 발행-구독) 프로토콜과 DDS 표준의 C++ 구현체인 eProsima Fast RTPS와 eProsima Fast DDS를 사용합니다. 이러한 미들웨어를 통해 클라이언트는 DDS 글로벌 데이터 공간에서 데이터를 생성하고 소비할 수 있습니다. 이러한 에이전트는 DDS-XRCE 표준에 설명된 기본 동작을 수행합니다. 즉, 각 DDS-XRCE 엔티티에 대해 DDS 프록시 엔티티가 생성되고, 쓰기/읽기 작업은 DDS에서 발행/구독 작업을 생성합니다.

반면, CedMiddleware(중앙 집중식 미들웨어)는 에이전트를 브로커로 활용하여 클라이언트로부터 연결 및 메시지를 수신하고, 구독/구독 취소 요청을 처리하며, 다른 클라이언트의 구독과 일치하는 메시지를 전달하고, 클라이언트 연결을 종료합니다. 이 에이전트는 DDS로 출력을 보내는 에이전트보다 훨씬 가볍기 때문에 클라이언트 간의 유사 P2P 통신을 중개할 수 있는 가장 가벼운 버전의 에이전트의 메모리 사용량을 평가하는 데 적합합니다.

### 방법론 및 결과

본 연구에서는 크기가 알려진 토픽을 발행하고 구독하는 모의 클라이언트 애플리케이션과 통신하는 에이전트의 메모리 사용량을 Linux 환경에서 조사했습니다.

우리는 먼저 컴파일된 에이전트의 바이너리 크기를 측정하고, 그 다음 힙과 스택 사용량을 분석했습니다. 후자의 경우, 각 쌍에 하나의 토픽이 연결된 발행/구독 쌍의 개수를 1개에서 32개까지, 그리고 토픽 크기를 8바이트에서 256바이트까지 변화시키면서 실험을 진행했습니다.

컴파일된 에이전트의 바이너리 크기는 385KB였습니다.

RAM 메모리 사용량 측정에는 동적 분석 도구 구축을 위한 계측 프레임워크인 Valgrind를 사용했습니다. 구체적으로는 프로그램이 사용하는 힙 및 스택 메모리 양을 측정하는 메모리 프로파일러인 Massif를 활용했습니다. 보고된 측정값은 이 도구에서 제공하는 분석 결과로 나타나는 메모리 사용량 피크를 나타냅니다.

아래 그래프는 토픽 크기와 개수에 따른 전체 힙 및 스택 사용량을 보여줍니다.

<img alt="에이전트 소비" src="_docs/concepts/middleware/memo_prof/agent.png" class="center">
<p align="center">
  그림 4: 토픽 크기(바이트) 및 토픽 개수에 따른 XRCE-DDS 에이전트의 메모리 사용량(킬로바이트).
</p>

이러한 결과에서 알 수 있듯이, 약 10~15개의 발행/구독 쌍(및 동일한 수의 토픽)을 사용하는 애플리케이션의 경우, 에이전트의 메모리 사용량은 크로스 컴파일 후 약 300~400KB의 RAM과 500KB 미만의 플래시 메모리를 갖춘 중상급 MCU에서 실행하기에 적합한 수준입니다. 따라서 이 예비 분석은 XRCE-DDS 클라이언트에서 이미 지원하는 Zephyr, NuttX 및 FreeRTOS와 같은 RTOS로 Ced 에이전트를 포팅하여 리소스가 제한된 시스템에서도 이 라이브러리 구성 요소를 사용할 수 있도록 하는 가능성을 제시합니다. 현재까지 FastDDSMiddleware 및 CedMiddleware 에이전트 모두 Ubuntu 및 Raspbian 운영 체제를 사용하는 Raspberry Pi(RPi)에 성공적으로 포팅되었으며, 여러 micro-ROS 사용 사례 및 데모가 이미 RPi에서 에이전트를 사용하여 작동하고 있습니다.


---

## 출처: `_docs/concepts/middleware/Micro_XRCE-DDS/index.md`
<a id="source-docs-concepts-middleware-micro-xrce-dds-index-md"></a>

이 페이지는 [**Micro XRCE-DDS**](https://micro-xrce-dds.docs.eprosima.com/en/latest/index.md)의 가장 두드러진 특징을 설명하기 위해 마련되었습니다.
micro-ROS의 rmw 레이어에 대한 기본 미들웨어 구현입니다.

**eProsima Micro XRCE-DDS**는 극도로 자원이 제한된 환경(e**X**esource **C**onstrained **E**nvironment)을 위한 OMG DDS 표준([DDS-XRCE](https://www.omg.org/spec/DDS-XRCE/))을 구현하는 오픈 소스 와이어 프로토콜입니다.
DDS-XRCE 프로토콜의 목표는 자원이 제한된 장치에서 DDS 글로벌 데이터 공간에 접근할 수 있도록 하는 것입니다.
이는 **클라이언트-서버** 아키텍처 덕분에 가능하며, 여기서 *XRCE 클라이언트*라고 불리는 리소스가 적은 장치들이 *XRCE 에이전트*라고 불리는 서버에 연결되어 DDS 글로벌 데이터 공간에서 클라이언트를 대신하여 작동합니다.

![](_docs/concepts/middleware/Micro_XRCE-DDS/uxrce_scope.png)

Micro XRCE-DDS는 두 가지 주요 요소로 구성됩니다.

* [Micro XRCE-DDS Agent](https://github.com/eProsima/Micro-XRCE-DDS-Agent): XRCE 에이전트 기능을 구현하는 **C++11 기반의 바로 사용 가능한 애플리케이션**입니다.
* [Micro XRCE-DDS Client](https://github.com/eProsima/Micro-XRCE-DDS-Client): XRCE 클라이언트 측 기능을 구현하는 **C99 라이브러리**입니다.

또한 Micro XRCE-DDS는 다른 두 가지 구성 요소를 사용합니다.

* [Micro CDR](https://github.com/eProsima/Micro-CDR): 클라이언트 라이브러리에서 사용되는 **직렬화/역직렬화 엔진**입니다.
* [Micro XRCE-DDS Gen](https://github.com/eProsima/Micro-XRCE-DDS-Gen): IDL 소스에서 *Micro CDR* 역직렬화/직렬화 함수 및 클라이언트 앱 예제를 생성하는 데 사용되는 **코드 생성 도구**입니다.

## 애플리케이션

Micro XRCE-DDS는 퍼블리셔/서브스크립터 아키텍처에 접근해야 하는 마이크로컨트롤러 애플리케이션에 초점을 맞추고 있습니다.
이러한 유형의 응용 사례로는 센서 네트워크, 사물 인터넷(IoT) 또는 로봇 공학 분야에서 찾아볼 수 있습니다.
[Renesas](https://www.sensorsmag.com/iot-wireless/mcus-support-dds-xrce-protocol-for-ros-2) 및 [ROBOTIS](https://xelnetwork.readthedocs.io/en/latest/)와 같은 일부 회사는 Micro XRCE-DDS를 미들웨어 솔루션으로 사용하고 있습니다.
또한, ROS 2를 마이크로컨트롤러에 탑재하는 것을 목표로 하는 [micro-ROS](https://microros.github.io) 프로젝트는 Micro XRCE-DDS를 기본 미들웨어 레이어로 채택했습니다.

## 주요 기능

### 낮은 자원 소모량

앞서 언급했듯이 Micro XRCE-DDS는 마이크로컨트롤러 애플리케이션에 초점을 맞추고 있습니다. 따라서 이 미들웨어의 설계 및 구현은 이러한 장치의 메모리 제약 조건을 고려하여 수행되었습니다.
XRCE 클라이언트가 동적 메모리를 전혀 사용하지 않는다는 사실이 이를 증명합니다.
메모리 사용량 측면에서 볼 때, 이 라이브러리의 [최신](https://github.com/eProsima/Micro-XRCE-DDS-Client/releases/latest) 버전은 약 512B 크기의 메시지를 처리하는 완전한 게시자 및 구독자 애플리케이션에 대해 **75KB 미만의 플래시 메모리**와 약 **3KB의 RAM**만 사용합니다.
메시지 크기, 엔티티 수 및 미들웨어 라이브러리의 내부 메모리 관리에 따른 메모리 사용량에 대한 자세한 내용은 [Micro XRCE-DDS 메모리 프로파일링](/_docs/concepts/middleware/memo_prof/) 섹션을 참조하십시오.
또한, 이 라이브러리는 *프로필* 개념 덕분에 구성 시 기능을 선택, 추가 또는 제거할 수 있어 높은 수준의 구성 유연성을 제공합니다. 이를 통해 사용하지 않는 기능이 있는 경우 XRCE 클라이언트 라이브러리의 크기를 사용자 지정할 수 있습니다.
컴파일 시점에 클라이언트 라이브러리를 구성하고 빌드하는 방법에는 여러 가지 정의가 있습니다.
이러한 정의를 통해 애플리케이션 요구 사항에 따라 라이브러리 버전을 생성할 수 있으며, `client.config` 파일에서 수정할 수 있습니다.
원하는 구성을 적용하려면 정의가 변경될 때마다 `cmake` 명령을 실행해야 합니다.

Micro XRCE-DDS 라이브러리에서 매개변수를 적절히 조정하여 micro-ROS를 구성하는 방법에 대한 자세한 내용은 다음을 참조하십시오.
rmw 구현 [`rmw_microxrcedds`](https://github.com/micro-ROS/rmw-microxrcedds)에 대한 자세한 내용은 이 [튜토리얼](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/) 및 `rmw_microxrcedds` [README](https://github.com/micro-ROS/rmw-microxrcedds#rmw-micro-xrce-dds-implementation)를 참조하십시오.

### 다중 운송 지원

이전 섹션에서 설명한 프로필의 일부로, 사용자는 클라이언트와 에이전트 간의 통신을 위해 여러 전송 계층 중에서 선택할 수 있습니다.
실제로 MQTT 및 CoaP와 같이 특정 전송 계층에서만 작동하는 다른 IoT 미들웨어와 달리 XRCE는 여러 전송 프로토콜을 기본적으로 지원합니다.
특히, 최신 버전의 Micro XRCE-DDS는 **UDP**, **TCP** 및 사용자 지정 **직렬** 전송 프로토콜을 지원합니다.

이 외에도 Micro XRCE-DDS는 에이전트와 클라이언트 모두에 대한 전송 인터페이스를 제공하여 사용자 정의 전송을 간편하게 구현할 수 있도록 합니다.
이러한 특징 덕분에 Micro XRCE-DDS를 다양한 플랫폼으로 이식하고 새로운 전송 방식을 추가하는 작업이 누구나 쉽게 수행할 수 있는 간편한 작업이 됩니다.

### 멀티 플랫폼 지원

XRCE 클라이언트는 임베디드 RTOS로 **FreeRTOS**, **Zephyr** 및 **NuttX**를 지원합니다. 또한 **Windows** 및 **Linux**에서도 실행됩니다.
반면, XRCE 에이전트는 **Windows**와 **Linux**를 지원합니다.

### QoS 지원

XRCE 클라이언트 라이브러리를 사용하면 XRCE 에이전트에서 DDS 엔티티를 생성하는 데 두 가지 다른 접근 방식을 사용할 수 있습니다.

* XML을 이용한 방식 (기본 옵션)
* 참조에 의해

기본 옵션을 사용하면 사용자는 신뢰성 모드 또는 최선 노력 모드로 엔티티를 생성할 수 있으며, XML 파일은 클라이언트 측에 기록 및 저장됩니다. 그러나 이러한 QoS 구성은 일부 사용자의 요구 사항에 맞지 않을 수 있습니다.
이러한 경우 Micro XRCE-DDS를 사용하면 에이전트에서 직접 엔티티를 생성할 수 있으며, 사용자는 DDS에서와 같이 사용자 지정 XML QoS를 작성할 수 있습니다.
에이전트에서 사용 가능한 각 엔티티에는 레이블이 연결되므로 클라이언트는 필요한 엔티티를 생성할 수 있습니다.
의사소통을 위해서는 이러한 라벨을 참조하는 것만으로도 충분합니다.

또한, 참조를 사용하면 MCU 내부 클라이언트의 메모리 사용량도 줄어듭니다.
이는 참조 방식을 사용하면 XML이 저장되는 코드 부분을 구축하지 않고도 구현할 수 있기 때문입니다.

이 메커니즘은 micro-ROS에도 계승되므로, micro-ROS는 ROS 2와 동일한 모든 QoS 기능을 활용할 수 있게 됩니다.
micro-ROS에서 사용자 지정 QoS를 사용하는 방법에 대한 자세한 내용은 튜토리얼 섹션의 [전용 페이지](/_docs/tutorials/advanced/create_dds_entities_by_ref/)를 참조하십시오.


## 기타 링크

* [Read the Docs의 매뉴얼](https://micro-xrce-dds.readthedocs.io/en/latest/)
* [GitHub의 Micro XRCE-DDS](https://github.com/eProsima/Micro-XRCE-DDS)
* [GitHub의 XRCE 클라이언트](https://github.com/eProsima/Micro-XRCE-DDS-Client)
* [GitHub의 XRCE 에이전트](https://github.com/eProsima/Micro-XRCE-DDS-Agent)
* [GitHub의 rmw_microxrcedds](https://github.com/micro-ROS/rmw-microxrcedds)
* [마이크로 XRCE-DDS 메모리 프로파일링](/_docs/concepts/middleware/memo_prof/)
* [미들웨어 최적화 튜토리얼](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/).
* [micro-ROS에서 사용자 지정 QoS를 사용하는 방법](/_docs/tutorials/advanced/create_dds_entities_by_ref/)

---

## 출처: `_docs/concepts/middleware/rosserial/index.md`
<a id="source-docs-concepts-middleware-rosserial-index-md"></a>

ROS에서 직렬 통신을 통해 ROS 메시지를 전송할 때 특히 눈에 띄는 패키지가 있습니다.
이 패키지는 rosserial입니다.

rosserial은 마이크로컨트롤러 기반 플랫폼이 일반 컴퓨터와 통신할 수 있도록 해주며, 일반 컴퓨터는 이를 대신하여 ROS 네트워크와 통신합니다.
rosserial은 클라이언트-서버 아키텍처 방식을 사용하여 이러한 통신을 설정하는 프로토콜을 제공합니다.
rosserial 클라이언트는 데이터를 직렬 링크로 직렬화하고, 직렬화된 데이터는 rosserial 서버에서 수신되어 기존 ROS 네트워크로 전달됩니다.
ROS 네트워크에서 마이크로컨트롤러로 데이터를 전달하는 과정도 이와 유사합니다.
이 rosserial 서버는 C++ 또는 Python으로 사용할 수 있으며, rosserial 클라이언트는 지원되는 마이크로프로세서 목록을 제공합니다.

이 솔루션은 ROS를 사용하여 로봇에 하드웨어 부품을 통합하는 데 일반적으로 사용됩니다.
이러한 경우, Rosserial은 하드웨어 통신 프로토콜과 ROS 네트워크 사이의 가교 역할을 합니다.

## 마이크로 XRCE-DDS

Micro XRCE-DDS의 기능 중 하나는 마이크로컨트롤러와 DDS/ROS 2를 지원하는 컴퓨터 간의 직렬 연결을 사용하는 것입니다.
이러한 연결은 OMG의 DDS-XRCE 표준과 직렬 전송 계층을 사용하기 때문에 가능합니다.
이 솔루션은 rosserial과 동일한 클라이언트-서버 아키텍처를 따르며, 이는 마이크로컨트롤러 통신에 있어 가장 적합한 접근 방식 중 하나입니다.

이 아키텍처를 구현하는 역할을 담당하는 라이브러리는 클라이언트와 에이전트입니다.
클라이언트는 에이전트 내에서 엔티티를 생성하며, 이 엔티티는 DDS 네트워크에서 클라이언트를 대신하여 작동합니다.

보시다시피, 이 사용법은 rosserial에서 사용하는 방식과 유사하지만, 구현 방식에는 미묘한 차이가 있으며, 이 글에서 그 차이점을 살펴보겠습니다.

## Micro XRCE-DDS vs rosserial

이제 rosserial과 Micro XRCE-DDS에 대한 기본적인 이해를 바탕으로 두 시스템을 비교해 보겠습니다.

### 직렬 전송을 통한 마이크로 XRCE-DDS

Micro XRCE-DDS는 직렬 전송 방식을 통해 통신할 때(UDP, TCP 등 다른 전송 방식을 통한 통신도 가능함) 미리 정의된 형식의 직렬 프로토콜을 사용합니다.
이 형식은 다음 프레임 분석에서 설명됩니다.

```
0 8 16 24 40 X X+16
+--------+--------+--------+--------+--------+--------//--------+--------+--------+
| 플래그 | 새드 | 래드 | 렌 | 페이로드 | CRC |
+--------+--------+--------+--------+--------+--------//--------|--------+--------+
```

* `FLAG`: 동기화 플래그(0xFF).
* `SADD`: 소스 주소.
* `RADD`: 원격 주소.
* `LEN`: 프레임을 제외한 페이로드 길이(리틀 엔디안 방식에서 2바이트).
* `PAYLOAD`: XRCE 헤더가 포함된 직렬화된 메시지.
* `CRC`: 메시지 CRC (입력 후).

이것은 링크 계층에서 직렬화되는 메시지입니다.
이는 발행(publish)과 구독(subscribe)이라는 두 가지 작업을 통해 마이크로컨트롤러로 전달되는 메시지입니다.

## rosserial

반면, 이것은 rosserial 프레임입니다.

```
0 8 16 32 40 56 X X+16
+-------+-------+-------+-------+-------+-------+-------+-------//-------+------+------+
| 플래그 | 보호 | 길이 | LCRC | TOPID | 페이로드 | MCRC |
+-------+-------+-------+-------+-------+-------+-------+-------//-------|------+------+
```

* `FLAG`: 동기화 플래그(0xFF).
* `PROT`: 프로토콜 버전.
* `LEN`: 페이로드 길이(리틀 엔디안 방식에서 2바이트).
* `LCRC`: 길이 CRC.
* `TOPID`: 토픽 ID.
* `PAYLOAD`: 직렬화된 메시지.
* `MCRC`: 메시지 CRC.

보시다시피 Micro XRCE-DDS 직렬 프레임과 비교해 보면 완전히 다른 프레임을 사용합니다.

## 비교

다음 표는 두 구현 방식의 주요 측면을 요약한 것입니다.

| | 마이크로 XRCE-DDS 시리얼 | rosserial |
|:-|:-:|:-:|
| **API** | C/C++ | C++ |
| **무결성** | [HDLC](https://en.wikipedia.org/wiki/High-Level_Data_Link_Control) 프레임 | 없음 |
| **보안** | [CRC-16-CCITT](https://en.wikipedia.org/wiki/Cyclic_redundancy_check) | 모호한 CRC (% 256) |
| **메모리 복사** | uxr_stream ---> serial_buffer ---> hardware_buffer | serialization_buffer ---> hardware_buffer |
| **메모리 사용량** | uxr_stream + (2 * aux-buffer[42 B]) | 2 * serialization_buffer |
| **메시지 크기 제한** | uxr_stream 크기 | 하드웨어 버퍼 크기 |
| **신뢰성** | 예 | 아니오 |
| **라우팅** | 예 | 아니오 |
| **간접비** | 7 B + 12 B* | 9 B |
| **아키텍처** | 클라이언트-서버 | 클라이언트-서버 |

오버헤드는 프레임 설정(7B)과 DDS-XRCE 프로토콜에 의해 추가되는 12B로 나뉩니다.

이 표에서 볼 수 있듯이, Micro XRCE-DDS 직렬 통신은 메모리 연산 횟수는 증가시키지만, 하드웨어 버퍼와 직렬화 버퍼의 크기가 같을 필요가 없으므로 직렬 통신에 필요한 메모리 용량을 크게 줄입니다.
버퍼를 사용하면 메모리 사용량이 줄어듭니다.
또한 Micro XRCE-DDS 직렬은 rosserial과 달리 라우팅 및 신뢰성 기능을 제공합니다.
DDS-XRCE 프로토콜은 표준 CRC 사용이나 표준 프레임과 같은 일부 구성 요소에 대한 표준을 따릅니다.

---

## 출처: `_docs/concepts/rtos/comparison/index.md`
<a id="source-docs-concepts-rtos-comparison-index-md"></a>

이 섹션에서는 micro-ROS에서 지원하는 세 가지 RTOS 간의 기술적 비교를 제시합니다.
* [NuttX](https://nuttx.apache.org/)
* [FreeRTOS](https://www.freertos.org/)
* [제피르](https://www.zephyrproject.org/)

아래 나열된 기능들을 비교합니다.
* 애플리케이션 수준의 표준화된 API
* 성숙함
* 지원되는 하드웨어
* 일정 옵션
* IO 지원 (기본 또는 공급업체별 모듈 필요)
* 네트워킹 스택
* 저장 및 표시
* 메모리 사용량
* 안전 인증
* 라이선스
* POSIX 레벨 지원

**핵심 질문:**
* RTOS의 POSIX 호환성 평가.
* micro-ROS 또는 ROS 2와 관련하여 POSIX 기반이 아닌 RTOS에 추가적인 레이어를 제공하는 데 필요한 노력은 어느 정도입니까?
* 특정 하드웨어 플랫폼에 대한 RTOS 지원

## 비교표

| **OS** | **너트엑스** | **FreeRTOS** | **제퍼** |
| ------------------------------------------------------------ | ---------------------------------------- | ------------------------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------- |
| **특징** | | | |
| **표준화** | | | |
| POSIX | 예 | 부분적 | 부분적 |
| POSIX.1 <sup>1</sup> | [예](http://nuttx.org/) | [래퍼](https://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_POSIX/index.md) | 부분적 |
| POSIX.1b 2 | 예 | 부분적 | 부분적 |
| POSIX.1c 3 | 예 | 예 | 부분적 |
| | | | |
| OSEK/VDX | 아니오 | 아니오 | 아니오 |
| **성숙도** | | | |
첫 출시 | 2007년 | 2003년 | 2016년 |
| 최종 출시 | 2019 | 2020 | 2019 |
| 업데이트 주기 | 약 3개월 | 불규칙적 | 3개월 |
| 커뮤니티 | 오픈 소스 | 오픈 소스 | 리눅스 재단 협력 프로젝트 (인텔, 리나로(ARM), 노르딕, NXP, 시놉시스) |
| | | | |
| **지원 하드웨어** | | | |
| Olimex STM32-E407 (Cortex-M4) | 예 | 예 | 예, [명시적으로](https://docs.zephyrproject.org/latest/kernel/services/scheduling/index.md) |
| Bosch XDK 5 | 명시적으로는 아니지만 유사함 6 | 예 | 아니오 5 |
| MPC57xx | 아니오 | 아니오 | 아니오 |
| **일정 관리** | | | |
우선순위 기반 | 선입선출 | 예 | 예 |
| 라운드 로빈 <sup>4</sup> | 예 | 예 <sup>6</sup> | [협력적](https://docs.zephyrproject.org/latest/kernel/services/scheduling/index.md) |
| 간헐적 서버 | 예 | 아니요 | 아니요 |
| 예약 기반 스케줄링(RBS) | 아니요 | 아니요 | 아니요 |
| 비율 단조 스케줄링(RMS) | ? | 예 <sup>10</sup> | 예 <sup>10</sup> |
| 세마포어/뮤텍스 관리 | 예 (우선순위 상속) | 예 | 예 |
| **IO** | | | |
| I2C | 예 | 예 <sup>8</sup> | 예 |
| SPI | 예 | 예 <sup>8</sup> | 예 |
| UART | 하드웨어별 | 예 <sup>8</sup> | 예 |
| USB | 예 | 제조사별 지원 | 예 |
| 가능 | 예 | 공급업체별 | 예 |
| CAnopen | 아니요 | 공급업체별 | 예 |
| Modbus | 예 | 공급업체별 | ? |
| **네트워킹** <sup>7</sup> | | | |
| BLE 스택 | 불분명 | 예 <sup>8</sup> | 예 |
| 6LoWPAN | 예 | 아니오 | 예 |
| TLS | | 예 <sup>8</sup> | 예 |
| 스레드 | | 아니요 | ? |
| 이더넷 | 예 | 예 <sup>8</sup> | 예 |
| 와이파이 | 예                                       | 예 8</sup> | 예 |
| NFC | 불분명 | 아니오 | 예 |
| RFID | 예 | 아니오 | 예 |
| **보관 및 진열** <sup>7</sup> | | | |
| 파일 시스템 | 예 | 예 | 예 |
| 그래픽 사용자 인터페이스 | | 공급업체별 | ? |
| **메모리 사용량** | | | |
| RAM | "작은 설치 공간" | 스케줄러 236B + 태스크당 64B | "작은 설치 공간" |
| ROM | "작은 크기" | 5 - 10kB | "작은 크기" |
| **안전 인증** | | | |
| 소프트웨어 개발 프로세스 DO178B 레벨 A / EUROCAE ED-12B | 아니오 | [SafeRTOS: Wittenstein의 DO178C(항공우주)](https://www.highintegritysystems.com/safertos/certification-and-standards/) | 아니오 |
| 기능 안전 IEC-61508 | 아니오 | [SafeRTOS (SIL 3)](http://www.openrtos.net/FreeRTOS-Plus/Safety_Critical_Certified/SafeRTOS-Safety-Critical-Certification.shtml) | 곧 |
| **라이선스** | BSD | MIT 및 상업용 | 아파치 2 |

<sup>1</sup> 프로세스, 신호, FPE, 세그멘테이션, 버스 오류, 타이머, 파일 및 디렉터리 작업, 파이프, C 라이브러리, IO 포트 인터페이스

<sup>2</sup> 실시간, 클록, 세마포어, 메시지, 공유 메모리, 비동기 I/O, 메모리 잠금.

3개의 스레드.

<sup>4</sup> 모든 작업을 라운드 로빈 방식으로 실행하되, 미리 정의된 시간 범위 내에서만 실행합니다.

<sup>5</sup> XDK는 Silicon Labs의 ARM Cortex M3 EFM32GG390F1024 Giant Gecko 제품군 마이크로컨트롤러를 기반으로 합니다. XDK에서 사용된 버전은 Zephyr에서 완벽하게 지원되지 않습니다.

<sup>6</sup> [참고: 타임 슬라이싱](https://www.freertos.org/media/2018/161204_Mastering_the_FreeRTOS_Real_Time_Kernel-A_Hands-On_Tutorial_Guide.pdf)

<sup>7</sup> 네트워킹 및 스토리지에 대한 하드웨어 지원은 플랫폼에 따라 달라지는 경우가 많으며, 특정 운영 체제에서 작동하는 하드웨어 공급업체 패키지가 제공되는 경우도 있습니다. 하지만 일반적으로 특정 RTOS의 하드웨어 지원 여부를 확인하기는 어렵습니다.

<sup>8</sup> FreeRTOS를 통해 제공되는 인터페이스는 다음과 같습니다.
FreeRTOS 참조 배포 저장소는 https://github.com/aws/amazon-freertos 에서 확인할 수 있습니다.

<sup>9</sup> FreeRTOS 이더넷 지원은 FreeRTOS+TCP 스택을 통해 제공됩니다.

<sup>10</sup> 레이트 단조 스케줄링은 소위 레이트 단조 정책을 사용하여 스레드 우선순위를 할당함으로써 구현할 수 있습니다. 즉, 실행 속도가 가장 높은 스레드에 가장 높은 우선순위를, 실행 속도가 가장 낮은 스레드에 가장 낮은 우선순위를 부여합니다. 모든 스레드는 고정된 실행 속도로 주기적으로 활성화된다고 가정합니다.

관련 연구:
* [IoT 플랫폼에 적합한 RTOS 선택, Milinkovic 외, INFOTEH-JAHORINA 14권, 2015](http://infoteh.rs.ba/zbornik/2015/radovi/RSS-2/RSS-2-2.pdf): FreeRTOS, ChibiOS/RT, Erika, RIOT 비교
* [FreeRTOS 아키텍처](https://www.freertos.org/)

---

## 출처: `_docs/concepts/rtos/index.md`
<a id="source-docs-concepts-rtos-index-md"></a>

실시간 운영 체제(RTOS)는 오늘날 임베디드 시스템에서 일반적인 기술입니다. 이러한 시스템은 일반적으로 외부 구성 요소와의 상호 작용이 필요한 애플리케이션을 실행하는 자원 제약이 있는 마이크로컨트롤러로 구성됩니다. 많은 경우, 이 애플리케이션에는 엄격한 시간 제한이나 확정적인 응답이 요구되는 시간 제약적인 작업이 포함됩니다.

오늘날에는 베어메탈 애플리케이션도 사용되지만, 매우 낮은 수준의 프로그래밍 기술이 필요하고 RTOS가 제공하는 하드웨어 추상화 계층이 부족합니다. 반면 RTOS는 일반적으로 타이머 및 통신 버스와 같은 하드웨어 리소스 사용을 간소화하는 하드웨어 추상화 계층(HAL)을 사용하여 개발을 간소화하고 코드 재사용을 가능하게 합니다. 또한 스레드와 태스크 엔티티를 제공하며, 스케줄러와 함께 애플리케이션의 결정성을 구현하는 데 필요한 도구를 제공합니다. 스케줄링은 다양한 알고리즘으로 구성되며, 사용자는 애플리케이션에 가장 적합한 알고리즘을 선택할 수 있습니다. RTOS가 일반적으로 제공하는 또 다른 기능은 스택 관리로, MCU 리소스의 메모리 사용을 효율적으로 관리하는 데 도움이 되며 임베디드 시스템에서 매우 중요한 요소입니다.

## micro-ROS의 RTOS

위에서 언급한 이점들 때문에 micro-ROS는 RTOS를 소프트웨어 스택에 통합합니다. 이는 micro-ROS의 기능을 향상시키고 RTOS에서 제공하는 모든 도구와 기능을 재사용할 수 있도록 합니다. micro-ROS 소프트웨어 스택은 모듈식이므로 RTOS 계층을 포함한 모든 수준에서 소프트웨어 구성 요소의 교환이 예상되고 바람직합니다.

컴퓨터용 운영 체제(OS)와 마찬가지로 실시간 운영 체제(RTOS)도 표준 인터페이스에 대한 지원이 다양합니다. 이는 [POSIX](https://pubs.opengroup.org/onlinepubs/9699919799/)라는 표준군에 명시되어 있습니다. 저희는 Linux(대부분 POSIX를 준수하는 OS)에서 네이티브로 작성된 ROS 2의 코드를 포팅하거나 재사용하고자 하므로, 이러한 표준을 준수하는 RTOS를 사용하는 것이 코드 포팅 작업을 최소화하는 데 유리합니다. NuttX와 Zephyr는 모두 POSIX 표준을 상당히 잘 준수하므로 포팅 작업이 최소화되며, FreeRTOS는 *FreeRTOS+POSIX*라는 플러그인을 제공하여 기존의 POSIX 준수 애플리케이션을 FreeRTOS 생태계로 쉽게 포팅하고 모든 기능을 활용할 수 있도록 합니다.

micro-ROS 스택에서는 RTOS 함수 호출이 여러 추상화 계층을 통해 이루어진다는 점에 유의하십시오. RTOS 기본 요소를 사용하는 주요 계층은 미들웨어입니다. 미들웨어는 제대로 작동하기 위해 전송 자원(예: 직렬, UDP 또는 6LoWPAN 통신)과 RTOS의 시간 자원에 접근해야 합니다. 또한 micro-ROS 클라이언트 라이브러리(rcl, rclc)도 스케줄링이나 전력 관리와 같은 메커니즘을 처리하기 위해 RTOS 자원에 접근할 수 있어야 합니다. 이러한 방식으로 개발자는 다양한 수준에서 애플리케이션을 최적화할 수 있습니다.

현재 micro-ROS는 FreeRTOS, Zephyr, NuttX의 세 가지 RTOS를 지원하며, 이들 모두 (기본) POSIX 구현을 제공하고 있으며, 이들 모두 micro-ROS 빌드 시스템에 통합되어 있습니다.
아래 로고를 클릭하시면 각 RTOS의 가장 중요한 측면과 핵심 기능을 보여주는 개요 섹션으로 이동합니다.

<table style="border:none;">
 <tr>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="/_docs/overview/rtos/#freertos"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="263" height="100" src="https://upload.wikimedia.org/wikipedia/commons/4/4e/Logo_freeRTOS.png"><br/>FreeRTOS</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="/_docs/overview/rtos/#zephyr"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="220" height="114" src="img/_posts/logo-zephyr.jpg"><br/>제피르</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="/_docs/overview/rtos/#nuttx"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="125" height="125" src="https://upload.wikimedia.org/wikipedia/commons/b/b0/NuttX_logo.png"><br/>NuttX</a></td>
 </tr>
</테이블>

이러한 RTOS 간의 철저한 기술적 비교는 [여기](/_docs/concepts/rtos/comparison/)에서 확인할 수 있습니다.

{% 로고_면책 조항.md 포함 %}

---

## 출처: `_docs/imprint.md`
<a id="source-docs-imprint-md"></a>

# 게시자:

eProsima,

Plaza de la Encina 10-11 Nucleo 4 2ª Planta,

28760 트레스 칸토스,

스페인 마드리드.

이메일: info@eprosima.com

전화번호: +34 918043448

CEO가 대표하여 참석했습니다.
하이메 마틴 로사.

# 편집자:

EU 프로젝트 [OFERA](http://ofera.eu/) 회원:

* eProsima.
* 로버트 보쉬 GmbH.
* ŁUKASIEWICZ - Instytut PIAP.
* FIWARE 재단.

# 면책 조항

편집자들은 이 웹사이트의 콘텐츠가 최신 상태로 유지되고 정확하고 완전하게 제공되도록 노력했습니다.
하지만 오류가 발생할 수도 있습니다.
편집자 및 발행인은 이 웹사이트에 게시된 자료의 정확성 또는 완전성에 대해 어떠한 보증도 하지 않으며, 이 웹사이트에서 얻은 콘텐츠 사용으로 인해 발생하는 손실이나 손해에 대해 일체의 책임을 지지 않습니다.

출판사나 편집자는 외부 페이지의 콘텐츠에 대해 어떠한 책임도 지지 않습니다. 해당 외부 페이지의 소유자가 콘텐츠에 대한 전적인 책임을 집니다.

이 웹사이트 콘텐츠에는 등록 상표 및 저작권이 있는 텍스트와 이미지가 (일반적으로) 별도로 표시되지 않습니다.
그러한 표시가 없다고 해서 해당 이름, 이미지 또는 텍스트가 공공 영역에 속한다는 것을 의미하는 것은 아니며, 원래 소유권이 그대로 유지됩니다.

---

## 출처: `_docs/overview/comparison/index.md`
<a id="source-docs-overview-comparison-index-md"></a>

Micro-ROS는 ROS 2를 마이크로컨트롤러에서 사용할 수 있도록 해줍니다. 본 논문에서는 관련 접근 방식들을 분석하고 최종적으로 비교표를 제시합니다.

## 로시리얼

ROSSerial은 표준 ROS 직렬화 메시지를 래핑하고 직렬 포트 또는 네트워크 소켓과 같은 장치를 통해 여러 토픽과 서비스를 다중화하는 프로토콜입니다. 프로토콜 정의 외에도 이 제품군에는 세 가지 유형의 패키지가 있습니다.

- 클라이언트 라이브러리: 클라이언트 라이브러리를 사용하면 다양한 시스템에서 ROS 노드를 쉽게 실행할 수 있습니다. 이러한 클라이언트는 일반적인 ANSI C++ rosserial_client 라이브러리를 포팅한 것입니다.

- ROS 측 인터페이스: 이러한 패키지는 호스트 머신이 rosserial 프로토콜과 보다 일반적인 ROS 네트워크 간의 연결을 브리지하는 노드를 제공합니다.

- 예시 및 사용 사례.

이 방법은 ROS 2에 초점을 맞춘 micro-ROS와 달리 ROS 1을 대상으로 하기 때문에 micro-ROS와 완전히 비교할 수는 없다는 점을 언급할 필요가 있습니다.

참고: [ROSserial 위키](http://wiki.ros.org/rosserial)

## RIOT-ROS2

RIOT-ROS2는 RIOT 운영 체제를 통해 마이크로컨트롤러에서 실행될 수 있도록 메인 ROS 2 스택을 수정한 것입니다.

ROS 2는 여러 계층으로 구성되어 있습니다. 일부 계층은 마이크로컨트롤러에서 실행될 수 있도록 수정되었으며, 다음은 RIOT-ROS2 프로젝트에서 사용 가능한 계층 목록입니다.
- ROS 클라이언트 라이브러리 바인딩: RCLC
- ROS 클라이언트 라이브러리: RCL
- ROS 미들웨어: rmw_ndn
- ROS IDL 생성기: generator_c
- ROS IDL 형식 지원: CBOR
- ROS IDL 인터페이스:
    - 공통 인터페이스
    - rcl_인터페이스

최종적으로 볼 때, 개발은 중단된 것으로 보입니다. 이는 마지막 커밋이 [2018년 7월](https://github.com/astralien3000/riot-ros2/commits/master)로 거슬러 올라가기 때문입니다.

참고: [RIOT-ROS2](https://github.com/astralien3000/riot-ros2/wiki)

## 비교표

| | rosserial | RIOT-ROS2 | micro-ROS |
|-------|-----------|-----------|-----------|
| OS | 베어메탈 | RIOT | NuttX, FreeRTOS 및 Zephyr |
| 통신 아키텍처 | 브리지형 | 해당 없음 | 브리지형 |
| 메시지 형식 | ROS1 | 해당 없음 | CDR (DDS에서 가져옴) |
| 통신 링크 | UART | UART | UART, SPI, IP(UDP), 6LowPAN, ... |
| 통신 프로토콜 | 사용자 정의 | NDN | XRCE-DDS (또는 기타 rmw 구현) |
| 코드베이스 | 독립적인 구현 | RCL까지의 표준 ROS 2 스택 | RCL까지의 표준 ROS 2 스택 (RCLCPP 지원 예정) |
| 노드 API | 사용자 정의 rosserial API | RCL, RCLC | RCL (곧 RCLCPP 지원 예정) |
| 콜백 실행 | 메시지 순서대로 순차 실행 | 해당 없음 | ROS 2 실행기 또는 MCU 최적화 실행기 중 선택 가능 |
| 타이머 | 포함되지 않음 | 포함되지 않음 | 일반 ROS 2 타이머 |
| 호스트 시간 동기화 | 사용자 지정 | 해당 없음 | NTP/PTP |
| 수명 주기 | 지원되지 않음 | 부분 지원 | 부분 지원, 전체 지원 예정 |

---

## 출처: `_docs/overview/docker_ci_status/index.md`
<a id="source-docs-overview-docker-ci-status-index-md"></a>

<스타일>
.table td img{
    높이: 18px;
    최대 너비: 콘텐츠 맞춤;
}
</style>

## 툴링 상태

| 저장소 | 설명 | CI | 이슈/풀 리퀘스트 | 문서 |
| ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------- |
| [micro-ROS-setup](https://github.com/micro-ROS/micro_ros_setup) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_setup/tree/rolling) | Micro-ROS를 모든 지원 플랫폼에 빌드하고 플래싱하는 Micro-ROS 도구 | [![GitHub Actions 상태](https://github.com/micro-ROS/micro_ros_setup/actions/workflows/nightly.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_setup/actions/workflows/nightly.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_setup.svg)](https://github.com/micro-ROS/micro_ros_setup/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_setup.svg)](https://github.com/micro-ROS//micro_ros_setup/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_setup/blob/humble/README.md) |
| [micro-ros-espidf-component](https://github.com/micro-ROS/micro_ros_espidf_component) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_espidf_component/tree/rolling) | ESP IDF 빌드 시스템에서 Micro-ROS를 사용하기 위한 컴포넌트 | [![GitHub Actions 상태](https://github.com/micro-ROS/micro_ros_espidf_component/actions/workflows/nightly.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_espidf_component/actions/workflows/nightly.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_espidf_component.svg)](https://github.com/micro-ROS/micro_ros_espidf_component/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_espidf_component.svg)](https://github.com/micro-ROS/micro_ros_espidf_component/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_espidf_component/blob/humble/README.md) |
| [micro-ros-arduino](https://github.com/micro-ROS/micro_ros_arduino) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_arduino/tree/rolling) | Micro-ROS 사전 컴파일 라이브러리를 사용하여 Arduino IDE와 직접 인터페이스할 수 있습니다. | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_arduino/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_arduino/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_arduino.svg)](https://github.com/micro-ROS/micro_ros_arduino/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_arduino.svg)](https://github.com/micro-ROS/micro_ros_arduino/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_arduino/blob/humble/README.md) |
| [micro-ros-zephyr-module](https://github.com/micro-ROS/micro_ros_zephyr_module) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_zephyr_module/tree/rolling) | Zephyr West 빌드 시스템에 micro-ROS 통합 | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_zephyr_module/actions/workflows/nightly.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_zephyr_module/actions/workflows/nightly.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_zephyr_module.svg)](https://github.com/micro-ROS/micro_ros_zephyr_module/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_zephyr_module.svg)](https://github.com/micro-ROS/micro_ros_zephyr_module/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_zephyr_module/blob/humble/README.md) |
| [micro_ros_raspberrypi_pico_sdk](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/tree/rolling) | Raspberry Pi Pico SDK에 micro-ROS 통합 | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_raspberrypi_pico_sdk.svg)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_raspberrypi_pico_sdk.svg)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk/blob/humble/README.md) |
| [micro_ros_mbed](https://github.com/micro-ROS/micro_ros_mbed) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_mbed/tree/rolling) | Mbed RTOS에 micro-ROS 통합 | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_mbed/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_mbed/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_mbed.svg)](https://github.com/micro-ROS/micro_ros_mbed/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_mbed.svg)](https://github.com/micro-ROS/micro_ros_mbed/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_mbed/blob/humble/README.md) |
| [micro_ros_nuttx_app](https://github.com/micro-ROS/micro_ros_nuttx_app) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_nuttx_app/tree/rolling)| Nuttx 10에 micro-ROS 통합 | [![Github Actions 상태](https://github.com/micro-ROS/micro_ros_nuttx_app/workflows/CI/badge.svg)](https://github.com/micro-ROS/micro_ros_nuttx_app/actions) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_nuttx_app.svg)](https://github.com/micro-ROS/micro_ros_nuttx_app/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_nuttx_app.svg)](https://github.com/micro-ROS/micro_ros_nuttx_app/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_nuttx_app/blob/humble/README.md) |
| [micro_ros_stm32cubemx_utils](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/tree/rolling) | STM32CubeMX 및 STM32CubeIDE에 micro-ROS 통합 | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_stm32cubemx_utils.svg)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_stm32cubemx_utils.svg)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_stm32cubemx_utils/blob/humble/README.md) |
| [NuttX 포크](https://github.com/micro-ROS/NuttX) | micro-ROS와 함께 사용할 수 있는 NuttX 포크입니다. 현재 상태는 **단종**입니다. | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/NuttX.svg)](https://github.com/micro-ROS/NuttX/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/NuttX.svg)](https://github.com/micro-ROS/NuttX/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/NuttX/blob/master/README.md) |

## 소스 코드 저장소 현황

대부분의 저장소는 GitHub의 micro-ROS 조직([github.com/micro-ROS/](https://github.com/micro-ROS/))에서 찾을 수 있습니다.

| 저장소 | 설명 | CI | 이슈/풀 리퀘스트 | 문서 |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------------- |
| [Micro XRCE-DDS 클라이언트](https://github.com/eProsima/Micro-XRCE-DDS-Client) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Client/tree/ros2) | eProsima의 오픈 소스 DDS-XRCE 구현의 클라이언트 C99 라이브러리 | [![빌드 상태](https://img.shields.io/jenkins/build?jobUrl=http%3A%2F%2Fjenkins.eprosima.com%3A8080%2Fview%2FMicro%2520XRCE%2Fjob%2FMicro-XRCE-DDS-Client%2520Github%2F)](http://jenkins.eprosima.com:8080/view/Micro%20XRCE/job/Micro-XRCE-DDS-Client%20Github/) | [![](https://img.shields.io/github/issues/eProsima/Micro-XRCE-DDS-Client.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Client/issues) [![](https://img.shields.io/github/issues-pr/eProsima/Micro-XRCE-DDS-Client.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Client/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://micro-xrce-dds.docs.eprosima.com/en/latest/client.md) |
| [Micro XRCE-DDS Agent](https://github.com/eProsima/Micro-XRCE-DDS-Agent) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/tree/ros2) | 에이전트(DDS 브리지) eProsima의 오픈 소스 DDS-XRCE 구현의 C++11 라이브러리 | [![빌드 상태](https://img.shields.io/jenkins/build?jobUrl=http%3A%2F%2Fjenkins.eprosima.com%3A8080%2Fview%2FMicro%2520XRCE%2Fjob%2FMicro-XRCE-DDS-Agent%2520Github%2F)](http://jenkins.eprosima.com:8080/view/Micro%20XRCE/job/Micro-XRCE-DDS-Agent%20Github/) | [![](https://img.shields.io/github/issues/eProsima/Micro-XRCE-DDS-Agent.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/issues) [![](https://img.shields.io/github/issues-pr/eProsima/Micro-XRCE-DDS-Agent.svg)](https://github.com/eProsima/Micro-XRCE-DDS-Agent/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://micro-xrce-dds.docs.eprosima.com/en/latest/agent.md) |
| [rmw-microxrcedds](https://github.com/micro-ROS/rmw-microxrcedds) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/rmw-microxrcedds/tree/rolling) | Micro-XRCE-DDS 클라이언트 라이브러리용 ROS 2 RMW 어댑터 | [![빌드 상태](https://img.shields.io/github/actions/workflow/status/micro-ROS/rmw-microxrcedds/ci.yml)](https://github.com/micro-ROS/rmw-microxrcedds/actions?query=workflow%3A%22CI+rmw_microxrcedds_c%22) | [![](https://img.shields.io/github/issues/micro-ROS/rmw-microxrcedds.svg)](https://github.com/micro-ROS/rmw-microxrcedds/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/rmw-microxrcedds.svg)](https://github.com/micro-ROS/rmw-microxrcedds/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/rmw-microxrcedds/blob/humble/README.md) |
| [rosidl-typesupport-microxrcedds](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/tree/rolling) | Micro-XRCE-DDS 클라이언트 라이브러리에 대한 ROS 2 타입 지원 | [![빌드 상태](https://img.shields.io/github/actions/workflow/status/micro-ROS/rosidl_typesupport_microxrcedds/ci.yml)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/actions?query=workflow%3A%22CI+rosidl_typesupport_microxrcedds%22) | [![](https://img.shields.io/github/issues/micro-ROS/rosidl_typesupport_microxrcedds.svg)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/rosidl_typesupport_microxrcedds.svg)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/blob/master/README.md) |
| [micro-ROS-Agent](https://github.com/micro-ROS/micro-ROS-Agent) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro-ROS-Agent/tree/rolling) | ROS 2용 에이전트(브리지) | [![](https://img.shields.io/github/actions/workflow/status/micro-ROS/micro-ROS-Agent/ci.yml)](https://github.com/micro-ROS/micro-ROS-Agent/actions?query=workflow%3A%22CI+micro-ROS+Agent%22) | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS-Agent.svg)](https://github.com/micro-ROS/micro-ROS-Agent/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS-Agent.svg)](https://github.com/micro-ROS/micro-ROS-Agent/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro-ROS-Agent/blob/master/README.md) |
| [micro-ros-msgs](https://github.com/micro-ROS/micro_ros_msgs) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_msgs/tree/rolling) | micro-ROS 아키텍처 내에서 사용되는 특정 ROS 2 메시지 | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_msgs.svg)](https://github.com/micro-ROS/micro_ros_msgs/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_msgs.svg)](https://github.com/micro-ROS/micro_ros_msgs/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_msgs/blob/main/README.md) |
| [micro_ros_utilities](https://github.com/micro-ROS/micro_ros_utilities) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro_ros_utilities/tree/rolling) | 임베디드 애플리케이션용 micro-ROS 유틸리티 | [![빌드 상태](https://github.com/micro-ROS/micro_ros_utilities/actions/workflows/ci.yml/badge.svg)](https://github.com/micro-ROS/micro_ros_utilities/actions/workflows/ci.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro_ros_utilities.svg)](https://github.com/micro-ROS/micro_ros_utilities/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro_ros_utilities.svg)](https://github.com/micro-ROS/micro_ros_utilities/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro_ros_utilities/blob/main/README.md) |
| [system_modes](https://github.com/micro-ROS/system_modes) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/system_modes/tree/master) | `rclcpp`용 확장 기능 | [![빌드 상태](https://img.shields.io/badge/ci-disabled-lightgrey)](https://github.com/micro-ROS/system_modes/actions/workflows/ci.yaml?query=workflow%3A%22Test+system+modes%22) | [![](https://img.shields.io/github/issues/micro-ROS/system_modes.svg)](https://github.com/micro-ROS/system_modes/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/system_modes.svg)](https://github.com/micro-ROS/system_modes/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/system_modes/blob/master/README.md) |
| [rclc](https://github.com/ros2/rclc) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/ros2/rclc/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/ros2/rclc/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/ros2/rclc/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/ros2/rclc/tree/rolling) | ROS 2 `rcl`의 기능을 확장하기 위한 편의 함수 및 실행기(executor)와 같은 추가 개념 모음 (C 언어) | [![빌드 상태](https://github.com/ros2/rclc/actions/workflows/ci.yml/badge.svg)](https://github.com/ros2/rclc/actions/workflows/ci.yml?query=workflow%3A%22CI+RCLC%22) | [![](https://img.shields.io/github/issues/ros2/rclc.svg)](https://github.com/ros2/rclc/issues) [![](https://img.shields.io/github/issues-pr/ros2/rclc.svg)](https://github.com/ros2/rclc/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/ros2/rclc/blob/master/README.md) |


## 예시 애플리케이션 저장소 상태

| 이름 | 설명 | CI | 이슈/풀 리퀘스트 | 문서 |
| :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------ | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------- |
| [마이크로 ROS-데모스](https://github.com/micro-ROS/micro-ROS-demos) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro-ROS-demos/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro-ROS-demos/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro-ROS-demos/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro-ROS-demos/tree/rolling) | 퍼블리셔, 서브스크라이버, 사용자 지정 메시지, 서비스 및 그래프 인트로스펙션을 사용하는 일반 데모 모음 | [![빌드 상태](https://github.com/micro-ROS/micro-ROS-demos/actions/workflows/ci.yml/badge.svg)](https://github.com/micro-ROS/micro-ROS-demos/actions?query=workflow%3ACI) | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS-demos.svg)](https://github.com/micro-ROS/micro-ROS-demos/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS-demos.svg)](https://github.com/micro-ROS/micro-ROS-demos/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro-ROS-demos/blob/kilted/README.md) |
| [freertos_apps](https://github.com/micro-ROS/freertos_apps) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/freertos_apps/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/freertos_apps/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/freertos_apps/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/freertos_apps/tree/rolling) | FreeRTOS 데모 애플리케이션 | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/freertos_apps.svg)](https://github.com/micro-ROS/freertos_apps/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/freertos_apps.svg)](https://github.com/micro-ROS/freertos_apps/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/freertos_apps/blob/kilted/README.md) |
| [zephyr_apps](https://github.com/micro-ROS/zephyr_apps) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/zephyr_apps/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/zephyr_apps/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/zephyr_apps/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/zephyr_apps/tree/rolling) | Zephyr 데모 애플리케이션 | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/zephyr_apps.svg)](https://github.com/micro-ROS/zephyr_apps/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/zephyr_apps.svg)](https://github.com/micro-ROS/zephyr_apps/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/zephyr_apps/blob/kilted/README.md) |
| [raspbian_apps](https://github.com/micro-ROS/raspbian_apps) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/raspbian_apps/tree/humble) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/raspbian_apps/tree/jazzy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/raspbian_apps/tree/kilted) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/raspbian_apps/tree/rolling) | Raspbian용 데모 애플리케이션 | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/raspbian_apps.svg)](https://github.com/micro-ROS/raspbian_apps/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/raspbian_apps.svg)](https://github.com/micro-ROS/raspbian_apps/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/raspbian_apps/blob/kilted/README.md) |
| [nuttx_apps](https://github.com/micro-ROS/nuttx_apps) [![](https://img.shields.io/badge/ROS-dashing-brightgreen)](https://github.com/micro-ROS/nuttx_apps/tree/dashing) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/nuttx_apps) | NuttX 데모 애플리케이션 (**서비스 중단**) | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/nuttx_apps.svg)](https://github.com/micro-ROS/nuttx_apps/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/nuttx_apps.svg)](https://github.com/micro-ROS/nuttx_apps/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/nuttx_apps) |
| [코부키 데모](https://github.com/micro-ROS/micro-ROS_kobuki_demo) | NuttX를 통해 Olimex 보드에서 micro-ROS를 사용하여 코부키(터틀봇 2) 컨트롤러 데모 애플리케이션 | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS_kobuki_demo.svg)](https://github.com/micro-ROS/micro-ROS_kobuki_demo/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS_kobuki_demo.svg)](https://github.com/micro-ROS/micro-ROS_kobuki_demo/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro-ROS_kobuki_demo/blob/master/README.md) |
| [Crazyflie 데모](https://github.com/micro-ROS/micro-ROS_crazyflie_demo) [![](https://img.shields.io/badge/ROS-humble-brightgreen)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/tree/foxy) [![](https://img.shields.io/badge/ROS-jazzy-brightgreen)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/tree/foxy) [![](https://img.shields.io/badge/ROS-kilted-brightgreen)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/tree/foxy) [![](https://img.shields.io/badge/ROS-rolling-brightgreen)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/tree/foxy) | FreeRTOS 기반 micro-ROS를 사용한 Crazyflie 드론 데모 애플리케이션 | [![](https://img.shields.io/badge/-unavailable-lightgrey)]() | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS_crazyflie_demo.svg)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/issues) [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS_crazyflie_demo.svg)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/pulls) | [![](https://img.shields.io/badge/read-the%20docs-blue)](https://github.com/micro-ROS/micro-ROS_crazyflie_demo/blob/foxy/README.md) |

## Docker 이미지 상태

| 이미지 | 설명 | 상태 |
| -------------------------------- | ------------------------------------------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| base | ROS 2 설치 및 micro-ROS 전용 빌드 시스템 도구가 포함된 기본 이미지입니다. 다른 모든 micro-ROS 이미지의 기본 이미지로 사용됩니다. | [![Version](https://img.shields.io/docker/v/microros/base/humble?logo=docker)](https://hub.docker.com/r/microros/base/tags?page=1&name=humble) [![Version](https://img.shields.io/docker/v/microros/base/jazzy?logo=docker)](https://hub.docker.com/r/microros/base/tags?page=1&name=jazzy) [![Version](https://img.shields.io/docker/v/microros/base/kilted?logo=docker)](https://hub.docker.com/r/microros/base/tags?page=1&name=kilted) [![버전](https://img.shields.io/docker/v/microros/base/rolling?logo=docker)](https://hub.docker.com/r/microros/base/tags?page=1&name=rolling) |
| micro-ros-agent | 사전 컴파일된 micro-ROS-Agent가 포함된 이미지로, 독립 실행형 애플리케이션으로 바로 사용할 수 있습니다. | [![버전](https://img.shields.io/docker/v/microros/micro-ros-agent/humble?logo=docker)](https://hub.docker.com/r/microros/micro-ros-agent/tags?page=1&name=humble) [![버전](https://img.shields.io/docker/v/microros/base/jazzy?logo=docker)](https://hub.docker.com/r/microros/micro-ros-agent/tags?page=1&name=jazzy) [![버전](https://img.shields.io/docker/v/microros/micro-ros-agent/kilted?logo=docker)](https://hub.docker.com/r/microros/micro-ros-agent/tags?page=1&name=kilted) [![버전](https://img.shields.io/docker/v/microros/micro-ros-agent/rolling?logo=docker)](https://hub.docker.com/r/microros/micro-ros-agent/tags?page=1&name=rolling) |
| micro_ros_static_library_builder | Arduino IDE를 사용하여 애플리케이션을 개발할 때 미리 컴파일된 micro-ROS 라이브러리를 사용할 수 있도록 합니다. | [![버전](https://img.shields.io/docker/v/microros/micro_ros_static_library_builder/humble?logo=docker)](https://hub.docker.com/r/microros/micro_ros_static_library_builder/tags?page=1&name=humble) [![버전](https://img.shields.io/docker/v/microros/base/jazzy?logo=docker)](https://hub.docker.com/r/microros/micro_ros_static_library_builder/tags?page=1&name=jazzy) [![버전](https://img.shields.io/docker/v/microros/micro_ros_static_library_builder/kilted?logo=docker)](https://hub.docker.com/r/microros/micro_ros_static_library_builder/tags?page=1&name=kilted) [![버전](https://img.shields.io/docker/v/microros/micro_ros_static_library_builder/rolling?logo=docker)](https://hub.docker.com/r/microros/micro_ros_static_library_builder/tags?page=1&name=rolling) |
| micro-ros-demos | micro-ROS 기능을 체험해 볼 수 있도록 미리 컴파일된 micro-ROS 데모 애플리케이션이 포함되어 있습니다(**서비스 종료**). | ​​[![버전](https://img.shields.io/docker/v/microros/micro-ros-demos/foxy?logo=docker)](https://hub.docker.com/r/microros/micro-ros-demos/tags?page=1&name=foxy) |
| micro-ros-olimex-nuttx | Olimex STM32 E407(단종)용 플래싱 가능한 예제가 포함되어 있습니다. | [![버전](https://img.shields.io/docker/v/microros/micro-ros-demos/dashing?logo=docker)](https://hub.docker.com/r/microros/micro-ros-demos/tags?page=1&name=dashing) |
| esp-idf-microros | ESP-IDF 빌드 시스템의 구성 요소로 micro-ROS를 사용할 수 있도록 합니다(**단종됨**) | [![버전](https://img.shields.io/docker/v/microros/esp-idf-microros/latest?logo=docker)](https://hub.docker.com/r/microros/esp-idf-microros/tags?page=1&name=latest) |

## 웹페이지 소스 코드 저장소 상태

| 저장소 | 설명 | CI | 이슈 | 풀 리퀘스트 |
| :---------------------------------------------------------------------- | :------------------------------------- | :------------------------------------------------------------------------------------------------------------------------------------------------------------ | :------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------- |
| [micro-ROS.github.io](https://github.com/micro-ROS/micro-ROS.github.io) | Micro-ROS 공식 웹페이지 저장소입니다. | [![](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/pages/pages-build-deployment/badge.svg)](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/pages/pages-build-deployment) [![](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/generate_api_reference.yml/badge.svg)](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/generate_api_reference.yml) [![](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/ci.yml/badge.svg)](https://github.com/micro-ROS/micro-ROS.github.io/actions/workflows/ci.yml) | [![](https://img.shields.io/github/issues/micro-ROS/micro-ROS.github.io.svg)](https://github.com/micro-ROS/micro-ROS.github.io/issues) | [![](https://img.shields.io/github/issues-pr/micro-ROS/micro-ROS.github.io.svg)](https://github.com/micro-ROS/micro-ROS.github.io/pulls) |


## 코드 저장소 ros2/rclc의 Bloom 릴리스 상태

저장소 [github.com/ros2/rclc/](https://github.com/ros2/rclc)에 있는 패키지의 Bloom 릴리스 상태를 다양한 아키텍처 및 릴리스별로 보여줍니다.

| 패키지 | 릴리스 | amd64 | arm64 |
| :------------------------------------------------------------------------- | :------- | :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [rclc](https://github.com/ros2/rclc/tree/rolling/rclc) | Humble | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Hpr__rclc__ubuntu_jammy_amd64)](https://build.ros2.org/job/Hpr__rclc__ubuntu_jammy_amd64/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Hbin_ujv8_uJv8__rclc__ubuntu_jammy_arm64__binary)](https://build.ros2.org/job/Hbin_ujv8_uJv8__rclc__ubuntu_jammy_arm64__binary/) |
| | Jazzy | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Jpr__rclc__ubuntu_noble_amd64)](https://build.ros2.org/job/Jpr__rclc__ubuntu_noble_amd64/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Jbin_unv8_uNv8__rclc__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Jbin_unv8_uNv8__rclc__ubuntu_noble_arm64__binary/) |
| | 킬트 | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Kpr__rclc__ubuntu_noble_amd64)](https://build.ros2.org/job/Kpr__rclc__ubuntu_noble_amd64/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Kbin_unv8_uNv8__rclc__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Kbin_unv8_uNv8__rclc__ubuntu_noble_arm64__binary/) |
| | 롤링 | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Rpr__rclc__ubuntu_noble_amd64)](https://build.ros2.org/job/Rpr__rclc__ubuntu_noble_amd64/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Rbin_ufv8_uFv8__rclc__ubuntu_jammy_arm64__binary)](https://build.ros2.org/job/Rbin_ufv8_uFv8__rclc__ubuntu_jammy_arm64__binary/) |
| [rclc_examples](https://github.com/ros2/rclc/tree/rolling/rclc_examples) | 겸손함 | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Hbin_uJ64__rclc_examples__ubuntu_jammy_amd64__binary)](https://build.ros2.org/job/Hbin_uJ64__rclc_examples__ubuntu_jammy_amd64__binary/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Hbin_ujv8_uJv8__rclc_examples__ubuntu_jammy_arm64__binary)](https://build.ros2.org/job/Hbin_ujv8_uJv8__rclc_examples__ubuntu_jammy_arm64__binary/ ) |
| | Jazzy | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Jbin_uN64__rclc_examples__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Jbin_uN64__rclc_examples__ubuntu_noble_amd64__binary/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Jbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Jbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary/) |
| | 킬트 | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Kbin_uN64__rclc_examples__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Kbin_uN64__rclc_examples__ubuntu_noble_amd64__binary/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Kbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Kbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary/) |
| | 롤링 | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Rbin_uN64__rclc_examples__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Rbin_uN64__rclc_examples__ubuntu_noble_amd64__binary/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Rbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Rbin_unv8_uNv8__rclc_examples__ubuntu_noble_arm64__binary/) |
| [rclc_lifecycle](https://github.com/ros2/rclc/tree/rolling/rclc_lifecycle) | Humble | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Hbin_uJ64__rclc_lifecycle__ubuntu_jammy_amd64__binary)](https://build.ros2.org/job/Hbin_uJ64__rclc_lifecycle__ubuntu_jammy_amd64__binary/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Hbin_ujv8_uJv8__rclc_lifecycle__ubuntu_jammy_arm64__binary)](https://build.ros2.org/job/Hbin_ujv8_uJv8__rclc_lifecycle__ubuntu_jammy_arm64__binary/) |
| | Jazzy | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Jbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Jbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Jbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Jbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary/) |
| | 킬트 | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Kbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Kbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Kbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Kbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary/) |
| | 롤링 | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Rbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary)](https://build.ros2.org/job/Rbin_uN64__rclc_lifecycle__ubuntu_noble_amd64__binary/) | [![빌드 상태](https://build.ros2.org/buildStatus/icon?job=Rbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary)](https://build.ros2.org/job/Rbin_unv8_uNv8__rclc_lifecycle__ubuntu_noble_arm64__binary/) |

---

## 출처: `_docs/overview/ext_tools/index.md`
<a id="source-docs-overview-ext-tools-index-md"></a>

<스타일>
.extplatcontainer {
  높이: 300px;
  표시: 플렉스;
  플렉스 방향: 행;
  justify-content: flex-start;
  플렉스랩: 랩;
}

.extplatitem_image {
  너비: 35%;
  표시: 플렉스;
  항목 정렬: 가운데 정렬;
  콘텐츠 정렬: 가운데 정렬;
}

.extplatitem_description {
  너비: 65%;
}

.extplatitem_image img {
    최대 너비: 100%;
}
</style>

micro-ROS는 임베디드 환경에서 최고 수준의 ROS 2 엔티티를 사용할 수 있도록 **ROS 2를 마이크로컨트롤러에 도입**하는 것을 목표로 합니다.

micro-ROS에서 임베디드 플랫폼용 애플리케이션을 구축하는 방법 중 하나는 [ROS 전용 빌드 시스템](https://github.com/micro-ROS/micro_ros_setup)을 사용하는 것입니다. 이 시스템은 지원되는 플랫폼(하드웨어 및 펌웨어 모두)에서 해당 앱을 크로스 컴파일하는 데 필요한 소프트웨어를 통합하는 모듈로 구성됩니다. 또 다른 방법은 micro-ROS를 외부 또는 사용자 지정 개발 프레임워크에 통합할 수 있도록 독립형 모듈 및 구성 요소를 생성하는 것입니다. 이는 [micro-ROS를 독립형 라이브러리로 컴파일하는 전용 도구](../../tutorials/advanced/create_custom_static_library)를 통해 가능합니다.

생성된 마이크로 ROS 라이브러리의 구성은 `colcon.meta` 파일을 기반으로 합니다.

현재 외부 빌드 시스템과 통합하기 위해 존재하는 모듈은 다음과 같습니다.

### **Vulcanexus 마이크로 ROS 요소**

<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
      <a href="https://vulcanexus.org">Vulcanexus</a>는 쉽고 맞춤 설정 가능한 로봇 개발을 위한 올인원 ROS 2 툴셋입니다. 성능 향상, 시뮬레이션, 클라우드/엣지 통신, 마이크로컨트롤러 통합 등 ROS 2 네트워크를 위한 다양한 솔루션을 기본적으로 제공합니다. 특히 마이크로컨트롤러 통합은 micro-ROS를 기반으로 합니다. Vulcanexus는 무료 오픈 소스 소프트웨어이며, Humble 및 Iron 버전용 Docker 이미지로 제공됩니다. 모든 구성 요소는 지속적으로 업데이트되므로 사용자는 항상 최신 기능을 활용할 수 있습니다.
    </div>
  </div>
</div>

### **ESP-IDF용 micro-ROS 구성 요소**

<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
        ESP-IDF는 ESP32, ESP32-S 및 ESP32-C 시리즈 SoC를 위한 공식 개발 프레임워크입니다.
        현재까지 ESP-IDF v4.1 및 v4.2 버전에서 ESP32 및 ESP32-S2를 사용하여 테스트되었습니다.
        <i>ESP-IDF용 micro-ROS 컴포넌트</i>를 사용하면 폴더를 복제하거나 복사하는 것만으로 이미 생성된 ESP-IDF 프로젝트에 micro-ROS API 및 유틸리티를 통합할 수 있습니다.
        현재 지원되는 포트는 <a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/uart.html">직렬(UART)</a>입니다.
        <a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/network/esp_wifi.html">WiFi</a> 및 <a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/network/index.html#ethernet">이더넷</a>.
        <hr><b>자료:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_espidf_component">GitHub에서 ESP-IDF용 micro-ROS 컴포넌트</a></li>
            <li><a href="https://github.com/espressif/esp-idf">ESP-IDF on GitHub</a></li>
            <li><a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/">ESP-IDF 문서</a></li>
        </ul>
    </div>
  </div>

  <div class="extplatitem_image">
    <img src="https://www.espressif.com/sites/all/themes/espressif/logo-black.svg">
  </div>
</div>

### **Zephyr 빌드 시스템용 micro-ROS 모듈**

<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
        Zephyr는 보안을 염두에 두고 구축된 확장 가능한 RTOS이며, 리소스가 제한된 시스템에서 사용하기 위해 설계된 소형 커널을 기반으로 합니다.
        Zephyr 커널은 ARM Cortex-M, Intel x86, ARC, Nios II, Tensilica Xtensa 및 RISC-V를 포함한 여러 하드웨어 아키텍처를 지원하며 <a href="https://docs.zephyrproject.org/latest/boards/index.html">많은 수의 지원 보드</a>를 자랑합니다.
        <i>Zephyr용 micro-ROS 모듈</i>을 사용하면 폴더를 복제하거나 복사하는 것만으로 기존 Zephyr 기반 프로젝트에 micro-ROS API 및 유틸리티를 통합할 수 있습니다.
        <hr><b>자료:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_zephyr_module">GitHub에서 Zephyr 빌드 시스템용 micro-ROS 모듈</a></li>
            <li><a href="https://github.com/zephyrproject-rtos/zephyr">Zephyr 프로젝트의 기본 GitHub 저장소</a></li>
            <li><a href="https://github.com/zephyrproject-rtos/zephyr">제피르 프로젝트 공식 웹페이지</a></li>
        </ul>
    </div>
  </div>

  <div class="extplatitem_image">
    <img src="img/_posts/logo-zephyr.jpg">
  </div>
</div>

### **아두이노용 micro-ROS**

<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
        아두이노는 오픈 소스 플랫폼으로, 입출력 보드와 Processing/Wiring 언어를 구현하는 개발 환경을 기반으로 하며, 사용자가 손쉽게 상호작용적인 프로젝트를 제작할 수 있도록 설계되었습니다. 또한, 명령줄에서 모든 아두이노 호환 플랫폼을 사용할 수 있도록 필요한 도구를 제공하는 올인원 솔루션인 CLI(명령줄 인터페이스)도 제공됩니다.
        <i>micro-ROS for Arduino</i> 지원 패키지는 특정 플랫폼용으로 사전 컴파일된 라이브러리 세트로 제공되는 micro-ROS의 특별한 <i>베어메탈</i> 포트입니다.
        <hr><b>자료:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_arduino">GitHub에서 아두이노용 micro-ROS</a></li>
            <li><a href="https://github.com/arduino/Arduino">GitHub의 Arduino IDE</a></li>
            <li><a href="https://github.com/arduino/arduino-cli">GitHub의 Arduino CLI</a></li>
            <li><a href="https://www.arduino.cc/">아두이노 공식 웹사이트</a></li>
        </ul>
    </div>
  </div>

  <div class="extplatitem_image">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Arduino_Logo.svg/720px-Arduino_Logo.svg.png" width="190">
  </div>
</div>

### **STM32CubeMX용 micro-ROS**


<div class="extplatcontainer">
  <div class="extplatitem_description">
    <div>
        STM32CubeMX는 ST에서 개발한 STM32 마이크로컨트롤러 및 마이크로프로세서 설정용 그래픽 도구입니다. 핀 배치, 주변 장치 및 미들웨어 스택 설정을 지원하는 다양한 유틸리티를 통해 소프트웨어를 최적으로 프로그래밍하고 조작할 수 있습니다.
        <i>micro-ROS for STM32CubeMX</i>는 정적 라이브러리 빌더 <a href="https://hub.docker.com/r/microros/micro_ros_static_library_builder/">도커 이미지</a>를 사용하여 구성할 수 있으며, <a href="https://www.st.com">STMicroelectronics</a>에서 제공하는 거의 모든 보드에서 micro-ROS를 사실상 지원하므로 micro-ROS를 모든 STM32 컨트롤러 기반 프로젝트에 원활하게 통합할 수 있습니다.
        <hr><b>자료:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_stm32cubemx_utils">GitHub에서 STM32CubeMX용 micro-ROS</a></li>
            <li><a href="https://www.st.com">STMicroelectronics 공식 웹페이지</a></li>
            <li><a href="https://github.com/STMicroelectronics/STM32Cube_MCU_Overall_Offer">STMicroelectronics 공식 웹페이지</a></li>
        </ul>
    </div>
  </div>

  <div class="extplatitem_image">
    <img src="https://www.pinclipart.com/picdir/big/453-4531945_read-more-stm32cubemx-logo-clipart.png" width="190">
  </div>
</div>

{% 로고_면책 조항.md 포함 %}

---

## 출처: `_docs/overview/features/index.md`
<a id="source-docs-overview-features-index-md"></a>

<script src="https://code.jquery.com/jquery-1.12.4.min.js"></script>
<script>
함수 updateVisibilityOfFeatureDescriptions() {
  $('.feature').not('feature_is_active').find('.three_dots').show();
  $('.feature').not('feature_is_active').find('.feature_description').slideUp(500);
  $('.feature_is_active').find('.three_dots').hide();
  $('.feature_is_active').find('.feature_description').slideDown(500);
}

$(document).ready( function() {
  $('.feature_description').hide();
  updateVisibilityOfFeatureDescriptions();

  $('.feature').click( function() {
    만약 ($(this).hasClass("feature_is_active"))이면
      $(this).removeClass("feature_is_active");
    } 또 다른 {
      $('.feature').removeClass("feature_is_active");
      $(this).addClass("feature_is_active");
    }
    updateVisibilityOfFeatureDescriptions();
  });
});
</script>

<스타일>
  .세 개의 점 {
    색상: #BBBBBB;
  }
  .feature_title {
    글꼴 두께: 굵게;
    여백: 8pt 0 2pt 0;
  }
  .feature_description {
    왼쪽 여백: 3em;
  }
  .feature_description > p {
    여백: 0 0 2pt 0;
  }
</style>

Micro-ROS는 마이크로컨트롤러 기반 로봇 프로젝트에 바로 사용할 수 있도록 **7가지 핵심 기능**을 제공합니다.

<div class="feature feature_is_active">
 <div class="feature_title">모든 주요 ROS 개념을 지원하는 마이크로컨트롤러 최적화 클라이언트 API<span class="three_dots"> (...)</span></div>
 <div class="feature_description">
  <p>Micro-ROS는 노드, 발행/구독, 클라이언트/서비스, 노드 그래프, 라이프사이클 등과 같은 주요 핵심 개념들을 마이크로컨트롤러(MCU)에서 구현합니다. micro-ROS의 클라이언트 API(C 프로그래밍 언어)는 표준 ROS 2 클라이언트 지원 라이브러리(rcl)와 확장 및 편의 함수 세트(rclc)를 기반으로 합니다.</p>
  <p>rcl+rclc 조합은 MCU에 최적화되어 있습니다. 초기화 단계 후에는 동적 메모리 할당 없이 사용할 수 있습니다. rclc 패키지는 임베디드 시스템 엔지니어링에서 검증된 스케줄링 패턴을 구현할 수 있는 고급 실행 메커니즘을 제공합니다.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">ROS 2와의 완벽한 통합<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>마이크로 ROS 에이전트는 MCU 상의 마이크로 ROS 노드(즉, 컴포넌트)를 표준 ROS 2 시스템과 원활하게 연결합니다. 이를 통해 일반 ROS 노드처럼 알려진 ROS 2 도구 및 API를 사용하여 마이크로 ROS 노드에 접근할 수 있습니다.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">매우 제한된 리소스에도 불구하고 유연한 미들웨어<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>eProsima의 Micro XRCE-DDS는 심층 임베디드 시스템을 위한 미들웨어의 모든 요구 사항을 충족합니다. 이러한 이유로 micro-ROS는 극도로 제한된 자원을 위한 새로운 XRCE(Extremely Resource Constrained Environments) 표준의 DDS 구현에 사용된 애플리케이션 중 하나입니다. micro-ROS 스택의 ROS 미들웨어 인터페이스(rmw)와의 통합을 위해 런타임 시 동적 메모리 할당을 방지하기 위해 정적 메모리 풀이 도입되었습니다.</p>
  <p>미들웨어는 직렬 전송, 이더넷을 통한 UDP, Wi-Fi, 6LoWPAN 및 블루투스를 기본적으로 지원합니다. 또한 Micro XRCE-DDS 소스 코드는 추가 전송 방식 지원을 구현하기 위한 템플릿을 제공합니다.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">다중 RTOS 지원 및 범용 빌드 시스템<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>Micro-ROS는 FreeRTOS, Zephyr, NuttX 등 세 가지 인기 있는 오픈 소스 실시간 운영 체제(RTOS)를 지원합니다. POSIX 인터페이스를 제공하는 모든 RTOS에 포팅할 수 있습니다.</p>
  <p>RTOS별 빌드 시스템은 몇 가지 범용 설정 스크립트에 통합되어 있으며, 이 스크립트는 ROS 2 패키지로 제공됩니다. 따라서 ROS 개발자는 평소 사용하는 명령줄 도구를 사용할 수 있습니다. 또한 micro-ROS는 특정 RTOS 툴체인(예: ESP-IDF 및 Zephyr)과의 통합 기능을 제공합니다.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">허용 라이선스<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>Micro-ROS는 ROS 2와 동일한 관대한 라이선스인 Apache License 2.0을 따릅니다. 이 라이선스는 micro-ROS 클라이언트 라이브러리, 미들웨어 계층 및 도구에 적용됩니다.</p>
  <p>RTOS를 기반으로 프로젝트를 생성할 때는 <a href="../license/">라이선스</a> 페이지에 자세히 설명된 RTOS 프로젝트 또는 공급업체의 라이선스를 고려해야 합니다.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">활기찬 커뮤니티와 생태계<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>Micro-ROS는 공식 ROS 2 워킹 그룹인 임베디드 워킹 그룹의 지원을 받는, 지속적으로 성장하는 자율적인 커뮤니티에 의해 개발되었습니다. 이 커뮤니티는 초보자용 튜토리얼을 공유하고, Slack과 GitHub를 통해 지원을 제공하며, 매달 공개 워킹 그룹 화상 회의를 개최합니다. Micro XRCE-DDS에 대한 상업적 지원은 eProsima에서 제공합니다.</p>
  <p>이 커뮤니티는 마이크로 ROS 관련 도구도 개발합니다. 예를 들어, 마이크로 ROS 기반 애플리케이션을 MCU 하드웨어에 최적화하기 위해 특정 벤치마킹 도구가 개발되었습니다. 이러한 도구를 통해 메모리 사용량, CPU 시간 소모 및 전반적인 성능을 확인할 수 있습니다.</p>
 </div>
</div>

<div class="feature">
 <p class="feature_title">&10004; 장기적인 유지 관리 및 상호 운용성<span class="three_dots"> (...)</span></p>
 <div class="feature_description">
  <p>Micro-ROS는 잘 알려진 오픈 소스 RTOS, 표준화된 미들웨어, 그리고 표준 ROS 2 클라이언트 지원 라이브러리(rcl)와 같은 구성 요소들로 이루어져 있습니다. 이러한 방식으로, 장기적인 유지보수성을 위해 micro-ROS 고유 코드의 양을 최소화했습니다. 동시에, micro-ROS 스택은 표준 ROS 2 스택의 모듈성을 유지합니다. micro-ROS는 사용자 정의 미들웨어 레이어(따라서 표준 미들웨어) 또는 사용자 정의 ROS 클라이언트 라이브러리와 함께 사용할 수 있습니다.</p>
  <p>더 나아가, 빠르고 가벼운 <a href="https://www.omg.org/spec/DDS-XTypes">OMG DDS-XTYPES 표준</a> 통합 도구인 <a href="https://soss.docs.eprosima.com/">시스템 오브 시스템 신시사이저</a>(SOSS)를 통해 더 많은 미들웨어 프로토콜을 연결할 수 있습니다. 예를 들어, SOSS 코어의 통합 기능을 활용하여 NGSIv2(차세대 서비스 인터페이스) 표준을 통해 ROS 2 및 micro-ROS를 <a href="https://www.fiware.org/">FIWARE 컨텍스트 브로커</a>에 연결하는 SOSS-FIWARE 및 SOSS-ROS2 시스템 핸들을 개발했습니다.</p>
 </div>
</div>

계층형 및 모듈형 아키텍처

Micro-ROS는 [ROS 2 아키텍처](https://docs.ros.org/en/rolling/Concepts/Advanced/About-Internal-Interfaces.md)를 따르며, 미들웨어 플러그인 기능을 활용하여 마이크로컨트롤러에 최적화된 [DDS-XRCE](https://www.omg.org/spec/DDS-XRCE/)를 사용합니다. 또한, 리눅스 대신 POSIX 기반 RTOS(FreeRTOS, Zephyr 또는 NuttX)를 사용합니다.

<img src="img/micro-ROS_architecture.png" style="display: block; margin: auto; width: 100%; max-width: 500px;"/>

진한 파란색 구성 요소는 micro-ROS를 위해 특별히 개발되었습니다. 연한 파란색 구성 요소는 표준 ROS 2 스택에서 가져온 것입니다. 저희는 가능한 한 많은 코드를 ROS 2 메인라인 코드베이스에 기여하고자 합니다.

---

## 출처: `_docs/overview/hardware/index.md`
<a id="source-docs-overview-hardware-index-md"></a>

<스타일>
.하드웨어컨테이너 {
  높이: 380px;
  표시: 플렉스;
  플렉스 방향: 행;
  justify-content: flex-start;
  플렉스랩: 랩;
}

.하드웨어 아이템_이미지 {
  너비: 40%;
  표시: 플렉스;
  항목 정렬: 가운데 정렬;
  콘텐츠 정렬: 가운데 정렬;
}

.하드웨어품 설명 {
  너비: 60%;
}

.하드웨어 아이템 이미지 img {
    최대 너비: 100%;
    최대 높이: 80%;
}

.bulletimage{
  최대 너비: 17px;
  표시: 인라인;
  수직 정렬: 텍스트 상단;
}
</style>

Micro-ROS는 **다양한 마이크로컨트롤러에서 ROS 2를 사용할 수 있도록** 하여 임베디드 환경에서 최고 수준의 ROS 2 엔티티를 구현할 수 있도록 하는 것을 목표로 합니다.

micro-ROS의 주요 대상은 중급 32비트 마이크로컨트롤러 제품군입니다. 일반적으로 임베디드 플랫폼에서 micro-ROS를 실행하기 위한 최소 요구 사항은 메모리 제약입니다. micro-ROS의 메모리 사용량은 복잡한 문제이므로, 이를 자세히 설명하는 [전체 문서](/_docs/concepts/benchmarking/benchmarking/)와 micro-ROS 미들웨어에서 [메모리 사용량을 최적화하는 방법](../../tutorials/advanced/microxrcedds_rmw_configuration/)에 대한 튜토리얼을 제공합니다.

일반적으로 micro-ROS는 수십 킬로바이트의 RAM 메모리와 micro-ROS [클라이언트-에이전트 통신](../features/)을 가능하게 하는 통신 주변 장치를 갖춘 MCU가 필요합니다.

micro-ROS 하드웨어 지원은 두 가지 범주로 나뉩니다.
- 공식 지원 보드
- 커뮤니티 지원 이사회

*최신 하드웨어 지원 여부를 확인하려면 [micro_ros_setup 저장소](https://github.com/micro-ROS/micro_ros_setup)를 방문하세요.*

## 공식적으로 지원되는 보드

공식적으로 지원되는 보드는 공식적으로 실행 또는 테스트되었으며 LTS(장기 지원)가 보장되는 보드입니다.

<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>Renesas EK RA6M5</b> 및 <b>e2studio</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: ARM Cortex M-33 코어 @ 200MHz</li>
            <li>RAM: 512kB</li>
            <li>플래시: 최대 2MB</li>
            <li>주변기기: 이더넷, SCI, SPI, I2C, I2S, UART, USB, SDIO, CAN, GPIO, ADC/DAC, PWM</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.renesas.com/us/en/products/microcontrollers-microprocessors/ra-cortex-m-mcus/ek-ra6m5-evaluation-kit-ra6m5-mcu-group">공식 웹사이트</a></li>
            <li><a href="https://www.renesas.com/us/en/products/microcontrollers-microprocessors/ra-cortex-m-mcus/ra6m5-200mhz-arm-cortex-m33-trustzone-highest-integration-ethernet-and-can-fd">데이터시트</a></li>
            <li><a href="https://www.renesas.com/us/en/application/technologies/robotics">하드웨어 지원 정보</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> <a href="https://www.freertos.org/">FreeRTOS</a>, <a href="https://docs.microsoft.com/en-us/azure/rtos/threadx/">ThreadX</a> 및 베어메탈</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        UDP, UART, USB-CDC
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/renesas.png">
  </div>
</div>

<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>에스프레시프 ESP32</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: 초저전력 듀얼코어 Xtensa LX6</li>
            <li>RAM: 520kB</li>
            <li>플래시: 4MB</li>
            주변 장치: 이더넷 MAC, Wi-Fi 802.11 b/g/n, 블루투스 v4.2 BR/EDR, BLE, SPI, I2C, I2S, UART, SDIO, CAN, GPIO, ADC/DAC, PWM </li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.espressif.com/en/products/socs/esp32">공식 웹사이트</a></li>
            <li><a href="https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32e_esp32-wroom-32ue_datasheet_en.pdf">데이터시트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>외부 도구:</b> <a href="https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/">ESP-IDF</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        UART, WiFi UDP, 이더넷 UDP
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/esp32.jpg">
  </div>
</div>


<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>아두이노 포르텐타 H7</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: 듀얼 코어 Arm Cortex-M7 및 Cortex-M4</li>
            <li>RAM: 8MB</li>
            <li>플래시: 16MB</li>
            <li>주변기기: USB HS, 이더넷, WiFi/Bluetooth...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://store.arduino.cc/portenta-h7">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> –</li>
            <li><b>외부 도구:</b> <a href="https://www.arduino.cc/">아두이노</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        USB, WiFi UDP
  </div>
</div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/portenta.jpg">
  </div>
</div>


<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>라즈베리 파이 피코 RP2040</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: 듀얼코어 Arm Cortex-M0+</li>
            <li>RAM: 264kB</li>
            <li>플래시 메모리: 최대 16MB</li>
            <li>주변기기: I2C, SPI, PIO...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.raspberrypi.org/products/raspberry-pi-pico/">공식 웹사이트</a></li>
            <li><a href="https://github.com/micro-ROS/micro_ros_raspberrypi_pico_sdk">micro-ROS 지원 패키지</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> –</li>
            <li><b>외부 도구:</b> <a href="https://github.com/raspberrypi/pico-sdk">라즈베리 파이 피코 SDK</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/rpipico.jpg">
  </div>
</div>


<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>로보티즈 오픈CR 1.0</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: ARM Cortex-M7 STM32F746ZGT6</li>
            <li>RAM: 320kB</li>
            <li>플래시: 1024kB</li>
            <li>주변기기: 3축 IMU, 다이나믹셀 포트, SPI, I2C...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://emanual.robotis.com/_docs/en/parts/controller/opencr10/">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> –</li>
            <li><b>외부 도구:</b> <a href="https://www.arduino.cc/">아두이노</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/opencr10.png">
  </div>
</div>


<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>틴지 3.2</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: ARM Cortex-M4 MK20DX256VLH7</li>
            <li>RAM: 64kB</li>
            <li>플래시: 256kB</li>
            <li>주변기기: USB, SPI, I2C, CAN, I2S...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.pjrc.com/teensy/teensy31.html">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> –</li>
            <li><b>외부 도구:</b> <a href="https://www.arduino.cc/">아두이노</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/teensy32.jpg">
  </div>
</div>


<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>틴지 4.0/4.1</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: ARM Cortex-M7 iMXRT1062</li>
            <li>RAM: 1024kB</li>
            <li>플래시: 2048kB</li>
            <li>주변기기: USB, PWM, SPI, I2C, CAN, I2S, SDIO,...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.pjrc.com/store/teensy40.html">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> –</li>
            <li><b>외부 도구:</b> <a href="https://www.arduino.cc/">아두이노</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        USB, UART, 이더넷 UDP(4.1)
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/teensy41.jpg">
  </div>
</div>


<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>크레이지플라이 2.1 드론</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: ARM Cortex-M4 STM32F405</li>
            <li>RAM: 192kB</li>
            <li>플래시: 1MB</li>
            <li>주변 장치: 3축 IMU, 압력 센서, SPI, I2C, UART, nRF51822 무선 모듈...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.bitcraze.io/products/crazyflie-2-1/">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>외부 도구:</b> –</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        사용자 지정 라디오 링크
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/3.jpg">
  </div>
</div>


<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>STM32L4 디스커버리 키트 IoT</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: ARM Cortex-M4 STM32L4</li>
            <li>RAM: 128kB</li>
            <li>플래시: 1MB</li>
            주변기기: 블루투스, 저전력 RF 모듈, 802.11 b/g/n, NFC, 디지털 마이크 2개, 온도/습도 센서, 3축 IMU, ToF 센서...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.st.com/en/evaluation-tools/b-l475e-iot01a.html">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> <a href="https://www.zephyrproject.org/">Zephyr</a></li>
            <li><b>외부 도구:</b> <a href="https://www.zephyrproject.org/">Zephyr</a> 빌드 시스템</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        USB, UART, 이더넷 UDP
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/2.jpg">
  </div>
</div>


<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>Olimex LTD STM32-E407</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: STM32F407ZGT6 Cortex-M4F</li>
            <li>RAM: 196kB</li>
            <li>플래시: 1MB</li>
            <li>주변기기: USB OTG, 이더넷, SD 카드 슬롯, SPI, CAN, I2C...</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware">공식 웹사이트</a></li>
            <li><a href="https://github.com/OLIMEX/STM32F4/blob/master/HARDWARE/STM32-E407/STM32-E407_Rev_F.pdf">회로도</a></li>
            <li><a href="https://www.olimex.com/Products/ARM/ST/STM32-E407/resources/STM32-E407.pdf">사용자 설명서</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> <a href="https://www.zephyrproject.org/">Zephyr</a>, <a href="https://www.freertos.org/">FreeRTOS</a>, <a href="https://nuttx.apache.org/">NuttX</a></li>
            <li><b>외부 도구:</b> <a href="https://www.zephyrproject.org/">Zephyr</a> 빌드 시스템</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        USB(Z, N), UART(Z, F, N), 이더넷 UDP(F, N)
        <br><i><b>참고:</b> 편의상 RTOS 약자만 사용했습니다.</i>
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="https://www.olimex.com/Products/ARM/ST/STM32-E407/images/STM32-E407-02.jpg">
  </div>
</div>

## 커뮤니티 지원 게시판

micro-ROS 커뮤니티에서 지원하는 보드는 micro-ROS 사용자와 커뮤니티의 기여로 만들어진 것이며, 공식적인 지원이 보장되는 것은 아닙니다.

<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>아두이노 듀에</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: ARM Cortex-M3 AT91SAM3X8E</li>
            <li>RAM: 96kB</li>
            <li>플래시: 512kB</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://store.arduino.cc/arduino-due">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> –</li>
            <li><b>외부 도구:</b> <a href="https://www.arduino.cc/">아두이노</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/arduinodue.jpg">
  </div>
</div>

<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>아두이노 제로</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/features.png"> <b>주요 기능:</b>
        <ul>
            <li>MCU: ARM Cortex-M0+ ATSAMD21G18</li>
            <li>RAM: 32kB</li>
            <li>플래시: 256kB</li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://store.arduino.cc/arduino-zero">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> –</li>
            <li><b>외부 도구:</b> <a href="https://www.arduino.cc/">아두이노</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        USB, UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/arduinozero.jpg">
  </div>
</div>

<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>ST NUCLEO-F446ZE</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.st.com/en/evaluation-tools/nucleo-f446ze.html">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>외부 도구:</b> <a ref="https://www.st.com/en/development-tools/stm32cubemx.html">STM32CubeMX</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/NUCLEO-F446ZE.jpg">
  </div>
</div>

<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>ST NUCLEO-F746ZG</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.st.com/en/evaluation-tools/nucleo-f746zg.html">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>외부 도구:</b> <a ref="https://www.st.com/en/development-tools/stm32cubemx.html">STM32CubeMX</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/NUCLEO-F746ZG.jpg">
  </div>
</div>

<div class="하드웨어컨테이너">
  <div class="hardwareitem_description">
    <h3><b>ST NUCLEO-H743ZI</b></h3>
    <div>
        <img class="bulletimage" src="_docs/overview/hardware/icons/resources.png"> <b>리소스:</b>
        <ul>
            <li><a href="https://www.st.com/en/evaluation-tools/nucleo-h743zi.html">공식 웹사이트</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/platforms.png"> <b>지원되는 플랫폼:</b>
        <ul>
            <li><b>RTOS:</b> <a href="https://www.freertos.org/">FreeRTOS</a></li>
            <li><b>외부 도구:</b> <a ref="https://www.st.com/en/development-tools/stm32cubemx.html">STM32CubeMX</a></li>
        </ul>
        <img class="bulletimage" src="_docs/overview/hardware/icons/transports.png"> <b>지원되는 전송 방식:</b>
        UART
    </div>
  </div>

  <div class="hardwareitem_image">
    <img src="_docs/overview/hardware/imgs/NUCLEO-H743ZI.jpg">
  </div>
</div>

---

## 출처: `_docs/overview/license/index.md`
<a id="source-docs-overview-license-index-md"></a>

이 페이지는 micro-ROS의 라이선스 현황에 대한 개략적인 정보를 제공합니다. 이는 법률 자문으로 간주될 수 없으며, micro-ROS 기반 애플리케이션 또는 시스템(즉, "제품")에서 사용되는 모든 구성 요소의 라이선스 문서를 검토해야 할 의무를 면제하는 것은 아닙니다.

다음 아키텍처 다이어그램은 `GitHubOrganization/RepositioryName [LicenseName]` 형식으로 각 라이선스와 함께 가장 중요한 저장소를 나열합니다.

<img src="img/micro-ROS_license_overview.png" style="display: block; margin: auto; width: 100%; max-width: 650px;"/>

표준 ROS 2에서 가져온 모든 패키지는 [Apache 2.0 라이선스](https://www.apache.org/licenses/LICENSE-2.0)에 따라 제공됩니다. 마찬가지로, micro-ROS 프로젝트에서 개발된 모든 미들웨어 및 클라이언트 라이브러리 관련 패키지도 Apache 2.0 라이선스에 따라 제공됩니다. 또한, eProsima에서 구현한 DDS-XRCE 표준인 Micro XRCE-DDS도 Apache 2.0 라이선스에 따라 제공됩니다.

한 가지 예외는 micro-ROS 벤치마킹 도구입니다. 이 도구는 GPL v3 라이선스가 적용된 라이브러리에 링크되므로, 그 자체도 GPL v3 라이선스 하에 제공됩니다. 이 도구를 개발 과정에서만 사용하고 배포 제품에 포함하지 않는 한, 제품의 라이선스에는 영향을 미치지 않습니다.

특히 RTOS 수준에서 상황이 흥미로워집니다. micro-ROS 빌드 도구인 micro_ros_setup과 외부 빌드 시스템용 다양한 모듈은 Apache 2.0 라이선스 하에 제공되지만, 매우 다른 라이선스가 적용된 RTOS 및 보드 지원 구성 요소를 사용하거나 이들과 결합하여 사용합니다. 일반적인 임베디드 툴체인이 전체 소프트웨어(RTOS, micro-ROS 및 애플리케이션)를 하나의 바이너리 이미지로 빌드한다는 사실은, 개별 실행 파일과 OS 커널이 명확하게 분리된 일반적인 데스크톱 운영 체제(예: GPL에 대한 Linux 시스템 호출 예외 조항)와 비교했을 때 상황을 더욱 복잡하게 만듭니다.

저희는 micro-ROS에서 지원하는 RTOS와 관련된 다음과 같은 중요한 라이선스 세부 사항을 인지하고 있습니다.

* NuttX 라이선스 정리: 2019년 12월 아파치 소프트웨어 재단에서 인큐베이션을 거치면서 상당한 라이선스 정리 작업이 진행되었습니다. [버전 10.1 변경 로그](https://cwiki.apache.org/confluence/display/NUTTX/NuttX+10.1)에 따르면 수천 개의 NuttX 파일이 (BSD에서) Apache 2.0으로 변환되었으며 NuttX에서 사용되는 타사 라이선스 목록이 개선되었습니다.
* NuttX 및 uClibc++: NuttX 버전 10 이전에는 NuttX에서 micro-ROS를 사용하려면 LGPL 라이선스가 적용된 uClibc++ 라이브러리를 사용해야 했습니다.
* FreeRTOS용 ST 전용 확장 기능: [micro-ROS/freertos_apps](https://github.com/micro-ROS/freertos_apps/) 저장소에는 다양한 마이크로컨트롤러 제품군용 확장 기능이 포함되어 있습니다. STMicroelectronics에서 제조한 마이크로컨트롤러용 헤더 파일 중 일부는 ST의 [Ultimate Liberty 라이선스](https://www.st.com/SLA0044)에 따라 제공되며, 이 라이선스는 "STMicroelectronics에서 제조했거나 STMicroelectronics를 위해 제조된 마이크로컨트롤러 또는 마이크로프로세서 장치에서만 또는 이와 함께 사용 및 실행되어야 합니다."
* Arm® Mbed™ OS의 타사 라이선스: 타사 구성 요소의 라이선스는 저장소 루트에 있는 [LICENSE.md 파일](https://github.com/ARMmbed/mbed-os/blob/master/LICENSE.md)에 나열되어 있습니다.

...그리고 그에 상응하는 도구들:

* Zepyhr의 GPL 라이선스 빌드 스크립트: 타사 라이선스는 소스 트리(https://github.com/zephyrproject-rtos/zephyr/)에 직접 명시되어 있지만, [docs.zephyrproject.org/latest/LICENSING.html](https://docs.zephyrproject.org/latest/LICENSING.md)에서는 GPL v2에 따라 사용되는 빌드 스크립트가 소수임을 명시적으로 밝히고 있습니다.
* ESP-IDF의 GPL 라이선스 빌드 도구 파일: ESP32에 사용되는 Espressif IoT 개발 프레임워크에는 GPL v2 또는 v3 라이선스가 적용된 menuconfig(Kconfig) 파일 및 기타 여러 빌드 도구 파일이 포함되어 있습니다.
* Arduino IDE용 정적 라이브러리: [micro_ros_arduino 저장소](https://github.com/micro-ROS/micro_ros_arduino)는 Arduino IDE에서 사용할 수 있는 micro-ROS 스택의 정적 라이브러리 `libmicroros.a`를 제공합니다. 자세히 설명하면, 이 라이브러리는 적절한 크로스 컴파일러 설정을 사용하여 다양한 마이크로컨트롤러 제품군에 맞게 빌드된 여러 버전으로 제공됩니다. 라이브러리에 포함된 저장소 목록은 저장소 루트의 [`built_packages`](https://github.com/micro-ROS/micro_ros_arduino/blob/iron/built_packages) 파일에서 확인할 수 있습니다.

---

## 출처: `_docs/overview/ROS_2_feature_comparison/index.md`
<a id="source-docs-overview-ros-2-feature-comparison-index-md"></a>

micro-ROS 기능과 ROS 2 기능 비교. 다음 목록은 [https://docs.ros.org/en/rolling/The-ROS2-Project/Features.html](https://docs.ros.org/en/rolling/The-ROS2-Project/Features.md) 및 [https://docs.ros.org/en/rolling/The-ROS2-Project/Roadmap.html](https://docs.ros.org/en/rolling/The-ROS2-Project/Roadmap.md)에서 발췌했으며, [기능 및 아키텍처 페이지](https://micro-ros.github.io//_docs/overview/features/)에 정의된 주요 범주에 따라 하위 표로 정리되어 있습니다.

<스타일>
  .status_flag {
    글꼴 크기: 150%;
    글꼴 두께: 굵게;
  }
</style>

### 모든 주요 ROS 개념을 지원하는 마이크로컨트롤러 최적화 클라이언트 API

| ROS 2 기능 | | micro-ROS에서의 사용 가능 여부 |
| ------------------------------------------------------------------------- | ------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 언어별 라이브러리로 래핑된 공통 코어 클라이언트 라이브러리 | <span class="status_flag">✓∘</span> | ROS 2의 클라이언트 지원 라이브러리 [rcl](https://github.com/ros2/rcl/)을 그대로 사용합니다. [rclc](https://github.com/ros2/rclc) 패키지는 C 프로그래밍 언어용 클라이언트 라이브러리로 rcl+rclc를 사용할 수 있도록 편의 함수와 실행기를 제공합니다. *로드맵: 모든 기능을 rclc로 마이그레이션하여 rcl 위에 독립적인 추상화 계층을 구축하고 사용자 API로 활용할 계획입니다.* |
| 노드 구성 요소의 컴파일, 링크 또는 dlopen 시점의 조합 | <span class="status_flag">✓</span> | 컴파일 시점에만 조합이 가능합니다. 런타임 시점의 조합은 RTOS에 따라 크게 달라집니다. |
| 관리형 라이프사이클을 사용하는 노드 지원 | <span class="status_flag">✓</span> | [rclc_lifecycle](https://github.com/ros2/rclc/blob/master/rclc_lifecycle/) 패키지는 라이프사이클 상태 머신과 해당 편의 함수를 포함하는 rcl 노드를 제공하는 `rclc_lifecycle_node` 유형을 제공합니다. |
| 타입 및 토픽 메모리를 정적 및 동적으로 처리하기 위한 유틸리티 | <span class="status_flag">✓</span> | [micro_ros_utilities](https://github.com/micro-ROS/micro_ros_utilities)는 micro-ROS 할당자 또는 정적 메모리 풀을 사용하여 타입 메모리를 처리하는 API를 제공합니다. |

### ROS 2와의 완벽한 통합

| ROS 2 기능 | | micro-ROS에서의 사용 가능 여부 |
| -------------------------------------------------------------- | ------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 토픽 기반 게시/구독 | <span class="status_flag">✓</span> | 사용 가능하지만, 동적 메모리 할당을 방지하기 위해 고정 크기 메시지 유형만 지원합니다. |
| 클라이언트 및 서비스 | <span class="status_flag">✓</span> | 사용 가능하지만 동적 메모리 할당을 방지하기 위해 고정 크기 메시지 유형만 지원됩니다. |
| ROS 1 -- ROS 2 통신 브리지 | <span class="status_flag">✓</span> | 표준 ROS 1 -- ROS 2 브리지 또는 SOSS-mediate 브리지는 micro-ROS 에이전트를 통해 micro-ROS 노드와 통신하는 데 사용할 수 있습니다. |
| 조치 | <span class="status_flag">✓</span> | RCLC 레벨에서 사용 가능합니다. |
| 파라미터 | <span class="status_flag">✓∘</span> | 파라미터 서버는 micro-ROS 클라이언트에 구현되어 있습니다. 파라미터 클라이언트는 아직 사용할 수 없습니다. |
| 노드 그래프 | <span class="status_flag">✓</span> | ROS 2에서와 같이 사용 가능합니다. |
| 검색 | <span class="status_flag">✓+</span> | ROS 2에서와 같이 엔티티 간 검색이 가능합니다. 클라이언트가 네트워크에서 에이전트를 검색할 수 있는 추가 검색 메커니즘이 제공됩니다. |
| 동일한 API를 사용한 프로세스 간 및 프로세스 내 통신 | | micro-ROS 클라이언트에서 MCU의 공유 메모리 프로세스 간 통신이 가능합니다. 또한 미들웨어는 스레드 안전 작동을 구현할 수 있습니다. |
| 확장 가능한 프레임워크를 사용하는 명령줄 인트로스펙션 도구 | <span class="status_flag">✓</span> | 그래프 지원 덕분에 표준 ROS 2 도구를 사용하여 에이전트를 통해 마이크로 ROS 노드를 실행하는 마이크로프로세서에서 ROS 2 데이터 공간의 토폴로지를 인트로스펙션할 수 있습니다. 동시에 표준 ROS 2 노드는 네트워크에 있는 마이크로 ROS 엔티티에 대한 정보를 가져올 수 있습니다. |
| 여러 노드를 조율하는 실행 시스템 | <span class="status_flag">₋</span> | MCU에서 micro-ROS 노드를 위한 실행 시스템은 현재 제공되지 않습니다. 이러한 시스템은 RTOS에 크게 의존합니다. micro-ROS와 함께 개발된 시스템 모드 개념을 통해 ROS 2 및 micro-ROS 노드를 함께 런타임에 구성/오케스트레이션할 수 있습니다. |
| 노드 및 토픽에 대한 네임스페이스 지원 | <span class="status_flag">✓</span> | ROS 2에서와 같이 사용 가능합니다. |
| ROS 이름의 정적 재매핑 | <span class="status_flag">∗</span> | *표준 rcl API를 통해 인수로 전달될 경우 사용 가능해야 함 - 확인 필요.* |
| 시스템 클럭을 사용한 속도 및 절전 모드 지원 | <span class="status_flag">∗</span> | rcl 타이머는 POSIX API를 사용합니다. NuttX에서 성공적으로 테스트되었지만 해상도가 매우 낮습니다. 하드웨어 타이머를 사용하면 더 높은 해상도를 얻을 수 있지만, 이는 MCU 및 RTOS에 크게 의존합니다. *이 기능은 추가 조사가 필요합니다.* |
| 시뮬레이션 시간 지원 | <span class="status_flag">∗</span> | *기본적으로 지원될 수 있지만 확인이 필요합니다.* 시뮬레이션 시간을 사용하는 HIL 환경은 특수한 경우로 간주합니다. |

### 자원 제약이 매우 심하지만 유연한 미들웨어

| ROS 2 기능 | | micro-ROS에서의 사용 가능 여부 |
| ----------------------------------------------------------- | ---------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| DDS-XRCE 및 DDS를 통한 전송 및 직렬화 | <span class="status_flag">✓+</span> | 사용 가능한 전송 방식: UDP, 직렬(UART) 및 [Micro XRCE-DDS](https://github.com/eProsima/Micro-XRCE-DDS)에서 활성화된 사용자 지정 전송 방식. 클라이언트와 에이전트 간의 직렬화는 [Micro-CDR](https://github.com/eProsima/Micro-CDR)에서, 에이전트와 표준 DDS 간의 직렬화는 [Fast-CDR](https://github.com/eProsima/Fast-CDR)에서 제공합니다. |
| 런타임에 선택 가능한 여러 DDS 구현 지원 | <span class="status_flag">✓</span> | Micro XRCE-DDS 에이전트를 통한 지원은 원칙적으로 가능하지만 컴파일 타임에만 가능합니다. |
| 이상적이지 않은 네트워크 환경 처리를 위한 서비스 품질(QoS) 설정 | <span class="status_flag">✓+</span> | DDS-XRCE 와이어 프로토콜을 통한 통신에는 신뢰성(reliable)과 최선 노력(best-effort)의 두 가지 QoS 방식이 제공되며, 컴파일 시 설정할 수 있습니다. ROS 2 데이터 공간과의 통신의 경우, 마이크로 ROS 엔티티는 [참조 생성](/_docs/tutorials/advanced/create_dds_entities_by_ref/)을 통해 생성될 때 DDS에서 허용하는 모든 QoS 기능을 활용할 수 있습니다. |
| DDS 보안 지원 | <span class="status_flag">✓-</span> | 클라이언트와 에이전트 간의 통신 과정에서는 아직 보안이 지원되지 않습니다. 하지만 micro-ROS 에이전트는 DDS 엔티티 생성 시 Fast DDS 보안 기능을 활용할 수 있습니다. *로드맵: Micro XRCE-DDS의 보안 메커니즘 구현은 향후 릴리스에서 진행될 예정입니다.* |
| IDL | <span class="status_flag">✓+</span> | micro-ROS는 ROS 2와 동일한 IDL 유형을 지원합니다. 클라이언트가 처리하는 IDL로부터 C 코드 생성은 [Micro-XRCE-DDS-Gen](https://github.com/eProsima/Micro-XRCE-DDS-Gen) 라이브러리를 통해 수행되며, 에이전트가 처리하는 C++ 유형 생성은 [Fast-DDS-Gen](https://github.com/eProsima/Fast-DDS-Gen)을 통해 수행됩니다. |
| 로깅 | <span class="status_flag">∗</span> | *원칙적으로 표준 로깅 메커니즘의 일부로 제공될 수 있지만 동적 메시지 크기로 인해 Micro-XRCE-DDS에서는 지원되지 않습니다. 확인 필요...* |

### 범용 빌드 시스템을 통한 멀티 RTOS 지원

| 특징 | | micro-ROS에서의 사용 가능 여부 |
| --------------------------- | ----------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 빌드 시스템 | <span class="status_flag">✓</span> | micro-ROS는 micro-ROS 애플리케이션을 빌드하는 두 가지 방법을 제공합니다. 첫 번째는 ROS 2 워크스페이스에 통합된 [micro_ros_setup](https://github.com/micro-ROS/micro_ros_setup) 도구를 사용하는 것입니다. 이 방식을 사용하면 NuttX, FreeRTOS 및 Zephyr의 빌드 시스템이 colcon과 통합됩니다. 다른 하나는 외부 개발 프레임워크(예: ESP-IDF 및 Zephyr 빌드 시스템)의 구성 요소로 micro-ROS를 제공하는 것입니다. |
| 지원되는 하드웨어 | <span class="status_flag">✓</span> | micro-ROS는 공식적으로 네 가지 보드를 지원합니다. 현재 모든 공식 포트는 ST사의 STM32 시리즈와 Espressif사의 ESP32를 기반으로 합니다. 자세한 내용은 [여기](https://micro-ros.github.io/_docs/overview/hardware/)에서 확인하세요. 사용자들이 더 많은 보드를 포팅했으며, [전체 목록](https://github.com/micro-ROS/micro_ros_setup#supported-platforms)에서 확인할 수 있습니다. |
| 지원되는 운영 체제 | <span class="status_flag">✓</span> | micro-ROS는 Linux 및 Windows 외에도 FreeRTOS, Zephyr, NuttX와 같은 RTOS를 지원합니다. |

### 마이크로 ROS 관련 특징

| 특징 | | micro-ROS에서의 사용 가능 여부 |
| ----------------------------------------- | ------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| ROS 2 모바일 로봇 데모 | <span class="status_flag">✓</span> | 여러 ROS 2 + micro-ROS 로봇 데모를 이용할 수 있습니다. [https://micro-ros.github.io/_docs/tutorials/demos/](https://micro-ros.github.io/_docs/tutorials/demos/)를 참조하세요. |
| 실시간 코드 지원 | <span class="status_flag">✓</span> | 실시간 동작은 micro-ROS의 일반적인 사용에 있어 핵심적인 요소입니다. [rclc Executor](https://github.com/ros2/rclc/tree/master/rclc)는 실시간으로 처리해야 하는 애플리케이션을 구현하기 위한 메커니즘을 제공합니다. 하위 레벨에서는 Micro XRCE-DDS 라이브러리가 동적 메모리를 사용하지 않고, 명확하게 정의된 시간 내에 작업을 수행하는 함수를 제공함으로써 실시간성과 결정성을 보여줍니다. |
| "베어메탈" 마이크로컨트롤러 지원 | <span class="status_flag">✓</span> | micro-ROS는 ROS 2를 MCU에 구현하는 것을 목표로 합니다. micro-ROS의 표준 접근 방식은 RTOS(예: FreeRTOS, Zephyr, NuttX)를 기반으로 한다는 전제하에 개발되었습니다. 최근 개발은 이러한 요구 사항을 완화하는 데 초점을 맞추고 있으며, Arduino IDE와의 통합은 진정한 micro-ROS 베어메탈 지원을 향한 첫걸음입니다. |
| 지속적 통합 | <span class="status_flag">✓∘</span> | 현재 micro-ROS의 CI는 GitHub와 GitLab에 분산되어 있습니다. *2020년 말까지 모든 CI는 GitHub의 새로운 CI 액션으로 완전히 이전될 예정입니다.* 표준 ROS 2용으로 릴리스된 패키지는 [build.ros2.org](http://build.ros2.org/)에서도 빌드 및 테스트됩니다. |
| 문서 | <span class="status_flag">✓</span> | 상위 수준 문서는 [micro-ros.github.io](https://micro-ros.github.io/)에서 확인할 수 있습니다. 자세한 내용은 [github.com/micro-ROS/](https://github.com/micro-ROS/)에 있는 관련 micro-ROS 저장소의 README.md 파일을 참조하십시오. 미들웨어 구현에 대한 정보는 [Micro XRCE-DDS 문서](https://micro-xrce-dds.docs.eprosima.com/en/latest/)를 참조하십시오. |
| P2P 기능 | <span class="status_flag">✓∘</span> | 브로드캐스트를 통해 구현된 프로토타입 P2P 기능입니다. 현재 QoS는 지원되지 않습니다. *로드맵: 진정한 지점 간 연결을 구현하기 위해 프로토타입을 개선할 예정입니다.* |
| 메모리 사용량 | <span class="status_flag">✓</span> | 일반적인 micro-ROS 애플리케이션의 메모리 사용량에 대한 종합적인 프로파일링은 [여기](https://micro-ros.github.io/_docs/concepts/benchmarking/memo_prof/)에서 확인할 수 있습니다.                                                                                                                                                                                                                                                                                       |

아래는 위 표에 사용된 기호들의 범례입니다.

| 기호 설명 | |
| ------------------------------------------------ | ------------------------------------------------------------------------------ |
| <span class="status_flag">✓</span> | 사용 가능합니다. |
| <span class="status_flag">✓+</span> | 에이전트-DDS 및 클라이언트-에이전트 양측 통신에서 사용 가능합니다. |
| <span class="status_flag">✓-</span> | 에이전트-DDS 측 통신에서는 사용 가능하지만 클라이언트-에이전트 측에서는 사용할 수 없습니다. |
| <span class="status_flag">✓∘</span> | 일부 개발 중인 기능이 제공됩니다. |
| <span class="status_flag">∘</span> | 곧 구현될 예정입니다. |
| <span class="status_flag">∗</span> | 추가 조사가 필요합니다. |
| <span class="status_flag">₋</span> | 현재 이용할 수 없습니다. |

---

## 출처: `_docs/overview/rtos/index.md`
<a id="source-docs-overview-rtos-index-md"></a>

<스타일>
.rtoscontainer {
  높이: 자동;
  표시: 플렉스;
  플렉스 방향: 행;
  justify-content: flex-start;
  플렉스랩: 랩;
}

.rtositem_image {
  너비: 50%;
  표시: 플렉스;
  항목 정렬: 가운데 정렬;
  콘텐츠 정렬: 가운데 정렬;
}

.rtositem_description {
  너비: 50%;
}

.rtositem_image img {
    최대 너비: 70%;
}
</style>

micro-ROS는 임베디드 환경에서 최고 수준의 ROS 2 엔티티를 사용할 수 있도록 **ROS 2를 마이크로컨트롤러에 도입**하는 것을 목표로 합니다.

마이크로 ROS에 대한 표준적인 접근 방식은 그 아래에 실시간 운영 체제가 있다고 가정합니다.

최근 개발 동향은 이러한 요구 사항을 완화하는 것을 목표로 하고 있으며, 아두이노 IDE와의 통합은 진정한 micro-ROS 베어메탈 지원을 향한 중요한 단계이지만, RTOS 기반 지원은 여전히 ​​micro-ROS의 주요 진입점입니다.

현재 micro-ROS는 Linux 및 Windows 외에도 FreeRTOS, Zephyr, NuttX와 같은 RTOS에서 지원됩니다.
세 가지 RTOS 모두 [micro-ROS 빌드 시스템](https://github.com/micro-ROS/micro_ros_setup)을 통해 기본적으로 다운로드할 수 있으며, 생성 시 선택할 수 있습니다.
새로운 펌웨어 작업 공간.
각 운영 체제에서 micro-ROS 애플리케이션을 처음 실행하는 방법에 대한 자세한 튜토리얼은 [여기](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/)에서 확인할 수 있습니다.
지원되는 모든 RTOS에 공통적인 기능은 POSIX 표준을 어느 정도 준수하는 API, 매우 낮은 메모리 사용량, 그리고 micro-ROS 앱 동작의 결정성을 보장하는 다양한 스케줄링 알고리즘의 제공입니다.

지원되는 각 RTOS에 대한 자세한 내용은 아래에서 확인하세요.
실시간 운영 체제(RTOS)를 선택하게 된 이유에 대한 보다 자세한 설명과 이 세 가지 RTOS 간의 기술적 비교는 [개념 섹션의 RTOS 페이지](https://micro-ros.github.io/_docs/concepts/rtos/)를 참조하십시오. 이 페이지는 개략적인 개요만을 제공하기 위한 것입니다.


## 프로젝트에서 공식적으로 지원하는 실시간 운영 체제

이 섹션에서는 프로젝트에서 공식적으로 지원하는 세 가지 RTOS의 주요 기능을 살펴보고 유용한 문서 링크를 제공합니다.

### **FreeRTOS**

FreeRTOS는 MIT 라이선스에 따라 배포됩니다. 특히 단순성과 Amazon에서 제공하는 a:FreeRTOS 확장 기능으로 잘 알려져 있습니다. micro-ROS에서는 POSIX 확장 기능을 사용합니다.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>주요 특징:</b>
        <ul>
            <li>매우 작은 설치 공간</li>
            <li>POSIX 확장 기능 사용 가능</li>
            <li>메모리 관리 도구</li>
            <li>우선순위를 지정할 수 있는 표준 작업 및 유휴 작업 사용 가능</li>
            <li>전송 리소스: TCP/IP 및 lwIP</li>
        </ul>
        <b>FreeRTOS 리소스:</b>
        <ul>
            <li><a href="https://www.freertos.org/">FreeRTOS 공식 웹사이트</a></li>
            <li><a href="https://www.freertos.org/a00104.html">다운로드</a></li>
            <li><a href="https://www.freertos.org/Documentation/RTOS_book.html">문서</a></li>
        </ul>
        <b>FreeRTOS 및 micro-ROS:</b>
        <ul>
            <li><a href="https://www.freertos.org/2020/09/micro-ros-on-freertos.html">FreeRTOS에서 micro-ROS 사용</a></li>
            <li><a href="https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/freertos/">FreeRTOS 기반 최초의 micro-ROS 애플리케이션</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <img src="https://upload.wikimedia.org/wikipedia/commons/4/4e/Logo_freeRTOS.png">
  </div>
</div>

### **제피르**

제피르(Zephyr)는 리눅스 재단 프로젝트에서 개발된 비교적 새로운 오픈 소스 실시간 운영체제(RTOS)입니다. 이 프로젝트에는 여러 유명 반도체 기업들이 참여하고 있습니다. 제피르는 기능 안전 인증을 목표로 개발 중이며, 만약 인증을 획득한다면 오픈 소스 RTOS 중 최초로 이러한 인증을 받는 사례가 될 것입니다.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>주요 특징:</b>
        <ul>
            <li>작은 발자국</li>
            <li>네이티브 POSIX 포트</li>
            <li>크로스 아키텍처: <a href="https://docs.zephyrproject.org/latest/boards/index.html">지원되는 보드</a></li>
            <li>다양한 커널 서비스 모음</li>
            <li>다양한 스케줄링 알고리즘</li>
            <li>높은 설정 가능성/모듈식 설계로 유연성 제공</li>
            <li>네이티브 Linux, macOS 및 Windows 개발</li>
        </ul>
        <b>Zephyr 리소스:</b>
        <ul>
            <li><a href="https://www.zephyrproject.org/">제피르 공식 웹사이트</a></li>
            <li><a href="https://docs.zephyrproject.org/latest/guides/west/">메타툴 *서부*</a></li>
            <li><a href="https://github.com/zephyrproject-rtos/zephyr">다운로드</a></li>
            <li><a href="https://docs.zephyrproject.org/latest/">문서</a></li>
        </ul>
        <b>제피르 & 마이크로-ROS:</b>
        <ul>
            <li><a href="https://www.zephyrproject.org/micro-ros-a-member-of-the-zephyr-project-and-integrated-into-the-zephyr-build-system-as-a-module/">Zephyr에서 micro-ROS 사용</a></li>
            <li><a href="https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/zephyr/">Zephyr에서 실행되는 첫 번째 micro-ROS 애플리케이션</a></li>
            <li><a href="https://micro-ros.github.io/_docs/tutorials/core/zephyr_emulator/">Zephyr 에뮬레이터에서 실행되는 첫 번째 micro-ROS 애플리케이션</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <img src="img/_posts/logo-zephyr.jpg">
  </div>
</div>

### **NuttX**

NuttX는 POSIX를 비롯한 표준 준수와 작은 설치 공간을 강조합니다. 8비트에서 32비트 마이크로컨트롤러에 설치할 수 있습니다. POSIX 및 ANSI 표준을 사용하고 UNIX API를 모방하여 Linux에 익숙한 개발자들에게 친숙한 환경을 제공합니다. NuttX는 BSD 라이선스 하에 배포되며 GNU 툴체인을 사용합니다. NuttX에서 사용하는 uClib++ 라이브러리는 더욱 엄격한 GNU LGPL 버전 3 라이선스 하에 배포된다는 점에 유의하십시오.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>주요 특징:</b>
        <ul>
            <li>높은 수준의 POSIX 규격 인터페이스</li>
            <li>풍부한 기능을 갖춘 OS 세트</li>
            확장성이 매우 뛰어남</li>
            <li>실시간 동작: 완전 선점 가능, 고정 우선순위, 라운드 로빈 및 "간헐적" 스케줄링</li>
        </ul>
        <b>NuttX 리소스:</b>
        <ul>
            <li><a href="https://nuttx.apache.org/">NuttX 공식 웹사이트</a></li>
            <li><a href="https://nuttx.apache.org/download/">다운로드</a></li>
            <li><a href="https://cwiki.apache.org/confluence/display/NUTTX/Nuttx">문서</a></li>
        </ul>
        <b>NuttX & micro-ROS:</b>
        <ul>
            <li><a href="https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/nuttx/">NuttX 기반 최초의 micro-ROS 애플리케이션</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <img src="https://upload.wikimedia.org/wikipedia/commons/b/b0/NuttX_logo.png">
  </div>
</div>

## 베어메탈 서포트

micro-ROS가 헤더 파일과 함께 독립형 라이브러리로 출시되고 Arduino IDE에서 지원됨에 따라 micro-ROS는 베어메탈 애플리케이션으로도 사용할 수 있습니다.
자세한 내용은 전용 [저장소](https://github.com/micro-ROS/micro_ros_arduino)에서 확인하세요.

### **아두이노 베어메탈 지원**

오픈 소스 아두이노 소프트웨어(IDE)는 모든 아두이노 보드를 쉽게 프로그래밍할 수 있도록 해주는 라이브러리입니다.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>주요 특징:</b>
        <ul>
            <li>저렴한</li>
            <li>크로스 플랫폼</li>
            <li>간단하고 명확한 프로그래밍 환경</li>
            <li>오픈 소스 및 확장 가능한 소프트웨어</li>
            <li>오픈 소스 및 확장 가능한 하드웨어</li>
        </ul>
        <b>자료:</b>
        <ul>
            <li><a href="https://www.arduino.cc/">아두이노 공식 웹사이트</a></li>
            <li><a href="https://github.com/micro-ROS/micro_ros_arduino">micro_ros_arduino 저장소</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/87/Arduino_Logo.svg/720px-Arduino_Logo.svg.png" width="500">
  </div>
</div>

## 실험적으로 지원되는 실시간 운영 체제

### **Arm® Mbed™ OS**

Mbed OS는 32비트 ARM Cortex-M 마이크로컨트롤러를 사용하는 IoT 애플리케이션을 위해 설계된 오픈 소스 RTOS입니다.

<div class="rtoscontainer">
  <div class="rtositem_description">
    <div>
        <b>주요 특징:</b>
        <ul>
            <li>작은 발자국</li>
            <li>다수의 POSIX 호환 모듈</li>
            <li>선점형 스케줄링</li>
            <li>Arm 컴파일러 및 GNU Arm Embedded 지원</li>
            <li>온라인 컴파일러는 <a href="https://os.mbed.com/compiler/">https://os.mbed.com/compiler/</a></li>에서 이용할 수 있습니다.
        </ul>
        <b>Mbed OS 리소스:</b>
        <ul>
            <li><a href="https://os.mbed.com/">MBed 공식 웹사이트</a></li>
            <li><a href="https://github.com/ARMmbed/mbed-os">소스 코드</a></li>
            <li><a href="https://os.mbed.com/_docs/">문서</a></li>
        </ul>
        <b>Mbed OS 및 micro-ROS:</b>
        <ul>
            <li><a href="https://github.com/micro-ROS/micro_ros_mbed">Mbed용 micro-ROS 예제</a></li>
        </ul>
    </div>
  </div>

  <div class="rtositem_image">
    <!-- 로고 사용에는 명시적인 허가가 필요합니다. https://www.arm.com/company/policies/trademarks/arm-trademark-list/mbed-trademark 참조.
         해당 지원 기능이 더 이상 실험적인 단계에 머무르지 않는다면 이 점을 고려해야 합니다.
  </div>
</div>

{% 로고_면책 조항.md 포함 %}

---

## 출처: `_docs/overview/users_and_clients/index.md`
<a id="source-docs-overview-users-and-clients-index-md"></a>

<!-- CSS 및 JS -->

<style type="text/css">
.모달 {
  표시: 없음;
  위치: 고정됨;
  z-인덱스: 3;
  왼쪽: 0;
  상단: 0;
  너비: 100%;
  높이: 100%;
  오버플로우: 자동;
  배경색: rgb(0,0,0);
  배경색: rgba(0,0,0,0.4);
}

.modal-content {
  배경색: #fefefe;
  마진: 자동 15%;
  패딩: 20px;
  테두리: 1px 솔리드 #888;
  너비: 50%;
}

.logoImage {
  최대 높이: 100px;
  최대 너비: 200px;
}

.포토갤러리{
  패딩: 0;
  여백: 0;
  리스트 스타일: 없음;
  표시: 플렉스;
  플렉스랩: 랩;
  콘텐츠 정렬: 주변 공간;
}

.flex-item {
  플렉스: 1 0 33%;
  여백: 5px;
  높이: 100px;
  표시: 플렉스;
  항목 정렬: 가운데 정렬;
  콘텐츠 정렬: 가운데 정렬;
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
        modal.style.display = "블록";
        modal_content.innerHTML = txt
        modal_title.innerHTML = 제목
        modal_url.innerHTML = URL
        modal_url.href = "http://" + url
    }

    close_modal = () => {
        modal.style.display = "없음";
    }

    window.onclick = (이벤트) => {
        이벤트 대상이 모달인 경우 {
            close_modal();
        }
    }
}

</script>


<div id="myModal" class="modal">
  <div class="modal-content">
    <span id="myModal-close" class="close" onclick="close_modal()">×</span>
    <h2 id="myModal-title"></h2>
    <p><a id="myModal-url" href="" target="_blank" style="margin-bottom: 10px;"></a></p>
    <p id="myModal-content" style="text-align: justify;"></p>
  </div>
</div>

<!-- 내용 -->
<h2>고객</h2>
<div class="photo-gallery">
  {% for image in page.customers_list %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>

<h2>EU 프로젝트 OFERA 회원</h2>
<div class="photo-gallery">
  {page.ofera_consortium %의 이미지에 대한 %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>


<h2>파트너</h2>
<div class="photo-gallery">
  {% for image in page.partners_list %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>

<h2>사용자 및 미들웨어 사용자</h2>
<div class="photo-gallery">
  {% for image in page.users %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>

<h2>협력자</h2>
<div class="photo-gallery">
  {% 페이지 협업자의 이미지에 대한 %}
    <div class="flex-item">
        <img class="logoImage" src="_docs/overview/users_and_clients/{{ image.path }}" style="cursor:pointer;" alt="{{ image.title}}" onclick="open_modal('{{ image.title }}','{{ image.url }}','{{ image.text }}')"/>
    </div>
  {% endfor %}
</div>

{% 로고_면책 조항.md 포함 %}

---

## 출처: `_docs/privacy.md`
<a id="source-docs-privacy-md"></a>

### 개인정보 보호정책

개인 데이터(이하 "데이터"라 함)는 웹사이트와 그 콘텐츠, 그리고 웹사이트에서 제공되는 서비스를 기능적이고 사용자 친화적으로 제공하는 데 필요한 범위 내에서만 처리됩니다.

유럽연합 일반 데이터 보호 규정(GDPR) 제4조 1항에 따르면, "처리"란 자동화된 수단 여부에 관계없이 개인 데이터에 대해 수행되는 수집, 기록, 구성, 구조화, 저장, 적응, 변경, 검색, 조회, 사용, 전송을 통한 공개, 배포 또는 기타 방법으로 제공, 정렬 또는 결합, 제한, 삭제 또는 파기와 같은 모든 작업 또는 일련의 작업을 의미합니다.

본 개인정보 처리방침은 당사가 직접 또는 타사와 공동으로 처리하는 데이터의 유형, 범위, 목적, 기간 및 법적 근거에 대해 알려드리기 위한 것입니다. 또한, 당사 웹사이트 최적화 및 사용자 경험 개선을 위해 사용하는 타사 구성 요소에 대해서도 아래에서 안내해 드리며, 이로 인해 해당 타사가 수집 및 관리하는 데이터도 처리될 수 있습니다.

#### 당사가 귀하의 데이터를 관리하는 방식에 대한 정보

개인정보보호법상 이 웹사이트의 책임자(이하 "관리자")는 다음과 같습니다.

eProsima

Plaza de la Encina 10-11 Nucleo 4 2ª Planta,

28760 트레스 칸토스,

마드리드, 스페인

이메일: info@eprosima.com

전화번호: +34 918043448

#### 사용자 및 데이터 주체의 권리

아래에서 더 자세히 설명될 데이터 처리와 관련하여 사용자 및 데이터 주체는 다음과 같은 권리를 가집니다.

* 자신에 관한 데이터가 처리되고 있는지 여부에 대한 확인, 처리되는 데이터에 대한 정보, 데이터 처리의 성격에 대한 추가 정보 및 데이터 사본을 받을 권리(GDPR 제15조 참조).
* 부정확하거나 불완전한 데이터를 수정 또는 보완하기 위해 (GDPR 제16조 참조)
* 자신에 관한 데이터의 즉각적인 삭제(GDPR 제17조 참조), 또는 GDPR 제17조 3항에 규정된 바와 같이 추가 처리가 필요한 경우, GDPR 제18조에 따라 해당 처리를 제한할 것.
* 자신에 관한 데이터 및/또는 자신이 제공한 데이터의 사본을 수신하고, 이를 다른 제공자/관리자에게 전송받을 권리(GDPR 제20조 참조).
* 개인정보 처리자가 자신에 관한 데이터를 개인정보 보호 규정을 위반하여 처리하고 있다고 판단하는 경우 감독 기관에 불만을 제기할 수 있는 권리(GDPR 제77조 참조).

또한, 데이터 관리자는 GDPR 제16조, 제17조 제1항, 제18조에 따라 데이터를 공개하는 모든 수신자에게 해당 데이터의 수정, 삭제 또는 처리 제한 사항을 알려야 할 의무가 있습니다. 다만, 이러한 통지가 불가능하거나 과도한 노력이 필요한 경우에는 이 의무가 적용되지 않습니다. 그럼에도 불구하고, 사용자는 이러한 수신자에 대한 정보를 알 권리가 있습니다.

마찬가지로, GDPR 제21조에 따라 사용자 및 정보 주체는 GDPR 제6조 제1항 f호에 의거하여 데이터 처리자가 향후 자신의 데이터를 처리하는 것에 대해 이의를 제기할 권리가 있습니다. 특히, 직접 광고 목적의 데이터 처리에 대한 이의 제기가 허용됩니다.

#### 데이터 처리 관련 정보

당사 웹사이트 이용 시 처리되는 귀하의 데이터는 저장 목적이 소멸되는 즉시 삭제 또는 차단됩니다. 단, 해당 삭제가 법적 보존 의무를 위반하지 않거나 아래에 달리 명시된 경우는 예외입니다.

Anwaltskanzlei Weiß 및 파트너에 대한 모델 데이터 보호 정책

### 쿠키 사용

쿠키란 무엇인가요?

쿠키는 웹사이트를 방문할 때 웹사이트가 사용자의 컴퓨터나 모바일 기기에 저장하는 작은 텍스트 파일입니다.
이 기능은 웹사이트가 사용자의 활동 및 기본 설정(로그인, 언어, 글꼴 크기 및 기타 표시 설정 등)을 일정 기간 동안 기억할 수 있도록 해주므로, 사이트에 다시 방문하거나 페이지를 이동할 때마다 이러한 정보를 다시 입력할 필요가 없습니다.

쿠키는 어떻게 사용되나요?

저희는 페이지 방문자 수를 추적하는 유일한 목적으로 쿠키를 사용합니다.
타사 애플리케이션인 Google Analytics에서 해당 용도로 사용되는 쿠키를 제공합니다.

Google 애널리틱스는 웹사이트 및 앱 소유자가 방문자가 해당 플랫폼과 어떻게 상호 작용하는지 이해하는 데 도움이 되는 Google의 분석 도구입니다.
구글은 쿠키를 사용하여 웹사이트 이용 정보를 수집하고 통계 자료를 보고할 수 있지만, 이 과정에서 개별 방문자의 신원을 개인적으로 식별하지는 않습니다.
구글 애널리틱스에서 주로 사용하는 쿠키는 '_ga' 쿠키입니다.

웹사이트 사용 통계를 보고하는 것 외에도, Google Analytics는 위에 설명된 일부 광고 쿠키와 함께 Google 속성(예: Google 검색) 및 웹 전반에 걸쳐 더욱 관련성 높은 광고를 표시하고 표시되는 광고와의 상호 작용을 측정하는 데 사용될 수 있습니다.

[애널리틱스 쿠키 및 개인정보 보호 정보](https://developers.google.com/analytics/resources/concepts/gaConceptsCookies?hl=enk)에 대해 자세히 알아보세요.

또한, 저희 페이지에 삽입된 일부 동영상은 쿠키를 사용하여 사용자가 어떤 경로로 해당 페이지에 접속했는지, 어떤 동영상을 시청했는지에 대한 통계를 익명으로 수집합니다.

이러한 쿠키를 활성화하는 것은 웹사이트 작동에 필수적인 것은 아니지만, 더 나은 브라우징 경험을 제공합니다. 쿠키를 삭제하거나 차단할 수 있지만, 그렇게 할 경우 이 사이트의 일부 기능이 제대로 작동하지 않을 수 있습니다.

쿠키 관련 정보는 사용자를 개인적으로 식별하는 데 사용되지 않으며, 패턴 데이터는 전적으로 당사의 관리 하에 있습니다. 이러한 쿠키는 여기에 설명된 목적 외에는 다른 용도로 사용되지 않습니다.

다른 쿠키도 사용하나요?

또한, 앞서 설명한 쿠키 외에도 쿠키 고지에서 사용자가 선택한 사항을 추적하기 위한 쿠키를 사용합니다.
이 쿠키는 설정된 기간 동안 사용자의 결정을 저장하는 데에만 사용되며, 해당 기간이 만료되면 쿠키 배너가 다시 표시됩니다.
이 쿠키는 31일 동안 보관됩니다.

쿠키 관리 방법

원하시는 대로 쿠키를 관리하고 삭제할 수 있습니다.
컴퓨터에 이미 저장된 모든 쿠키를 삭제할 수 있으며, 대부분의 브라우저에서 쿠키가 저장되지 않도록 설정할 수도 있습니다.
하지만 이렇게 하면 사이트를 방문할 때마다 일부 설정을 조정해야 할 수 있으며, 일부 서비스 및 기능이 작동하지 않을 수도 있습니다.

---

## 출처: `_docs/tutorials/advanced/benchmarking/index.md`
<a id="source-docs-tutorials-advanced-benchmarking-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

- [TFA Shadow-builder를 사용한 애플리케이션 벤치마킹](#benchmarking-an-applicastion-with-the-tfa-shadow-builder)
- [필수 조건](#prerequisites)
- [TFA 플러그인](#tfa-plugin)
- [구성](#configuration)
- [섀도우 빌더 실행 중](#running-the-shadow-builder)


## TFA 섀도우 빌더를 사용한 애플리케이션 벤치마킹

이 섹션에서는 특정 벤치마킹 도구 중 하나인 '벤치마킹 도구'에 대해 다룹니다.
Shadow Builder. 좀 더 구체적으로 말하자면, 이 튜토리얼은 Shadow Builder를 사용하여 플러그인을 만드는 것을 목표로 합니다.
A부터 Z까지, 그리고 코드에 계측 기능을 추가하는 방법.

이해를 돕기 위해 이 튜토리얼에서는 다음과 같은 방법을 제안합니다.
간단한 반복 함수 실행에 소요되는 시간을 측정합니다.

## 필수 조건

본론으로 들어가기 전에 다음 사항들을 충족해야 합니다.
요구 사항:

 1. **섀도우 빌더**와 **트레이스 프레임워크 추상화**가 존재한다고 가정합니다.
용어와 메커니즘은 이미 알려져 있습니다. 만약 그렇지 않다면,
벤치마킹 관련 문서는 다음에서 확인할 수 있습니다.
[여기](https://github.com/micro-ROS/benchmarking_shadow-builder/blob/master/README.md).

 2. 리눅스, 가급적 우분투 18.04 이상 또는 데비안 기반 운영 체제를 사용하십시오.
    배포판이 그 역할을 해내야 합니다.

 3. C 및 C++ 프로그래밍에 대한 기본적인 지식


모든 체크박스를 선택하면 튜토리얼을 시작할 수 있습니다.

## TFA 플러그인

플러그인을 만들기 위해 파악해야 할 핵심 정보는 다음과 같습니다.

벤치마킹이란 무엇인가요? --> 특정 함수 실행에 소요된 시간입니다.
어떻게 하면 될까요? --> 이미 이를 지원하는 플러그인이 있나요? 네, 그렇다면 그렇게 하시면 됩니다. 그리고
프로파일링할 코드에 계측 도구를 설치할 수 있습니다.

만약 해당 기능을 지원하는 플러그인이 없다면, 플러그인을 직접 제작해야 합니다.
그러면 문맥에 따라 다음과 같은 일련의 질문들이 제기됩니다.

 1. 이것이 다른 사람들에게 어떤 이점을 줄 수 있을까요?
 2. 시간을 측정하는 데 사용할 코드는 무엇입니까? (C 또는 C++ 언어로 작성해야 합니까?)
 3. 어떤 플랫폼을 지원하나요? (운영체제, CPU 등)
 4. 코드는 어떻게 계측해야 할까요?


이 질문들에 대한 답은 다음과 같습니다.

 1. 범용 플러그인을 만들고 다음과 같은 내용의 문서를 작성하세요.
    일반 사용자와 전문가 사용자 모두 이해할 수 있습니다.
 2. `timespec` 및 `clock_gettime` Linux 시스템 호출 사용.
 3. 이전 답변에서 --> OS: 동일한 Linux API를 지원하는 모든 CPU에서 Linux를 사용할 수 있습니다.
 4. 다음과 같이 댓글을 사용하는 간단한 방법
   `/** Benchmarking::plugin_name::function */` . 현재 선택 사항
    튜토리얼은 `/** Benchmarking::TimeBenchmarking::Timer */`입니다.



이러한 답변들은 플러그인을 만드는 데 필요한 최소한의 정보를 제공합니다.

## TFA 플러그인 생성

### 파일 트리 구조

최종 코드는 다음 위치에 있습니다.
`src_root_sb/tfa-plugin/TimeBenchmarking`은 다음과 같은 구조를 가지고 있습니다.

```
타임벤치마킹
	├── CMakeLists.txt
	├── inc
	│ └──타임벤치마킹
	│ └── TimeBenchmarking.h
	└── src
	    └── TimeBenchmarking.cpp
```


### 섀도우 빌더의 TFA 코어에 새 플러그인을 등록합니다.

섀도우 빌더는 TFA 플러그인이 실행되어 응답하기를 기대하고 있습니다.
파서 디스패치. 따라서 상호 운용성이 필요합니다.

모든 새로운 플러그인은 다음과 같이 IPlugin 인터페이스를 구현하여 작성됩니다.
`src_root/tfa_core/inc/tfa/IPlugin.h` 파일입니다. 인터페이스가 해야 할 일은 다음과 같습니다.
순수 가상 함수를 구현하세요. 간단한 예는 다음과 같습니다.
플러그인 테스트:

플러그인 헤더에:

```cpp
클래스 TimeBenchmarking: 공개 IPPlugin {
공공의:
	타임벤치마킹();
	~TimeBenchmarking();

	TFAInfoPlugin& getInfoPlugins();
	bool initializePlugin();
};

extern "C" IPlugin* create() {
	static_cast<IPlugin *>(new TimeBenchmarking);
}
extern "C" void destroy(IPlugin* p) {
	p를 삭제합니다;
}
```
플러그인 소스 코드에서:

```cpp
TimeBenchmarking::TimeBenchmarking() {}

시간벤치마킹::~TimeBenchmarking()
{
	if(mInfos) {
		mInfos를 삭제합니다.
	}

}
```

### 리스너 생성

좋습니다! 이제 플러그인을 TFA 코어에 등록할 준비가 되었습니다. 따라서, 만약
세션이 실행 중이면 플러그인을 찾을 수 있습니다. 하지만 실제로 아무것도 작동하지는 않을 것입니다.
그럴 수도 있죠. 실제로 플러그인이 특정 태그를 감지하지 못하고 있습니다.

다시 한번 말씀드리지만, 리스너는 인터페이스에서 파생된 객체입니다.
**ITFACommentListener**는 특정 _태그_를 수신합니다.
코드 조각으로 대체하세요.

객체의 선언은 아래와 같습니다.
```cpp
클래스 타이머: 공개 ITFACommentListener
{
공공의:
	시간제 노동자();
	상태 실행 가능 댓글(const TFACommentInfo& cleanComment,
				std::string& 대체);
};
```

위에서 보듯이, 해당 클래스는 ITFACommentListenner 클래스를 상속받습니다.
ITFACommentListener에는 runnableComments라는 순수 가상 메서드가 하나 있습니다.
즉, 플러그인은 runnableComments(...) 메서드를 구현해야 합니다.


```cpp
타이머::타이머()
 :
	 ITFACommentListener("벤치마킹::사용자::타이머")
{
}

상태 타이머::실행 가능한 댓글(const TFACommentInfo& cleanComment,
		std::string& 대체)
{
	상태::returnStatusError();를 반환합니다.
}
```

이제 함수들은 올바르게 구현되었습니다. 타이머를 작동시키려면 몇 가지 요소가 필요합니다.
함수 실행에 소요되는 시간을 측정합니다.

 1. 함수 실행 전에 타이머를 시작하고 초기 타임스탬프를 얻습니다.
 2. 함수가 반환된 후 타이머를 중지하고 다른 타임스탬프를 가져옵니다.
 3. 위에서 측정한 두 타임스탬프 간의 차이를 측정합니다.
 4. 차이값을 사람이 읽기 쉬운 형식으로 출력합니다.

이는 기본적으로 플러그인이 타임스탬프를 얻을 수 있는 방법이 필요하다는 것을 의미합니다.
앞서 논의한 바와 같이 clock_gettime을 사용하여 시간을 가져오고, 이를 사용자에게 출력합니다.
printf.

태그는 여러 매개변수를 통해 제공될 수 있습니다. 이는 다음과 같은 이유로 유용할 것입니다.
타이머:

 * 타이머의 상태(예: 시작 또는 정지)를 나타내는 매개변수
 * 개발자가 타이머 자체를 고유하게 식별하기 위한 매개변수
 * 헤더 선언에 필요한 매개변수입니다.

도구 없이 실제로 보면 이런 모습일 겁니다:

```c

#include <time.h> // clock_gettime() 함수에 접근하기 위해 필요합니다
#include <stdio.h> // printf 함수에 접근하기 위해 필요합니다.

void func2benchmark(...)
{

	/** 시작 타임스탬프를 선언하고 측정합니다. */
	struct timestamp timer_start, timer_stop;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &timer_start);
	// 매우 느린 작업을 수행합니다

	/** 현재 시점의 샘플을 측정하고, 처리하여 결과를 표시합니다. */
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &timer_start);
	{
		struct timespec *start = &timer_start;
		struct timespec *stop = &timer_stop;
		struct timespec result;

		정지->tv_nsec - 시작->tv_nsec) < 0이면 {
			result.tv_sec = stop->tv_sec - start->tv_sec - 1;
			result.tv_nsec = stop->tv_nsec - start->tv_nsec + 1000000000;
		} 또 다른 {
			result.tv_sec = stop->tv_sec - start->tv_sec;
			result.tv_nsec = stop->tv_nsec - start->tv_nsec;
		}

		printf(\"실행 시간: %ld초 : %ld밀리초 : %ld나노초\\n\",
				result.tv_sec, result.tv_nsec / 1000000, result.tv_nsec % 1000000);
	}
}
```

tfa를 사용하면 다음과 같이 보일 것입니다.
```c
/** 벤치마킹::TimeBenchmarking::Timer(선언) */

void func2benchmark(...)
{
/** 벤치마킹::TimeBenchmarking::Timer(start, 타이머1) */
	//매우 느린 작업을 수행합니다
/** 벤치마킹::TimeBenchmarking::Timer(stop, 타이머1) */
}
```

차이점을 살펴보면 오버헤드 양과 코드 명확성 측면에서 차이가 드러납니다.
이 방법을 통해 도입되는 양은 매우 적습니다.

자, 이제 소매를 걷어붙이고 플러그인으로 구현해 봅시다. 그러면 다음과 같은 기능을 사용할 수 있게 됩니다.
재사용 가능한 일반적인 방법.

### 선언하다

벤치마킹에 필요한 include 파일을 선언하려면 다음과 같이 하면 됩니다.
매개변수 0이 "declare"와 일치하는 문자열이 되도록 합니다. 대체
"#include <time.h>\n#include <stdio.h>\n"이 될 것입니다.

이 코드의 경우 줄 끝에 "\n"을 추가해야 합니다.
코드에 추가될 내용입니다.

```cpp

상태 타이머::실행 가능한 댓글(const TFACommentInfo& cleanComment,
		std::string& 대체)
{
	const std::vector<std::string> params = comment.getParams();

	만약 params.size()가 1이고 params[0]이 "declare"가 아니면 {
		교체 = "#include <time.h>\n";
		replacement += "#include <stdio.h>\n";
		상태 반환::returnStatusOkay();
	}

	상태::returnStatusError();를 반환합니다.
}
```

tfa-core에 정상 작동을 알리려면 Status::returnStatusOkay()를 반환하는 것이 필수적입니다.
해당 태그는 처리되었으므로 다른 플러그인에서 사용하지 않습니다.

#### 시작

시작 요소는 기본적으로 메모리에 타임스탬프를 기록합니다. 방법은 다음과 같습니다.
따라서 리눅스 시스템에서 C 프로그래밍을 하면 다음과 같습니다.

```cpp
상태 타이머::실행 가능한 댓글(const TFACommentInfo& cleanComment,
		std::string& 대체)
{
	const std::vector<std::string> params = comment.getParams();


	만약 params[0]이 "start"이고 params.size()가 2가 아니라면 {
		std::string start = "timer_start_" + params[1];
		std::string stop = "timer_stop_" + params[1];

		replacement = "struct timespec " + start + ", " + stop + ";\n";
		replacement += "\tclock_gettime(CLOCK_PROCESS_CPUTIME_ID,
			    &timer_start_" + params[1] + ");\n";
		상태 반환::returnStatusOkay();
	}

	상태::returnStatusError();를 반환합니다.
}
```

tfa-core에 정상 작동을 알리려면 Status::returnStatusOkay()를 반환하는 것이 필수적입니다.
해당 태그는 처리되었으므로 다른 플러그인에서 사용하지 않습니다.

#### 멈추다

그다음에는 타임스탬프를 얻는 역할을 담당할 정지 요소가 있습니다.
정지 시점과 시작 시점 사이의 시간 차이를 계산하고 마지막으로 출력합니다.
사람이 읽기 쉬운 방식으로.

```cpp

상태 타이머::실행 가능한 댓글(const TFACommentInfo& cleanComment,
		std::string& 대체)
{
	const std::vector<std::string> params = comment.getParams();
	const char difftime_func[] =
	"{\N\
		struct timespec *start = &%s;\n\
		struct timespec *stop = &%s;\n\
		struct timespec result;\n\
		정지->tv_nsec - 시작->tv_nsec) < 0이면 {\n\
			result.tv_sec = stop->tv_sec - start->tv_sec - 1;\n\
				result.tv_nsec = stop->tv_nsec - start->tv_nsec + 1000000000;\n\
		} 그렇지 않으면 {\n\
			result.tv_sec = stop->tv_sec - start->tv_sec;\n\
				result.tv_nsec = stop->tv_nsec - start->tv_nsec;\n\
		}\N\
		printf(\"실행 시간: %%ld초 : %%ld밀리초 : %%ld나노초\\n\",\n\
				result.tv_sec, result.tv_nsec / 1000000, result.tv_nsec\n\
				%% 1000000);\n\
	}\N";

	만약 (params[0] == "stop" && params.size() == 2)이면 {
		std::string start = "timer_start_" + params[1];
		std::string stop = "timer_stop_" + params[1];
		char buf[sizeof(difftime_func) + start.length() +
			정지.길이()];

		sprintf(buf, difftime_func, start.c_str(), stop.c_str());
		replacement += "clock_gettime(CLOCK_PROCESS_CPUTIME_ID,
			    &timer_stop_" + params[1] + ");\n";
		교체 += 문자열(buf);

		상태 반환::returnStatusOkay();
	}

	상태::returnStatusError();를 반환합니다.
}
```

tfa-core에 정상 작동을 알리려면 Status::returnStatusOkay()를 반환하는 것이 필수적입니다.
해당 태그는 처리되었으므로 다른 플러그인에서 사용하지 않습니다.

또한, 이는 대체 코드가 실제 코드라고 생각해야 함을 의미합니다.
컴파일될 C 코드입니다. 따라서 주의해야 할 점은 다음과 같습니다.
형식을 지정하는 방법과 이스케이프 문자에 주의해야 합니다.

#### 모든 것을 하나로 합치세요

최종적으로 전체 runnableComment 메서드는 다음과 같습니다.

```cpp
상태 타이머::실행 가능한 댓글(const TFACommentInfo& cleanComment,
		std::string& 대체)
{
	const char difftime_func[] =
	"{\N\
		struct timespec *start = &%s;\n\
		struct timespec *stop = &%s;\n\
		struct timespec result;\n\
		정지->tv_nsec - 시작->tv_nsec) < 0이면 {\n\
			result.tv_sec = stop->tv_sec - start->tv_sec - 1;\n\
			result.tv_nsec = stop->tv_nsec - start->tv_nsec + 1000000000;\n\
		} 그렇지 않으면 {\n\
			result.tv_sec = stop->tv_sec - start->tv_sec;\n\
				result.tv_nsec = stop->tv_nsec - start->tv_nsec;\n\
		}\N\
		printf(\"실행 시간: %%ld초 : %%ld밀리초 : %%ld나노초\\n\",\n\
				result.tv_sec, result.tv_nsec / 1000000, result.tv_nsec \n\
				%% 1000000);\n\
	}\N";

	const std::vector<std::string> params = comment.getParams();

	매개변수의 크기가 (!params.size())인 경우
	{
		상태::returnStatusError();를 반환합니다.
	}

	만약 params[0]이 "declare"이고 params.size()가 1이 아니라면 {
		교체 = "#include <time.h>\n";
		replacement += "#include <stdio.h>\n";
		상태 반환::returnStatusOkay();
	} 그렇지 않고 params[0]이 "start"이고 params.size()가 2이면 {
		std::string start = "timer_start_" + params[1];
		std::string stop = "timer_stop_" + params[1];

		replacement = "struct timespec " + start + ", " + stop + ";\n";
		replacement += "\tclock_gettime(CLOCK_PROCESS_CPUTIME_ID, \
				&timer_start_" + params[1] + ");\n";
		상태 반환::returnStatusOkay();
	} 그렇지 않고 params[0]이 "stop"이고 params.size()가 2이면 {
		std::string start = "timer_start_" + params[1];
		std::string stop = "timer_stop_" + params[1];
		char buf[sizeof(difftime_func) + start.length() +
			정지.길이()];

		sprintf(buf, difftime_func, start.c_str(), stop.c_str());
		replacement += "clock_gettime(CLOCK_PROCESS_CPUTIME_ID, \
					&timer_stop_" + params[1] + ");\n";
		교체 += 문자열(buf);

		상태 반환::returnStatusOkay();
	}

	상태::returnStatusError();를 반환합니다.
}
```

#### 리스너를 등록하세요

리스너를 구현한 후에는 해당 리스너를 등록해야 합니다.
TFA 플러그인 관리자:

```cpp
bool TimeBenchmarking::initializePlugin()
{
	/* 플러그인 호환성 플랫폼입니다 */
	tbp = new TFABenchMarkingPlatform("Linux", "*", "*", "*");

	/** 여기에 타이머 리스너를 등록합니다. */
	iclVect.emplace_back(static_cast<ITFACommentListener *>(new
					시간제 노동자));

	/* 이것은 플러그인 이름과 정보를 저장하는 infoPlugin입니다.
		플랫폼 정보 */
` mInfos = new TFAInfoPlugin("테스트 플러그인", *tbp);

	// 이 부분을 어떻게 모형화할지는 나중에 설명하겠습니다.
	상태 반환::returnStatusOkay();
}
```

이 플러그인이 호출할 각 리스너마다 IPlugin 클래스를 상속받은 보호 벡터를 추가해야 합니다.
지원 및 실행.


### 컴파일 파일

컴파일 파일은 플러그인 루트 디렉터리에 있는 CMakeLists.txt 파일입니다.

다음과 같은 형태가 될 것입니다:

```cmake
프로젝트(TimeBenchmarking 버전 0.1 설명 "내 플러그인")
set(CMAKE_CXX_STANDARD 14)

set(PLUGIN_NAME "시간벤치마킹")

# 테스트를 수행하기 위해 함수가 필요했습니다.
include(../../CMakeMacros/CMakeTesting.txt)


# 플러그인에는 폴더가 포함됩니다
include_directories(inc/)

# 플러그인 소스 파일
list(APPEND TEST_PLUGIN_SRC
        src/TimeBenchmarking.cpp
)

# 공유 ​​가능한 라이브러리를 만들기 위해 필요함
add_library(${PLUGIN_NAME} SHARED ${TEST_PLUGIN_SRC})

# 링크해야 할 대상 라이브러리
타겟_링크_라이브러리(tfa)

# 공유 ​​라이브러리 버전을 생성해야 합니다.
set_target_properties(${PLUGIN_NAME} 속성 버전 ${PROJECT_VERSION})
```

마지막으로, 부모 폴더(예:
src_root/tfa-plugins/CMakeLists.txt) CMakeLists.txt
플러그인의 하위 디렉토리:

```cmake
cmake_minimum_required(VERSION 3.10) # CMake 버전 확인
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(plugin_test)
add_subdirectory(myplugin)

# 여기에 프로젝트 설정을 추가하세요:
add_subdirectory(TimeBenchmarking)
```

해당 예제는 [여기](https://github.com/micro-ROS/benchmarking_shadow-builder/blob/master/tfa-plugins/TimeBenchmarking/)에서 확인할 수 있습니다.

### 컴파일
플러그인을 컴파일하려면 이전에 생성한 빌드 폴더에서 다음 단계를 수행하십시오.
그림자를 만드는 사람.

## 구성

### TFA 구성

설정 파일의 예시는 소스 트리에서 확인할 수 있습니다.
`src_root/res/tfa-res/tfa.xml`.

이 파일은 플러그인을 찾을 경로만 기록합니다. 조심하세요!
이 파일은 템플릿이며 컴파일할 때마다 갱신됩니다.

현재 상황에서 경로는 기본 경로(즉, src_root/build)입니다.


```셸
cd src_root/build/
make -j4
```



### 섀도우 빌더 구성

섀도우 빌더 구성은 소스 파일의 위치에 대한 몇 가지 힌트를 제공합니다.
벤치마크를 실행할 위치와 출력 폴더를 설정하는 방법을 알려드립니다.

자세한 설명은 여기에서 확인할 수 있습니다.
[여기](https://github.com/micro-ROS/benchmarking_shadow-builder/blob/master/res/README.md#shadow-builder-configuration).

## 섀도우 빌더 실행 중
위의 모든 단계를 완료하고 플러그인이 컴파일되면 실행 명령을 입력하세요.
코드의 계측은 다음과 같습니다.

```셸
cd src_root/build/
./shadow-program -s ../res/sb-res/bcf.xml -t ../res/tfa-res/tfa.xml
```

출력 결과는 bcf 설정 파일에 지정된 폴더에 저장되어야 합니다.
(기본적으로 /tmp/output/ 폴더 아래에 세션 이름이 있어야 함) (테스트용)
기본값)에는 벤치마킹이 시작된 날짜와 시간이 추가됩니다.

---

## 출처: `_docs/tutorials/advanced/create_custom_static_library/index.md`
<a id="source-docs-tutorials-advanced-create-custom-static-library-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

이 튜토리얼은 micro-ROS를 독립형 라이브러리로 컴파일하여 사용자 정의 개발 도구에 통합하려는 사용자를 위해 단계별 지침을 제공하는 것을 목표로 합니다.

이 튜토리얼은 미리 생성된 micro-ROS 환경에서 시작합니다. 임베디드 플랫폼용 micro-ROS 환경을 생성하는 방법에 대한 지침은 [**RTOS에서 실행되는 첫 번째 micro-ROS 애플리케이션**](../../core/first_application_rtos/)의 첫 번째 단계를 참조하십시오.

micro-ROS 워크스페이스가 생성되고 `micro_ros_setup` 도구가 설치되면, 이제 micro-ROS 환경을 준비하겠습니다.

```bash
ros2 run micro_ros_setup create_firmware_ws.sh generate_lib
```

모든 패키지 다운로드가 완료되면 사용자 정의 정적 라이브러리와 헤더 파일 세트를 크로스 컴파일하기 위해 몇 가지 파일을 생성해야 합니다.

```bash
my_custom_toolchain.cmake를 터치하세요
my_custom_colcon.meta를 터치하세요
```

## CMake 툴체인의 예시

예를 들어 Cortex M3의 경우 샘플 툴체인은 다음과 같습니다.

```cmake
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_CROSSCOMPILING 1)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

# 여기에 C99 및 C++ 컴파일러의 경로를 설정하십시오
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

set(CMAKE_C_COMPILER_WORKS 1 CACHE INTERNAL "")
set(CMAKE_CXX_COMPILER_WORKS 1 CACHE INTERNAL "")

# 여기에 건물 깃발을 설치하세요
set(FLAGS "-O2 -ffunction-sections -fdata-sections -fno-exceptions -mcpu=cortex-m3 -nostdlib -mthumb --param max-inline-insns-single=500 -DF_CPU=84000000L -D'RCUTILS_LOG_MIN_SEVERITY=RCUTILS_LOG_MIN_SEVERITY_NONE'" CACHE STRING "" FORCE)

set(CMAKE_C_FLAGS_INIT "-std=c11 ${FLAGS} -DCLOCK_MONOTONIC=0 -D'__attribute__(x)='" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS_INIT "-std=c++11 ${FLAGS} -fno-rtti -DCLOCK_MONOTONIC=0 -D'__attribute__(x)='" CACHE STRING "" FORCE)

set(__BIG_ENDIAN__ 0)
```

## colcon 메타 파일 예시

micro-ROS 외부 전송을 포함하는 colcon.meta 파일의 예는 다음과 같습니다.

```json
{
    "이름": {
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

## 사용자 정의 라이브러리 빌드

두 파일이 모두 준비되면 micro-ROS 빌드 시스템에서 빌드 단계를 실행하기만 하면 됩니다.

```bash
ros2 run micro_ros_setup build_firmware.sh $(pwd)/my_custom_toolchain.cmake $(pwd)/my_custom_colcon.meta
```

빌드가 완료되면 `firmware/build/libmicroros.a` 폴더에 모든 micro-ROS 기능이 포함된 사전 컴파일된 정적 ​​라이브러리가 생성되고, `firmware/build/include` 폴더에는 애플리케이션에 필요한 모든 헤더 파일이 생성됩니다.

개발 도구에서 해당 라이브러리에 링크하여 사용하시면 됩니다. **상용 보드를 사용하시는 경우, 저희는 커뮤니티에서 제공하는 micro-ROS 포트를 환영한다는 점을 기억해 주세요.**

---

## 출처: `_docs/tutorials/advanced/create_custom_transports/index.md`
<a id="source-docs-tutorials-advanced-create-custom-transports-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

이 튜토리얼은 micro-ROS 툴셋에 기본적으로 제공되는 전송 방식 대신, micro-ROS 사용자 정의 전송 방식을 직접 만들고자 하는 사용자를 위해 단계별 지침을 제공하는 것을 목표로 합니다.

이 튜토리얼은 미리 생성된 micro-ROS 환경에서 시작합니다. 임베디드 플랫폼용 micro-ROS 환경을 생성하는 방법에 대한 지침은 [**RTOS에서 실행되는 첫 번째 micro-ROS 애플리케이션**](../../core/first_application_rtos/)의 첫 번째 단계를 참조하십시오.

마이크로 ROS 미들웨어인 *eProsima Micro XRCE-DDS*는 런타임에 최하위 전송 계층과 상호 작용할 수 있는 사용자 API를 제공합니다.
이를 통해 사용자는 micro-ROS 클라이언트 및 micro-ROS 에이전트 라이브러리 모두에서 자체 전송 기능을 구현할 수 있습니다.
이러한 특징 덕분에 Micro XRCE-DDS 와이어 프로토콜은 사실상 모든 프로토콜, 네트워크 또는 통신 방식을 통해 전송될 수 있습니다.
메커니즘입니다. 이를 위해 두 가지 일반적인 통신 모드가 제공됩니다.

* **스트림 지향 모드**: 구현된 통신 메커니즘에는 패킷 개념이 없습니다.
  [HDLC 프레임](https://micro-xrce-dds.docs.eprosima.com/en/latest/transport.html?highlight=hdlc#custom-serial-transport)이 사용됩니다.
* **패킷 지향 모드**: 구현된 통신 메커니즘은 XRCE 메시지를 포함하는 전체 패킷을 전송할 수 있습니다.

이 두 가지 모드는 micro-ROS 클라이언트와 micro-ROS 에이전트 기능 모두에서 'framing' 매개변수를 활성화하거나 비활성화함으로써 선택할 수 있습니다.

## micro-ROS 클라이언트

micro-ROS 클라이언트 API에서 이러한 외부 전송 콜백을 설정하는 방법의 예는 다음과 같습니다.

```c
#include <rmw_microros/rmw_microros.h>

...

struct custom_args {
    ...
}

struct custom_args args;

rmw_uros_set_custom_transport(
    true, // 프레임 기능이 활성화되었습니다. 스트림 지향 모드를 사용합니다.
    (void *) &args,
    내_맞춤_운송_열림,
    내_맞춤_운송_닫기,
    내_사용자_이송_쓰기,
    내_사용자_전송_읽기
);
```

`rmw_uros_set_custom_transport` 함수에서 사용자 정의 인수에 대한 포인터가 설정된다는 점에 유의해야 합니다. 이 참조는 모든 콜백 호출에서 사용할 수 있습니다.

일반적으로 네 가지 기능을 구현해야 합니다. 이 기능들의 동작은 선택한 모드에 따라 약간씩 다릅니다.

### 열기 기능

```c
bool my_custom_transport_open(uxrCustomTransport* transport)
{
    ...
}
```
이 함수는 사용자 정의 전송을 열고 초기화해야 합니다. 열기가 성공했는지 여부를 나타내는 부울 값을 반환합니다.
`transport->args`에는 `uxr_init_custom_transport`를 통해 전달된 인수가 저장됩니다.

### 닫기 기능
```c
bool my_custom_transport_close(uxrCustomTransport* transport)
{
    ...
}
```
이 함수는 사용자 정의 전송을 종료해야 합니다. 종료가 성공했는지 여부를 나타내는 부울 값을 반환합니다.
`transport->args`에는 `uxr_init_custom_transport`를 통해 전달된 인수가 저장됩니다.

### 함수 작성
```c
size_t my_custom_transport_write(
        uxrCustomTransport* 운송,
        const uint8_t* 버퍼,
        size_t 길이,
        uint8_t* errcode)
{
    ...
}
```
이 함수는 사용자 정의 전송 프로토콜에 데이터를 기록해야 합니다. 기록된 바이트 수를 반환합니다.
`transport->args`에는 `uxr_init_custom_transport`를 통해 전달된 인수가 저장됩니다.

* **스트림 지향 모드:** 이 함수는 `buffer`에서 최대 `length` 바이트까지 전송할 수 있습니다.

* **패킷 지향 모드:** 함수는 `buffer`에서 `length` 바이트를 전송해야 합니다. `length` 바이트보다 적은 바이트가 전송되면 `errcode`를 설정할 수 있습니다.

### 읽기 함수
```c
size_t my_custom_transport_read(
        uxrCustomTransport* 운송,
        uint8_t* 버퍼,
        size_t 길이,
        int 타임아웃,
        uint8_t* errcode)
{
    ...
}
```
이 함수는 사용자 정의 전송 방식에서 데이터를 읽어와야 합니다. 읽어온 바이트 수를 반환합니다.
`transport->args`에는 `uxr_init_custom_transport`를 통해 전달된 인수가 있습니다.

* **스트림 지향 모드:** 함수는 전송 계층에서 최대 `length` 바이트까지 데이터를 가져와야 합니다.
    그리고 `timeout` 밀리초 후에 해당 값들을 `buffer`에 저장합니다.

* **패킷 지향 모드:** 함수는 전송 계층에서 `length` 바이트를 가져와야 합니다.
    그리고 `timeout` 밀리초 후에 `buffer`에 기록합니다. 읽은 바이트 수가 `length` 바이트보다 적으면 `errcode`를 설정할 수 있습니다.



## 마이크로 ROS 에이전트

사용자 지정 전송을 위한 micro-ROS 에이전트 프로필은 기본적으로 활성화되어 있습니다.

micro-ROS 에이전트 API에서 외부 전송 콜백을 설정하는 방법의 예는 다음과 같습니다.

```cpp
eprosima::uxr::Middleware::Kind mw_kind(eprosima::uxr::Middleware::Kind::FASTDDS);
eprosima::uxr::CustomEndPoint custom_endpoint;

// 전송 엔드포인트 매개변수 추가
custom_endpoint.add_member<uint32_t>("param1");
custom_endpoint.add_member<uint16_t>("param2");
custom_endpoint.add_member<std::string>("param3");

eprosima::uxr::CustomAgent custom_agent(
    "my_custom_transport",
    &custom_endpoint,
    mw_kind,
    true, // 프레임 기능이 활성화되었습니다. 스트림 지향 모드를 사용합니다.
    내_맞춤_운송_열림,
    내_맞춤_운송_닫기,
    내_맞춤_운송_쓰기
    my_custom_transport_read);

custom_agent.start();
```
클라이언트 API에서와 마찬가지로 네 가지 함수를 구현해야 합니다. 이 함수들의 동작 방식은 약간씩 다릅니다.
선택한 모드에 따라 다릅니다.

### 사용자 정의 엔드포인트

`custom_endpoint`는 `eprosima::uxr::CustomEndPoint` 타입의 객체이며 엔드포인트 매개변수 처리를 담당합니다. *에이전트*는 *클라이언트*와 달리 수신할 수 있습니다.
여러 클라이언트로부터 메시지를 받기 때문에, 이들을 구분할 수 있어야 합니다.
따라서 `eprosima::uxr::CustomEndPoint`에는 메시지의 출처에 대한 정보가 제공되어야 합니다.
읽기 콜백에서는 메시지 수신처 정보를 전달하고, 쓰기 콜백에서는 메시지 수신처 정보를 전달합니다.

일반적으로 `eprosima::uxr::CustomEndPoint` 객체의 멤버는 부호 없는 정수와 문자열일 수 있습니다.

`CustomEndPoint`는 세 가지 메서드를 정의합니다.

멤버 추가
```cpp
bool eprosima::uxr::CustomEndPoint::add_member<*KIND*>(const std::string& member_name);
```
이 함수는 엔드포인트 정의에 새 멤버를 동적으로 추가할 수 있도록 합니다.

멤버가 올바르게 추가되면 ``true``를 반환하고, 오류가 발생하면 (예: 멤버가 이미 존재하는 경우) ``false``를 반환합니다.

- **종류**: `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t`, `uint128_t` 또는 `std::string` 중에서 선택해야 합니다.
- **member_name**: 엔드포인트 멤버를 식별하는 데 사용되는 태그입니다.

멤버 값을 설정합니다.
```cpp
void eprosima::uxr::CustomEndPoint::set_member_value(const std::string& member_name, const *KIND* & value);
```

이 함수는 `CustomEndPoint`에 이미 존재하는 특정 멤버에 대해 특정 값(숫자 또는 문자열)을 설정합니다.

- **멤버 이름**: 값이 수정될 멤버입니다.
- **값**: 설정할 값입니다. `KIND`는 `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t`, `uint128_t` 또는 `std::string` 중 하나입니다.

멤버십 받기
```cpp
const *KIND* & eprosima::uxr::CustomEndPoint::get_member(const std::string& member_name);
```

이 함수는 주어진 매개변수로 등록된 멤버의 현재 값을 가져옵니다.
검색된 값은 `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t`, `uint128_t` 또는 `std::string`일 수 있습니다.

- **member_name**: 현재 값이 요청된 `CustomEndPoint` 멤버의 이름입니다.

### 열기 기능
```cpp
eprosima::uxr::CustomAgent::InitFunction my_custom_transport_open = [&]() -> bool
{
    ...
}
```
이 함수는 사용자 정의 전송을 열고 초기화해야 합니다. 열기가 성공했는지 여부를 나타내는 부울 값을 반환합니다.

### 닫기 기능
```cpp
eprosima::uxr::CustomAgent::FiniFunction my_custom_transport_close = [&]() -> bool
{
    ...
}
```
이 함수는 사용자 정의 전송을 종료해야 합니다. 종료가 성공했는지 여부를 나타내는 부울 값을 반환합니다.

### 함수 작성
```cpp
eprosima::uxr::CustomAgent::SendMsgFunction my_custom_transport_write = [&](
    const eprosima::uxr::CustomEndPoint* destination_endpoint,
    uint8_t* 버퍼,
    size_t 길이,
    eprosima::uxr::TransportRc& transport_rc) -> ssize_t
{
    ...
}
```
이 함수는 사용자 정의 전송 프로토콜에 데이터를 기록해야 합니다. 반드시 다음을 사용해야 합니다.
`destination_endpoint` 멤버를 사용하여 데이터 저장 위치를 ​​설정합니다. 이 메서드는 기록된 바이트 수를 반환합니다.
해당 작업은 `transport_rc`에 작업 결과를 나타내는 값을 설정해야 합니다.

* **스트림 지향 모드:** 이 함수는 `buffer`에서 최대 `length` 바이트까지 전송할 수 있습니다.

* **패킷 지향 모드:** 함수는 `buffer`에서 `length` 바이트를 전송해야 합니다. `length` 바이트보다 적은 바이트가 전송될 경우 `transport_rc`를 설정할 수 있습니다.

### 읽기 함수
```cpp
eprosima::uxr::CustomAgent::RecvMsgFunction my_custom_transport_read = [&](
        eprosima::uxr::CustomEndPoint* 소스 엔드포인트,
        uint8_t* 버퍼,
        size_t 길이,
        int 타임아웃,
        eprosima::uxr::TransportRc& transport_rc) -> ssize_t
{
    ...
}
```
이 함수는 사용자 정의 전송으로 데이터를 읽어와야 합니다. `source_endpoint` 멤버에 데이터 소스를 채워 넣어야 합니다.
읽은 바이트 수를 반환합니다.
해당 작업은 `transport_rc`에 작업 결과를 나타내는 값을 설정해야 합니다.

* **스트림 지향 모드:** 함수는 전송 계층에서 최대 `length` 바이트까지 데이터를 가져와야 합니다.
    그리고 `timeout` 밀리초 후에 해당 값들을 `buffer`에 저장합니다.

* **패킷 지향 모드:** 함수는 전송 계층에서 `length` 바이트를 가져와야 합니다.
    그리고 `timeout` 밀리초 후에 `buffer`에 기록합니다. 읽은 바이트 수가 `length` 바이트보다 적으면 `transport_rc`를 설정할 수 있습니다.

---

## 출처: `_docs/tutorials/advanced/create_dds_entities_by_ref/index.md`
<a id="source-docs-tutorials-advanced-create-dds-entities-by-ref-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

이 튜토리얼에서는 완벽하게 구성 가능한 QoS 설정을 사용하여 micro-ROS 엔티티를 생성하는 절차를 설명합니다. micro-ROS 기본 미들웨어(Micro XRCE-DDS Client)는 사용자가 micro-ROS 에이전트에서 ROS 2(DDS) 엔티티를 생성하는 두 가지 다른 접근 방식을 제공합니다. (자세한 내용은 [아키텍처 섹션](https://micro-ros.github.io/_docs/overview/)을 참조하십시오.)
- XML을 이용한 방식 (micro-ROS RMW의 기본 옵션)
- 참조에 의해

*기본 옵션*을 사용하면 micro-ROS 사용자는 신뢰할 수 있는 통신을 위한 `rclc_publisher_init_default` 또는 최선의 노력을 기울이는 통신을 위한 `rclc_publisher_init_best_effort`와 같은 RCLC 함수를 사용하여 엔티티를 생성할 수 있습니다. 최신 편의 함수 목록은 [RCLC](https://github.com/ros2/rclc)를 참조하십시오.

DDS의 QoS XML 형식에 익숙한 분들은 (자세한 내용은 [여기](https://fast-dds.docs.eprosima.com/en/latest/fastdds/dds_layer/core/policy/policy.md)를 클릭하세요), 이 기본 모드에서 사용되는 기본 QoS 프로필은 다음과 같습니다.

```xml
<!-- 주제 -->
<dds>
  <주제>
      <이름>[주제명]</이름>
      <dataType>[주제 유형]</dataType>
  </주제>
</dds>

<!-- 데이터 라이터 -->
<dds>
  <데이터_작성자>
      <historyMemoryPolicy>실시간 할당을 통한 사전 할당</historyMemoryPolicy>
      <qos>
        <신뢰성>
            <종류>[작성자 신뢰도]</종류>
        </신뢰성>
      </qos>
      <주제>
        <kind>NO_KEY</kind>
        <이름>[작성자 이름]</이름>
        <dataType>[작성자 유형]</dataType>
        <historyQos>
            <kind>KEEP_ALL</kind>
        </historyQos>
      </주제>
  </data_writer>
</dds>

<!-- 데이터 리더 -->
<dds>
  <데이터_리더>
      <historyMemoryPolicy>실시간 할당을 통한 사전 할당</historyMemoryPolicy>
      <qos>
        <신뢰성>
            <종류>[독자 신뢰도]</종류>
        </신뢰성>
      </qos>
      <주제>
        <kind>NO_KEY</kind>
        <이름>[독자 이름]</이름>
        <dataType>[읽기 유형]</dataType>
        <historyQos>
            <kind>KEEP_ALL</kind>
        </historyQos>
      </주제>
  </data_reader>
</dds>

```

하지만 이러한 QoS 구성은 일부 사용자의 요구 사항에 맞지 않을 수 있습니다. 이러한 경우를 위해 micro-ROS는 사용자가 사용자 지정 XML QoS를 작성하고 미리 정의된 QoS 세트로 에이전트를 실행할 수 있도록 지원합니다. 각 엔티티에는 고유한 레이블이 부여되며, micro-ROS 클라이언트는 이 참조만을 사용하여 엔티티를 생성합니다.

또한, 참조 방식을 사용하면 MCU 내부의 micro-ROS 클라이언트의 메모리 사용량도 줄어듭니다. 이는 XML을 처리하는 코드 부분이 참조 방식을 사용하지 않고 작성되기 때문입니다.

사용자 정의 QoS를 가진 엔티티를 생성하는 micro-ROS 노드를 만드는 방법을 살펴보겠습니다. 우선, [RTOS 기반 첫 번째 micro-ROS 애플리케이션]에서 어떤 RTOS를 선택했는지와 관계없이,
(https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/) 튜토리얼을 따라하면 `app-colcon.meta`라는 앱 구성 파일이 있어야 합니다.

이 `app-colcon.meta` 파일 안에서 크로스 컴파일될 micro-ROS 패키지에 대한 애플리케이션별 CMake 옵션을 설정할 수 있습니다. 이제 참조를 사용하기 위해 `rmw_microxrcedds`를 설정해 보겠습니다. `app-colcon.meta` 파일은 다음과 같아야 합니다.

```
{
    "이름": {
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

물론 이러한 구성을 다른 구성과 결합할 수 있습니다. 예를 들어 [미들웨어 구성](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/) 튜토리얼에 설명된 구성과 결합할 수 있습니다.

이 매개변수를 얻었다면 RCLC의 기본 편의 함수를 사용하여 마이크로 ROS 애플리케이션을 작성하세요. 단, 이제 토픽 이름이 아니라 "QoS 참조 레이블"을 제공한다는 점을 기억하세요.

```c
#include <std_msgs/msg/int32.h>

...

std_msgs__msg__Int32 메시지;

msg.data = 42;

...

rclc_publisher_init_default(&publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32), "my_qos_label");
rcl_publish(&publisher, &msg, NULL);

...
```

이 코드는 micro-ROS 에이전트에게 `my_qos_label`이라는 텍스트 레이블만 사용하여 퍼블리셔를 생성하도록 지시합니다. 즉, micro-ROS 에이전트에는 이러한 레이블과 일부 QoS 프로파일이 기록된 파일이 있어야 합니다. 다음 내용으로 `custom_qos.refs` 파일을 생성해 보겠습니다.

```xml
<프로필>
    <참가자 프로필 이름="참가자 프로필">
        <rtps>
            <name>default_xrce_participant</name>
        </rtps>
    </참가자>

    <topic profile_name="my_qos_label__t">
        <name>rt/my_topic_name</name>
        <dataType>std_msgs::msg::dds_::Int32_</dataType>
        <historyQos>
          <kind>KEEP_LAST</kind>
          <깊이>20</깊이>
        </historyQos>
    </주제>

    <data_writer profile_name="my_qos_label__dw">
        <historyMemoryPolicy>PREALLOCATED_WITH_REALLOC</historyMemoryPolicy>
        <qos>
          <신뢰성>
            <종류>신뢰할 수 있는</종류>
          </신뢰성>
        </qos>
        <주제>
            <kind>NO_KEY</kind>
            <name>rt/my_topic_name</name>
            <dataType>std_msgs::msg::dds_::Int32_</dataType>
            <historyQos>
                <kind>KEEP_LAST</kind>
                <깊이>20</깊이>
            </historyQos>
        </주제>
    </data_writer>

</프로필>
```

이 XML 파일을 작성할 때 ROS2와 DDS의 이름 변환에 특별히 주의해야 합니다. 자세한 내용은 [여기](http://design.ros2.org/articles/topic_and_service_names.html#mapping-of-ros-2-topic-and-service-names-to-dds-concepts)를 참조하십시오.

이 파일이 준비되면 `-r` 매개변수를 사용하여 micro-ROS 에이전트를 실행하기만 하면 됩니다.

```
ros2 run micro_ros_agent micro_ros_agent [PARAMETERS] -r custom_qos.refs
```

엔티티가 생성되고 토픽이 게시되면 다음 명령어를 사용하여 QoS를 확인할 수 있습니다.

```
$ ros2 토픽 정보 /std_msgs_msg_Int32 --verbose
유형: std_msgs/msg/Int32

출판사 수: 1

노드 이름: _CREATED_BY_BARE_DDS_APP_
노드 네임스페이스: _CREATED_BY_BARE_DDS_APP_
토픽 유형: std_msgs/msg/Int32
엔드포인트 유형: 게시자
GID: 01.0f.0b.5c.8b.7d.00.00.01.00.00.00.00.00.01.03.00.00.00.00.00.00.00.00
QoS 프로필:
  신뢰성: RMW_QOS_POLICY_RELIABILITY_RELIABLE
  지속성: RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL
  수명: 2147483651294967295 나노초
  마감 시간: 2147483651294967295 나노초
  활력: RMW_QOS_POLICY_LIVELINESS_AUTOMATIC
  활성 임대 기간: 2147483651294967295 나노초

구독자 수: 0
```

---

## 출처: `_docs/tutorials/advanced/create_new_type/index.md`
<a id="source-docs-tutorials-advanced-create-new-type-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

이 튜토리얼은 미리 생성된 micro-ROS 환경에서 시작합니다. 임베디드 플랫폼용 micro-ROS 환경을 생성하는 방법에 대한 지침은 [**RTOS에서 실행되는 첫 번째 micro-ROS 애플리케이션**](../../core/first_application_rtos/)을 참조하십시오.

micro-ROS 워크스페이스가 생성되면 `firmware/mcu_ws`로 이동하여 패키지 생성 명령을 실행하십시오.

```bash
cd firmware/mcu_ws
ros2 pkg create --build-type ament_cmake my_custom_message
cd my_custom_message
mkdir 메시지
터치 메시지/MyCustomMessage.msg
```

자동 생성된 `CMakeLists.txt` 파일에서 `ament_package()` 바로 앞에 다음 줄을 추가해야 합니다.

```cmake
...
find_package(rosidl_default_generators 필수)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MyCustomMessage.msg"
 )
...
```

자동 생성된 `package.xml` 파일에 다음 줄을 추가해야 합니다.

```xml
...
<build_depend>rosidl_default_generators</build_depend>
<exec_depend>rosidl_default_runtime</exec_depend>
<그룹 구성원>rosidl_interface_packages</그룹 구성원>
...
```

`msg/MyCustomMessage.msg` 파일의 내용은 메시지 정의를 포함합니다. 예를 들어, 다음과 같은 필드를 포함시켜 보겠습니다.

```
bool bool_test
바이트 바이트 테스트
char char_test
float32 float32_test
float64 double_test
int8 int8_테스트
uint8 uint8_테스트
int16 int16_테스트
uint16 uint16_테스트
int32 int32_테스트
uint32 uint32_테스트
int64 int64_테스트
uint64 uint64_테스트
```

이제 평소처럼 micro-ROS 워크스페이스를 빌드할 수 있습니다. [**RTOS 기반 첫 번째 micro-ROS 애플리케이션**](../../core/first_application_rtos/)에서 설명했듯이, `ros2 run micro_ros_setup build_firmware.sh` 명령은 `mcu_ws` 안에 있는 모든 패키지를 빌드합니다.

micro-ROS 애플리케이션 코드에서 새 메시지 유형을 평소처럼 사용할 수 있습니다.

```c
#include <my_custom_message/msg/my_custom_message.h>

...

내_사용자 지정 메시지__msg__내 사용자 지정 메시지;

msg.byte_test = 3;
msg.uint32_test = 42;

...

rclc_publisher_init_default(&publisher, &node, ROSIDL_GET_MSG_TYPE_SUPPORT(my_custom_message, msg, MyCustomMessage), "my_custom_publisher");
rcl_publish(&publisher, &msg, NULL);

...
```

자세한 내용은 [ROS 2 사용자 지정 ROS 2 msg 및 srv 파일 생성](https://docs.ros.org/en/rolling/Tutorials/Beginner-Client-Libraries/Single-Package-Define-And-Use-Interface.md)에서 확인할 수 있습니다.

## 타입 합성을 사용하세요

다른 ROS 2 메시지 타입 패키지의 멤버를 포함하는 사용자 정의 타입을 생성할 수 있습니다. 예를 들어, ROS 2 패키지 `geometry_msgs`에서 `Point32` 타입의 멤버를 추가해 보겠습니다.

우선 `CMakeLists.txt` 파일에 해당 종속성을 추가해야 합니다.

```cmake
...
find_package(rosidl_default_generators 필수)
find_package(geometry_msgs 필수)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MyCustomMessage.msg"
  종속성 geometry_msgs
 )
...
```

또한 `package.xml` 파일에 종속성을 추가하세요.

```xml
...
<build_depend>rosidl_default_generators</build_depend>
<exec_depend>rosidl_default_runtime</exec_depend>
<그룹 구성원>rosidl_interface_packages</그룹 구성원>
<depend>geometry_msgs</depend>
...
```

이제 `msg/MyCustomMessage.msg` 파일의 메시지 정의에 `geometry_msgs` 패키지의 유형을 포함할 수 있습니다.

```
...
int64 int64_테스트
uint64 uint64_테스트
geometry_msgs/Point32 point32_test
```

마지막으로, 코드에서 사용자 정의 형식의 이 새로운 멤버에 접근할 수 있습니다.


```c
#include <my_custom_message/msg/my_custom_message.h>

...

내_사용자 지정 메시지__msg__내 사용자 지정 메시지;

msg.byte_test = 3;
msg.uint32_test = 42;

msg.point32_test.x = 1.23;
msg.point32_test.y = 2.31;
msg.point32_test.z = 3.12;

...
```

참고로, micro_ros_agent가 이러한 새로운 유형을 등록하려면 위에서 생성한 사용자 지정 유형이 포함된 패키지를 호스트 작업 공간(예: `~/uros_ws/src`)에도 복제하고 에이전트를 실행하기 전에 해당 위치에서 컴파일해야 합니다.

---

## 출처: `_docs/tutorials/advanced/handling_type_memory/index.md`
<a id="source-docs-tutorials-advanced-handling-type-memory-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

이 페이지는 micro-ROS에서 메시지와 타입 메모리를 처리하는 방법을 설명하는 것을 목표로 합니다.

우선, micro-ROS 사용자는 임베디드 C99 환경에 있으므로 메모리를 올바르게 처리하기 위해 어떤 메시지와 ROS 2 유형이 사용되는지 아는 것이 중요합니다.

이 튜토리얼에서는 두 가지 접근 방식을 제시합니다. 하나는 수동 메모리 할당 방식이고, 다른 하나는 [`micro_ros_utilities`](https://github.com/micro-ROS/micro_ros_utilities) 패키지를 사용한 자동화된 방식입니다.

- [수동 할당](#manual-allocation)
  - [micro-ROS의 시퀀스 유형](#sequence-types-in-micro-ros)
  - [micro-ROS의 화합물 유형](#compound-types-in-micro-ros)
  - [화합물 유형의 순서](#sequences-of-compound-types)
- [micro-ROS 유틸리티](#micro-ros-utilities)

# 수동 할당

micro-ROS 애플리케이션에서 사용되는 타입의 `.msg` 또는 `.srv` 파일을 살펴보면 각 멤버의 타입을 확인할 수 있습니다. 현재 지원되는 타입은 다음과 같습니다.
- 기본 유형
- 배열 타입
- 시퀀스 유형
- 복합형

이해를 돕기 위해 `.mgs` 파일을 예로 들어보겠습니다.

```
# MyType.msg
std_msgs/헤더 헤더
int32[] 값
float64 지속 시간
int8[10] 계수
문자열 이름
```

이 예시에서는 다음과 같습니다.
- `duration` 멤버는 **기본 타입 멤버**입니다.
- `values` 멤버는 이 경우처럼 `int32`의 무한 시퀀스를 가지므로 **시퀀스 유형 멤버**입니다.
- `coefficients` 멤버는 이 경우 `int8` 타입의 10개 단위로 구성된 제한된 시퀀스를 가지므로 **배열 타입 멤버**입니다.
- `header` 멤버는 동일하거나 다른 ROS 2 패키지에 설명된 복합 유형을 참조하므로 **복합 유형 멤버**입니다.
- `name` 멤버는 **문자열 타입 멤버**이며 `char[]` (시퀀스 타입 멤버)로 이해해야 합니다.

**micro-ROS 타입 지원**을 다룰 때 개발자는 micro-ROS의 C99 API에서 이 메시지가 어떻게 처리될지 고려해야 합니다. 일반적으로 micro-ROS 타입 지원은 해당 메시지의 C99 구조체 표현을 생성합니다.

```c
typedef struct mypackage__msg__MyType
{
  std_msgs__msg__Header 헤더;
  rosidl_runtime_c__int32__시퀀스 값;
  지속 시간 두 배;
  int8 계수[10];
  rosidl_runtime_c__String name; // rosidl_runtime_c__char__Sequence와 동일
} mypackage__msg__MyType;
```

따라서 애플리케이션에 `mypackage__msg__MyType mymsg;`와 같은 유형의 변수가 있는 경우, 우리는 다음을 알 수 있습니다.
- `mymsg.coefficients`에는 `int8` 배열이 있습니다.
- `mymsg.duration`은 `double` 멤버입니다.

하지만 `...시퀀스`와 복합 유형 멤버는 어떻게 되나요?

## micro-ROS의 시퀀스 유형

**시퀀스 타입 멤버**는 포인터 `data`, `size`, `capacity` 값을 저장하는 특수한 타입 멤버입니다. 포인터는 `capacity` 값까지 저장할 수 있는 메모리를 가져야 하며, `size` 멤버는 현재 시퀀스에 있는 요소의 개수를 나타냅니다. 일반적으로 micro-ROS에서는 사용자가 이러한 시퀀스 멤버에 메모리와 값을 할당합니다.

`MyType.msg`의 경우, `values` 시퀀스 멤버는 C99에서 다음과 같은 구조체로 표현됩니다.

```c
typedef struct rosidl_runtime_c__int32__Sequence
{
  int32_t* data; /* int32 배열에 대한 포인터 */
  size_t size; /* 데이터에 있는 유효 항목의 개수 */
  size_t capacity; /* 데이터에 할당된 항목 수 */
} rosidl_runtime_c__int32__Sequence;
```

따라서 사용자는 다음과 같이 유형을 처리해야 합니다.

```c
mypackage__msg__MyType mymsg;

// mymsg.values.data는 현재 NULL이거나 잘못된 값입니다.
// mymsg.values.size는 현재 0이거나 의미 없는 값입니다.
// mymsg.values.capacity는 현재 0이거나 잘못된 값입니다.

// 시퀀스에 동적 메모리 할당
mymsg.values.capacity = 100;
mymsg.values.data = (int32_t*) malloc(mymsg.values.capacity * sizeof(int32_t));
mymsg.values.size = 0;

// 시퀀스에 정적 메모리 할당
정적 int32_t 메모리[100];
mymsg.values.capacity = 100;
mymsg.values.data = 메모리;
mymsg.values.size = 0;

// 일부 데이터를 채웁니다
for(int32_t i = 0; i < 3; i++){
  mymsg.values.data = i;
  mymsg.values.size++;
}
```

## 마이크로 ROS의 화합물 유형

복합 형식을 다룰 때는 사용자가 각 내부 멤버를 처리하는 방법을 결정하기 위해 형식을 재귀적으로 검사해야 합니다.

예를 들어 `MyType.msg` 예제에서 `header` 멤버는 다음과 같은 구조를 가지고 있습니다.

```c
typedef struct std_msgs__msg__Header
{
  내장 인터페이스__메시지__타임스탬프;
  rosidl_runtime_c__String frame_id;
} std_msgs__msg__Header;
```

`rosidl_runtime_c__String`은 `rosidl_runtime_c__char__Sequence`와 동일하다는 점을 기억하세요. 그리고 `builtin_interfaces__msg__Time`은 다음과 같습니다.

```c
typedef struct builtin_interfaces__msg__Time
{
  int32_t 초;
  uint32_t 나노초;
} builtin_interfaces__msg__Time;
```

`MyType.msg` 파일의 `header` 멤버를 초기화하려면 다음과 같이 하십시오.

```c
mypackage__msg__MyType mymsg;

// frame_id 문자 시퀀스에 동적 메모리를 할당합니다.
mymsg.header.frame_id.capacity = 100;
mymsg.header.frame_id.data = (char*) malloc(mymsg.values.capacity * sizeof(char));
mymsg.header.frame_id.size = 0;

// frame_id 문자 시퀀스에 값을 할당합니다.
strcpy(mymsg.header.frame_id.data, "Hello World");
mymsg.header.frame_id.size = strlen(mymsg.header.frame_id.data);

// 다른 멤버에 값 할당
mymsg.stamp.sec = 10;
mymsg.stamp.nanosec = 20;
```

## 화합물 유형의 순서

사용자는 **복합체 유형 멤버**의 **시퀀스 유형 멤버** 또한 유효한 ROS 2 유형이라는 점을 고려해야 합니다. 예를 들어, 이전 예제를 수정해 보겠습니다.

```
# MyComplexType.msg
std_msgs/Header[] 멀티헤더
int32[] 값
float64 지속 시간
int8[10] 계수
문자열 이름
```

이 경우 생성되는 타입 지원은 다음과 같습니다.

```c
typedef struct mypackage__msg__MyComplexType
{
  std_msgs__msg__Header__Sequence 멀티헤더;
  rosidl_runtime_c__int32__시퀀스 값;
  지속 시간 두 배;
  int8 계수[10];
  rosidl_runtime_c__String name; // rosidl_runtime_c__char__Sequence와 동일
} mypackage__msg__MyComplexType;
```

`multiheaders`는 **시퀀스 타입 멤버**이므로 적절하게 처리해야 하지만, 동시에 **복합 타입 멤버**이므로 자체 멤버를 초기화하는 방식으로 재귀적으로 처리해야 합니다. 예를 들면 다음과 같습니다.

```c
mypackage__msg__MyComplexType mymsg;

// 멀티헤더 시퀀스를 초기화합니다.
mymsg.multiheaders.capacity = 10;
mymsg.multiheaders.data = (std_msgs__msg__Header*) malloc(mymsg.values.capacity * sizeof(std_msgs__msg__Header));
mymsg.multiheaders.size = 0;

// 일부 데이터를 채웁니다
for(int32_t i = 0; i < 3; i++){
  mymsg.values.data = i;

  // 이 시퀀스 요소 frame_id에 메모리를 추가합니다.
  mymsg.multiheaders.data[i].frame_id.capacity = 100;
  mymsg.multiheaders.data[i].frame_id.data = (char*) malloc(mymsg.multiheaders.data[i].frame_id.capacity * sizeof(char));
  mymsg.multiheaders.data[i].frame_id.size = 0;

  // frame_id 문자 시퀀스에 값을 할당합니다.
  strcpy(mymsg.multiheaders.data[i].frame_id.data, "Hello World");
  mymsg.multiheaders.data[i].frame_id.size = strlen(mymsg.multiheaders.data[i].frame_id.data);

  // 다른 멤버에 값 할당
  mymsg.multiheaders.data[i].stamp.sec = 10;
  mymsg.multiheaders.data[i].stamp.nanosec = 20;

  mymsg.multiheaders.size++;
}
```

# 마이크로-ROS 유틸리티

[`rosidl_typesupport_introspection_c`](https://github.com/ros2/rosidl/tree/rolling/rosidl_typesupport_introspection_c)가 포함됨에 따라 micro-ROS 타입에 대한 자동화된 메모리 처리가 가능해졌습니다. 이 기능과 관련된 도구는 [`micro_ros_utilities`](https://github.com/micro-ROS/micro_ros_utilities) 패키지에서 사용할 수 있습니다.

패키지 [`micro_ros_utilities`](https://github.com/micro-ROS/micro_ros_utilities)의 문서는 [여기](/_docs/api/utils/)에서 확인할 수 있습니다.

이 패키지는 기본 동적 메모리 할당자를 사용하여 특정 메시지 구조체에 메모리를 자동으로 할당할 수 있습니다. 예를 들어, 이전에 선언된 유형을 사용할 수 있습니다.

```c
mypackage__msg__MyType mymsg;

정적 micro_ros_utilities_memory_conf_t conf = {0};

bool success = micro_ros_utilities_create_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyType),
  &mymsg,
  회의
);
```

이 코드는 `MyType` 타입에 모든 문자열과 시퀀스를 재귀적으로 초기화합니다. 이 메모리 슬롯의 크기는 기본적으로 [`micro_ros_utilities_memory_conf_default`](https://github.com/micro-ROS/micro_ros_utilities/blob/c829971bd33ac1f14a94aa722476110b4b59eaf9/include/micro_ros_utilities/type_utilities.h#L51)에 정의된 크기를 따릅니다.
- 문자열은 20자로 구성됩니다.
- ROS 2 유형 시퀀스의 길이는 5입니다.
- 기본 유형 시퀀스의 길이는 5입니다.

이 기본 설정은 다음을 사용하여 재정의할 수 있습니다.

```c
mypackage__msg__MyType mymsg;

정적 micro_ros_utilities_memory_conf_t conf = {0};

conf.max_string_capacity = 50;
conf.max_ros2_type_sequence_capacity = 5;
conf.max_basic_type_sequence_capacity = 5;

bool success = micro_ros_utilities_create_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyType),
  &mymsg,
  회의
);
```

구조체의 각 멤버 길이를 사용자 지정하려면 다음 예와 같이 복잡한 규칙 접근 방식을 사용할 수 있습니다.

```c
mypackage__msg__MyComplexType mymsg;

정적 micro_ros_utilities_memory_conf_t conf = {0};

micro_ros_utilities_memory_rule_t rules[] = {
  {"멀티헤더", 4},
  {"multiheaders.frame_id", 60},
  {"이름", 10}
};
conf.rules = 규칙;
conf.n_rules = sizeof(rules) / sizeof(rules[0]);

// MyComplexType의 "values"라는 멤버는 기본값인 max_basic_type_sequence_capacity를 갖습니다.

bool success = micro_ros_utilities_create_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
  &mymsg,
  회의
);
```

사용자가 제공한 버퍼를 사용하여 메모리를 할당하는 것도 가능합니다.

```c
mypackage__msg__MyComplexType mymsg;

정적 micro_ros_utilities_memory_conf_t conf = {0};

정적 uint8_t my_buffer[1000];

bool success = micro_ros_utilities_create_static_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
  &mymsg,
  회의,
  내 버퍼,
  sizeof(my_buffer)
);
```

이 라이브러리는 특정 구성에서 두 접근 방식이 사용할 메모리 크기를 계산하는 유틸리티를 제공합니다. 여기서 계산되는 메모리 양은 동적 사용량 또는 사용자가 제공한 버퍼의 사용량만을 나타내며, `sizeof(mypackage__msg__MyComplexType)`는 고려되지 않습니다.

```c
mypackage__msg__MyComplexType mymsg;

정적 micro_ros_utilities_memory_conf_t conf = {0};

size_t dynamic_size = micro_ros_utilities_get_dynamic_size(
    ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
    회의
);

size_t static_size = micro_ros_utilities_get_static_size(
    ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
    회의
);
```

마지막으로, 동적 메모리에 할당된 메시지를 소멸시키는 함수도 제공됩니다.


```c
mypackage__msg__MyComplexType mymsg;

// micro_ros_utilities_create_message_memory를 사용하여 이전에 할당된 메모리를 해제합니다.

bool success = micro_ros_utilities_destroy_message_memory(
  ROSIDL_GET_MSG_TYPE_SUPPORT(mypackage, msg, MyComplexType),
  &mymsg,
  회의
);
```

---

## 출처: `_docs/tutorials/advanced/microxrcedds_rmw_configuration/index.md`
<a id="source-docs-tutorials-advanced-microxrcedds-rmw-configuration-index-md"></a>

<img src="https://img.shields.io/badge/Applies_to-all_current_distros-green" style="display:inline"/>

micro-ROS는 마이크로컨트롤러 및 메모리 자원이 부족한 장치를 대상으로 합니다.
이러한 점을 염두에 두고 micro-ROS는 동적 메모리 대신 정적 메모리 사용을 우선시하고 애플리케이션의 메모리 사용량을 최적화함으로써 메모리 관리 문제를 해결하고자 합니다.
물론, 이로 인해 사용자는 사전 컴파일 튜닝이라는 비용을 부담해야 합니다.

이 튜토리얼에서는 micro-ROS에서 관리하는 메모리 리소스가 무엇이며 특정 애플리케이션에 맞게 이러한 리소스를 조정하는 방법을 설명합니다.
또한 사용자가 micro-ROS 에이전트 엔드포인트 또는 Micro XRCE-DDS 세션의 `client_key`를 구성할 수 있는 RMW 런타임 구성 API에 대해서도 다룹니다.

## 메모리 리소스 최적화

micro-ROS는 Micro XRCE-DDS 라이브러리와 해당 RMW 구현체인 rmw-microxrcedds와 관련된 두 가지 서로 다른 메모리 리소스를 처리합니다.

### 마이크로 XRCE-DDS

Micro XRCE-DDS 메시지는 클라이언트와 에이전트 간에 **스트림**을 통해 전달됩니다.
스트림은 순서가 독립적으로 정렬된 정보의 흐름을 나타내므로 일종의 메시지 큐입니다.
스트림에는 **최선의 노력**과 **안정적인** 두 가지 종류가 있습니다.
최선형 스트림과 안정적인 스트림 모두 원시 버퍼(`uint8_t` 배열)가 연결되어 있지만 레이아웃은 다릅니다.

한편으로, 최선 노력 스트림은 단일 메시지 큐로 해석될 수 있습니다.
따라서 원시 버퍼는 하나의 메시지만 팝/푸시하는 단일 데이터 버퍼입니다.

![](_docs/tutorials/advanced/microxrcedds_rmw_configuration/imgs/best_effort_stream.svg)

반면, 신뢰할 수 있는 스트림은 DDS-XRCE 사양에 설명된 신뢰할 수 있는 통신 프로토콜에 따라 팝/푸시되는 여러 메시지를 포함합니다.
이는 원시 버퍼를 각각 하나의 메시지를 포함하는 청크로 분할함으로써 달성됩니다.

![](_docs/tutorials/advanced/microxrcedds_rmw_configuration/imgs/reliable_strea.svg)

최선형 및 안정적인 스트림의 크기는 두 가지 CMake 플래그 세트를 통해 구성할 수 있습니다.

* `UCLIENT_UDP_TRANSPORT_MTU`, `UCLIENT_TCP_TRANSPORT_MTU` 및 `UCLIENT_SERIAL_TRANSPORT_MTU`(선택된 전송 방식에 따라 다름): 이러한 플래그는 안정적인 스트림의 각 청크 크기와 일치하는 최선형 스트림 버퍼의 크기를 제어합니다.
* `RMW_UXRCE_STREAM_HISTORY`: 안정적인 스트림에 사용할 슬롯 수를 설정합니다.

스트림 크기는 micro-ROS 애플리케이션의 최대 메시지 크기(MMS)를 간접적으로 결정합니다.
이 MMS는 최선형 메시지의 경우 (`UCLIENT_<XXX>_TRANSPORT_MTU` - 12 B)이고, 신뢰할 수 있는 메시지의 경우 (`UCLIENT_<XXX>_TRANSPORT_MTU` * (`RMW_UXRCE_STREAM_HISTORY` - 12 B))입니다.

최선 노력 방식 또는 안정적인 스트림 사용 여부는 특정 게시자 또는 구독에 대해 `rmw_qos_profile_t`에 설정된 `rmw_qos_reliability_policy_t`에 의해 처리됩니다.
`RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT`의 경우에는 최선형 스트림이 사용되고, `RMW_QOS_POLICY_RELIABILITY_RELIABLE`의 경우에는 안정적인 스트림이 사용됩니다.

micro-ROS 미들웨어에 대한 자세한 내용은 [Micro XRCE-DDS 문서](https://micro-xrce-dds.docs.eprosima.com/)에서 확인할 수 있습니다.

### rmw-microxrcedds

rmw-microxrcedds는 `rcl` 및 `rclc` 엔티티와 관련된 리소스를 할당하기 위해 정적 메모리를 사용합니다.
이 정적 메모리는 각 엔티티 유형별로 독립적인 메모리 풀을 통해 관리됩니다.
이러한 메모리 풀의 크기는 CMake 플래그를 통해 설정할 수 있습니다.
예를 들어, `RMW_UXRCE_MAX_PUBLISHERS`는 `rcl_publisher_t`의 풀 메모리 크기를 설정합니다.
이러한 메모리 풀의 크기는 마이크로 ROS 애플리케이션이 사용할 수 있는 최대 엔티티 수를 제한한다는 점에 유의해야 합니다.

아래 그림은 `rcl` 엔티티와 해당 엔티티와 연결된 메모리 풀의 크기를 설정하는 CMake 플래그 간의 관계를 요약한 것입니다.

![](_docs/tutorials/advanced/microxrcedds_rmw_configuration/imgs/micro_ros_memory.svg)

rmw-microxrcedds에서 관리하는 또 다른 중요한 메모리 리소스는 메시지 기록입니다.
rmw-microxrcedds는 사용자가 구독 메시지를 읽기 전에 해당 메시지를 보관하기 위해 정적 메모리 메시지 큐를 사용합니다.
이 메시지 큐의 크기는 `RMW_UXRCE_MAX_HISTORY`로 설정할 수 있습니다.

앞서 언급한 모든 CMake 플래그는 [micro_ros_setup](https://github.com/micro-ROS/micro_ros_setup)에서 지원하는 각 플랫폼의 `.meta` 파일에 설정해야 한다는 점에 유의해야 합니다.
예를 들어, [핑퐁 애플리케이션](https://micro-ros.github.io//_docs/tutorials/core/first_application_linux/)에서 호스트 [구성 파일](https://github.com/micro-ROS/micro_ros_setup/blob/humble/config/host/generic/client-host-colcon.meta)은 다음과 같이 수정하여 최적화할 수 있습니다.

```
{
  "이름": {
    "rmw_microxrcedds":{
      "cmake-args":[
        ....
        "-DRMW_UXRCE_MAX_NODES=1", // 3 --> 1
        "-DRMW_UXRCE_MAX_PUBLISHERS=2", // 5 --> 2
        "-DRMW_UXRCE_MAX_SUBSCRIPTIONS=2", // 5 --> 2
        "-DRMW_UXRCE_MAX_SERVICES=0", // 5 --> 0
        "-DRMW_UXRCE_MAX_CLIENTS=0", // 5 --> 0
        "-DRMW_UXRCE_STREAM_HISTORY=5", // 20 --> 5
        "-DRMW_UXRCE_MAX_HISTORY=5", // 20 --> 5
        ....
      ]
    }
  }
}
```

## 런타임 구성

클라이언트-에이전트 연결과 관련된 빌드 시간 매개변수(예: **CONFIG_RMW_DEFAULT_UDP_PORT**, **CONFIG_RMW_DEFAULT_UDP_IP** 및 **CONFIG_RMW_DEFAULT_SERIAL_DEVICE**)는 빌드 시간 또는 런타임에 구성할 수 있습니다.
즉, 위에서 언급한 [설정 파일](https://github.com/micro-ROS/micro_ros_setup/blob/humble/config/host/generic/client-host-colcon.meta)에서 이러한 설정을 지정할 수 있으며, micro-ROS는 런타임에 일부 RMW 및 미들웨어 매개변수를 설정할 수 있는 사용자 구성 API를 제공합니다.

다음 예제 코드는 에이전트의 IP 주소, 포트 또는 직렬 장치를 설정하는 데 필요한 [API](https://github.com/micro-ROS/rmw_microxrcedds/blob/iron/rmw_microxrcedds_c/include/rmw_microros/init_options.h) 호출을 보여줍니다.

```c
#include <rmw_microros/rmw_microros.h>

// RCL 옵션 및 컨텍스트를 초기화합니다.
rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
rcl_context_t context = rcl_get_zero_initialized_context();
rcl_init_options_init(&init_options, rcl_get_default_allocator());

// RCL 옵션에서 RMW 옵션을 가져옵니다.
rmw_init_options_t* rmw_options = rcl_init_options_get_rmw_init_options(&init_options);

// TCP/UDP의 경우: RMW IP 매개변수 설정
rmw_uros_options_set_udp_address("127.0.0.1", "8888", rmw_options);

// 시리얼 케이스: RMW 시리얼 장치 매개변수 설정
rmw_uros_options_set_serial_device("/dev/ttyAMA0", rmw_options)

// RMW 클라이언트 키 설정
rmw_uros_options_set_client_key(0xBA5EBA11, rmw_options);

// RCL 초기화
rcl_init(0, NULL, &init_options, &context);

// ... micro-ROS 코드 ...
```

Micro XRCE-DDS의 `client_key`도 설정할 수 있다는 점에 유의하십시오. 일반적으로 이 값은 임의로 설정됩니다. 이 기능은 에이전트 측에서 이미 생성된 DDS 엔티티를 재사용하는 데 유용합니다. 자세한 내용은 [여기](https://micro-xrce-dds.docs.eprosima.com/en/latest/getting_started.html#publisher-configuration) 및 [여기](https://github.com/micro-ROS/rmw-microxrcedds#rmw-micro-xrce-dds-implementation)에서 확인할 수 있습니다.

---

## 출처: `_docs/tutorials/advanced/overview/index.md`
<a id="source-docs-tutorials-advanced-overview-index-md"></a>

이 장에서는 micro-ROS에 대한 사전 지식이 있는 사용자를 위한 고급 튜토리얼을 제공합니다. 이 튜토리얼들은 [**첫걸음 튜토리얼**](../../core/overview)보다 더 심도 있게 micro-ROS를 활용하는 데 도움이 됩니다. 각 튜토리얼은 micro-ROS 스택 및 툴체인의 서로 다른 측면을 다루므로 특정 순서로 수강할 필요는 없습니다.

* [**미들웨어 구성 최적화**](../microxrcedds_rmw_configuration/)

  이 튜토리얼에서는 마이크로컨트롤러와 리눅스 기반 마이크로프로세서에서 실행되는 micro-ROS 에이전트 간의 미들웨어 구성 과정을 안내하여 특정 사용 사례 및 애플리케이션에 최적화하는 방법을 설명합니다.

* [**micro-ROS에 사용자 지정 ROS 메시지를 포함하는 방법**](../create_new_type/)

  이 튜토리얼에서는 micro-ROS 애플리케이션에 사용자 지정 ROS 메시지 유형을 생성하거나 포함하는 방법, 특히 [빌드 시스템](https://github.com/micro-ROS/micro_ros_setup)에 해당 메시지 유형을 추가하는 방법을 설명합니다.

* [**micro-ROS에서 사용자 지정 QoS를 사용하는 방법**](../create_dds_entities_by_ref/)

  이 튜토리얼에서는 micro-ROS 기본 미들웨어(Micro XRCE-DDS Client)에서 허용하는 *참조 기반* ROS 2(DDS) 엔티티 생성 모드를 사용하여 완벽하게 구성 가능한 QoS 설정을 적용한 micro-ROS 엔티티를 생성하는 절차를 설명합니다.

* [**사용자 지정 마이크로 ROS 전송 생성**](../create_custom_transports/)

  이 튜토리얼은 micro-ROS 툴셋에 기본적으로 제공되는 전송 방식 대신, micro-ROS 사용자 정의 전송 방식을 직접 만들고자 하는 사용자를 위해 단계별 지침을 제공하는 것을 목표로 합니다.

* [**사용자 지정 정적 micro-ROS 라이브러리 생성**](../create_custom_static_library/)

  이 튜토리얼은 micro-ROS를 독립형 라이브러리로 컴파일하여 사용자 정의 개발 도구에 통합하려는 사용자를 위해 단계별 지침을 제공하는 것을 목표로 합니다.

* [**섀도우 빌더를 이용한 벤치마킹**](../benchmarking/)

  이 튜토리얼은 *섀도우 빌더(Shadow Builder)*라는 특정 벤치마킹 도구를 설명하는 것을 목표로 합니다. 더 구체적으로는 플러그인을 처음부터 끝까지 만드는 방법과 코드에 계측 기능을 추가하는 방법을 설명합니다.

---

## 출처: `_docs/tutorials/core/first_application_linux/index.md`
<a id="source-docs-tutorials-core-first-application-linux-index-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

이 튜토리얼에서는 micro-ROS를 Linux와 함께 사용하여 탁구 애플리케이션을 테스트하는 방법을 배우게 됩니다.
후속 튜토리얼인 [*RTOS에서 실행되는 첫 번째 마이크로 ROS 애플리케이션*](/_docs/tutorials/core/first_application_rtos/)에서는 다음과 같습니다.
이 과정에서는 NuttX, FreeRTOS 또는 Zephyr RTOS를 실행하는 마이크로컨트롤러에서 이 애플리케이션을 구축하고 실행하는 방법을 배우게 됩니다.
마지막으로, [*Zephyr Emulator*](/_docs/tutorials/core/zephyr_emulator/) 튜토리얼에서 테스트 방법을 배우게 됩니다.
Zephyr 에뮬레이터에서 실행되는 micro-ROS 애플리케이션.

{% first_application_common/build_system.md 포함 %}

```bash
# 펌웨어 생성 단계
ros2 run micro_ros_setup create_firmware_ws.sh host
```

명령어가 실행되면 작업 공간에 `firmware`라는 폴더가 생성되어야 합니다.

이 단계는 특히 다음 위치에 있는 Linux용 micro-ROS 앱 세트를 다운로드하는 역할을 담당합니다.
`src/uros/micro-ROS-demos/rclc`.
각 앱은 다음 파일들이 포함된 폴더로 표현됩니다.

* `main.c`: 이 파일에는 애플리케이션의 로직이 포함되어 있습니다.
* `CMakeLists.txt`: 이 파일은 애플리케이션을 컴파일하는 스크립트가 포함된 CMake 파일입니다.

사용자가 사용자 지정 애플리케이션을 생성하려면 이 위치에 `<my_app>` 폴더를 등록해야 합니다.
방금 설명한 두 개의 파일이 포함되어 있습니다.
또한, 그러한 새로운 애플리케이션 폴더는 모두 등록되어야 합니다.
`src/uros/micro-ROS-demos/rclc/CMakeLists.txt` 파일에 다음 줄을 추가하세요.

```
export_executable(<my_app>)
```

이 튜토리얼에서는 다음 위치에 있는 기본 제공되는 `ping_pong` 애플리케이션에 집중하겠습니다.
`src/uros/micro-ROS-demos/rclc/ping_pong`.
이 앱의 전체 콘텐츠를 확인할 수 있습니다.
[여기](https://github.com/micro-ROS/micro-ROS-demos/tree/humble/rclc/ping_pong).

{% first_application_common/pingpong_logic.md 포함 %}

호스트 앱별 파일의 내용은 여기에서 확인할 수 있습니다.
[main.c](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/ping_pong/main.c) 및
[CMakeLists.txt](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/ping_pong/CMakeLists.txt).
이 파일들을 꼼꼼히 검토하면 이 RTOS에서 마이크로 ROS 앱을 만드는 방법을 알 수 있습니다.

## 펌웨어 빌드 중

앱이 생성되면 빌드 단계를 진행해야 합니다.
위에서 설명한 4단계 워크플로와 관련하여 구성 단계가 포함될 것으로 예상됩니다.
앱을 빌드하기 전에 말입니다. 하지만 우리는 보드가 아닌 호스트 머신에서 micro-ROS를 컴파일하고 있으므로,
이 경우에는 구성 단계에서 구현되는 크로스 컴파일이 필요하지 않습니다.
이제 펌웨어를 빌드하고 로컬 설치를 진행할 수 있습니다.

```bash
# 빌드 단계
ros2 run micro_ros_setup build_firmware.sh
소스 install/local_setup.bash
```
{% 첫 번째 애플리케이션 공통/에이전트 생성.md 포함 %}

### bashrc에 micro-ROS 환경 변수를 추가합니다(선택 사항).

ROS 2 및 micro-ROS 워크스페이스 설정 파일을 `.bashrc` 파일에 추가하면 새 명령줄을 열 때마다 파일을 불러올 필요가 없습니다.
```bash
echo source /opt/ros/$ROS_DISTRO/setup.bash >> ~/.bashrc
echo source ~/microros_ws/install/local_setup.bash >> ~/.bashrc
```

## micro-ROS 앱 실행하기

이제 클라이언트와 에이전트가 호스트 시스템에 올바르게 설치되었습니다.

micro-ROS가 ROS 2 데이터 공간에 접근할 수 있도록 하려면 에이전트를 실행하십시오.

```bash
# micro-ROS 에이전트를 실행합니다
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

그런 다음 다른 명령줄에서 micro-ROS 노드를 실행합니다(ROS 2 및 micro-ROS 설치를 소싱하고 RMW Micro XRCE-DDS 구현을 설정하는 것을 잊지 마세요).

```bash
source /opt/ros/$ROS_DISTRO/setup.bash
소스 install/local_setup.bash

# RMW Micro XRCE-DDS 구현 사용
export RMW_IMPLEMENTATION=rmw_microxrcedds

# micro-ROS 노드를 실행합니다
ros2 실행 micro_ros_demos_rclc 핑퐁
```

{% first_application_common/test_app_host.md 포함 %}

## 여러 개의 핑퐁 노드

리눅스 마이크로 ROS 앱의 장점 중 하나는 하드웨어를 많이 구매할 필요가 없다는 것입니다.
멀티노드 마이크로 ROS 앱 몇 가지를 테스트해 보세요.
자, 이제 이전 섹션에서 사용했던 마이크로 ROS 에이전트를 이용하여 네 개의 서로 다른 명령줄을 열고 다음 명령어를 실행해 보겠습니다.
각:

```bash
cd microros_ws

source /opt/ros/$ROS_DISTRO/setup.bash
소스 install/local_setup.bash

export RMW_IMPLEMENTATION=rmw_microxrcedds

ros2 실행 micro_ros_demos_rclc 핑퐁
```

모든 micro-ROS 노드가 활성화되어 micro-ROS 에이전트에 연결되면 노드들이 상호 작용하는 것을 볼 수 있습니다.

```
user@user:~$ ros2 run micro_ros_demos_rclc ping_pong
핑 전송 시퀀스 1711620172_1742614911 <---- 이 마이크로 ROS 노드는 핑 ID "1711620172"와 노드 ID "1742614911"로 핑을 전송합니다.
seq 1711620172_1742614911 (1)에 대한 퐁 <---- 일등 항해사가 내 핑을 퐁합니다
seq 1711620172_1742614911(2)에 대한 퐁 <---- 두 번째 항해사가 내 핑을 퐁합니다
seq 1711620172_1742614911(3)에 대한 퐁 <---- 세 번째 동료가 내 핑을 퐁합니다
시퀀스 번호 1845948271_546591567로 핑이 수신되었습니다. 응답합니다. <---- "546591567"로 식별된 상대방으로부터 핑이 수신되었습니다. 퐁을 보내 보겠습니다.
시퀀스 번호 232977719_1681483056으로 핑이 수신되었습니다. 응답합니다. <---- "1681483056"으로 식별된 상대방으로부터 핑이 수신되었습니다. 퐁을 보내 보겠습니다.
시퀀스 번호 1134264528_1107823050으로 핑이 수신되었습니다. 응답합니다. <---- "1107823050"으로 식별된 상대방으로부터 핑이 수신되었습니다. 퐁을 보내 보겠습니다.
핑 전송 시퀀스 324239260_1742614911
seq 324239260_1742614911(1)에 대한 Pong
seq 324239260_1742614911(2)에 대한 Pong
seq 324239260_1742614911(3)에 대한 Pong
시퀀스 번호 1435780593_546591567로 핑이 수신되었습니다. 응답합니다.
시퀀스 번호 2034268578_1681483056으로 핑이 수신되었습니다. 응답합니다.
```

---

## 출처: `_docs/tutorials/core/first_application_rtos/freertos.md`
<a id="source-docs-tutorials-core-first-application-rtos-freertos-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

이 튜토리얼에서는 micro-ROS와 FreeRTOS를 함께 사용하여 탁구 애플리케이션을 테스트하는 방법을 배우게 됩니다.
{% first_application_common/target_hardware.md 포함 %}
* [USB-시리얼 케이블 암형](https://www.olimex.com/Products/Components/Cables/USB-Serial-Cable/USB-SERIAL-F/)

이 튜토리얼은 다른 하드웨어에도 비교적 쉽게 적용할 수 있습니다. [Sameer Tuteja](https://sam-tj.github.io/)는 ESP32 WROOM32 보드를 사용하는 방법에 대한 유용한 블로그 게시물을 [https://link.medium.com/JFof42RUwib](https://link.medium.com/JFof42RUwib)에 작성했습니다.

{% first_application_common/build_system.md 포함 %}

```bash
# 단계 생성
ros2 run micro_ros_setup create_firmware_ws.sh freertos olimex-stm32-e407
```

명령어가 실행되면 작업 공간에 `firmware`라는 폴더가 생성되어야 합니다.

이 단계는 특히 사용 중인 특정 플랫폼에 맞는 마이크로 ROS 앱 세트를 다운로드하는 역할을 담당합니다.
주소 지정.
FreeRTOS의 경우, 이러한 파일들은 `firmware/freertos_apps/apps` 경로에 있습니다.
각 앱은 다음 파일들이 포함된 폴더로 표현됩니다.

* `app.c`: 이 파일에는 애플리케이션의 로직이 포함되어 있습니다.
* `app-colcon.meta`: 이 파일에는 micro-ROS 앱별 colcon 구성 정보가 포함되어 있습니다. 자세한 설정 방법은 다음과 같습니다.
  이 파일을 통해 RMW를 구성할 수 있습니다.
  [여기](/_docs/tutorials/advanced/microxrcedds_rmw_configuration/).

사용자가 사용자 지정 애플리케이션을 만들려면 이 위치에 `<my_app>` 폴더를 등록해야 합니다.
방금 설명한 두 개의 파일이 포함되어 있습니다.

{% first_application_common/config.md 포함 %}

이 튜토리얼에서는 직렬 전송 방식(`serial`로 표시됨)을 사용하고 기본 제공되는 `ping_pong`에 초점을 맞추겠습니다.
`firmware/freertos_apps/apps/ping_pong`에 위치한 애플리케이션입니다. 선택한 전송 방식으로 이 애플리케이션을 실행하려면,
위의 구성 명령을 실행할 때 아래와 같이 `[APP]` 및 `[OPTIONS]` 매개변수를 지정하십시오.

```bash
# 핑퐁 앱과 직렬 전송을 사용하는 설정 단계
ros2 run micro_ros_setup configure_firmware.sh ping_pong --transport serial
```

`핑퐁` 앱의 전체 콘텐츠를 확인할 수 있습니다.
[여기](https://github.com/micro-ROS/freertos_apps/tree/humble/apps/ping_pong).

{% first_application_common/pingpong_logic.md 포함 %}

FreeRTOS 앱 관련 파일의 내용은 다음에서 확인할 수 있습니다.
[app.c](https://github.com/micro-ROS/freertos_apps/blob/humble/apps/ping_pong/app.c) 및
[app-colcon.meta](https://github.com/micro-ROS/freertos_apps/blob/humble/apps/ping_pong/app-colcon.meta).
이 파일들을 꼼꼼히 검토하면 이 RTOS에서 마이크로 ROS 앱을 만드는 방법을 알 수 있습니다.

{% first_application_common/build_and_flash.md 포함 %}

{% 첫 번째 애플리케이션 공통/에이전트 생성.md 포함 %}

그런 다음, 선택한 전송 방식과 RTOS에 따라 보드와 에이전트의 연결 방식이 달라질 수 있습니다.
이 튜토리얼에서는 Olimex STM32-E407 직렬 연결을 사용하며, 이를 위해 Olimex 개발 보드가 제공됩니다.
USB-시리얼 케이블을 사용하여 컴퓨터에 연결했습니다.

<img width="400" style="padding-right: 25px;" src="_docs/tutorials/core/imgs/5.jpg">

***팁:** 색상 코드는 다음 경우에 적용됩니다.
[이 케이블](https://www.olimex.com/Products/Components/Cables/USB-Serial-Cable/USB-SERIAL-F/).
올리멕스 처방전과 케이블 전송 장치를 반드시 일치시키세요. 접지(GND)도 잊지 마세요!*

{% 첫 번째 애플리케이션 공통/앱 실행 파일 포함 %}

{% include first_application_common/test_app_rtos.md %}

이것으로 FreeRTOS 기반 첫 번째 micro-ROS 애플리케이션 튜토리얼이 완료되었습니다. 다른 RTOS, 예를 들어 NuttX 또는 Zephyr를 사용해 보시겠습니까? (뒤로 가기)

---

## 출처: `_docs/tutorials/core/first_application_rtos/index.md`
<a id="source-docs-tutorials-core-first-application-rtos-index-md"></a>

[리눅스 기반 첫 번째 micro-ROS 애플리케이션 튜토리얼](../first_application_linux)을 완료하셨다면, 이제 실시간 운영 체제(RTOS) 기반의 이 애플리케이션을 마이크로컨트롤러에 플래싱할 준비가 되었습니다.

Micro-ROS는 현재 NuttX, FreeRTOS, Zephyr의 세 가지 RTOS를 지원합니다. 물론, 애플리케이션 코드의 Micro-ROS 관련 부분은 기본 RTOS와 독립적입니다. 또한, RTOS 도구가 ROS 2 메타 빌드 시스템인 colcon에 통합되어 있으므로 기본 툴링은 동일합니다. 하지만 세 가지 RTOS 간에는 구성 및 실행 파일 정의에 미묘한 차이가 있습니다. 따라서 이 튜토리얼에서는 사용할 RTOS를 하나 선택해 주세요.

<table style="border:none;">
 <tr>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="nuttx/"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="125" height="125" src="https://upload.wikimedia.org/wikipedia/commons/b/b0/NuttX_logo.png"><br/>NuttX</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="freertos/"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="263" height="100" src="https://upload.wikimedia.org/wikipedia/commons/4/4e/Logo_freeRTOS.png"><br/>FreeRTOS</a></td>
  <td style="width:33%; text-align:center; vertical-align:bottom; font-weight:bold;"><a href="zephyr/"><img style="margin-left:auto; margin-right:auto; padding-bottom:5px;" width="220" height="114" src="img/_posts/logo-zephyr.jpg"><br/>제피르</a></td>
 </tr>
</테이블>

{% 로고_면책 조항.md 포함 %}

---

## 출처: `_docs/tutorials/core/first_application_rtos/nuttx.md`
<a id="source-docs-tutorials-core-first-application-rtos-nuttx-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/>

이 튜토리얼에서는 micro-ROS와 NuttX를 사용하여 탁구 애플리케이션을 테스트하는 방법을 배우게 됩니다.
{% first_application_common/target_hardware.md 포함 %}
* [USB-시리얼 케이블 암형](https://www.olimex.com/Products/Components/Cables/USB-Serial-Cable/USB-SERIAL-F/)
* [USB-미니 USB 케이블](https://www.olimex.com/Products/Components/Cables/CABLE-USB-A-MINI-1.8M/)

{% first_application_common/build_system.md 포함 %}

```bash
# 단계 생성
ros2 run micro_ros_setup create_firmware_ws.sh nuttx olimex-stm32-e407
```

명령어가 실행되면 작업 공간에 `firmware`라는 폴더가 생성되어야 합니다.

이 단계는 특히 사용 중인 특정 플랫폼에 맞는 마이크로 ROS 앱 세트를 다운로드하는 역할을 담당합니다.
주소 지정.
NuttX의 경우, 이러한 예제는 [여기](https://github.com/micro-ROS/nuttx_apps/tree/foxy/examples)에서 확인할 수 있습니다.
각 앱은 다음 파일들이 포함된 폴더로 표현됩니다.

* `app.c`: 이 파일에는 애플리케이션의 로직이 포함되어 있습니다.
* `Kconfig`: 이 파일에는 NuttX의 Kconfig 설정이 포함되어 있습니다.
* `Make.defs`: 이 파일에는 NuttX 빌드 시스템 정의가 포함되어 있습니다.
* `Makefile`: 이 파일에는 NuttX 전용 앱 빌드 스크립트가 포함되어 있습니다.

## 펌웨어 구성

설정 단계에서는 주요 micro-ROS 옵션을 설정하고 원하는 애플리케이션을 선택합니다.
다음 명령어를 사용하여 실행할 수 있습니다.

```bash
# 구성 단계
ros2 run micro_ros_setup configure_firmware.sh [APP] [OPTIONS]
```

이 튜토리얼에서는 시리얼 전송 방식을 사용하고 `uros_pingpong`의 기본 제공 기능에 집중하겠습니다.
해당 애플리케이션은 [여기](https://github.com/micro-ROS/nuttx_apps/tree/foxy/examples/uros_pingpong)에서 찾을 수 있습니다.
선택한 전송 방식으로 이 애플리케이션을 실행하려면 아래와 같이 `[APP]` 매개변수를 지정하여 위의 구성 명령을 실행하십시오.

```bash
# 핑퐁 앱과 직렬-USB 전송을 사용하는 설정 단계
ros2 run micro_ros_setup configure_firmware.sh pingpong
```

`[OPTIONS]` 매개변수 없이.

사전 구성된 이더넷 예제도 제공됩니다.
```bash
# 핑퐁 앱과 직렬-USB 전송을 사용하는 설정 단계
ros2 run micro_ros_setup configure_firmware.sh pingpong-eth
```

설정을 진행하려면 다음 NuttX 도구 저장소를 복제하십시오.

```bash
# NuttX 사용에 필요한 도구를 다운로드하세요
git clone https://bitbucket.org/nuttx/tools.git firmware/tools
```

다음으로 필요한 `kconfig-frontends`를 설치하세요.

```bash
펌웨어/도구/kconfig-frontends를 푸시합니다.
./configure
만들다

# make 명령이 실패하면 `autoreconf -f -i`를 입력한 다음 make 명령을 다시 실행하십시오.

sudo make install
sudo ldconfig
팝디
```

이제 우리는 마이크로 ROS 수송을 구성하는 두 가지 옵션을 갖게 되었습니다.

- NuttX 메뉴 구성 (대화형)
  * 설정 메뉴를 실행하세요:

    ```bash
    cd 펌웨어/NuttX
    make menuconfig
    ```

  * `애플리케이션 구성 ---> 예제 ---> micro-ROS Ping Pong`에서 애플리케이션이 선택되었는지 확인할 수 있습니다.
  * 전송은 `애플리케이션 구성 ---> micro-ROS ---> 전송` 옵션에서 미리 구성되어 있습니다.
  * 전송 방식을 구성하려면 UDP의 경우 `에이전트의 IP 주소`와 `에이전트의 포트 번호` 옵션을 사용하고, 직렬 통신의 경우 `사용할 직렬 포트` 옵션을 사용하십시오.
  * 변경 사항을 저장하려면 왼쪽 및 오른쪽 화살표가 있는 하단 메뉴로 이동하여 '저장' 버튼을 클릭하십시오.
  * 새 `.config` 설정을 저장할지 묻는 메시지가 표시되면 `확인`을 클릭한 다음 `종료`를 클릭해야 합니다.
  * Esc 키를 세 번 누르면 메뉴가 닫히고 microros_ws로 돌아갑니다.

      ```bash
      CD ../..
      ```

- `kconfig-tweak` 콘솔 명령어:
  * Nuttx 설정 경로로 이동하세요:

    ```bash
    cd 펌웨어/NuttX
    ```

  * UDP 전송 구성:
    ```bash
    kconfig-tweak --set-val CONFIG_UROS_AGENT_IP "127.0.0.1"
    kconfig-tweak --set-val CONFIG_UROS_AGENT_PORT 8888
    ```

  * 직렬 전송 구성:
    ```bash
    kconfig-tweak --set-val CONFIG_UROS_SERIAL_PORT "/dev/ttyS0"
    ```

`uros_pingpong` 앱의 전체 콘텐츠를 확인할 수 있습니다.
[여기](https://github.com/micro-ROS/nuttx_apps/tree/foxy/examples/uros_pingpong).

{% first_application_common/pingpong_logic.md 포함 %}

FreeRTOS 앱 관련 파일의 내용은 다음에서 확인할 수 있습니다.
[app.c](https://github.com/micro-ROS/nuttx_apps/blob/foxy/examples/uros_pingpong/app.c),
[Kconfig](https://github.com/micro-ROS/nuttx_apps/blob/foxy/examples/uros_pingpong/Kconfig),
[Make.defs](https://github.com/micro-ROS/nuttx_apps/blob/foxy/examples/uros_pingpong/Make.defs) 및
[메이크파일](https://github.com/micro-ROS/nuttx_apps/blob/foxy/examples/uros_pingpong/Makefile).
이 파일들을 꼼꼼히 검토하면 이 RTOS에서 마이크로 ROS 앱을 만드는 방법을 알 수 있습니다.

{% first_application_common/build_and_flash.md 포함 %}

{% 첫 번째 애플리케이션 공통/에이전트 생성.md 포함 %}

그런 다음, 선택한 전송 방식과 RTOS에 따라 보드와 에이전트의 연결 방식이 달라질 수 있습니다.
이 튜토리얼에서는 Olimex STM32-E407 직렬 연결을 사용하며, 이를 위해 Olimex 개발 보드가 제공됩니다.
USB-시리얼 케이블을 사용하여 컴퓨터에 연결했습니다.

<img width="400" style="padding-right: 25px;" src="_docs/tutorials/core/imgs/5.jpg">

또한 USB OTG 1 커넥터(미니 USB 커넥터)에 USB-미니 USB 케이블을 연결해야 합니다.
(이더넷 포트에 더 가깝습니다.)

<img width="500" style="padding-right: 25px;" src="_docs/tutorials/core/imgs/7.jpg">

***팁:** 색상 코드는 다음 경우에 적용됩니다.
[이 케이블](https://www.olimex.com/Products/Components/Cables/USB-Serial-Cable/USB-SERIAL-F/).
올리멕스 처방전과 케이블 전송 장치를 반드시 일치시키세요. 접지(GND)도 잊지 마세요!*

## micro-ROS 앱 실행하기

이제 클라이언트와 에이전트가 모두 올바르게 설치되었습니다.

micro-ROS가 ROS 2 데이터 공간에 접근할 수 있도록 하려면 에이전트를 실행하십시오.

```bash
# micro-ROS 에이전트를 실행합니다
ros2 run micro_ros_agent micro_ros_agent serial --dev [장치]
```

***팁:** 다음 명령어를 사용하여 시리얼 장치 이름을 찾을 수 있습니다. `ls /dev/serial/by-id/*`*

다음으로, micro-ROS 애플리케이션을 실행하려면 Minicom을 설치하고 실행해야 합니다.
텍스트 기반 직렬 포트 통신 프로그램입니다. 새 셸을 열고 다음을 입력하십시오.

```bash
sudo minicom -D [장치] -b 115200
```

***팁:** `ls /dev/serial/by-id/*` 명령어를 사용하여 시리얼 장치 이름을 찾을 수 있습니다. `usb-NuttX`로 시작하는 장치를 선택하세요.

Minicom 애플리케이션 내에서 `Enter` 키를 세 번 누르면 Nuttx Shell(NSH)이 나타납니다.
NSH 명령줄에 진입한 후 다음을 입력하십시오.

```bash
우로스_핑퐁
```

{% include first_application_common/test_app_rtos.md %}

이것으로 NuttX 기반 첫 번째 micro-ROS 애플리케이션 튜토리얼이 완료되었습니다. FreeRTOS나 Zephyr와 같은 다른 RTOS를 사용해 보시겠습니까? (뒤로 가기)

---

## 출처: `_docs/tutorials/core/first_application_rtos/zephyr.md`
<a id="source-docs-tutorials-core-first-application-rtos-zephyr-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

이 튜토리얼에서는 탁구 애플리케이션을 테스트하여 Zephyr와 micro-ROS를 사용하는 방법을 배우게 됩니다.
{% first_application_common/target_hardware.md 포함 %}
* [USB-미니 USB 케이블](https://www.olimex.com/Products/Components/Cables/CABLE-USB-A-MINI-1.8M/)

{% first_application_common/build_system.md 포함 %}

```bash
# 단계 생성
ros2 run micro_ros_setup create_firmware_ws.sh zephyr olimex-stm32-e407
```

{% first_application_common/zephyr_common.md 포함 %}

{% first_application_common/config.md 포함 %}

이 튜토리얼에서는 USB 전송 방식(`serial-usb`로 표시됨)을 사용하고 기본 제공되는 `ping_pong`에 초점을 맞추겠습니다.
`firmware/zephyr_apps/apps/ping_pong`에 위치한 애플리케이션입니다. 선택한 전송 방식으로 이 애플리케이션을 실행하려면,
위의 구성 명령을 실행할 때 아래와 같이 `[APP]` 및 `[OPTIONS]` 매개변수를 지정하십시오.

```bash
# 핑퐁 앱과 직렬-USB 전송을 사용하는 설정 단계
ros2 run micro_ros_setup configure_firmware.sh ping_pong --transport serial-usb
```
`핑퐁` 앱의 전체 콘텐츠를 확인할 수 있습니다.
[여기](https://github.com/micro-ROS/zephyr_apps/tree/humble/apps/ping_pong).

{% first_application_common/pingpong_logic.md 포함 %}

Zephyr 앱 관련 파일의 내용은 여기에서 확인할 수 있습니다.
[main.c](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/src/main.c),
[app-colcon.meta](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/app-colcon.meta),
[CMakeLists.txt](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/CMakeLists.txt)
그리고 [serial-usb.conf](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/serial-usb.conf).
이 파일들을 꼼꼼히 검토하면 이 RTOS에서 마이크로 ROS 앱을 만드는 방법을 알 수 있습니다.

{% first_application_common/build_and_flash.md 포함 %}

{% 첫 번째 애플리케이션 공통/에이전트 생성.md 포함 %}

그런 다음, 선택한 전송 방식과 RTOS에 따라 보드와 에이전트의 연결 방식이 달라질 수 있습니다.
이 튜토리얼에서는 Olimex 개발 보드가 연결된 Olimex STM32-E407 USB 연결을 사용합니다.
USB OTG 2 커넥터(이더넷 포트에서 가장 멀리 떨어진 미니 USB 커넥터)를 사용하여 컴퓨터에 연결합니다.

<img width="400" style="padding-right: 25px;" src="_docs/tutorials/core/imgs/6.jpg">

{% 첫 번째 애플리케이션 공통/앱 실행 파일 포함 %}

{% include first_application_common/test_app_rtos.md %}

이것으로 Zephyr 기반 첫 번째 micro-ROS 애플리케이션 튜토리얼이 완료되었습니다. 다른 RTOS, 예를 들어 NuttX 또는 FreeRTOS를 사용해 보시겠습니까? (뒤로 가기)

---

## 출처: `_docs/tutorials/core/overview/index.md`
<a id="source-docs-tutorials-core-overview-index-md"></a>

이 장에서는 micro-ROS와 micro-ROS에서 지원하는 다양한 RTOS에 필요한 도구들을 학습할 수 있는 여러 튜토리얼을 제공합니다. micro-ROS를 처음 접하는 분이라면 다음 순서대로 튜토리얼을 수강하시는 것을 강력히 권장합니다.

* [**리눅스에서 실행되는 최초의 micro-ROS 애플리케이션**](../first_application_linux/)

  이 튜토리얼에서는 micro-ROS 프레임워크와 도구를 설치하는 방법을 알려드립니다. 그런 다음 Linux 환경에서 첫 번째 micro-ROS 애플리케이션을 개발하는 과정을 안내합니다. (ROS 2를 이미 알고 계신다면, 이 도구들이 표준 ROS 2와 잘 통합되어 있음을 알 수 있을 것입니다.)

* [**RTOS에서 실행되는 최초의 micro-ROS 애플리케이션**](../first_application_rtos/)

  이 튜토리얼에서는 이전 튜토리얼에서 다룬 애플리케이션을 실시간 운영 체제(RTOS)용으로 빌드하는 방법을 배웁니다. 마이크로컨트롤러 보드에 애플리케이션을 플래싱하는 방법과 Linux 기반 ROS 2를 실행하는 마이크로프로세서에서 해당 애플리케이션과 통신하는 방법을 살펴보겠습니다. (이 튜토리얼은 micro-ROS에서 지원하는 세 가지 RTOS, 즉 NuttX, FreeRTOS, Zephyr를 모두 다룹니다. 어떤 RTOS를 사용할지는 여러분의 선택입니다!)

이제 다음 섹션인 [**rcl 및 rclc를 사용한 프로그래밍**](../../programming_rcl_rclc/)으로 이동하여 이 튜토리얼에서 다룬 micro-ROS C API의 개념을 심도 있게 학습할 수 있습니다. ROS 2 C++ API 또는 기본 ROS 클라이언트 지원 라이브러리(rcl)에 이미 익숙하다면 이 부분을 매우 빠르게 익힐 수 있을 것입니다.

해당 RTOS 또는 하드웨어를 사용하는 경우, [**rcl 및 rclc를 사용한 프로그래밍**](../../programming_rcl_rclc/) 섹션으로 넘어가기 전에 다음 기본 튜토리얼이 도움이 될 수 있습니다.

* [**Zephyr 에뮬레이터**](../zephyr_emulator/)

  이 튜토리얼에서는 Zephyr 에뮬레이터를 사용하여 micro-ROS로 탁구 애플리케이션을 테스트하는 방법을 배우게 됩니다.

* [**Teensy with Arduino**](../teensy_with_arduino/)

  이 튜토리얼에서는 Teensy를 micro-ROS 및 ROS 2와 연결하는 방법을 배웁니다. 또한 Arduino IDE를 사용하여 Teensy 기반 Arduino 보드와 통신하기 위해 Linux 시스템에 micro-ROS 에이전트를 설치하는 방법도 다룹니다. 이 튜토리얼에서는 Teensy에서 토픽을 발행하고 ROS 2 인터페이스를 사용하여 구독하는 간단한 퍼블리셔 구현도 살펴봅니다.

 [**고급 튜토리얼**](../../advanced/overview/) 섹션에서 micro-ROS 지식을 강화하는 데 도움이 되는 고급 튜토리얼을 더 찾아볼 수 있습니다.

---

## 출처: `_docs/tutorials/core/teensy_with_arduino/index.md`
<a id="source-docs-tutorials-core-teensy-with-arduino-index-md"></a>

<img src="https://img.shields.io/badge/Written_for-Foxy-green" style="display:inline"/>

이 튜토리얼에서는 Teensy를 micro-ROS 및 ROS 2와 연결하는 방법을 배우게 됩니다.
또한 Linux 시스템에 micro-ROS 에이전트를 설치하여 통신하는 방법도 배우게 됩니다.
이 튜토리얼에서는 Teensy 기반 아두이노 보드와 아두이노 IDE를 사용하는 방법도 다룹니다.
Teensy에서 발행된 간단한 퍼블리셔 토픽을 ROS 2 인터페이스를 사용하여 구독합니다.

## 대상 플랫폼

우선, 네이티브 운영체제를 갖춘 호스트 컴퓨터가 필요합니다.
Ubuntu 20.04에 ROS 2 Foxy를 설치하거나, ​​새로 빌드한 ROS 2 Foxy의 Docker 버전을 사용하세요.
이 링크에서 확인할 수 있습니다. 이제 연결 다이어그램도 살펴보겠습니다. 이 다이어그램은 도움이 될 것입니다.
전체적인 상황을 더 잘 이해할 수 있게 됩니다.

[RoS2 및 micro-RoS 에이전트가 실행되는 호스트 PC와 Teensy 3.2의 연결 다이어그램 그림](_docs/tutorials/core/teensy_with_arduino/Teensy_micro_ros_connection.png)

## 호스트 컴퓨터에 ROS 2 및 micro-ROS 설치:

참고: 처음 몇 단계는 이 링크에 있는 micro-ROS 설치 페이지의 내용과 동일합니다.

이 튜토리얼을 진행하려면 Ubuntu 20.04 LTS 컴퓨터에 ROS 2 Foxy Fitzroy를 설치해야 합니다.
바이너리 파일이나 Ubuntu 패키지를 통해 이 작업을 수행할 수 있으며, 자세한 내용은 해당 패키지를 참조하세요.
[*여기*](https://docs.ros.org/en/foxy/Installation/Alternatives/Ubuntu-Install-Binary.md).

참고: 또는 다음 명령어를 실행하여 ROS 2 Foxy 설치의 최신 Docker 빌드를 사용할 수도 있습니다.

```bash
 sudo apt install docker.io
 sudo docker run -it --net=host -v /dev:/dev --privileged ros:foxy
```
Docker를 실행한 후, 다음 명령어를 따라 ROS2가 실행 중인지, 그리고 토픽 목록이 표시되는지 확인하십시오.

![주제 일러스트](_docs/tutorials/core/teensy_with_arduino/rostopic_show.png)

Docker를 이용해 빌드한 ROS 2 Foxy 버전은 설치가 불가능한 경우에도 사용할 수 있습니다.
바이너리 파일에서 네이티브 ROS 2 Foxy를 실행하는 방법(예: Ubuntu 18.04가 설치된 Jetpack 4.5가 실행되는 Jetson Nano).

이제 컴퓨터나 도커에 ROS 2가 설치되었으면 다음 단계를 따라 micro-ROS 빌드 시스템을 설치하십시오.

```bash
# ROS 2 설치를 소싱합니다
소스 /opt/ros/foxy/setup.bash
# 워크스페이스를 생성하고 micro-ROS 도구를 다운로드하세요
마이크로로스_ws를 생성하세요
cd microros_ws
git clone -b $ROS_DISTRO https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup
# rosdep을 사용하여 종속성 업데이트
sudo apt update && rosdep update
rosdep install --from-paths src --ignore-src -y
# pip 설치
sudo apt-get install python3-pip

# 마이크로 ROS 도구를 구축하고 소싱하세요
콜콘 빌드
소스 install/local_setup.bash
```

micro-ROS 설치가 완료되면 micro-ROS 에이전트를 설치할 수 있습니다.
호스트 컴퓨터 또는 Docker 버전에 따라 다릅니다. 저희는 Teensy 3.2와 사전 컴파일된 버전을 사용할 예정입니다.
이번 데모에서는 micro-ROS 클라이언트 라이브러리를 사용하며 펌웨어는 빌드하지 않을 것입니다.
따라서 [RTOS 기반 첫 번째 마이크로 ROS 애플리케이션 튜토리얼](../first_application_rtos/)에서 펌웨어 빌드 단계를 건너뛰겠습니다.

micro-ros 에이전트를 설치하려면 아래 단계를 따르십시오.

```bash
# micro-ROS 에이전트 패키지 다운로드
ros2 run micro_ros_setup create_agent_ws.sh
```
이제 에이전트 패키지를 빌드하고, 완료되면 설치를 진행하겠습니다.

```bash
# 빌드 단계
ros2 run micro_ros_setup build_agent.sh
소스 install/local_setup.bash
```
자, 이제 다음 명령어를 따라 micro-ROS 에이전트를 실행하여 예행연습을 해보겠습니다.

```bash
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyACM0
```
결과는 다음과 같이 표시되어야 합니다.

![에이전트 실행 그림](_docs/tutorials/core/teensy_with_arduino/micro_ros_agent_start.png)

이는 에이전트 설치가 성공적으로 완료되었음을 의미합니다.
이제 다음 단계인 아두이노 IDE 설치로 넘어가겠습니다.
그리고 Teensyduino와 Arduino 기반 Teensy 보드를 사용하기 위한 패치 작업
[*micro_ros_arduino 저장소*](https://github.com/micro-ROS/micro_ros_arduino#patch-teensyduino)에 설명된 대로 미리 컴파일된 라이브러리입니다.

## 아두이노 IDE, 틴시두이노 설치 및 micro-ROS와 ROS2 Foxy를 틴시와 함께 사용하기 위한 패치 설정:

최신 버전을 다운로드하려면 링크를 따라가세요.
[*아두이노 1.8.15*](https://github.com/arduino/Arduino/releases/download/1.8.15/arduino-1.8.15.tar.xz)
그리고 다음 링크(Linux 버전)를 따라 설치하세요. [*Linux 버전 링크*](https://www.arduino.cc/en/Guide/Linux).

Arduino IDE를 설치한 후 다음 링크에서 Teensyduino를 다운로드하세요. [*링크*](https://www.pjrc.com/teensy/td_154/TeensyduinoInstall.linux64)
그리고 [*이 페이지*](https://www.pjrc.com/teensy/td_154/TeensyduinoInstall.linux64)에 나와 있는 지침을 따르십시오.
다음은 지침을 요약한 것입니다.

```
1. Linux udev 규칙 파일을 다운로드하고 해당 파일을 /etc/udev/rules.d 디렉터리에 복사합니다.
https://www.pjrc.com/teensy/00-teensy.rules

2. 터미널에 다음 명령어를 입력하세요.
$ sudo cp 00-teensy.rules /etc/udev/rules.d/

3. 아두이노용 리눅스 패키지 중 하나를 다운로드하고 압축을 해제하세요.
참고: Linux 배포판 패키지에 포함된 Arduino는 지원되지 않습니다.

4. 해당 Teensyduino 설치 프로그램을 다운로드하세요.

5. 터미널에서 설치 프로그램에 실행 권한을 부여한 다음 실행하십시오.
$ chmod 755 TeensyduinoInstall.linux64
$ ./TeensyduinoInstall.linux64
```
이제 Teensy Arduino에서 미리 컴파일된 micro-ros-client를 사용할 수 있도록 패치를 설정해 보겠습니다.
라이브러리를 사용하려면 터미널 창을 열고 아래 명령어를 실행하세요. 더 자세한 정보는 다음을 참조하세요.
[*micro_ros_arduino*](https://github.com/micro-ROS/micro_ros_arduino/tree/foxy)의 GitHub 링크

```bash
# 저의 경우 $ export ARDUINO_PATH=/home/manzur/arduino-1.8.13/ 였습니다.
export ARDUINO_PATH=[사용자 아두이노 + 틴시두이노 경로]

cd $ARDUINO_PATH/hardware/teensy/avr/

curl https://raw.githubusercontent.com/micro-ROS/micro_ros_arduino/foxy/extras/patching_boards/platform_teensy.txt > platform.txt
```

위의 지침을 완료하면 이제 Teensy 3.2를 사용할 수 있습니다.
Arduino IDE를 사용하여 미리 컴파일된 micro-ros-client 라이브러리로 프로그램을 실행하세요.

## 틴시 프로그래밍하기

이제 Teensy Arduino IDE를 패치했으므로 다음 지침에 따라 미리 컴파일된 라이브러리를 사용할 수 있습니다.

1. [*릴리스 섹션 링크*](https://github.com/micro-ROS/micro_ros_arduino/releases)로 이동하세요.
그리고 아두이노용 micro-ROS 라이브러리의 최신 버전을 다운로드하세요.
아래와 같이 파일을 `/home/$USERNAME/Arduino/libraries/` 폴더에 넣어주세요.

![패치 위치 그림](_docs/tutorials/core/teensy_with_arduino/patch_location.png)

이 과정이 완료되면 아래 예시 폴더를 살펴보겠습니다.

![예시 위치 그림](_docs/tutorials/core/teensy_with_arduino/arduino_example_location.png)

이 튜토리얼 및 테스트에서는 위에서 보여준 micro-ros-publisher 예제를 사용하겠습니다.
이 프로그램은 매 주기마다 증가하는 정수 데이터만 출력합니다. 일단 선택을 마치면,
예제 프로그램을 실행한 후, 호스트 컴퓨터에 연결된 Teensy 3.2에 코드를 업로드하겠습니다.
그러면 다음과 같은 결과가 표시될 것입니다.

[업로드 완료 일러스트](_docs/tutorials/core/teensy_with_arduino/upload_completion.png)

## ROS 2 Foxy에서 micro-ROS 에이전트 실행

자, 이제 Teensy를 호스트 컴퓨터에서 잠시 분리해 보겠습니다. 그런 다음 터미널을 열겠습니다.
또는 마지막에 나와 있는 것처럼 Docker에서 에이전트 프로그램을 다시 실행하십시오.
2단계. 아래와 같이 ROS 경로를 설정했는지 확인하십시오.

```bash
소스 /opt/ros/foxy/setup.bash
```

그런 다음 에이전트 프로그램을 실행합니다.

```bash
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyACM0
```
프로그램이 실행되면 다음과 같은 메시지가 표시됩니다.

![에이전트 재시작 완료 그림](_docs/tutorials/core/teensy_with_arduino/agent_restart.png)

그런 다음 Teensy를 호스트 컴퓨터에 다시 연결하고 결과를 확인해 보겠습니다.
연결이 완료되었으며 다음과 같이 표시됩니다.

![에이전트 연결 그림](_docs/tutorials/core/teensy_with_arduino/agent_connected.png)

이는 호스트 컴퓨터에 micro-ros-client와 micro-ros-agent가 포함된 Teensy와의 연결이 완료되었음을 의미합니다.
이제 중요한 순간입니다. Teensy에서 발행된 ROS 토픽을 테스트해 보겠습니다.
이번에는 다른 터미널이나 도커 창을 열고 다음과 같이 입력합니다.

```bash
ros2 토픽 목록
```
아래와 같이 나열되어야 합니다.

![ros2 토픽 연결 그림](_docs/tutorials/core/teensy_with_arduino/ros2_topic_all.png)

보시다시피, 이제 호스트 컴퓨터에서 `/micro_ros_arduino_node_publisher` 토픽이 발행되고 있습니다.
주제를 들어보면 다음과 같은 것을 알 수 있습니다.

[ros2 토픽의 데이터 표시 일러스트](_docs/tutorials/core/teensy_with_arduino/topic_show.png)

정수형 메시지 데이터는 매 주기마다 증가합니다.

참고: 이 튜토리얼은 저자 [Manzur Murshid](https://github.com/shazib2t)가 [https://manzurmurshid.medium.com/how-to-connect-teensy-3-2-with-micro-ros-and-ros2-foxy-6c8f99c9b66a](https://manzurmurshid.medium.com/how-to-connect-teensy-3-2-with-micro-ros-and-ros2-foxy-6c8f99c9b66a)에 처음 게시했습니다.

---

## 출처: `_docs/tutorials/core/zephyr_emulator/index.md`
<a id="source-docs-tutorials-core-zephyr-emulator-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/>

이 튜토리얼에서는 **[Zephyr RTOS](https://www.zephyrproject.org/)**와 함께 micro-ROS를 사용하는 방법을 배우게 됩니다.
에뮬레이터([네이티브 POSIX](https://docs.zephyrproject.org/4.1.0/boards/native/native_posix/doc/index.md)라고도 함)
탁구 애플리케이션을 테스트하여.

<div>
<img width="300" style="padding-right: 25px;" src="img/_posts/logo-zephyr.jpg">
</div>

{% first_application_common/build_system.md 포함 %}

```bash
# 단계 생성
ros2 실행 micro_ros_setup create_firmware_ws.sh zephyr 호스트
```

{% first_application_common/zephyr_common.md 포함 %}

{% first_application_common/config.md 포함 %}

이 튜토리얼에서는 로컬 호스트의 UDP/8888 포트에서 에이전트를 찾는 UDP 전송 방식을 사용하고, 특히 다음 사항에 중점을 둘 것입니다.
기본 제공되는 `ping_pong` 애플리케이션은 `firmware/zephyr_apps/apps/ping_pong`에 있습니다.
선택한 전송 방식으로 이 애플리케이션을 실행하려면 위의 구성 명령에서 `[APP]`를 지정하여 실행하십시오.
그리고 아래와 같이 `[OPTIONS]` 매개변수를 사용합니다.

```bash
# 구성 단계
ros2 run micro_ros_setup configure_firmware.sh ping_pong --transport udp --ip 127.0.0.1 --port 8888
```

`핑퐁` 앱의 전체 콘텐츠를 확인할 수 있습니다.
[여기](https://github.com/micro-ROS/zephyr_apps/tree/humble/apps/ping_pong).

{% first_application_common/pingpong_logic.md 포함 %}

Zephyr 앱 관련 파일의 내용은 여기에서 확인할 수 있습니다.
[main.c](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/src/main.c),
[app-colcon.meta](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/app-colcon.meta),
[CMakeLists.txt](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/CMakeLists.txt)
그리고 [host-udp.conf](https://github.com/micro-ROS/zephyr_apps/blob/humble/apps/ping_pong/host-udp.conf)를 참조하세요.
이 파일들을 꼼꼼히 검토하면 이 RTOS에서 마이크로 ROS 앱을 만드는 방법을 알 수 있습니다.

## 펌웨어 빌드 중

설정 단계가 완료되면 펌웨어를 빌드하기만 하면 됩니다.

```bash
# 빌드 단계
ros2 run micro_ros_setup build_firmware.sh
```

이제 여러분은 Zephyr + micro-ROS 앱을 자신의 컴퓨터에서 실행할 준비가 되었습니다.
이 경우 펌웨어 플래싱 단계와 micro-ROS 앱 실행 단계가 동시에 진행된다는 점에 유의하십시오.

{% 첫 번째 애플리케이션 공통/에이전트 생성.md 포함 %}

## micro-ROS 앱 실행하기

이제 클라이언트와 에이전트가 호스트 시스템에 올바르게 설치되었습니다.

micro-ROS가 ROS 2 데이터 공간에 접근할 수 있도록 하려면 에이전트를 실행하십시오.

```bash
# micro-ROS 에이전트를 실행합니다
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

## 펌웨어 플래싱

마지막으로, Zephyr RTOS 에뮬레이터 내부에서 micro-ROS 노드를 실행하기 위해서는 다음과 같은 조치가 필요합니다.
새 명령 셸을 열고 플래싱 명령어를 사용하여 플래싱 단계를 실행합니다.

```bash
source /opt/ros/$ROS_DISTRO/setup.bash
소스 install/local_setup.bash

# 플래시/실행 단계
ros2 run micro_ros_setup flash_firmware.sh
```

{% first_application_common/test_app_host.md 포함 %}

## 여러 개의 핑퐁 노드

에뮬레이터를 사용하는 장점 중 하나는 테스트를 위해 많은 하드웨어를 구입할 필요가 없다는 것입니다.
멀티노드 마이크로-ROS 앱. 이전 섹션에서 사용했던 마이크로-ROS 에이전트를 이용하여 네 가지 다른 명령어를 실행해 보겠습니다.
각 줄에 대해 다음 명령을 실행하십시오.

```bash
cd microros_ws

# 이것은 Zephyr 에뮬레이터를 실행하는 또 다른 방법입니다.
./firmware/build/zephyr/zephyr.exe
```

모든 micro-ROS 노드가 활성화되어 micro-ROS 에이전트에 연결되면 노드들이 상호 작용하는 것을 볼 수 있습니다.

```
user@user:~$ ./firmware/build/zephyr/zephyr.exe
*** Zephyr OS 빌드 zephyr-v2.2.0-492-gc73cb85b4ae9 부팅 중 ***
핑 전송 시퀀스 1711620172_1742614911 <---- 이 마이크로 ROS 노드는 핑 ID "1711620172"와 노드 ID "1742614911"로 핑을 전송합니다.
seq 1711620172_1742614911 (1)에 대한 퐁 <---- 일등 항해사가 내 핑을 퐁합니다
seq 1711620172_1742614911(2)에 대한 퐁 <---- 두 번째 항해사가 내 핑을 퐁합니다
seq 1711620172_1742614911(3)에 대한 퐁 <---- 세 번째 동료가 내 핑을 퐁합니다
시퀀스 번호 1845948271_546591567로 핑이 수신되었습니다. 응답합니다. <---- "546591567"로 식별된 상대방으로부터 핑이 수신되었습니다. 퐁을 보내 보겠습니다.
시퀀스 번호 232977719_1681483056으로 핑이 수신되었습니다. 응답합니다. <---- "1681483056"으로 식별된 상대방으로부터 핑이 수신되었습니다. 퐁을 보내 보겠습니다.
시퀀스 번호 1134264528_1107823050으로 핑이 수신되었습니다. 응답합니다. <---- "1107823050"으로 식별된 상대방으로부터 핑이 수신되었습니다. 퐁을 보내 보겠습니다.
핑 전송 시퀀스 324239260_1742614911
seq 324239260_1742614911(1)에 대한 Pong
seq 324239260_1742614911(2)에 대한 Pong
seq 324239260_1742614911(3)에 대한 Pong
시퀀스 번호 1435780593_546591567로 핑이 수신되었습니다. 응답합니다.
시퀀스 번호 2034268578_1681483056으로 핑이 수신되었습니다. 응답합니다.
```

***팁:** `./firmware/build/zephyr/zephyr.exe -h` 명령어를 사용하여 Zephyr 에뮬레이션의 일부 기능을 확인할 수 있습니다.*

---

## 출처: `_docs/tutorials/demos/combined_demos/index.md`
<a id="source-docs-tutorials-demos-combined-demos-index-md"></a>

다양한 데모를 조합하여 더욱 다양한 기능을 활용할 수 있습니다. 구체적으로, 실행 파일에서 지원하는 조합은 다음과 같습니다.

| <span style="display:block;width:220px;">_조합_</span> | _설명_ | _실행 파일_ |
| --- | --- | --- |
| <span style="white-space:nowrap;font-size:250%;"><img src="_docs/tutorials/demos/combined_demos/kobuki.png" style="height:45px;display:inline-block;"/> + <img src="_docs/tutorials/demos/combined_demos/tof_sensor.png" style="height:45px;display:inline-block;"/></span> | ToF 센서는 보이지 않는 장벽 역할을 합니다. 코부키가 ToF 센서의 광선에 진입하면, 코부키가 광선 밖으로 벗어날 때까지 더 이상의 전진이 차단됩니다. 이 신호는 ToF 센서에서 `/emergency_stop` 토픽을 통해 코부키로 전달됩니다. | |
| <span style="white-space:nowrap;font-size:250%;"><img src="_docs/tutorials/demos/combined_demos/kobuki.png" style="height:45px;display:inline-block;"/> + <img src="_docs/tutorials/demos/combined_demos/crazyflie.png" style="height:45px;display:inline-block;"/></span> | 크레이지플라이의 롤과 피치는 코부키의 조작에 사용됩니다. 따라서 리모컨으로 조종하는 크레이지플라이를 코부키 위에 놓고 코부키와 정렬하면 두 장치가 동기적으로 움직입니다. 또는 크레이지플라이를 손에 들고 코부키의 고급 리모컨으로 사용할 수도 있습니다. | |
| <span style="white-space:nowrap;font-size:250%;"><img src="_docs/tutorials/demos/combined_demos/kobuki.png" style="height:45px;display:inline-block;"/> + <img src="_docs/tutorials/demos/combined_demos/crazyflie.png" style="height:45px;display:inline-block;"/> + <img src="_docs/tutorials/demos/combined_demos/tof_sensor.png" style="height:45px;display:inline-block;"/></span> | 코부키는 위에서 설명한 대로 크레이지플라이를 사용하거나 크레이지플라이와 동기화하여 제어할 수 있습니다. 코부키가 ToF 센서의 빔에 진입하면 전진이 방지됩니다. | |

---

## 출처: `_docs/tutorials/demos/crazyflie_demo/index.md`
<a id="source-docs-tutorials-demos-crazyflie-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include crazyflie_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## 출처: `_docs/tutorials/demos/demobox_demo/index.md`
<a id="source-docs-tutorials-demos-demobox-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include demobox_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## 출처: `_docs/tutorials/demos/edgeimpulse/index.md`
<a id="source-docs-tutorials-demos-edgeimpulse-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Humble-blue" style="display:inline"/>

![엣지 임펄스](_docs/tutorials/demos/edgeimpulse/ei_logo.png)

---

이 예제는 [Edge Impulse](https://www.edgeimpulse.com/)를 사용하여 구축한 이미지 분류 신경망을 [Arduino Portenta H7](https://store.arduino.cc/products/portenta-h7)에서 실행하고 micro-ROS를 사용하여 분류 결과를 출력하는 방법을 보여줍니다. 또한 micro-ROS 및 ROS 2에 사용자 지정 메시지 유형을 추가하는 방법도 설명합니다. 이 데모의 목적은 메인 연산 장치에 추가적인 신경망을 구현하여 부하를 높이지 않고도 ROS 2 로봇에 AI 기능을 추가하는 방법을 제시하는 것입니다. 이는 연산 작업을 노트북 등으로 분산시킬 수 없는 상황에서 특히 유용합니다.

이 접근 방식을 사용하면 MCU는 여러 개의 `EIClassification` 항목으로 구성된 사용자 지정 메시지 유형 `EIResult`(Edge Impulse 결과)를 사용하여 추론 결과를 게시합니다. 이 데모와 관련된 튜토리얼에서는 이러한 사용자 지정 메시지 유형을 추가하는 방법을 설명합니다. 단일 분류는 다음과 같습니다.

```
'개': 0.75
```

이 표에는 하나의 레이블(클래스)과 해당 확률이 포함되어 있습니다. 전체 결과는 다음과 같습니다.

```
'개': 0.75,
'고양이': 0.25
```

이 결과에는 모든 레이블과 해당 확률(합이 1인 값)이 포함됩니다. 결과 메시지의 크기는 이미지 모델 학습에 사용된 레이블(클래스)의 개수에 따라 달라집니다(위 예시에서는 두 개). 이 예시의 코드는 모델에 따라 임의의 레이블 개수를 지원하기 위해 필요한 메모리를 자동으로 할당합니다.



MCU에서 신경망을 실행하고 micro-ROS를 사용하여 추론 결과를 게시함으로써, 로봇 공학에서 AI에 대한 "분산형" 접근 방식을 손쉽게 실험할 수 있습니다. 이 방식에서는 중앙 컴퓨터가 센서 데이터 수집이나 계산에는 관여하지 않고 신경망 결과에만 집중합니다.

![기존 방식 vs 분산 방식](_docs/tutorials/demos/edgeimpulse/traditional_vs_distributed.png)

---


이 데모를 직접 실행하려면 [여기](https://github.com/avielbr/micro_ros_ei)에 있는 비디오 안내 및 지침을 참조하세요.

---

## 출처: `_docs/tutorials/demos/fiware_demo/index.md`
<a id="source-docs-tutorials-demos-fiware-demo-index-md"></a>

작업 진행 중.

---

## 출처: `_docs/tutorials/demos/kobuki_demo/index.md`
<a id="source-docs-tutorials-demos-kobuki-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Dashing-yellow" style="display:inline"/>

micro-ROS Kobuki 데모는 잘 알려진 Turtlebot 2 연구 로봇의 모바일 기반인 Kobuki 플랫폼에서 micro-ROS를 사용하는 방법을 보여줍니다.

이 데모의 기본 아이디어와 작동 원리는 다음과 같습니다. ROS가 실행되는 노트북 대신, 코부키 로봇에는 STM32F4 마이크로컨트롤러만 장착되어 있습니다. 이 STM32F4는 micro-ROS 스택과 [thin_kobuki 드라이버](https://github.com/Lab-RoCoCo/thin_drivers)의 포트를 실행하며, 이 드라이버는 로봇의 펌웨어(내장 마이크로컨트롤러에서 실행됨)와 상호 작용합니다. STM32F4는 DDS-XRCE를 통해 센서 데이터를 표준 ROS 2 스택, micro-ROS 에이전트 및 rviz가 실행되는 원격 노트북으로 전송합니다. 동시에, 반대 방향의 통신을 통해 코부키 로봇을 원격으로 제어할 수 있습니다.

[개념 및 작동 원리 그림](_docs/tutorials/demos/kobuki_demo/working_principle.png)

이 데모를 직접 실행하려면 [https://github.com/micro-ROS/micro-ROS_kobuki_demo](https://github.com/micro-ROS/micro-ROS_kobuki_demo)에 나와 있는 지침을 따르세요.

---

## 출처: `_docs/tutorials/demos/moveit2_demo/index.md`
<a id="source-docs-tutorials-demos-moveit2-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include moveit2_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## 출처: `_docs/tutorials/demos/openmanipulator_demo/index.md`
<a id="source-docs-tutorials-demos-openmanipulator-demo-index-md"></a>

<img src="https://img.shields.io/badge/Written_for-Dashing-yellow" style="display:inline"/>

{% capture my_include %}{% include openmanipulator_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## 출처: `_docs/tutorials/demos/overview/index.md`
<a id="source-docs-tutorials-demos-overview-index-md"></a>

위의 입문 수준 튜토리얼 외에도, 커뮤니티에서 쉽게 따라 할 수 있는 실제 응용 프로그램에서 micro-ROS를 보여주는 데모 모음을 만들었습니다. 따라서 여러분도 쉽게 따라 할 수 있습니다.
튜토리얼과는 달리, 데모 코드를 단계별로 설명하는 대신, 최대한 빠르게 시작할 수 있도록 바로 사용할 수 있는 Docker 파일을 제공합니다.

아래 표를 참조하십시오.
스스로 선택하세요:

| 데모 | | _RTOS_ | _하드웨어_* |
| --- | :-: | :-: | :-: |
| [**코부키 데모**](../kobuki_demo/) | <img src="_docs/tutorials/demos/overview/kobuki.png" style="margin:auto;"/> | NuttX | Kobuki Turtlebot2, Olimex LTD STM32-E407 |
| [**크레이지플라이 데모**](../crazyflie_demo/) | <img src="_docs/tutorials/demos/overview/crazyflie.png" style="margin:auto;"/> | FreeRTOS | 크레이지플라이 2.1 드론 |
| [**ToF 센서 데모**](../tof_demo/) | <img src="_docs/tutorials/demos/overview/tof_sensor.png" style="margin:auto;"/> | Zephyr | STM32L4 Discovery 키트 IoT |
| [**OpenManipulator-X 데모**](../openmanipulator_demo/) | <img src="_docs/tutorials/demos/overview/openmanipulator.png" width="70%" style="margin:auto;"/> | Zephyr | Robotis OpenMANIPULATOR-X, Olimex LTD STM32-E407, Raspberry Pi 4 |
| [**FIWARE 컨텍스트 브로커와의 인터페이스**](../fiware_demo/) | -- | -- |
| [**데모박스 전력 및 부팅 시간**](../demobox_demo/) | <img src="_docs/tutorials/demos/overview/olimex.png" width="35%" style="margin:auto;"/> | NuttX | Olimex LTD STM32-E407, Raspberry Pi 4 |
| [**덤퍼, 6륜 로봇**](../thumper_demo/) | <img src="_docs/tutorials/demos/overview/thumper.png" width="45%" style="margin:auto;"/> | NuttX | Wild Thumper 6WD, Olimex LTD STM32-E407 |
| [**MoveIt 2 데모**](../moveit2_demo/) | <img src="_docs/tutorials/demos/overview/tof_sensor.png" style="margin:auto;"/> | Zephyr | STM32L4 디스커버리 키트 IoT |
| [**Edge Impulse AI 데모**](../edgeimpulse/) | <img src="_docs/tutorials/demos/overview/portenta.png" width="40%" style="margin:auto;"/> | 아두이노 | 아두이노 포르텐타 H7, 비전 쉴드 |
| [**통합 데모**](../combined_demos/) | -- | -- |

<div style ="font-size:80%;color:gray;text-align:right;margin-bottom:1em;">*당연히 위에 설명된 하드웨어 외에도 컴퓨터/노트북, 다양한 케이블 및 기타 보조 장비가 필요합니다.</div>

**개발 중:** 데모는 컨텍스트 데이터 관리를 위한 오픈 소스 프로젝트인 [FIWARE](https://www.fiware.org/)의 핵심 구성 요소인 FIWARE Context Broker와도 연동될 수 있습니다. 자세한 내용은 [**FIWARE Context Broker 연동**](../fiware_demo/)에서 확인하세요.

**개발 중:** 데모는 여러 가지 방식으로 조합하여 더 많은 기능을 시연할 수 있습니다. 이러한 조합 및 실행 방법에 대한 자세한 내용은 [**조합 데모**](../combined_demos/)를 참조하세요.


---

## 출처: `_docs/tutorials/demos/thumper_demo/index.md`
<a id="source-docs-tutorials-demos-thumper-demo-index-md"></a>

<img src="https://img.shields.io/badge/Written_for-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include thumper_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## 출처: `_docs/tutorials/demos/tof_demo/index.md`
<a id="source-docs-tutorials-demos-tof-demo-index-md"></a>

<img src="https://img.shields.io/badge/Tested_on-Foxy-green" style="display:inline"/>

{% capture my_include %}{% include sensors_demo/README.md %}{% endcapture %}
{{ my_include | markdownify }}

---

## 출처: `_docs/tutorials/old/6lowpan/index.md`
<a id="source-docs-tutorials-old-6lowpan-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/>

이 가이드에서는 6LoWPAN 통신을 통해 micro-ROS를 사용하는 방법을 보여드리겠습니다.

## 6LoWPAN이란 무엇인가요?

6LoWPAN은 저전력 무선 개인 영역 네트워크(Low-Power Wireless Personal Area Networks)를 통한 IPv6의 약자입니다.
이 통신 프로토콜은 IPv6를 사용하여 IEEE 802.15.4 기반 네트워크에서 무선 통신을 가능하게 합니다. 주요 장점은 다음과 같습니다.
- IP 패킷을 사용하기 때문에 무선 장치에서 인터넷으로의 라우팅이 용이합니다.
- UDP 및 TCP 서버/클라이언트에서 사용하기 쉽습니다.
- 저전력 및 제약 조건이 있는 장치, 완벽한 또는 초소형 ROS 원격 센서를 위해 설계된 프로토콜입니다.

## 필요한 하드웨어

현재 6LoWPAN은 NuttX RTOS에서만 사용할 수 있습니다.
이 가이드에 설명된 단계를 실행하려면 다음 장치가 필요합니다.

- 라즈베리 파이.
- [Olimex-STM32-E407 보드](https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware).
- [PmodRF2 라디오](https://store.digilentinc.com/pmod-rf2-ieee-802-15-rf-transceiver/).
- 마이크로-ROS-브리지-RPI.

**중요한!**
micro-ROS-bridge_RPI 설정 방법에 대한 가이드는 해당 [저장소](https://github.com/micro-ROS/micro-ROS-bridge_RPI/blob/new_bridge_tools/README.md)에서 찾을 수 있습니다.
micro-ROS-bridge-RPI 가이드에서 이 장치 기반을 설정하는 데 필요한 모든 것을 찾을 수 있습니다.

## 보드 설정

보드 구성은 하드웨어 설정과 소프트웨어 설정의 두 부분으로 나뉩니다.

### 하드웨어 설정

먼저 PmodRF2 라디오를 연결하겠습니다.

| | RPi | Olimex | PmodRF2 |
| ----- | --- | ------ | ------- |
| VIN | 1 | D13 | 12 |
| GND | 20 | GND | 11 |
| 재설정 | 17 | - | 8 |
| INT | 16 | D8 | 7 |
| SDI | 19 | D12 | 2 |
| SDO | 21 | D11 | 3 |
| SCK | 23 | D13 | 4 |
| CS | 26 | D10 | 1 |

설정 과정을 간소화하려면 [RPi 핀 배치도](https://pinout.xyz/#)와 [PmodRF2 핀 배치도](https://reference.digilentinc.com/reference/pmod/pmodrf2/start)를 참조하십시오.

마지막 단계는 미니 USB 케이블을 OTG2 USB 포트(이더넷 포트 옆에 있는 USB 포트)에 연결하는 것입니다.

### 소프트웨어 설정

펌웨어를 생성하고 플래싱하기 위해 micro-ROS 빌드 시스템을 사용할 것입니다.
자세한 지침은 micro_ros_setup의 [README](https://github.com/micro-ROS/micro_ros_setup/blob/dashing/micro_ros_setup/README.md)에서 찾을 수 있습니다.
이 가이드에서는 `dashing` 브랜치와 `uros_6lowpan` 구성 프로필을 사용해야 합니다.

빌드 시스템의 모든 지침을 따르고 보드에 펌웨어를 업로드하면 모든 준비가 완료됩니다.

## 사용 방법은 무엇인가요?

- Olimex 보드를 켜고 터미널에서 NSH 콘솔을 엽니다.
콘솔에 `?`를 입력하여 모든 애플리케이션이 준비되었는지 확인하십시오. 다음과 같은 결과가 표시되어야 합니다.

```bash
도움말 사용법: 도움말 [-v] [<cmd>]

  [ cd df help ls mw set true
  ? cp echo hexdump mb ps sh uname
  addroute cmp exec ifconfig mkdir pwd sleep umount
  basename dirname exit ifdown mh rm test 설정 해제
  break dd false ifup mount rmdir telnetd usleep
  고양이 델루트 무료 킬 mv 루트 시간 xd

내장 앱:
  핑6 아이8삭 우로스_6로우팬
```
- 이제 라즈베리 파이를 켜고 다음 명령어를 입력하여 micro-ROS-bridge-RPI 도구를 실행하세요.

```bash
./ ~/micro-ROS-HB.sh
```
- 모든 설정이 완료되면 6LoWPAN 네트워크의 연결 데이터가 반환됩니다.

```bash
lowpan0: 플래그=4163<UP,BROADCAST,RUNNING,MULTICAST> mtu 1280
        inet6 fe80::b482:ca65:743b:b6bd prefixlen 64 scopeid 0x20<link>
        B6-82-CA-65-74-3B-B6-BD-00-00-00-00-00-00-00-00 txqueuelen 1000(UNSPEC) 사양 해제
        수신 패킷 0바이트 0 (0.0 B)
        수신 오류 0, 드롭 0, 오버런 0, 프레임 0
        TX 패킷 21바이트 2242(2.1 KiB)
        송신 오류 0건, 전송 실패 0건, 오버런 0건, 캐리어 오류 0건, 충돌 0건

1) 새로운 6LoWPAN micro-ROS 장치 추가 3) UDP micro-ROS 에이전트 생성 5) 시리얼 micro-ROS 에이전트 서버 생성
2) UDP 6LoWPAN micro-ROS 에이전트 생성 4) TCP micro-ROS 에이전트 생성 6) 종료
#?
```
- 값 **inet6**은 6LoWPAN 인터페이스를 통한 라즈베리 파이의 IPv6 방향을 나타냅니다. 이 값은 이후 단계에 필요하므로 복사해 두십시오.
- 다음 명령어를 입력하여 Olimex에서 micro-ROS 6LoWPAN 애플리케이션을 실행하십시오.

```bash
uros_6lowpan <에이전트 IP> <에이전트 포트> <pub/sub>
```
  여기서 `Agent_IP`는 이전에 복사한 IPv6 주소이고, `Agent_PORT`는 에이전트에 대해 선택된 포트이며, `pub/sub`는 애플리케이션의 동작을 제어합니다. `pub`인 경우 게시자 역할을 하고, `sub`인 경우 구독자 역할을 합니다.

- 앱을 실행하면 6LoWPAN 네트워크를 구성할지 묻는 메시지가 나타납니다.
  - 그러면 연결 데이터가 반환됩니다. `inet_6_addr`와 `HWaddr` 값을 저장해 두세요.
  - 참고: 라디오의 ID를 변경하려면 NuttX의 예제 설정에서 `menuconfig`를 통해 변경할 수 있습니다.

```bash
nsh> uros_6lowpan fe80::bc81:c3b9:5c14:1ab 8888 pub
6lowpan 네트워크를 구성하시겠습니까? (Y/N)
ifdown wpan0...OK
i8sak: MAC 레이어 재설정
i8sak: PAN 시작 중
6LowPan ID를 입력하세요 (ID는 00에서 FF(16진수) 사이여야 합니다).
i8sak: 모든 협회 요청을 수락합니다
i8sak: 데몬이 시작되었습니다
ifup wpan0...OK
연결 데이터
wpan0 링크 encap:6LoWPAN HWaddr 00:be:ad:de:00:de:fa:00 UP
        inet6 주소: fe80::2be:adde:de:fa00/64
        inet6 DRaddr: ::/64

        RX: 조각화 오류 수신됨
            00000000 00000000 00000000
            IPv6 드롭됨
            00000000 00000000
        TX: 대기 중인 전송 오류 시간 초과
            00000000 00000000 00000000 00000000
        총 오류 수: 00000000
```

- 이 단계를 완료하면 Olimex 보드의 애플리케이션은 브리지의 에이전트가 데이터를 수신할 준비가 되었음을 확인하는 사용자 입력을 기다리며 차단됩니다.

- 브리지로 돌아가서 이제 새 6LoWPAN 장치를 추가하겠습니다. `1 + Enter`를 누르세요. (참고: 이 단계는 새 장치를 처음 연결하는 경우에만 필요합니다.)
  - 먼저 Olimex 보드의 IPv6 주소(`inet6_addr`)를 소개합니다.
  - Olimex 보드의 하드웨어 주소(HWaddr)를 입력하십시오.
  - 이제 장치가 등록되었으며 통신을 설정할 준비가 되었습니다.
- 브리지 설정의 마지막 단계는 micro-ROS-Agent를 실행하는 것입니다. 이를 위해 '2 + Enter'를 누르고 사용할 포트를 입력하십시오.

---

## 출처: `_docs/tutorials/old/add_microros_config/index.md`
<a id="source-docs-tutorials-old-add-microros-config-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/> <img src="https://img.shields.io/badge/Written_for-Dashing-yellow" style="display:inline"/>

이 튜토리얼에서는 시리얼 통신을 통해 NuttX를 실행하기 위한 기본적인 Micro-ROS 설정을 살펴보겠습니다. 이 가이드는 설정에만 초점을 맞추고 있으므로, 먼저 다음 링크의 튜토리얼을 확인하시기 바랍니다. [RTOS 기반 첫 번째 Micro-ROS 애플리케이션](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/)

**면책 조항**

이 가이드는 NuttX에서 지원하는 모든 보드에서 작동을 보장하지 않습니다. 각 보드마다 주변 장치 구현 수준과 사용 가능한 메모리가 다르기 때문입니다.

## 필수 하드웨어

- 다음 조건을 모두 충족하는 NuttX 지원 보드:
    - STM32 MCU.
    - RAM: 125KB.
    - 플래시: 512kb.
    - 직렬 통신 주변 장치.

- USB-TTY 직렬 케이블.

## 작업 공간 설정

먼저 Micro-ROS 워크스페이스를 생성하겠습니다. 이를 위해 콘솔에서 다음 명령어를 실행합니다.

```
source /opt/ros/$ROS_DISTRO/setup.bash

mkdir uros_ws && cd uros_ws

git clone -b $ROS_DISTRO https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup

rosdep update && rosdep install --from-path src --ignore-src -y

콜콘 빌드

소스 install/local_setup.bash
```



## 기본 설정을 지정합니다

 이 가이드에서는 예시로 [Olimex-STM32-H407 보드](https://www.olimex.com/Products/ARM/ST/STM32-H407/open-source-hardware)에 대한 Micro-ROS 지원을 제공합니다.

이 보드는 당사에서 지원하는 Olimex-STM32-E407 보드의 간소화된 버전입니다.

이전 콘솔에서 다음 명령을 실행하여 기본 구성을 설정하십시오.
```bash
ros2 run micro_ros_setup create_firmware_ws.sh nuttx olimex-stm32-h407
ros2 run micro_ros_setup configure_firmware.sh nsh
```

모든 것이 정상적으로 진행되면 다음과 같은 메시지가 출력될 것입니다.
```bash
파일 복사
상쾌한...
```

이제 기본적인 NSH 설정이 완료되었습니다. 다음 단계에 따라 이 보드에서 Micro-ROS를 실행하는 데 필요한 설정을 진행하겠습니다.

## Micro-ROS 설정.

이전과 동일한 콘솔에서 다음 명령어를 실행하세요.
```bash
cd 펌웨어/NuttX
make menuconfig
```

아래와 같은 메뉴가 나타나야 합니다.
![](_docs/tutorials/old/add_microros_config/images/nuttx_menuconfig.png)

참고: 이 튜토리얼을 시작하기 전에 이전 튜토리얼을 먼저 완료해야 합니다. [RTOS에서 실행되는 첫 번째 micro-ROS 애플리케이션](https://micro-ros.github.io/_docs/tutorials/core/first_application_rtos/)

메뉴에서 다음 설정을 구성해야 합니다.

- 시스템 유형 > STM32 주변 장치 지원 > USART3
- RTOS 기능 > 클록 및 타이머 > CLOCK_MONOTONIC 지원
- 장치 드라이버 > 직렬 드라이버 지원 > 직렬 TERMIOS 지원
- 라이브러리 루틴 > 표준 수학 라이브러리
- 라이브러리 루틴 > sizeof(_Bool)은 8비트입니다.
- 라이브러리 루틴 > uClibc++ 빌드 (설치되어 있어야 함)
- 애플리케이션 구성 > micro-ROS
- 애플리케이션 구성 > micro-ROS > 전송 > 직렬 전송
- 애플리케이션 구성 > 예제 > microROS Publisher

"ESC" 키를 두 번 누르고 저장하시겠습니까?라는 메시지가 나타나면 "예"를 선택하세요.

이제 설정이 완료되었으므로 컴파일만 남았습니다. 컴파일하려면 동일한 콘솔에서 다음 명령을 실행하십시오.
```
CD ../..
ros2 run micro_ros_setup build_firmware.sh
```

모든 것이 정상적으로 진행되면 다음과 같은 출력이 표시될 것입니다.
```bash
CP: nuttx.hex
CP: nuttx.bin
```

---

## 출처: `_docs/tutorials/old/debugging/index.md`
<a id="source-docs-tutorials-old-debugging-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/>

이 튜토리얼은 두 부분으로 구성됩니다. 첫 번째 부분에서는 GDB와 OpenOCD를 사용하여 NuttX 타겟을 디버깅하는 방법을 다룹니다. 이 부분에서는 도구 설치 및 명령줄을 통한 디버깅에 대해 설명합니다. 두 번째 부분에서는 Visual Studio Code, 즉 최신 IDE를 사용하여 디버깅하는 방법을 다룹니다.

## GDB와 OpenOCD를 이용한 NuttX 타겟 디버깅

처음 시도에 제대로 작동하는 프로그램은 드물기 때문에 일반적으로 디버거가 필요합니다. 특히 임베디드 장치에서는 "printf" 방식의 디버깅이 매우 번거롭기 때문에 더욱 그렇습니다.

임베디드 디버깅에는 다양한 도구가 있습니다. 이 튜토리얼에서는 [GNU 디버거 gdb](https://www.gnu.org/software/gdb/)와 [오픈 온칩 디버거, OpenOCD](http://openocd.org/)를 사용하여 명령줄에서 디버깅하는 방법을 보여줍니다. 이 두 가지 오픈 소스 도구는 Linux에서 쉽게 사용할 수 있으며, 그래픽 디버거를 비롯한 여러 고급 도구의 기반이 됩니다.

이 글을 작성하는 시점(2019년 초) 기준으로 OpenOCD용 NuttX 통합은 비교적 최근에 추가된 기능이므로, 이 튜토리얼에는 NuttX를 다운로드하고 구성하는 방법에 대한 설명도 포함되어 있습니다.

### 필수 조건

하드웨어

<!-- 깨진 링크 -->
 * 지원되는 임베디드 보드
 * 디버거 프로브 지원

#### 소프트웨어

 * gdb를 포함한 NuttX 개발 환경
 * OpenOCD-Nuttx (설치 방법은 추후 안내해 드리겠습니다)


### OpenOCD-Nuttx 설치

소니는 OpenOCD에 NuttX 지원을 추가했으며, 가장 중요한 점은 스레드 정보도 포함된다는 것입니다. NuttX는 여러 태스크/스레드를 지원하는 진정한 RTOS이므로 현재 활성화된 태스크 외의 다른 태스크를 확인하려면 스레드 지원이 필수적입니다.

#### 코드 가져오기

해당 저장소는 GitHub의 [https://github.com/sony/openocd-nuttx](https://github.com/sony/openocd-nuttx)에 있습니다. 다음과 같이 확인해 보세요.
```
git clone --depth 1 https://github.com/sony/openocd-nuttx
```
('--depth 1'은 필수 사항은 아니지만, 불필요한 데이터 다운로드를 방지해 줍니다.)

아직 openocd를 컴파일하지 마세요!

#### NuttX 설정을 확인하세요

NuttX는 필요한 정보의 메모리 위치를 변경하는 경우가 있으므로 현재 사용 중인 NuttX 버전에 맞게 OpenOCD를 구성해야 합니다.

다음 내용을 `.gdbinit` 파일에 추가하세요.
```
인쇄 오프셋을 정의합니다
 printf "#PID %p 정의\n",&((struct tcb_s *)(0))->pid
 printf "#define XCPREG %p\n",&((struct tcb_s *)(0))->xcp.regs
 printf "#define STATE %p\n",&((struct tcb_s *)(0))->task_state
 printf "#define NAME %p\n",&((struct tcb_s *)(0))->name
 printf "#define NAME_SIZE %d\n",sizeof(((struct tcb_s *)(0))->name)
끝
```

그런 다음 nuttx 바이너리에 대해 gdb를 실행하고 다음 함수를 실행하십시오.
```
arm-none-eabi-gdb nuttx
(gdb) 프린트 오프셋
```
Nuttx 7.27 버전에서는 결과가 다음과 같이 표시될 것입니다.
![gdb print offset output](img/tutorials/gdb-print-offset.png)
흥미로운 부분은 마지막의 `#define` 문입니다.

이제 원하는 편집기로 `openocd-nuttx/src/nuttx_header.h` 파일을 열고 기존의 `#define` 줄을 찾으세요.
그리고 얻은 값으로 대체하세요. 결과는 다음과 같아야 합니다.
![](img/tutorials/nuttx_header_h.png)

#### NuttX 지원을 위한 OpenOCD 구성

OpenOCD는 다양한 보드에 대한 대상 구성 세트를 제공합니다. 보드는 여러 RTOS 중 하나를 실행할 수 있으므로 기본 구성에는 특정 RTOS가 지정되어 있지 않습니다. 따라서 이를 추가해야 합니다.

Olimex의 표준 보드 중 하나인 STM32-E407 보드를 사용하는 경우, 대상 구성 파일은 `stm32f4x.cfg`이며 일반적으로 `tcl/target/`에 있습니다. 사용하는 하드웨어에 따라 파일 이름이 다를 수 있으므로 올바른 파일을 사용하십시오.

대상 구성 파일을 열고 `$_TARGETNAME configure`로 시작하는 줄을 찾으세요. 그런 다음 해당 줄에 `-rtos nuttx`를 추가하세요.

#### OpenOCD 컴파일

**참고** Sony OpenOCD 브랜치는 최신 컴파일러를 사용하기 때문에 현재 Ubuntu 18.04에서 컴파일 문제가 발생할 수 있습니다. 가장 간단한 해결 방법은 컴파일 시 `-Werror` 옵션을 제거하는 것입니다. 조만간 패치를 제출할 예정입니다.

변경 사항을 적용한 후 OpenOCD를 컴파일하고 설치하려면 다음 명령을 실행하세요.
```bash
./부트스트랩
./configure
만들다
sudo make install
```

#### OpenOCD 테스트

OpenOCD를 테스트하려면 다음 명령줄을 시도해 보세요.
```bash
/usr/local/bin/openocd -f /usr/share/openocd/scripts/interface/ftdi/olimex-arm-usb-ocd-h.cfg -f stm32f4x.cfg -c init -c "reset halt"
```

출력 결과는 다음 이미지와 같아야 합니다.
![OpenOCD 테스트 출력](img/tutorials/openocd-test.png)

그러면 OpenOCD는 디버거가 연결될 때까지 대기하면서 블록 상태가 되므로, 다음 섹션에서 디버거 연결을 진행해 보겠습니다.

### OpenOCD를 사용하여 GDB 실행하기

NuttX 디렉토리에서 다음과 같이 gdb를 실행하세요.
```bash
arm-none-eabi-gdb nuttx
(gdb) 대상 extended-remote :3333
(gdb) 계속
```
이것은 같은 머신의 3333번 포트(OpenOCD 기본값)에서 실행 중인 gdb 서버에 연결됩니다. NuttX의 `_start` 함수에서 대기하게 되는데, 이 함수는 그다지 중요하지 않으므로 그대로 두겠습니다.

현재로서는 중단점을 설정하지 않았으므로 Ctrl+C를 눌러 실행 중인 프로그램을 다시 중단할 수 있습니다. 이렇게 하면 NuttX가 초기화를 완료한 후에 프로그램이 중단되므로 실제로 데이터를 확인할 수 있습니다.

#### 프로그램을 검사하세요

이제 모든 것이 제대로 작동했다면 RTOS에서 스레드 정보와 같은 일부 정보를 얻을 수 있을 것입니다. 테스트하려면 gdb 프롬프트에서 `info threads`를 입력하여 스레드 정보 테이블을 확인하십시오. 출력은 NuttX 구성에 따라 다를 수 있습니다. 제 최소한의 NSH 전용 구성에서는 다음과 같습니다.
![](img/tutorials/gdb-info-threads.png)
따라서 우리는 네 개의 스레드를 볼 수 있는데, 그중 두 개는 운영체제 작업 큐이고, 하나는 초기화 스레드이며, 나머지 하나는 유휴 스레드입니다.

아마도 NuttX는 유휴 스레드에서 멈춘 것 같습니다. 이는 그다지 흥미로운 상황이 아닙니다. 다른 스레드를 검사하려면 `thread` 명령어를 사용하여 스레드를 전환한 다음 백트레이스와 일부 변수를 표시할 수 있습니다. 다음을 시도해 보세요.

```gdb
스레드 2
지역 정보
rtcb를 인쇄하세요
print *rtcb
```
이 코드는 스레드 2로 전환한 다음 두 개의 지역 변수를 검사합니다. 그중 하나는 `rtcb`입니다. 이 변수를 출력해 보면 구조체를 가리키는 포인터임을 알 수 있습니다. 따라서 역참조하여 구조체의 모든 필드를 다시 출력합니다. 결과는 다음과 같을 것입니다.
![](img/tutorials/gdb-print-rtcb.png)
제 경우에는 입력값을 기다리고 있는 NSH 스레드입니다.


## Visual Studio Code를 사용한 디버깅

이 글은 [위의 튜토리얼](#debugging-a-nuttx-target-with-gdb-and-openocd)의 후속편입니다. 해당 튜토리얼에서 설명한 설정은 Visual Studio Code를 사용한 디버깅을 위한 필수 조건이기 때문입니다.

### 동기 부여

Visual Studio Code는 확장성이 매우 뛰어나고 웹/클라우드 및 IoT 커뮤니티 모두에서 인기 있는 최신 IDE입니다. 또한 임베디드 시스템 개발에 가장 적합한 IDE 중 하나입니다. 물론, 이 목적에 가장 강력하거나 기능이 풍부한 IDE는 아니지만, 사용하기 쉽고 충분히 제 역할을 합니다.

### 필수 조건

 * [GDB 및 OpenOCD를 사용한 NuttX 타겟 디버깅](#debugging-a-nuttx-target-with-gdb-and-openocd)의 모든 필수 조건
 * Cortex-M 하드웨어 (당사의 모든 표준 보드는 ARM 기반입니다)
 * [Visual Studio Code](https://code.visualstudio.com/)


### Cortex-Debug 설치

확장 프로그램 마켓플레이스에서 "cortex"를 검색한 다음 "Cortex-Debug"를 설치하세요. Visual Studio Code 버전에 따라 확장 프로그램 설치 후 재시작해야 할 수도 있습니다.

### 디버깅을 위해 프로젝트를 설정하세요

Visual Studio Code에서 프로젝트 폴더를 엽니다. 일반적으로 `NuttX` 폴더이거나 `apps` 폴더의 하위 디렉터리입니다.

#### NuttX용 Visual Studio Code 실행 구성을 생성합니다.

`디버그` 메뉴에서 `구성 열기`를 선택합니다. 그러면 `launch.json` 파일이 열립니다. 자세한 내용은 [Cortex-Debug 실행 구성](https://marcelball.ca/projects/cortex-debug/cortex-debug-launch-configurations/) 문서를 참조하십시오.

시작하기에 앞서, ARM-USB-OCD-H JTAG 프로브와 함께 STM32-E407 보드를 사용하는 데 필요한 실행 구성 파일을 준비했습니다. 다른 보드나 프로브를 사용하는 경우 `configFiles` 섹션만 수정하면 됩니다. 해당 섹션의 각 항목은 OpenOCD에 `-f` 옵션으로 전달하는 인자입니다.
```json
{
    "버전": "0.2.0",
    "구성": [
        {
            "이름": "디버그(OpenOCD/NuttX)",
            "cwd": "${workspaceRoot}",
            "실행 파일": "nuttx",
            "요청": "시작",
            "유형": "cortex-debug",
            "서버 유형": "openocd",
            "장치": "stm32f4x",
            "configFiles": [
                "인터페이스/ftdi/olimex-arm-usb-ocd-h.cfg",
                "target/stm32f4x.cfg"
            ]
        }
    ]
}
```
`name`은 프로그램을 실행할 때 상태 표시줄에 나타나는 이름입니다.

#### 디버거 실행

시작하려면 `F5` 키를 누르거나 메뉴에서 `디버그/디버깅 시작`을 선택하세요. 잠시 후 빨간색 상태 표시줄과 다음 이미지와 같은 디버그 창이 나타납니다.
![디버그 창](img/tutorials/debug-vscode.png)

gdb 튜토리얼에서처럼, 처음에는 운영체제 초기화 중에 프로그램이 중지되어 있어 많은 정보가 표시되지 않습니다. `F5` 키를 다시 누르거나 창 상단의 디버그 메뉴에서 "재생" 버튼을 클릭하고 몇 초 기다린 다음 `F6` 키를 누르거나 "일시 정지" 버튼을 클릭합니다. 그러면 창이 다음과 같이 스레드, 변수 및 레지스터 정보를 표시하도록 변경됩니다. "호출 스택" 창에 여러 스레드가 표시되는 것을 확인하세요.

[실행 중인 코드가 있는 디버그 창](img/tutorials/debug-vscode-phyread.png)

#### SVD 파일 추가하기

왼쪽 편에 "Cortex Peripherals"라는 하위 창이 있고 "SVD 파일이 로드되지 않았습니다"라고 표시되는 것을 보셨을 겁니다. SVD는 "시스템 뷰 설명(System View Description)"의 약자로, 마이크로컨트롤러 제조사들이 자사 MCU의 사용 가능한 기능을 설명하는 데 사용하는 표준 형식입니다.

예를 들어, STM32F407ZGT6 MCU가 탑재된 당사의 STM32-E407 보드의 경우, [STM32F407ZG 시리즈 웹페이지](https://www.st.com/en/microcontrollers-microprocessors/stm32f407zg.md)에서 SVD 설명 파일을 다운로드할 수 있습니다. "HW 모델, CAD 라이브러리 및 SVD" 섹션에서 [STM32F4 시리즈 SVD](https://www.st.com/resource/en/svd/stm32f4_svd.zip) 링크를 찾을 수 있습니다.

SVD 파일을 추출한 다음 실행 구성에 `svdFile` 속성을 추가합니다. 전체 구성은 다음과 같습니다.

```json
{
    "버전": "0.2.0",
    "구성": [
        {
            "이름": "디버그(OpenOCD/SVD)",
            "cwd": "${workspaceRoot}",
            "실행 파일": "nuttx",
            "요청": "시작",
            "유형": "cortex-debug",
            "서버 유형": "openocd",
            "장치": "stm32f4x",
            "svdFile": "STM32F407.svd",
            "configFiles": [
                "인터페이스/ftdi/olimex-arm-usb-ocd-h.cfg",
                "target/stm32f4x.cfg"
            ]
        }
    ]
}
```

디버거를 다시 실행하면 창이 다음과 같이 표시될 것입니다.
![](img/tutorials/debug-vscode-svd.png)

자, 이제 'Cortex Peripherals'에 STM32F407 MCU가 제공하는 모든 주변 장치가 표시되었습니다. 모든 주변 장치가 실제로 보드에 연결되어 있지 않을 수도 있다는 점에 유의하십시오. 하지만 연결되어 있고 애플리케이션에서 사용되는 주변 장치는 이와 같은 방식으로 쉽게 확인할 수 있습니다.

---

## 출처: `_docs/tutorials/old/microros_nuttx_bsp/index.md`
<a id="source-docs-tutorials-old-microros-nuttx-bsp-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/>

**아직 지원되지 않는 보드에서 Micro-ROS를 사용하고 싶다면 이 튜토리얼이 도움이 될 것입니다!** 하지만 이 튜토리얼에서는 NuttX에서 이미 지원하는 보드, 즉 보드 구성이 완료된 보드에서 해야 할 일만 설명합니다. 완전히 새로운 보드 지원 패키지와 구성을 작성하는 것은 Micro-ROS 프로젝트에서 다룰 수 있는 범위를 벗어납니다.

### 주의사항

1. 이 튜토리얼의 지침은 Linux 환경에서만 테스트되었으며, Linux 셸 명령어를 사용하므로 Windows에서는 작동하지 않을 수 있습니다.
1. 저희는 지금까지 ARM 기반 보드만 사용해 왔습니다. 다른 마이크로컨트롤러를 사용하는 보드의 경우 다른 접근 방식이 필요할 수 있습니다.
1. C++ 원자적 스왑 명령어를 추가하는 저희 접근 방식에는 문제가 있으며 추가적인 작업이 필요하지만, 시작점으로는 충분할 것입니다.

### 기본 사항

NuttX용 Micro-ROS를 컴파일하려면 보드 구성에 몇 가지 C++ 설정이 활성화되어 있어야 합니다. 이 튜토리얼에서는 기존 NuttX 보드 구성에 추가해야 하는 사항을 설명합니다.

### 배경: NuttX 보드 구성

**참고** 이 부분은 배경 설명일 뿐이며, 보드 구성을 직접 만들 필요는 없습니다!

마이크로컨트롤러는 매우 다양하고 활용도가 높습니다. 포함된 주변 장치의 종류와 수는 보드마다 크게 다르며, 각 보드는 이러한 주변 장치 중 일부만을 사용하기도 합니다.

따라서 RTOS는 특정 보드에서 사용되는 주변 장치와 해당 장치가 연결된 핀에 대한 정보를 알아야 합니다. 경우에 따라 보드에 대한 사용자 지정 초기화도 필요합니다.

이것을 우리는 "보드 구성"이라고 부릅니다. 이는 마이크로컨트롤러와 주변 장치용 드라이버를 포함하는 "보드 지원 패키지(BSP)"와는 다릅니다.

### 디렉토리 구조

Micro-ROS에서 현재 사용하고 있는 NuttX 7.x 버전까지는 설정 파일이 `configs/` 하위 디렉토리에 저장됩니다.

그 안에는 각 보드별 하위 디렉토리가 있습니다. 명명 규칙은 보드마다 다르지만, 대개 제조사 이름으로 시작하고 그 뒤에 보드 이름이 옵니다. 예를 들어, Olimex STM32-E407 레퍼런스 보드의 설정 파일은 `configs/olimex-stm32e407`에 있습니다. 우리는 이것을 *보드 기본 디렉토리*라고 부릅니다.

보드 기본 디렉터리에는 두 가지가 있습니다.
 1) 보드 구성 디렉터리, 특히 `include`, `scripts` 및 `src` 디렉터리.
 2) 미리 정의된 NuttX *빌드 구성*. 이 디렉터리에는 `defconfig` 파일만 있으며, `scripts/configure.sh`에 전달할 수 있는 디렉터리입니다.

## Micro-ROS 지원 추가

Micro-ROS 빌드 지원을 추가하려면 다음 두 가지를 준비해야 합니다.

 1) 올바른 C++ 설정을 활성화하십시오
 1) C++ 원자 연산 내장 함수 추가

필요한 수정 사항의 좋은 예는 커밋 [26917196](https://github.com/micro-ROS/NuttX/commit/26917196e744b22433e699af71da1fcb86a96623)에서 찾을 수 있습니다.

 ### 올바른 C++ 설정 활성화

컴파일러 설정에 대한 모든 내용은 `scripts/Make.defs` 파일에 있습니다.

**중요**: 이 파일은 .defs 파일이므로 NuttX는 *설정 중에만* 이 파일을 평가합니다. 따라서 변경 사항이 있는 경우 `make distclean`을 실행한 다음 `tools/configure.sh`를 실행해야 합니다!

1) C++ 표준 라이브러리 포함 추가

이는 기본적으로 추가해야 한다는 것을 의미합니다.
`ARCHXXINCLUDES+=-isystem $(TOPDIR)/include/uClibc++`
해당 변수가 처음 정의된 블록 이후.

2) 예외 및 RTTI 활성화

기본적으로 보드 구성에서는 예외 처리가 비활성화되어 있습니다.

저희는 UCLIBCXX_EXCEPTION이 설정되어 있는지 확인하고, 설정되어 있으면 예외 처리와 RTTI를 활성화합니다. 예시는 [커밋 26917196의 80~84행](https://github.com/micro-ROS/NuttX/commit/26917196e744b22433e699af71da1fcb86a96623#diff-0199bac3041e59fbc59a9abd1492151eR80)을 참조하세요.
```메이크파일
ifeq($(CONFIG_UCLIBCXX_EXCEPTION),y)
  ARCHCXXFLAGS = -fno-builtin -fcheck-new
또 다른
  ARCHCXXFLAGS = -fno-내장 -fno-예외 -fcheck-new -fno-rtti
엔디프
```

3) 빌드에 libsupc++를 추가합니다. 이 라이브러리는 툴체인의 일부이지만 여러 버전이 있으므로 올바른 버전을 사용해야 합니다. 다음은 이를 수행하는 Make 코드의 일부입니다.
```메이크파일
LIBSUPXX = ${shell $(CC) $(CXXFLAGS) --print-file-name=libsupc++.a}
EXTRA_LIBPATHS = -L "${shell dirname "$(LIBSUPXX)"}"
EXTRA_LIBS = -lsupc++
```

### C++ 원자 연산 내장 함수 추가

C++11 이상 버전에서는 툴체인이 원자적 스왑 연산을 제공해야 합니다. 이러한 연산은 하드웨어에 따라 달라지며, 현재 사용 중인 툴체인 버전에서는 ARM용 원자적 스왑 연산이 아직 지원되지 않습니다. 따라서 `libatomic.c`라는 호환성 파일을 추가했습니다.

1. `configs/olimex-stm32e407/src/libatomic.c` 경로에서 `libatomic.c` 파일을 보드 설정 `src` 디렉토리로 복사합니다.

1. `src/Makefile`의 `CSRCS` 줄에 `libatomic.c`를 추가합니다.

---

## 출처: `_docs/tutorials/old/nsh/index.md`
<a id="source-docs-tutorials-old-nsh-index-md"></a>

<img src="https://img.shields.io/badge/Disclaimer-This_tutorial_is_unmaintained-red" style="display:inline"/>

| RTOS | 보드 호환 |
| :---: | :---------------: |
| NuttX | Olimex-STM32-E407 |

NSH는 다양한 인터페이스를 통해 사용할 수 있는 시스템 콘솔입니다.
이 튜토리얼에서는 UART와 USB 주변 장치를 통해 이를 사용하는 방법을 보여드리겠습니다.

## 하드웨어 요구 사항:

- [Olimex-STM32-E407 보드](https://www.olimex.com/Products/ARM/ST/STM32-E407/open-source-hardware)
- [JTAG 플래셔 장치](https://www.olimex.com/Products/ARM/JTAG/ARM-USB-TINY/)
- USB-TTL232 케이블.
- 미니 USB 케이블.

## 펌웨어 생성

이 튜토리얼에서는 micro_ros_setup에서 다음 구성을 실행할 것입니다.

```bash
ros2 run micro_ros_setup create_firmware_ws.sh nuttx olimex-stm32-e407
# For UART
ros2 run micro_ros_setup configure_firmware.sh nsh_uart
# For USB
ros2 run micro_ros_setup configure_firmware.sh nsh
```

보드 설정이 완료되면 다음 명령어를 입력하여 빌드해야 합니다.

```bash
ros2 run micro_ros_setup build_firmware.sh
```

컴파일이 성공하면 다음과 같은 출력이 표시됩니다.
```bash
CP: nuttx.hex
CP: nuttx.bin
```

# 펌웨어를 플래싱합니다

펌웨어는 준비되었으니 업로드만 하면 됩니다.
이제 다음과 같은 연결을 수행해야 합니다.
- JTAG 플래셔 장치를 연결하십시오.
- UART 통신을 하려면 USB TTL-232를 USART3에 연결하십시오.
  - `USART3 TX` -> `TTL232 RX`
  - `USART3 RX` -> `TTL232 TX`
  - `GND 보드` -> `TTL232 GND`

![](_docs/tutorials/old/nsh/images/olimex_uart.jpg)
- USB 통신을 위해 미니 USB를 OTG2에 연결하십시오.

![](_docs/tutorials/old/nsh/images/olimex_nsh_usb.jpg)

이제 다음 명령어를 입력하여 보드를 플래싱하세요.
```bash
ros2 run micro_ros_setup flash_firmware.sh
```

이 과정이 완료되면 다음과 같은 출력이 표시되어야 합니다.

```bash
nuttx.bin 파일에서 49152바이트를 6.279262초(7.644 KiB/s) 만에 기록했습니다.
정보: TCL 연결을 위해 6666번 포트에서 수신 대기 중입니다.
정보: 텔넷 연결을 위해 4444번 포트에서 수신 대기 중입니다.
```

## 콘솔에 연결

마지막으로 NSH 콘솔을 사용하려면 아래에 나열된 단계를 따라야 합니다.
- 리셋 버튼을 누르세요. 녹색 LED가 켜지면서 정상 작동 중임을 나타냅니다.
콘솔에 `dmesg`를 입력하여 장치를 찾아보세요. 다음과 같은 결과가 표시될 것입니다.

```bash
# UART용
[17154.225244] usb 1-2: xhci_hcd를 사용하는 새로운 고속 USB 장치 번호 6
[17154.380060] usb 1-2: 새 USB 장치가 발견되었습니다. idVendor=0403, idProduct=6001, bcdDevice= 6.00
[17154.380066] usb 1-2: 새 USB 장치 문자열: Mfr=1, Product=2, SerialNumber=3
[17154.380069] usb 1-2: 제품: USB <-> 직렬 케이블
[17154.380072] USB 1-2: 제조사: FTDI
[17154.380075] USB 1-2: 시리얼 번호: 12TBZ31
[17154.400389] usbcore: 새로운 인터페이스 드라이버 usbserial_generic이 등록되었습니다.
[17154.400395] usbserial: 일반 USB 직렬 지원이 등록되었습니다.
[17154.402690] usbcore: 새 인터페이스 드라이버 ftdi_sio가 등록되었습니다
[17154.402699] usbserial: FTDI USB 직렬 장치에 대한 USB 직렬 지원이 등록되었습니다.
[17154.402745] ftdi_sio 1-2:1.0: FTDI USB 직렬 장치 변환기가 감지되었습니다.
[17154.402762] usb 1-2: FT232RL 감지됨
[17154.403058] usb 1-2: FTDI USB 직렬 장치 변환기가 ttyUSB0에 연결되었습니다.

# USB용
[20614.570781] usb 1-2: xhci_hcd를 사용하는 새로운 고속 USB 장치 번호 7
[20614.724366] usb 1-2: 새 USB 장치가 발견되었습니다. idVendor=0525, idProduct=a4a7, bcdDevice= 1.01
[20614.724372] usb 1-2: 새로운 USB 장치 문자열: Mfr=1, Product=2, SerialNumber=3
[20614.724375] usb 1-2: 제품: CDC/ACM 시리얼
[20614.724378] USB 1-2: 제조사: NuttX
[20614.724381] USB 1-2: 시리얼 번호: 0
[20614.745693] cdc_acm 1-2:1.0: ttyACM0: USB ACM 장치
[20614.746274] usbcore: 새 인터페이스 드라이버 cdc_acm이 등록되었습니다
[20614.746277] cdc_acm: USB 모뎀 및 ISDN 어댑터용 USB 추상 제어 모델 드라이버
```
이 특정 상황에서 장치는 UART 통신에는 `dev/ttyUSB0`, USB 통신에는 `dev/ttyACM0`으로 할당됩니다. 마지막 숫자는 다를 수 있다는 점에 유의하십시오.

마지막으로 다음 명령어를 실행하여 NSH 콘솔을 엽니다.
```
# UART용
sudo minicom -D /dev/ttyUSB0

# USB용
sudo minicom -D /dev/ttyACM0
```

포트가 열리면 **Enter 키를 두 번 누르세요.** 그러면 다음 메뉴가 나타납니다.

```bash
nsh> ?
도움말 사용법: 도움말 [-v] [<cmd>]

  ? exec hexdump mb sleep
  고양이 출구 죽이기 mh 우리잠
  에코 헬프 ls mw xd

내장 앱:
nsh>
```

---

## 출처: `_docs/tutorials/programming_rcl_rclc/executor/executor.md`
<a id="source-docs-tutorials-programming-rcl-rclc-executor-executor-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

- [타이머](#타이머)
  - [초기화](#초기화)
  - [콜백](#callback)
  - [정리](#cleaning-up)
- [실행자](#실행자)
  - [예시 1: 'Hello World'](#example-1-hello-world)
  - [예제 2: 트리거 실행](#example-2-triggered-execution)

## 타이머

타이머를 생성하여 실행기에 추가하면, 타이머가 실행되기 시작하면 주기적으로 타이머 콜백 함수가 호출됩니다.
일반적으로 정기 간행물이나 행사를 관리하는 데 사용됩니다.

### 초기화

```c
// 타이머 주기(나노초)
const unsigned int timer_period = RCL_MS_TO_NS(1000);

// 타이머 객체를 생성하고 초기화합니다.
rcl_timer_t 타이머;
rcl_ret_t rc = rclc_timer_init_default(&timer, &support, timer_period, timer_callback);

// 실행기에 추가합니다
rc = rclc_executor_add_timer(&executor, &timer);

만약 (rc가 RCL_RET_OK가 아닌 경우) {
  ... // 오류 처리
  -1을 반환합니다.
}
```

### 콜백

콜백 함수는 연결된 타이머에 대한 포인터와 이전 호출 이후 경과된 시간 또는 콜백 함수가 처음 호출된 경우 타이머가 생성된 이후 경과된 시간을 반환합니다.

```c
void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
	printf("마지막 콜백 시간: %ld\n", last_call_time);

	타이머가 NULL이 아니면 {
		// 동작 수행
		...
	}
}
```

콜백 함수 내에서 전달된 포인터를 사용하여 타이머를 취소하거나 타이머 주기 및/또는 콜백 함수를 수정할 수 있습니다. 자세한 내용은 [rcl/timer.h](https://github.com/ros2/rcl/blob/iron/rcl/include/rcl/timer.h)를 참조하십시오.

### 청소하기

초기화된 타이머를 파괴하려면:

```c
// 타이머 파괴
rcl_timer_fini(&timer);
```

이렇게 하면 사용된 메모리가 할당 해제되고 타이머가 무효화됩니다.


## 집행자

rclc 실행기는 C++용 rclcpp 실행기와 유사하게 구독 및 타이머 콜백 실행을 관리하는 C API를 제공합니다. rclc 실행기는 리소스가 제한된 장치에 최적화되어 있으며, 종단 간 지연 시간이 제한된 결정론적 스케줄을 수동으로 구현할 수 있는 추가 기능을 제공합니다.

이 섹션에서는 두 가지 예를 제공합니다.

* 예시 1: 하나의 실행기, 하나의 게시자, 타이머 및 구독으로 구성된 Hello-World 예제.
* 예시 2: 새로운 메시지 수신 여부에 따라 콜백 실행을 동기화하는 기능을 보여주는 트리거 실행 예시

rclc Executor 및 해당 API에 대한 자세한 정보는 모바일 로봇 시나리오 및 실시간 임베디드 애플리케이션에서 rclc Executor를 사용하는 추가 예제를 포함하여 [rclc](https://github.com/ros2/rclc/tree/master/rclc#rclc-executor) 저장소에서 확인할 수 있습니다.

### 예시 1: 'Hello World'

우선, 타이머 하나와 구독 하나만 있는 아주 간단한 rclc Executor 예제, 즉 'Hello world' 예제를 제공합니다. 이 예제는 발행자가 구독자에게 'hello world' 메시지를 보내고, 구독자는 수신된 메시지를 콘솔에 출력하는 방식으로 구성됩니다.

먼저, [rclc/rclc.h](https://github.com/ros2/rclc/blob/master/rclc/include/rclc/rclc.h) 및 [rclc/executor.h](https://github.com/ros2/rclc/blob/master/rclc/include/rclc/executor.h)와 같은 헤더 파일을 포함해야 합니다.

```c
#include <stdio.h>
#include <std_msgs/msg/string.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
```

나중에 사용될 게시자와 두 개의 문자열을 정의합니다.

```c
rcl_publisher_t my_pub;
std_msgs__msg__String pub_msg;
std_msgs__msg__String 하위 메시지;
```

구독 콜백은 메시지 매개변수 `msgin`을 C 언어의 `std_msgs::msg::String`과 동등한 유형으로 캐스팅하고 수신된 메시지를 출력합니다.

```c
void my_subscriber_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  만약 (msg가 NULL인 경우) {
    printf("콜백: msg NULL\n");
  } 또 다른 {
    printf("콜백: 수신된 정보: %s\n", msg->data.data);
  }
}
```

타이머 콜백은 `main()`에서 나중에 초기화되는 `my_pub` 게시자를 통해 `pub_msg` 메시지를 게시합니다.

```c
void my_timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rcl_ret_t rc;
  사용되지 않음(last_call_time);
  타이머가 NULL이 아니면 {
    rc = rcl_publish(&my_pub, &pub_msg, NULL);
    만약 (rc == RCL_RET_OK)이면 {
      printf("게시된 메시지 %s\n", pub_msg.data.data);
    } 또 다른 {
      printf("타이머 콜백 오류: 메시지 %s를 게시할 수 없습니다.\n", pub_msg.data.data);
    }
  } 또 다른 {
    printf("timer_callback에서 오류 발생: 타이머 매개변수가 NULL입니다.\n");
  }
}
```

콜백 함수들을 정의한 후, 이제 `main()` 함수를 소개합니다. 먼저, 이후에 사용할 rcl 객체를 생성하기 위해 몇 가지 초기화 작업이 필요합니다. 동적 메모리 할당을 위한 `allocator` 객체와, rcl 노드, rcl 구독, rcl 타이머, rcl 실행기 등의 초기화를 간소화하는 데 필요한 몇 가지 rcl 객체를 포함하는 `support` 객체가 필요합니다.

```c
int main(int argc, const char * argv[])
{
  rcl_allocator_t allocator = rcl_get_default_allocator();
  rclc_support_t 지원;
  rcl_ret_t rc;

  // init_options 생성
  rc = rclc_support_init(&support, argc, argv, &allocator);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("rclc_support_init 오류.\n");
    -1을 반환합니다.
  }
```

다음으로, `my_node`라는 ROS 2 노드를 정의하고 `rclc_executor_init_default()`를 사용하여 초기화합니다.

```c
  // rcl_node 생성
  rcl_node_t my_node;
  rc = rclc_node_init_default(&my_node, "node_0", "executor_examples", &support);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("rclc_node_init_default에서 오류 발생\n");
    -1을 반환합니다.
  }
```

다음 코드를 사용하여 std_msg::msg::String 형식의 'topic_0' 토픽을 게시하는 퍼블리셔를 생성할 수 있습니다.

```c
const char * topic_name = "topic_0";
const rosidl_message_type_support_t * my_type_support =
  ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);

rc = rclc_publisher_init_default(&my_pub, &my_node, my_type_support, topic_name);
RCL_RET_OK가 rc와 같지 않으면 {
  printf("rclc_publisher_init_default %s에서 오류가 발생했습니다.\n", topic_name);
  -1을 반환합니다.
}
```

참고로, `my_pub` 변수는 전역 변수로 정의되어 있으므로 타이머 콜백에서 사용할 수 있습니다.

다음과 같이 1초 주기의 타이머 `my_timer`를 생성하고, 해당 타이머가 호출하는 콜백 함수 `my_timer_callback`을 실행할 수 있습니다.

```c
  rcl_timer_t my_timer;
  const unsigned int timer_timeout = 1000; // 밀리초 단위
  rc = rclc_timer_init_default(&my_timer, &support, RCL_MS_TO_NS(timer_timeout), my_timer_callback);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("rcl_timer_init_default에서 오류가 발생했습니다.\n");
    -1을 반환합니다.
  } 또 다른 {
    printf("타임아웃 %dms로 타이머를 생성했습니다.\n", timer_timeout);
  }
```

`Hello World!` 문자열은 퍼블리셔의 메시지 `pub_msg.data`에 직접 할당할 수 있습니다. 먼저 `std_msgs__msg__String__init`을 사용하여 퍼블리셔 메시지를 초기화합니다. 그런 다음 `pub_msg.data.data`에 필요한 메모리를 할당하고, 최대 용량을 `pub_msg.data.capacity`로 설정하고, 메시지 길이를 `pub_msg.data.size`로 적절하게 설정해야 합니다. `pub_msg.data.data`의 내용을 `snprintf`로 출력하여 메시지 내용을 확인할 수 있습니다.

```c
  // 메시지를 게시자에게 할당
  std_msgs__msg__String__init(&pub_msg);
  const unsigned int PUB_MSG_CAPACITY = 20;
  pub_msg.data.data = malloc(PUB_MSG_CAPACITY);
  pub_msg.data.capacity = PUB_MSG_CAPACITY;
  snprintf(pub_msg.data.data, pub_msg.data.capacity, "Hello World!");
  pub_msg.data.size = strlen(pub_msg.data.data);
```

구독 `my_sub`는 다음과 같이 정의할 수 있습니다.

```c
  rcl_subscription_t my_sub = rcl_get_zero_initialized_subscription();
  rc = rclc_subscription_init_default(&my_sub, &my_node, my_type_support, topic_name);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("구독자 %s를 생성하는 데 실패했습니다.\n", topic_name);
    -1을 반환합니다.
  } 또 다른 {
    printf("구독자 %s 생성됨:\n", topic_name);
  }
```

이 구독에 대한 전역 메시지 `sub_msg`는 다음과 같이 초기화해야 합니다.

```c
  std_msgs__msg__String__init(&sub_msg);
```

이제 모든 사전 준비가 완료되었으므로 다음 명령어를 사용하여 rclc 실행기를 정의하고 초기화할 수 있습니다.

```c
  rclc_executor_t 실행기;
  실행기 = rclc_executor_get_zero_initialized_executor();
```

다음 단계에서는 ROS 2의 `context`, 통신 객체의 개수 `num_handles`, 그리고 `allocator`를 사용하여 실행기를 초기화합니다. 통신 객체의 개수는 실행기가 관리할 타이머와 구독의 총 개수를 정의합니다. 이 예제에서는 실행기를 하나의 타이머와 하나의 구독으로 설정합니다.

```c
  // 전체 핸들 수 = 구독 수 + 타이머 수
  부호 없는 정수 num_handles = 1 + 1;
  rclc_executor_init(&executor, &support.context, num_handles, &allocator);
```

이제 `rclc_c_executor_add_subscription` 함수를 사용하여 이전에 정의한 구독 `my_sub`, 해당 메시지 `sub_msg` 및 콜백 `my_subscriber_callback`을 통해 구독을 추가할 수 있습니다.

```c
rc = rclc_executor_add_subscription(&executor, &my_sub, &sub_msg, &my_subscriber_callback, ON_NEW_DATA);
만약 (rc가 RCL_RET_OK가 아닌 경우) {
  printf("rclc_executor_add_subscription에서 오류가 발생했습니다.\n");
}
```

`ON_NEW_DATA` 옵션은 스핀 메서드의 실행 방식을 선택합니다. 이 예시에서 구독 `my_sub`의 콜백은 새 데이터가 있는 경우에만 호출됩니다.

참고: 또 다른 실행 의미 체계는 `ALWAYS`입니다. 이는 실행기의 spin 메서드가 호출될 때 구독 콜백이 항상 실행됨을 의미합니다. 이 옵션은 새 데이터가 있는지 여부와 관계없이 콜백을 일정한 주기로 실행해야 하는 경우에 유용할 수 있습니다. 이 옵션을 선택하면 새 데이터가 없을 경우 콜백은 메시지 인수로 `NULL`을 전달하여 실행됩니다. 따라서 콜백 함수가 메시지 인수로 `NULL`을 허용하도록 해야 합니다.

마찬가지로 `rclc_c_executor_add_timer` 함수를 사용하여 `my_timer` 타이머를 추가할 수 있습니다.

```c
rclc_executor_add_timer(&executor, &my_timer);
만약 (rc가 RCL_RET_OK가 아닌 경우) {
  printf("rclc_executor_add_timer에서 오류가 발생했습니다.\n");
}
```

rclc 실행기의 핵심 특징은 이러한 `rclc-executor-add-*` 함수들의 호출 순서가 중요하다는 점입니다. 이 함수들이 호출되는 순서는 실행기의 스핀 함수가 실행될 때 콜백 함수들의 정적 처리 순서를 결정합니다.

이 예제에서는 타이머가 구독 전에 실행기에 추가되었습니다. 따라서 타이머가 준비되었고 구독에 대한 새 메시지가 있는 경우 타이머가 먼저 실행되고 그 후에 구독이 실행됩니다. 이러한 동작은 현재 rclcpp 실행기에서는 정의할 수 없지만 결정론적 실행 의미론을 구현하는 데 유용합니다.

마지막으로 `rclc_executor_spin()`을 사용하여 실행기를 실행할 수 있습니다.

```c
  rclc_executor_spin(&executor);
```

이 함수는 반환 없이 무한히 실행됩니다. 하지만 이 예제에서는 메시지를 10번만 발행하려고 합니다. 따라서 한 번만 실행하고 반환하는 `rclc_executor_spin_some` 스핀 메서드를 사용합니다. DDS 큐에서 새 메시지를 확인하거나 준비 타이머가 작동하는 데 걸리는 대기 시간 제한은 1초로 설정되어 있습니다.

```c
for (unsigned int i = 0; i < 10; i++) {
  // 시간 초과는 나노초 단위로 지정됩니다(여기서는 1초).
  rclc_executor_spin_some(&executor, 1000 * (1000 * 1000));
}
```

마지막으로 동적으로 할당된 메모리를 해제해야 합니다.

```c
  // 정리
  rc = rclc_executor_fini(&실행자);
  rc += rcl_publisher_fini(&my_pub, &my_node);
  rc += rcl_timer_fini(&my_timer);
  rc += rcl_subscription_fini(&my_sub, &my_node);
  rc += rcl_node_fini(&my_node);
  rc += rclc_support_fini(&support);
  std_msgs__msg__String__fini(&pub_msg);
  std_msgs__msg__String__fini(&sub_msg);

  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("정리 중 오류가 발생했습니다!\n");
    -1을 반환합니다.
  }
0을 반환합니다.
} // 기본
```

이것으로 예제가 완료되었습니다. 소스 코드는 rclc-examples 패키지의 [rclc-examples/example_executor_only_rcl.c](https://github.com/ros2/rclc/blob/master/rclc_examples/src/example_executor_only_rcl.c)에서 찾을 수 있습니다.

### 예시 2: 트리거된 실행

로봇 응용 분야에서는 위치 정확도를 향상시키기 위해 여러 센서가 사용되는 경우가 많습니다. 이러한 센서는 서로 다른 주파수를 가질 수 있는데, 예를 들어 고주파 IMU 센서와 저주파 레이저 스캐너가 있습니다. 한 가지 방법은 레이저 스캔 신호가 도착했을 때 실행을 시작하고, 그 후에야 수집된 IMU 데이터 중에서 가장 최근 데이터를 평가하는 것입니다.

이 예제는 입력 데이터의 가용성에 따라 콜백 실행을 트리거하는 rclc 실행기의 추가 기능을 보여줍니다.

우리는 100ms 주기와 1000ms 주기를 가진 두 개의 게시자를 연결하여 하나의 실행기를 설정했습니다. 그런 다음 두 개의 구독을 위한 하나의 실행기를 설정했습니다. 두 구독의 콜백 함수는 모두 낮은 주기의 게시자의 메시지가 도착하면 실행됩니다.

이 코드 예제의 출력 결과는 다음과 같습니다.

```c
타임아웃 100ms의 타이머 'my_string_timer'를 생성했습니다.
타임아웃 1000ms로 'my_int_timer'를 생성했습니다.
구독자 토픽_0 생성됨:
구독자 토픽_1 생성됨:
Executor_pub: DDS 핸들 수: 2
Executor_sub: DDS 핸들 수: 2
게시됨: 안녕하세요! 0
게시됨: Hello World! 1
게시됨: Hello World! 2
게시됨: Hello World! 3
게시일: Hello World! 4
게시일: Hello World! 5
게시일: Hello World! 6
게시일: Hello World! 7
게시일: Hello World! 8
게시일: Hello World! 9
게시일: 0
콜백 1: Hello World! 9 <---
콜백 2: 0 <---
게시일: Hello World! 10
게시일: Hello World! 11
발행일: Hello World! 12
발행일: Hello World! 13
게시일: Hello World! 14
게시일: Hello World! 15
게시일: Hello World! 16
게시일: Hello World! 17
게시일: Hello World! 18
발행일: Hello World! 19
게시일: 1일
콜백 1: Hello World! 19 <---
콜백 2: 1 <---
```

이 출력 결과는 콜백 함수가 두 메시지 모두 새로운 데이터를 수신했을 때만 실행됨을 보여줍니다. 이 경우, 빈도가 높은 토픽의 최신 데이터가 사용됩니다.

이 튜토리얼에서 배우게 됩니다

* 사전 정의된 트리거 조건을 사용하는 방법
* 사용자 정의 트리거 조건을 작성하는 방법
* 여러 실행기를 실행하는 방법
* 구독에 대한 서비스 품질 매개변수를 설정하는 방법

먼저 문자열 및 정수 메시지에 필요한 헤더 파일인 `<std_msgs/msg/string.h>`와 `std_msgs/msg/int32.h>`를 각각 포함합니다. 그 다음으로는 rclc 편의 함수 헤더 파일인 `rclc.h`와 rclc 실행기 헤더 파일인 `executor.h`를 포함합니다.

```c
#include <stdio.h>
#include <unistd.h>
#include <std_msgs/msg/string.h>
#include <std_msgs/msg/int32.h>

#include <rclc/executor.h>
#include <rclc/rclc.h>
```

그런 다음, 게시자와 구독자, 그리고 그들의 메시지에 대한 전역 변수가 정의되며, 이 변수들은 `main()` 함수에서 초기화되고 해당 콜백 함수에서 사용됩니다.

```c
rcl_publisher_t my_pub;
rcl_publisher_t my_int_pub;
std_msgs__msg__String 하위 메시지;
std_msgs__msg__Int32 pub_int_msg;
int pub_int_value;
std_msgs__msg__Int32 sub_int_msg;
int pub_string_value;
```

사용자 정의 트리거 조건의 경우 `pub_trigger_object_t` 유형과 `sub_trigger_object_t` 유형이 정의됩니다.

```c
typedef 구조체
{
  rcl_timer_t * 타이머1;
  rcl_timer_t * timer2;
} pub_trigger_object_t;

typedef 구조체
{
  rcl_subscription_t * sub1;
  rcl_subscription_t * sub2;
} 하위 트리거 객체_t;
```

게시자 실행기는 해당 게시자의 타이머 중 하나라도 준비되면 게시합니다. 이것이 OR 논리입니다. 미리 정의된 `rclc_executor_trigger_any` 트리거 조건을 사용할 수도 있지만, 이 예제는 사용자 지정 트리거 조건을 작성하는 방법을 보여줍니다.

원칙적으로, 조건은 핸들 목록, 해당 목록의 길이, 그리고 미리 정의된 조건 유형을 인수로 받습니다. 이 경우 `pub_trigger_object_t`가 예상됩니다. 먼저, 매개변수 `obj`는 이 유형(`comm_obj`)으로 변환됩니다. 그런 다음, 핸들 목록의 각 요소에 대해 `handles[i].data_available` 필드를 평가하여 새 데이터가 있는지(또는 타이머가 준비되었는지) 확인하고, 해당 핸들 포인터를 통신 객체의 포인터와 비교합니다. 하나 이상의 타이머가 준비되면 트리거 조건은 참을 반환합니다.

```c
bool pub_trigger(rclc_executor_handle_t * handles, unsigned int size, void * obj)
{
  핸들이 NULL인 경우 {
    printf("pub_trigger에서 오류 발생: 'handles'가 NULL 포인터입니다.\n");
    false를 반환합니다.
  }
  만약 (obj가 NULL인 경우) {
    printf("pub_trigger에서 오류 발생: 'obj'는 NULL 포인터입니다.\n");
    false를 반환합니다.
  }
  pub_trigger_object_t * comm_obj = (pub_trigger_object_t *) obj;
  bool timer1 = false;
  bool timer2 = false;
  //printf("pub_trigger 준비 완료: ");
  for (unsigned int i = 0; i < size; i++) {
    만약 (handles[i].data_available)이라면 {
      void * handle_ptr = rclc_executor_handle_get_ptr(&handles[i]);
      만약 handle_ptr이 comm_obj->timer1과 같다면 {
        timer1 = true;
      }
      만약 handle_ptr이 comm_obj->timer2와 같다면 {
        timer2 = true;
      }
    }
  }
  (타이머1 || 타이머2)를 반환합니다.
}
```

구독 `sub_trigger`의 트리거 조건은 AND 논리를 구현해야 합니다. 즉, 두 구독 모두 새 메시지를 수신한 경우에만 실행기가 콜백 처리를 시작해야 합니다.

구현 방식은 `pub_trigger`와 유사합니다. 유일한 차이점은 이 트리거가 핸들 목록에서 두 구독 모두 발견된 경우 true를 반환한다는 것입니다. 이는 마지막 if 문의 조건인 `sub1 && sub2`에서 구현됩니다.

```c
bool sub_trigger(rclc_executor_handle_t * handles, unsigned int size, void * obj)
{
  핸들이 NULL인 경우 {
    printf("하위 트리거에서 오류 발생: 'handles'가 NULL 포인터입니다.\n");
    false를 반환합니다.
  }
  만약 (obj가 NULL인 경우) {
    printf("하위 트리거에서 오류 발생: 'obj'는 NULL 포인터입니다.\n");
    false를 반환합니다.
  }
  sub_trigger_object_t * comm_obj = (sub_trigger_object_t *) obj;
  bool sub1 = false;
  bool sub2 = false;
  //printf("하위 트리거 준비 설정: ");
  for (unsigned int i = 0; i < size; i++) {
    만약 handles[i].data_available이 true이면 {
      void * handle_ptr = rclc_executor_handle_get_ptr(&handles[i]);

      만약 handle_ptr이 comm_obj->sub1과 같다면 {
        sub1 = true;
      }
      만약 handle_ptr이 comm_obj->sub2와 같다면 {
        sub2 = true;
      }
    }
  }
  (sub1 && sub2)를 반환합니다.
}
```

Hello-World 예제와 마찬가지로 구독 콜백은 수신된 메시지를 출력할 뿐입니다.

`my_string_subscriber` 콜백 함수는 메시지 문자열을 `msg->data.data`로 출력합니다.

```c
void my_string_subscriber_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  만약 (msg가 NULL인 경우) {
    printf("my_string_subscriber_callback: msgin이 NULL입니다\n");
  } 또 다른 {
    printf("콜백 1: %s\n", msg->data.data);
  }
}
```

정수 콜백 함수는 수신된 정수 `msg->data`를 출력합니다.

```c
void my_int_subscriber_callback(const void * msgin)
{
  const std_msgs__msg__Int32 * msg = (const std_msgs__msg__Int32 *)msgin;
  만약 (msg가 NULL인 경우) {
    printf("my_int_subscriber_callback: msgin이 NULL입니다\n");
  } 또 다른 {
    printf("콜백 2: %d\n", msg->data);
  }
}
```

서로 다른 빈도로 메시지를 게시하기 위해 두 개의 타이머를 설정했습니다.
문자열 메시지를 발행하는 타이머 하나(`my_timer_string_callback`)와 정수를 발행하는 타이머 하나(`my_timer_int_callback`)가 있습니다.

`my_timer_string_callback` 함수 내에서 `pub_msg`라는 메시지가 생성되고, 이 메시지에는 `Hello World` 문자열과 1씩 증가하는 정수가 타이머 콜백 함수가 호출될 때마다 채워집니다. 그런 다음 `rcl_publish()` 함수를 사용하여 메시지가 게시됩니다.

`UNUSED` 매크로는 두 번째 매개변수 `last_call_time`이 사용되지 않는다는 린터 경고에 대한 해결책입니다.

```c
#define UNUSED(x) (void)x;

void my_timer_string_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rcl_ret_t rc;
  사용되지 않음(last_call_time);
  타이머가 NULL이 아니면 {
    //printf("타이머: 마지막 통화 이후 경과 시간 %d\n", (int) last_call_time);

    std_msgs__msg__String pub_msg;
    std_msgs__msg__String__init(&pub_msg);
    const unsigned int PUB_MSG_CAPACITY = 20;
    pub_msg.data.data = malloc(PUB_MSG_CAPACITY);
    pub_msg.data.capacity = PUB_MSG_CAPACITY;
    snprintf(pub_msg.data.data, pub_msg.data.capacity, "Hello World!%d", pub_string_value++);
    pub_msg.data.size = strlen(pub_msg.data.data);

    rc = rcl_publish(&my_pub, &pub_msg, NULL);
    만약 (rc == RCL_RET_OK)이면 {
      printf("게시됨: %s\n", pub_msg.data.data);
    } 또 다른 {
      printf("my_timer_string_callback에서 오류 발생: 메시지 %s 게시 중\n", pub_msg.data.data);
    }
    std_msgs__msg__String__fini(&pub_msg);
  } 또 다른 {
    printf("my_timer_string_callback에서 오류 발생: 타이머 매개변수가 NULL입니다.\n");
  }
}
```

마찬가지로, `my_timer_int_callback` 함수는 호출될 때마다 정수 값 `pub_int_value`를 증가시키고 이를 메시지 필드 `pub_int_msg.data`에 할당합니다. 그런 다음 `rcl_publish()` 함수를 사용하여 메시지를 게시합니다.

```c
void my_timer_int_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rcl_ret_t rc;
  사용되지 않음(last_call_time);
  타이머가 NULL이 아니면 {
    //printf("타이머: 마지막 통화 이후 경과 시간 %d\n", (int) last_call_time);
    pub_int_msg.data = pub_int_value++;
    rc = rcl_publish(&my_int_pub, &pub_int_msg, NULL);
    만약 (rc == RCL_RET_OK)이면 {
      printf("게시일: %d\n", pub_int_msg.data);
    } 또 다른 {
      printf("my_timer_int_callback에서 오류 발생: 메시지 %d 게시 중\n", pub_int_msg.data);
    }
  } 또 다른 {
    printf("my_timer_int_callback에서 오류 발생: 타이머 매개변수가 NULL입니다.\n");
  }
}
```

이제 `main()` 함수를 실행할 준비가 모두 끝났습니다.

```c
int main(int argc, const char * argv[])
{
  rcl_allocator_t allocator = rcl_get_default_allocator();
  rclc_support_t 지원;
  rcl_ret_t rc;

  // init_options 생성
  rc = rclc_support_init(&support, argc, argv, &allocator);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("rclc_support_init 오류.\n");
    -1을 반환합니다.
  }
```

먼저 기본 할당자를 사용하는 `rclc_support_init` 함수로 rcl을 초기화합니다. rclc 지원 객체는 `support`에 저장됩니다. 다음으로, `node_0`이라는 이름과 `executor_examples` 네임스페이스를 가진 `my_node` 노드를 다음과 같이 생성합니다.

```c
// rcl_node 생성
  rcl_node_t my_node;
  rc = rclc_node_init_default(&my_node, "node_0", "executor_examples", &support);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("rclc_node_init_default에서 오류 발생\n");
    -1을 반환합니다.
  }
```

문자열 메시지를 발행하는 퍼블리셔 `my_string_pub`와 100ms 주기의 해당 타이머 `my_string_timer`는 다음과 같이 생성됩니다.

```c
// 퍼블리셔 1 생성
// - 토픽 이름: 'topic_0'
// - 메시지 유형: std_msg::msg::String
const char * topic_name = "topic_0";
const rosidl_message_type_support_t * my_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);

rc = rclc_publisher_init_default(&my_string_pub, &my_node, my_type_support, topic_name);
RCL_RET_OK가 rc와 같지 않으면 {
  printf("rclc_publisher_init_default %s에서 오류가 발생했습니다.\n", topic_name);
  -1을 반환합니다.
}

// 타이머 1 생성
// - 'timer_timeout' 밀리초마다 'my_string_pub'을 게시합니다.
rcl_timer_t my_string_timer;
const unsigned int timer_timeout = 100;
rc = rclc_timer_init_default(&my_string_timer, &support, RCL_MS_TO_NS(timer_timeout), my_timer_string_callback);
만약 (rc가 RCL_RET_OK가 아닌 경우) {
  printf("rclc_timer_init_default에서 오류가 발생했습니다.\n");
  -1을 반환합니다.
} 또 다른 {
  printf("타임아웃 %d ms로 타이머 'my_string_timer'를 생성했습니다.\n", timer_timeout);
}
```

참고로, 이전에 정의된 `my_timer_string_callback`은 이 타이머에 연결되어 있습니다.
마찬가지로, 정수 메시지와 1000ms 주기의 해당 타이머 `my_int_timer`를 발행하는 두 번째 발행자 `my_int_pub`는 다음과 같이 생성됩니다.

```c
// 퍼블리셔 2 생성
  // - 주제 이름: 'topic_1'
  // - 메시지 유형: std_msg::msg::Int
  const char * topic_name_1 = "topic_1";
  const rosidl_message_type_support_t * my_int_type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);
  rc = rclc_publisher_init_default(&my_int_pub, &my_node, my_int_type_support, topic_name_1);
  RCL_RET_OK가 rc와 같지 않으면 {
    printf("rclc_publisher_init_default %s에서 오류가 발생했습니다.\n", topic_name_1);
    -1을 반환합니다.
  }

  // 타이머 2 생성
  // - 'timer_int_timeout' 밀리초마다 'my_int_pub'을 게시합니다.
  rcl_timer_t my_int_timer;
  const unsigned int timer_int_timeout = 10 * timer_timeout;
  rc = rclc_timer_init_default(&my_int_timer, &support, RCL_MS_TO_NS(timer_int_timeout), my_timer_int_callback);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("rclc_timer_init_default에서 오류가 발생했습니다.\n");
    -1을 반환합니다.
  } 또 다른 {
    printf("타임아웃 %d ms로 타이머를 생성했습니다.\n", timer_int_timeout);
  }
```

`my_timer_int_callback`은 `my_int_timer`에 연결되어 있다는 점에 유의하십시오. 타이머 콜백에서 발행자 메시지에 사용되는 데이터 변수는 먼저 초기화해야 합니다.

```c
std_msgs__msg__Int32__init(&int_pub_msg);
int_pub_value = 0;
string_pub_value = 0;
```

첫 번째 구독 `my_string_sub`은 서비스 품질 매개변수를 'last-is-best'로 변경했기 때문에 `rcl_subscription_init` 함수를 사용하여 생성됩니다. 즉, 새 메시지가 구독에서 처리되지 않은 이전 메시지를 덮어씁니다. 또한 메시지 `string_sub_msg`도 초기화해야 합니다.

```c
// 구독 생성 1
  rcl_subscription_t my_string_sub = rcl_get_zero_initialized_subscription();
  rcl_subscription_options_t my_subscription_options = rcl_subscription_get_default_options();
  my_subscription_options.qos.depth = 0; // QoS: 마지막이 최고 = 등록 의미론
  rc = rcl_subscription_init(&my_string_sub, &my_node, my_type_support, topic_name, &my_subscription_options);

  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("구독자 %s를 생성하는 데 실패했습니다.\n", topic_name);
    -1을 반환합니다.
  } 또 다른 {
    printf("구독자 %s 생성됨:\n", topic_name);
  }
  // 구독 메시지 초기화
  std_msgs__msg__String__init(&string_sub_msg);
```

두 번째 구독 `my_int_sub`는 rclc 편의 함수 `rclc_subscription_default`를 사용하여 생성되었으며 메시지 `int_sub_msg`가 올바르게 초기화되었습니다.

```c
// 구독 2 생성
  rcl_subscription_t my_int_sub = rcl_get_zero_initialized_subscription();
  rc = rclc_subscription_init_default(&my_int_sub, &my_node, my_int_type_support, topic_name_1);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("구독자 %s를 생성하는 데 실패했습니다.\n", topic_name_1);
    -1을 반환합니다.
  } 또 다른 {
    printf("구독자 %s 생성됨:\n", topic_name_1);
  }
  // 구독 메시지 초기화
  std_msgs__msg__Int32__init(&int_sub_msg);
```

이 예제에서는 두 개의 실행기를 사용하는데, 하나는 게시자 일정을 예약하는 데 사용하고 다른 하나는 구독 일정을 예약하는 데 사용합니다.

```c
rclc_executor_t executor_pub;
rclc_executor_t executor_sub;
```

실행기 `executor_pub`는 `rclc_executor_get_zero_initialized_executor()`를 사용하여 처음 생성되며 두 개의 핸들(즉, 2개의 타이머)을 갖습니다.

```c
// 메시지 게시를 위한 실행기
  부호 없는 정수 num_handles_pub = 2;
  printf("Executor_pub: DDS 핸들 수: %u\n", num_handles_pub);
  executor_pub = rclc_executor_get_zero_initialized_executor();
  rclc_executor_init(&executor_pub, &support.context, num_handles_pub, &allocator);

  rc = rclc_executor_add_timer(&executor_pub, &my_string_timer);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("rclc_executor_add_timer 'my_string_timer'에서 오류가 발생했습니다.\n");
  }

  rc = rclc_executor_add_timer(&executor_pub, &my_int_timer);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    printf("rclc_executor_add_timer 'my_int_timer'에서 오류가 발생했습니다.\n");
  }
```

두 타이머는 모두 `rclc_executor_add_timer` 함수를 사용하여 실행기에 추가됩니다.

```c
rc = rclc_executor_add_timer(&executor_pub, &my_string_timer);
만약 (rc가 RCL_RET_OK가 아닌 경우) {
  printf("rclc_executor_add_timer 'my_string_timer'에서 오류가 발생했습니다.\n");
}

rc = rclc_executor_add_timer(&executor_pub, &my_int_timer);
만약 (rc가 RCL_RET_OK가 아닌 경우) {
  printf("rclc_executor_add_timer 'my_int_timer'에서 오류가 발생했습니다.\n");
}
```

또한 두 번째 게시자는 두 개의 핸들, 즉 두 개의 구독을 가지고 있습니다.

```c
부호 없는 정수 num_handles_sub = 2;
printf("Executor_sub: DDS 핸들 수: %u\n", num_handles_sub);
executor_sub = rclc_executor_get_zero_initialized_executor();
rclc_executor_init(&executor_sub, &support.context, num_handles_sub, &allocator);
```

`rclc_executor_add_subscription` 함수를 사용하여 추가됩니다.

```c
// 실행기에 구독 추가
rc = rclc_executor_add_subscription(
  &executor_sub, &my_string_sub, &string_sub_msg,
  &my_string_subscriber_callback,
  ON_NEW_DATA);
만약 (rc가 RCL_RET_OK가 아닌 경우) {
  printf("rclc_executor_add_subscription 'my_string_sub'에서 오류가 발생했습니다.\n");
}

// 실행기에 정수 구독을 추가합니다
rc = rclc_executor_add_subscription(
  &executor_sub, &my_int_sub, &int_sub_msg,
  &my_int_subscriber_callback,
  ON_NEW_DATA);
만약 (rc가 RCL_RET_OK가 아닌 경우) {
  printf("rclc_executor_add_subscription 'my_int_sub'에서 오류가 발생했습니다.\n");
}
```

메시지를 발행하는 실행기의 트리거 조건은 타이머가 준비되면 실행되어야 합니다. 이는 `rclc_executor_set_trigger` 함수와 `rclc_executor_trigger_any` 매개변수를 사용하여 구성할 수 있습니다.
구독 실행기는 두 메시지가 모두 도착한 경우에만 실행됩니다. 따라서 트리거 매개변수 `rclc_executor_trigger_any`를 사용할 수 있습니다.

```c
rc = rclc_executor_set_trigger(&executor_pub, rclc_executor_trigger_any, NULL);
rc = rclc_executor_set_trigger(&executor_sub, rclc_executor_trigger_all, NULL);
```

마지막으로, 실행기들이 스핀 기능을 시작할 수 있습니다. 실행기들 사이의 대기 시간은 DDS 간의 통신 시간을 위한 것입니다.

```c
for (unsigned int i = 0; i < 100; i++) {
  // 타임아웃 시간은 나노초 단위로 지정됩니다(여기서는 1초).
  rclc_executor_spin_some(&executor_pub, 1000 * (1000 * 1000));
  usleep(1000); // 1ms
  rclc_executor_spin_some(&executor_sub, 1000 * (1000 * 1000));
}
```

이 예제는 정리 코드로 마무리됩니다.

```c
// 정리
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

만약 (rc가 RCL_RET_OK가 아닌 경우) {
  printf("정리 중 오류가 발생했습니다!\n");
  -1을 반환합니다.
}
0을 반환합니다.
}
```

기본 트리거 조건이 충분하지 않은 경우 사용자는 사용자 지정 논리 조건을 정의할 수 있습니다.
사용자 정의 프로그래밍된 트리거 조건의 소스 코드는 이미 공개되었습니다.
다음 코드는 실행기를 적절하게 설정합니다.

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

사용자 정의 구조체 `pub_trigger_object_t`는 핸들의 포인터를 저장하는 데 사용됩니다. 타이머는 발행 실행기용으로 `my_string_timer`와 `my_int_timer`가 있으며, 마찬가지로 구독 실행기용으로는 `my_string_sub`와 `my_int_sub`가 있습니다. 구성은 `rclc_executor_set_trigger` 함수를 사용하여 트리거 함수와 트리거 객체(예: `executor_pub`의 경우 `pub_trigger`, `comm_obj_pub`)를 전달하여 수행할 수 있습니다.

이 예제의 전체 소스 코드는 [rclc-examples/example_executor_trigger.c](https://github.com/ros2/rclc/blob/iron/rclc_examples/src/example_executor_trigger.c) 파일에서 찾을 수 있습니다.



---

## 출처: `_docs/tutorials/programming_rcl_rclc/micro-ROS/micro-ROS.md`
<a id="source-docs-tutorials-programming-rcl-rclc-micro-ros-micro-ros-md"></a>

<!-- TODO: 섹션 이름 변경 -->

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

- [할당기](#할당기)
  - [사용자 지정 할당자](#custom-allocator)
- [시간 동기화](#time-sync)
- [핑 에이전트](#ping-agent)
- [연속 직렬화](#continous-serialization)

## 할당자

  할당자 객체는 micro-ROS에서 사용되는 동적 메모리 할당 및 할당 해제 메서드를 래핑합니다.

  ```c
  // micro-ROS 기본 할당자를 가져옵니다.
  rcl_allocator_t allocator = rcl_get_default_allocator();
  ```

  기본 할당자는 다음 메서드를 래핑합니다.

  ```c
  - 할당 = malloc()을 래핑합니다
  - deallocate = wraps free()
  - reallocate = realloc()를 래핑합니다.
  - zero_allocate = calloc()를 래핑합니다.
  - 상태 = `NULL`
  ```

### 사용자 정의 할당자

임베디드 시스템에서 작업할 때 사용자는 기본 함수를 자체 메모리 할당 방식으로 수정해야 할 수도 있습니다.
이를 위해 사용자는 기본 할당자를 자체 메서드로 수정할 수 있습니다.

```c
// 빈 할당자를 가져옵니다
rcl_allocator_t custom_allocator = rcutils_get_zero_initialized_allocator();

// 사용자 지정 할당 방법을 설정합니다.
custom_allocator.allocate = microros_allocate;
custom_allocator.deallocate = microros_deallocate;
custom_allocator.reallocate = microros_reallocate;
custom_allocator.zero_allocate = microros_zero_allocate;

// 사용자 지정 할당자를 기본값으로 설정합니다.
만약 (!rcutils_set_default_allocator(&custom_allocator ))이면
    ... // 오류 처리
    -1을 반환합니다.
}
```

사용자 정의 메서드 프로토타입 및 예시:

- 할당:

  지정된 크기의 메모리를 할당합니다. 오류 발생 시에는 `NULL`을 반환해야 합니다.

  ```c
  // 함수 프로토타입:
  void * (*allocate)(size_t size, void * state);

  // 구현 예시:
  void * microros_allocate(size_t size, void * state){
    (공백) 상태;
    void * ptr = malloc(size);
    ptr을 반환합니다.
  }
  ```

- 할당 해제

  free() 함수를 모방하여 이전에 할당된 메모리를 해제합니다.

  ```c
  // 함수 프로토타입:
  void (* 할당 해제)(void * 포인터, void * 상태);

  // 구현 예시:
  void microros_deallocate(void * pointer, void * state){
    (공백) 상태;
    free(포인터);
  }
  ```

- 재할당:

  가능하면 메모리를 재할당하고, 그렇지 않으면 할당 해제 후 다시 할당합니다.

  ```c
  // 함수 프로토타입:
  void * (*reallocate)(void * pointer, size_t size, void * state);

  // 구현 예시:
  void * microros_reallocate(void * pointer, size_t size, void * state){
    (공백) 상태;
    void * ptr = realloc(포인터, 크기);
    ptr을 반환합니다.
  }
  ```

- 제로 할당:

  주어진 요소 개수와 크기를 기준으로 모든 요소를 ​​0으로 초기화하여 메모리를 할당합니다. 오류 발생 시에는 `NULL`을 반환해야 합니다.

  ```c
  // 함수 프로토타입:
  void * (*zero_allocate)(size_t number_of_elements, size_t size_of_element, void * state);

  // 구현 예시:
  void * microros_zero_allocate(size_t number_of_elements, size_t size_of_element, void * state){
    (공백) 상태;
    void * ptr = malloc(요소 수 * 요소 크기);
    memset(ptr, 0, 요소 수 * 요소 크기);
    ptr을 반환합니다.
  }
  ```

  *참고: `state` 입력 인수는 사용되지 않을 것으로 예상됩니다.*

## 시간 동기화
micro-ROS 클라이언트는 연결된 에이전트와 에포크 시간을 동기화할 수 있습니다. 이는 시간 동기화 메커니즘을 제공하지 않는 임베디드 환경에서 작업할 때 매우 유용할 수 있습니다.
이 유틸리티는 전송 계층으로 인한 지연을 고려하여 NTP 프로토콜을 기반으로 합니다. 사용 예제는 [`micro-ROS-demos/rclc/epoch_synchronization`](https://github.com/micro-ROS/micro-ROS-demos/blob/iron/rclc/epoch_synchronization/main.c)에서 확인할 수 있습니다.

```c
// 동기화 시간 초과
const int timeout_ms = 1000;

// 에이전트와 시간을 동기화합니다
rmw_uros_sync_session(timeout_ms);

rmw_uros_epoch_synchronized()가 있으면
{
    // 시간을 밀리초 또는 나노초 단위로 가져옵니다.
    int64_t time_ms = rmw_uros_epoch_millis();
    int64_t time_ns = rmw_uros_epoch_nanos();
}
```

## 핑 에이전트
클라이언트는 ping 유틸리티를 사용하여 에이전트와의 연결을 테스트할 수 있습니다. 이 기능은 micro-ROS 컨텍스트가 아직 초기화되지 않은 경우에도 사용할 수 있으므로 에이전트에 연결하기 전에 연결을 테스트하는 데 유용합니다. 예제는 [`micro-ROS-demos/rclc/ping_uros_agent`](https://github.com/micro-ROS/micro-ROS-demos/blob/iron/rclc/ping_uros_agent/main.c)에서 확인할 수 있습니다.

```c
// 각 시도에 대한 타임아웃
const int timeout_ms = 1000;

// 시도 횟수
const uint8_t 시도 횟수 = 5;

// 에이전트에 핑을 보냅니다
rmw_ret_t ping_result = rmw_uros_ping_agent(timeout_ms, attempts);

if (RMW_RET_OK == ping_result)
{
    // micro-ROS 에이전트에 접속할 수 있습니다
    ...
}
else
{
    // micro-ROS 에이전트를 사용할 수 없습니다.
    ...
}
```

*참고: `rmw_uros_ping_agent`는 스레드로부터 안전합니다.*

## 연속 직렬화

이 유틸리티를 사용하면 클라이언트가 사용자 지정 크기까지 데이터를 직렬화하여 전송할 수 있습니다. 사용자는 토픽 길이를 설정한 다음 게시 프로세스 내에서 데이터를 직렬화할 수 있습니다. 예시는 [`micro-ROS-demos/rclc/ping_uros_agent`](https://github.com/micro-ROS/micro-ROS-demos/blob/iron/rclc/ping_uros_agent/main.c)에서 확인할 수 있으며, 이미지 조각을 요청하고 즉시 직렬화하는 방법을 보여줍니다.

사용자는 두 개의 콜백을 정의한 다음 `rmw`에 설정해야 합니다. 동일한 프로세스의 다른 토픽과의 충돌을 방지하기 위해 게시 후 콜백을 정리하는 것이 좋습니다.

```c
// 직렬화 콜백 설정
rmw_uros_set_continous_serialization_callbacks(size_cb, serialization_cb);

// 메시지 게시
rcl_publish(...);

// 깔끔한 콜백
rmw_uros_set_continous_serialization_callbacks(NULL, NULL);
```

- 크기 콜백:

이 콜백 함수는 계산된 메시지 크기를 담은 포인터를 전달합니다. 사용자는 이 크기를 예상 값으로 늘려야 합니다.

```c
// 함수 프로토타입:
void (* rmw_uros_continous_serialization_size)(uint32_t * topic_length);

// 구현 예시:
void size_cb(uint32_t * topic_length){
    // 메시지 크기 증가
    *topic_length += ucdr_alignment(*topic_length, sizeof(uint32_t)) + sizeof(uint32_t);
    *topic_length += IMAGE_BYTES;
}
```

- 직렬화 콜백:

이 콜백은 사용자에게 완료해야 할 메시지 버퍼를 제공합니다. 사용자는 크기 콜백에서 설정된 길이까지 데이터를 직렬화해야 합니다.

```c
// 함수 프로토타입:
void (* rmw_uros_continous_serialization)(ucdrBuffer * ucdr);

// 구현 예시:
void serialization_cb(ucdrBuffer * ucdr){
    size_t len ​​= 0;
    micro_ros_fragment_t 조각;

    // 직렬화된 배열 크기
    ucdr_serialize_uint32_t(ucdr, IMAGE_BYTES);

    while(len < IMAGE_BYTES){
      // 새 이미지 "조각"을 기다립니다
      ...

      // 데이터 조각을 직렬화합니다
      ucdr_serialize_array_uint8_t(ucdr, fragment.data, fragment.len);
      len += fragment.len;
    }
}
```

*참고: 콜백이 종료되면 메시지가 게시됩니다.*

---

## 출처: `_docs/tutorials/programming_rcl_rclc/node/node.md`
<a id="source-docs-tutorials-programming-rcl-rclc-node-node-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

ROS 2 노드는 ROS 2 생태계의 주요 참여자입니다. 이들은 퍼블리셔, 구독, 서비스 등을 사용하여 서로 통신합니다. ROS 2 노드에 대한 자세한 정보는 [여기](https://docs.ros.org/en/iron/Tutorials/Understanding-ROS2-Nodes.md)에서 확인할 수 있습니다.


- [초기화](#초기화)
  - [정리](#cleaning-up)
- [라이프사이클](#lifecycle)
  - [초기화](#초기화-1)
  - [콜백](#callbacks)
  - [실행 중](#실행 중)
  - [정리](#cleaning-up-1)
  - [제한 사항](#제한 사항)

## 초기화

- 기본 설정으로 노드를 생성합니다.
  ```c
  // micro-ROS 할당자를 초기화합니다
  rcl_allocator_t allocator = rcl_get_default_allocator();

  // 지원 객체 초기화
  rclc_support_t 지원;
  rcl_ret_t rc = rclc_support_init(&support, argc, argv, &allocator);

  // 노드 객체 생성
  rcl_node_t 노드;
  const char * node_name = "test_node";

  // 노드 네임스페이스 (비워둘 수 있음 "")
  const char * namespace = "test_namespace";

  // 기본 노드 초기화
  rc = rclc_node_init_default(&node, node_name, namespace, &support);
  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

- 사용자 지정 옵션이 있는 노드를 생성합니다.

  노드의 구성은 향후 추가될 요소(게시자, 구독자, 서비스 등)에도 적용됩니다. 노드 옵션은 사용자 지정 API를 사용하여 `rclc_support_t` 객체에서 구성됩니다.

  ```c
  // micro-ROS 할당자를 초기화합니다
  rcl_allocator_t allocator = rcl_get_default_allocator();

  // 옵션 초기화 및 수정 (도메인 ID를 10으로 설정)
  rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
  rcl_init_options_init(&init_options, 할당자);
  rcl_init_options_set_domain_id(&init_options, 10);

  // 사용자 지정 옵션으로 rclc 지원 객체를 초기화합니다.
  rclc_support_t 지원;
  rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator);

  // 노드 객체 생성
  rcl_node_t 노드;
  const char * node_name = "test_node";

  // 노드 네임스페이스 (비워둘 수 있음 "")
  const char * namespace = "test_namespace";

  // 구성된 지원 객체로 노드를 초기화합니다.
  rclc_node_init_default(&node, node_name, namespace, &support);

  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

### 청소하기

초기화된 노드를 삭제하려면 노드 자체를 삭제하기 전에 해당 노드가 소유한 모든 엔티티(게시자, 구독자, 서비스 등)를 먼저 삭제해야 합니다.

```c
// 생성된 엔티티를 파괴합니다 (예시)
rcl_publisher_fini(&publisher, &node);
...

// 노드를 파괴합니다
rcl_node_fini(&node);
```

이렇게 하면 ROS2 그래프에서 해당 노드가 삭제되며, 에이전트에 생성된 인프라(가능한 경우)와 클라이언트에서 사용된 메모리도 함께 삭제됩니다.

## 라이프사이클

rclc lifecycle 패키지는 C 언어로 작성된 편의 함수들을 제공하여 ROS 2 노드 라이프사이클 상태 머신을 rcl 노드와 함께 묶어줍니다. 이는 C++용 [rclcpp 라이프사이클 노드](https://github.com/ros2/rclcpp/blob/master/rclcpp_lifecycle/include/rclcpp_lifecycle/lifecycle_node.hpp)와 유사합니다. ROS 2 노드 라이프사이클에 대한 자세한 정보는 [여기](https://design.ros2.org/articles/node_lifecycle.md)에서 확인할 수 있습니다.

사용 예시는 [rclc_examples](https://github.com/ros2/rclc/blob/master/rclc_examples/src/example_lifecycle_node.c) 패키지에 나와 있습니다.

### 초기화

rcl 노드와 rcl 라이프사이클 상태 머신을 번들로 묶어 라이프사이클 노드를 생성합니다. 노드와 실행기가 이미 초기화되었다고 가정합니다.

```c
// rcl 상태 머신 생성
rcl_lifecycle_state_machine_t 상태 머신 =
rcl_lifecycle_get_zero_initialized_state_machine();

// 라이프사이클 노드를 생성합니다
rclc_lifecycle_node_t my_lifecycle_node;
rcl_ret_t rc = rclc_make_node_a_lifecycle_node(
  &my_lifecycle_node,
  &마디,
  &상태_머신,
  &할당자);

// 할당자에 라이프사이클 서비스를 등록합니다
rclc_lifecycle_add_get_state_service(&lifecycle_node, &executor);
rclc_lifecycle_add_get_available_states_service(&lifecycle_node, &executor);
rclc_lifecycle_add_change_state_service(&lifecycle_node, &executor);
```

*참고: 실행기는 노드당 및 서비스당 1개의 핸들을 갖추어야 합니다.*

### 콜백

선택적으로 콜백 함수를 사용하여 라이프사이클 상태 변화에 대응할 수 있습니다. 예시:

```c
rcl_ret_t my_on_configure() {
  printf(" >>> my_lifecycle_node: on_configure() 콜백이 호출되었습니다.\n");
  RCL_RET_OK를 반환합니다.
}
```

이를 라이프사이클 노드에 추가하려면 다음과 같이 하세요.

```c
// 라이프사이클 서비스 콜백 등록
rclc_lifecycle_register_on_configure(&lifecycle_node, &my_on_configure);
rclc_lifecycle_register_on_activate(&lifecycle_node, &my_on_activate);
rclc_lifecycle_register_on_deactivate(&lifecycle_node, &my_on_deactivate);
rclc_lifecycle_register_on_cleanup(&lifecycle_node, &my_on_cleanup);
```

### 달리기

라이프사이클 노드의 상태를 변경하려면:

```c
bool publish_transition = true;
rc += rclc_lifecycle_change_state(
  &my_lifecycle_node,
  라이프사이클_메시지__메시지__전환__TRANSITION_CONFIGURE,
  publish_transition);

rc += rclc_lifecycle_change_state(
  &my_lifecycle_node,
  라이프사이클_메시지__메시지__전환__TRANSITION_ACTIVATE,
  publish_transition);
```

오류 처리 전환을 제외하고, 전환은 일반적으로 외부, 예를 들어 ROS 2 서비스에 의해 트리거됩니다.

### 청소하기

모든 것을 정리하려면 간단히 다음을 수행하세요.

```c
rc += rcl_lifecycle_node_fini(&my_lifecycle_node, &allocator);
```

### 제한 사항

ROS2 라이프사이클 클라이언트(`ros2 lifecycle set /node ...`)를 통해서는 아직 라이프사이클 서비스를 호출할 수 없습니다. 대신 ROS2 서비스 CLI를 사용하십시오(예: `ros2 service call /node/change_state lifecycle_msgs/ChangeState "{transition: {id: 1, label: configure}}"`).

---

## 출처: `_docs/tutorials/programming_rcl_rclc/overview/index.md`
<a id="source-docs-tutorials-programming-rcl-rclc-overview-index-md"></a>

이 섹션에서는 micro-ROS C API인 **rclc**의 기본 사항을 배우게 됩니다.

주요 개념(퍼블리셔, 구독, 서비스, 타이머 등)은 ROS 2와 동일합니다. 심지어 구현 방식도 *동일합니다*. micro-ROS C API는 ROS 2 클라이언트 지원 라이브러리(rcl)를 기반으로 하며, [rclc](https://github.com/ros2/rclc/) 패키지를 통해 편의 함수들이 추가되었습니다. 즉, rclc는 rcl 위에 새로운 타입 계층을 추가하는 것이 아니라(rclcpp나 rclpy처럼), rcl 타입을 사용한 프로그래밍을 간소화하는 함수만 제공합니다. 새로운 타입은 실행기(executor) 개념처럼 rcl에 없는 개념에 대해서만 도입됩니다.

* [**노드**](../node/)
* [**게시자 및 구독자**](../pub_sub/)
* [**서비스**](../service/)
* [**매개변수**](../parameters/)
* [**실행기 및 타이머**](../executor/)
* [**서비스 품질**](../qos/)
* [**micro-ROS 유틸리티**](../micro-ROS/)

---

## 출처: `_docs/tutorials/programming_rcl_rclc/parameters/parameters.md`
<a id="source-docs-tutorials-programming-rcl-rclc-parameters-parameters-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

ROS 2 파라미터를 사용하면 노드에 변수를 생성하고 다양한 ROS 2 명령어를 사용하여 변수를 조작/읽을 수 있습니다. ROS 2 파라미터에 대한 자세한 정보는 [여기](https://docs.ros.org/en/rolling/Tutorials/Parameters/Understanding-ROS2-Parameters.md)에서 확인할 수 있습니다.

이 튜토리얼과 관련된 바로 사용할 수 있는 코드 예제는 [`rclc/rclc_examples/src/example_parameter_server.c`](https://github.com/ros2/rclc/blob/master/rclc_examples/src/example_parameter_server.c)에서 찾을 수 있습니다.

- [초기화](#초기화)
- [메모리 요구 사항](#memory-requirements)
- [매개변수 추가](#add-a-parameter)
- [매개변수 삭제](#delete-a-parameter)
- [매개변수 설명](#parameters-description)
- [콜백](#callback)
- [정리 중](#cleaning-up)

## 초기화

- 기본 초기화:
    ```c
    // 파라미터 서버 객체
    rclc_parameter_server_t param_server;

    // 파라미터 서버를 기본 설정으로 초기화합니다.
    rcl_ret_t rc = rclc_parameter_server_init_default(¶m_server, &node);

    RCL_RET_OK가 rc와 같지 않으면 {
        ... // 오류 처리
        -1을 반환합니다.
    }
    ```

- 사용자 지정 옵션을 사용한 초기화:

  다음과 같은 옵션을 설정할 수 있습니다.
  - notify_changed_over_dds: 파라미터 이벤트를 다른 ROS 2 노드에도 게시합니다.
  - max_params: `rclc_parameter_server_t` 객체에 허용되는 최대 매개변수 개수입니다.
  - allow_undeclared_parameters: 외부 파라미터 클라이언트에서 파라미터 생성을 허용합니다. 존재하지 않는 파라미터에 대해 `set` 작업이 요청되면 새 파라미터가 생성됩니다.
  - low_mem_mode: 파라미터 서버에서 사용하는 메모리를 줄이고 기능 제약 조건을 적용합니다.

    ```c
    // 파라미터 서버 객체
    rclc_parameter_server_t param_server;

    // 파라미터 서버 옵션 초기화
    const rclc_parameter_options_t options = {
        .notify_changed_over_dds = true,
        .max_params = 4,
        .allow_undeclared_parameters = true,
        .low_mem_mode = false; };

    // 구성된 옵션으로 파라미터 서버를 초기화합니다.
    rcl_ret_t rc = rclc_parameter_server_init_with_option(¶m_server, &node, &options);

    RCL_RET_OK가 rc와 같지 않으면 {
      ... // 오류 처리
      -1을 반환합니다.
    }
    ```

- 저용량 메모리 모드:

    이 모드는 메모리 제약이 있는 장치에서 파라미터 기능을 사용할 수 있도록 합니다. 다음과 같은 제약 조건이 적용됩니다.
    - Set, Get, Get 유형 및 Describe 서비스에서 요청 크기는 하나의 매개변수로 제한됩니다.
    - 목록 매개변수 요청에 접두사 및 깊이가 활성화되어 있지 않습니다.
    - 매개변수 설명 문자열은 허용되지 않으며, `rclc_add_parameter_description` 함수가 비활성화되었습니다.

    `RCLC_PARAMETER_MAX_STRING_LENGTH = 50` 및 `notify_changed_over_dds = true` 설정에서 7개 파라미터에 대한 `STM32F4` 메모리 벤치마크 결과:
    - 전체 모드: 11736 B
    - 저용량 메모리 모드: 4160 B


## 메모리 요구 사항

파라미터 서버는 6개의 서비스와 선택적 게시자를 사용합니다. 이러한 사항은 `rmw-microxrcedds` 패키지의 메모리 구성에 고려해야 합니다.

```yaml
# 파라미터 서버 사용을 위한 메모리 요구 사항을 보여주는 colcon.meta 예제
{
    "이름": {
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

실행 시, 변수 `RCLC_PARAMETER_EXECUTOR_HANDLES_NUMBER`는 파라미터 서버가 rclc 실행기에 필요한 핸들 수를 정의합니다.

```c
// 최소 RCLC 실행기 핸들이 필요한 실행기 초기화 예제
rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
rc = rclc_executor_init(
    &집행자, &지원 컨텍스트,
    RCLC_PARAMETER_EXECUTOR_HANDLES_NUMBER, &allocator);
```

*참고: 변수 `RCLC_PARAMETER_EXECUTOR_HANDLES_NUMBER`가 `RCLC_EXECUTOR_PARAMETER_SERVER_HANDLES`로 이름이 변경되었습니다.*

## 매개변수 추가

micro-ROS 파라미터 서버는 다음과 같은 파라미터 유형을 지원합니다.

- 부울:
    ```c
    const char * parameter_name = "parameter_bool";
    bool param_value = true;

    // 서버에 매개변수를 추가합니다
    rcl_ret_t rc = rclc_add_parameter(¶m_server, parameter_name, RCLC_PARAMETER_BOOL);

    // 매개변수 값을 설정합니다. (정의된 경우 `on_parameter_changed` 콜백을 호출합니다.)
    rc = rclc_parameter_set_bool(¶m_server, parameter_name, param_value);

    // 매개변수 값을 가져와서 "param_value"에 저장합니다.
    rc = rclc_parameter_get_bool(¶m_server, "param1", ¶m_value);

    RCL_RET_OK가 rc와 같지 않으면 {
        ... // 오류 처리
        -1을 반환합니다.
    }
    ```

- 정수:
    ```c
    const char * parameter_name = "parameter_int";
    int param_value = 100;

    // 서버에 매개변수를 추가합니다
    rcl_ret_t rc = rclc_add_parameter(¶m_server, parameter_name, RCLC_PARAMETER_INT);

    // 매개변수 값 설정
    rc = rclc_parameter_set_int(¶m_server, parameter_name, param_value);

    // param_value에서 매개변수 값을 가져옵니다.
    rc = rclc_parameter_get_int(¶m_server, parameter_name, ¶m_value);
    ```

- 두 배:
    ```c
    const char * parameter_name = "parameter_double";
    double param_value = 0.15;

    // 서버에 매개변수를 추가합니다
    rcl_ret_t rc = rclc_add_parameter(¶m_server, parameter_name, RCLC_PARAMETER_DOUBLE);

    // 매개변수 값 설정
    rc = rclc_parameter_set_double(¶m_server, parameter_name, param_value);

    // param_value에서 매개변수 값을 가져옵니다.
    rc = rclc_parameter_get_double(¶m_server, parameter_name, ¶m_value);
    ```

`allow_undeclared_parameters` 플래그가 설정된 경우 외부 클라이언트에서도 매개변수를 생성할 수 있습니다.
클라이언트는 존재하지 않는 매개변수에 값을 설정하기만 하면 됩니다. 그러면 서버에 여유 용량이 있고 콜백 함수가 해당 작업을 허용하는 경우 해당 매개변수가 생성됩니다.

*이름의 최대 크기는 컴파일 시 옵션 `RCLC_PARAMETER_MAX_STRING_LENGTH`로 제어되며, 기본값은 50입니다.*

## 매개변수 삭제
매개변수는 매개변수 서버와 외부 클라이언트 모두에서 삭제할 수 있습니다.
```c
rclc_delete_parameter(¶m_server, "param2");
```

*외부 삭제 요청의 경우 서버 콜백이 실행되어 노드가 작업을 거부할 수 있습니다.*

## 매개변수 설명

- 매개변수 설명
    매개변수에 대한 설명과 제약 조건을 추가합니다. 이 설명은 매개변수 설명 요청 시 반환됩니다.
    ```c
    rclc_add_parameter_description(¶m_server, "param2", "두 번째 매개변수", "짝수만 허용");
    ```

    *문자열의 최대 크기는 컴파일 시 옵션 `RCLC_PARAMETER_MAX_STRING_LENGTH`로 제어되며, 기본값은 50입니다.*

- 매개변수 제약 조건
    정수형 및 실수형 매개변수에 유용한 수치 제약 조건을 추가할 수 있으며, 매개변수 설명 요청 시 해당 값을 반환합니다.
    - `from_value`: 유효한 값의 시작 값(포함).
    - `to_value`: 유효한 값의 최종 값(포함).
    - `step`: 시작 범위와 종료 범위 사이의 유효한 단계 크기입니다.

        ```c
        int64_t int_from = 0;
        int64_t int_to = 20;
        uint64_t int_step = 2;
        rclc_add_parameter_constraint_integer(¶m_server, "param2", int_from, int_to, int_step);

        double_from = -0.5;
        double double_to = 0.5;
        double double_step = 0.01;
        rclc_add_parameter_constraint_double(¶m_server, "param3", double_from, double_to, double_step);
        ```

    *이 제약 조건은 파라미터 서버에서 적용되지 않으며, 값 필터링은 사용자 콜백에서 수행됩니다.*

- 읽기 전용 매개변수:
    새로운 API는 읽기 전용 플래그를 제공합니다. 이 플래그는 외부 클라이언트의 매개변수 변경을 차단하지만 서버 측에서의 변경은 허용합니다.
    ```c
    bool read_only = true;
    rclc_set_parameter_read_only(¶m_server, "param3", read_only);
    ```

## 콜백

실행기에 파라미터 서버를 추가할 때 콜백 함수를 구성할 수 있습니다. 이 콜백 함수는 다음과 같은 이벤트 발생 시 실행됩니다.
- 매개변수 값 변경: 기존 매개변수에 대한 내부 및 외부 매개변수 설정.
- 매개변수 생성: `allow_undeclared_parameters`가 설정된 경우 존재하지 않는 매개변수에 외부 매개변수가 설정됩니다.
- 매개변수 삭제: 기존 매개변수에 대한 외부 매개변수 삭제.
- 사용자는 `bool` 반환 값을 사용하여 이러한 작업을 허용하거나 거부할 수 있습니다.

콜백 매개변수:
- `old_param`: 매개변수의 실제 값, 새 매개변수 요청 시 `NULL`.
- `new_param`: 매개변수의 새 값, 매개변수 제거 요청 시 `NULL`.
- `context`: 사용자 컨텍스트는 `rclc_executor_add_parameter_server_with_context`에서 구성됩니다.

```c
bool on_parameter_changed(const Parameter * old_param, const Parameter * new_param, void * context)
{
  (공백) 컨텍스트;

  이전 매개변수가 NULL이고 새 매개변수가 NULL인 경우 {
    printf("콜백 오류, 두 매개변수 모두 NULL입니다.\n");
    false를 반환합니다.
  }

  만약 (old_param이 NULL인 경우) {
    printf("새 매개변수 %s를 생성합니다.\n", new_param->name.data);
  } 그렇지 않고 새 매개변수가 NULL인 경우 {
    printf("매개변수 %s를 삭제합니다.\n", old_param->name.data);
  } 또 다른 {
    printf("매개변수 %s가 수정되었습니다.", old_param->name.data);
    switch (old_param->value.type) {
      케이스 RCLC_PARAMETER_BOOL:
        printf(
          " 이전 값: %d, 새 값: %d (bool)", old_param->value.bool_value,
          new_param->value.bool_value);
        부서지다;
      케이스 RCLC_PARAMETER_INT:
        printf(
          " 이전 값: %ld, 새 값: %ld (정수)", old_param->value.integer_value,
          new_param->value.integer_value);
        부서지다;
      케이스 RCLC_PARAMETER_DOUBLE:
        printf(
          " 이전 값: %f, 새 값: %f (double)", old_param->value.double_value,
          new_param->value.double_value);
        부서지다;
      기본:
        부서지다;
    }
    printf("\n");
  }

  true를 반환합니다.
}
```

`on_parameter_changed` 콜백이 실행되는 동안에는 매개변수 수정이 비활성화되므로, 다음 메서드들이 호출될 경우 `RCLC_PARAMETER_DISABLED_ON_CALLBACK`을 반환합니다.
- rclc_add_parameter
- rclc_delete_parameter
- rclc_parameter_set_bool
- rclc_parameter_set_int
- rclc_parameter_set_double
- rclc_set_parameter_read_only
- rclc_add_parameter_constraint_double
- rclc_add_parameter_constraint_integer

파라미터 서버와 실행기가 초기화되면 ROS 2에서 파라미터 명령을 수락할 수 있도록 파라미터 서버를 실행기에 추가해야 합니다.
```c
// 정의된 콜백을 포함하여 실행기에 서버 매개변수를 추가합니다.
rc = rclc_executor_add_parameter_server(&executor, ¶m_server, on_parameter_changed);
```

참고로 이 콜백은 사용자에게 이벤트 정보만 제공하는 것이므로 선택 사항입니다. 콜백 없이 파라미터 서버를 사용하려면 다음과 같이 하세요.
```c
// 콜백 없이 실행기에 server 매개변수를 추가합니다.
rc = rclc_executor_add_parameter_server(&executor, ¶m_server, NULL);
```

콜백 컨텍스트 구성:
```c
// 정의된 콜백과 컨텍스트를 포함하여 실행기에 서버 매개변수를 추가합니다.
rc = rclc_executor_add_parameter_server_with_context(&executor, ¶m_server, on_parameter_changed, &context);
```

## 정리 중

초기화된 파라미터 서버를 삭제하려면:

```c
// 파라미터 서버 삭제
rclc_parameter_server_fini(¶m_server, &node);
```

이렇게 하면 에이전트에 자동으로 생성된 인프라가 (가능한 경우) 삭제되고 파라미터 서버 측에서 사용된 메모리가 할당 해제됩니다.


---

## 출처: `_docs/tutorials/programming_rcl_rclc/pub_sub/pub_sub.md`
<a id="source-docs-tutorials-programming-rcl-rclc-pub-sub-pub-sub-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

ROS 2의 퍼블리셔와 서브스크라이버는 토픽을 사용하여 노드 간의 기본적인 통신 메커니즘입니다. ROS 2의 퍼블리셔-서브스크라이버 패턴에 대한 자세한 내용은 [여기](https://docs.ros.org/en/humble/Tutorials/Topics/Understanding-ROS2-Topics.md)에서 확인할 수 있습니다.

이 개념과 관련된 바로 사용할 수 있는 코드는 [`micro-ROS-demos/rclc/int32_publisher`](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/int32_publisher/main.c) 및 [`micro-ROS-demos/rclc/int32_subscriber`](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/int32_subscriber/main.c) 폴더에서 찾을 수 있습니다. 이 튜토리얼에서는 해당 예제의 코드 일부를 사용합니다.

- [출판사](#publisher)
  - [초기화](#초기화)
  - [메시지 게시](#publish-a-message)
- [구독](#구독)
  - [초기화](#초기화-1)
  - [콜백](#callbacks)
- [메시지 초기화](#message-initialization)
- [정리](#cleaning-up)

## 출판사

### 초기화

RCL을 초기화하고 마이크로 ROS 노드를 생성하는 코드에서 시작하여 원하는 서비스 품질 구성에 따라 퍼블리셔를 초기화하는 세 가지 방법이 있습니다.

- 안정적(기본값):
  ```c
  // Publisher 객체
  rcl_publisher_t 퍼블리셔;
  const char * topic_name = "test_topic";

  // 메시지 유형 지원 가져오기
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // 안정적인 rcl 퍼블리셔를 생성합니다.
  rcl_ret_t rc = rclc_publisher_init_default(
    &publisher, &node,
    type_support, topic_name);

  RCL_RET_OK가 rc와 같지 않으면 {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

- 최선을 다함:
  ```c
  // Publisher 객체
  rcl_publisher_t 퍼블리셔;
  const char * topic_name = "test_topic";

  // 메시지 유형 지원 가져오기
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // 최선을 다해 rcl 퍼블리셔를 생성합니다.
  rcl_ret_t rc = rclc_publisher_init_best_effort(
    &publisher, &node,
    type_support, topic_name);

  RCL_RET_OK가 rc와 같지 않으면 {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

- 사용자 지정 QoS:

  ```c
  // Publisher 객체
  rcl_publisher_t 퍼블리셔;
  const char * topic_name = "test_topic";

  // 메시지 유형 지원 가져오기
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // 게시자 QoS 설정
  const rmw_qos_profile_t * qos_profile = &rmw_qos_profile_default;

  // 사용자 지정 서비스 품질 옵션을 갖춘 rcl 퍼블리셔를 생성합니다.
  rcl_ret_t rc = rclc_publisher_init(
    &publisher, &node,
    지원 유형, 토픽 이름, QoS 프로필);

  RCL_RET_OK가 rc와 같지 않으면 {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

  사용 가능한 QoS 옵션과 신뢰성 모드와 최선 노력 모드 간의 장단점에 대한 자세한 내용은 [QoS 튜토리얼](../qos/)을 참조하십시오.

### 메시지 게시

해당 주제에 메시지를 게시하려면:

```c
// Int32 메시지 객체
std_msgs__msg__Int32 메시지;

// 메시지 값 설정
msg.data = 0;

// 메시지 게시
rcl_ret_t rc = rcl_publish(&publisher, &msg, NULL);

만약 (rc가 RCL_RET_OK가 아닌 경우) {
  ... // 오류 처리
  -1을 반환합니다.
}
```

주기적인 게시를 위해서는 `rcl_publish`를 타이머 콜백 내부에 배치할 수 있습니다. 자세한 내용은 [실행기 및 타이머](../executor/) 섹션을 참조하십시오.

참고: `rcl_publish`는 스레드 안전하며 여러 스레드에서 호출할 수 있습니다.

## 구독

### 초기화

구독자 초기화는 게시자 초기화와 거의 동일합니다.

- 안정적(기본값):
  ```c
  // 구독 객체
  rcl_subscription_t 구독자;
  const char * topic_name = "test_topic";

  // 메시지 유형 지원 가져오기
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // 신뢰할 수 있는 구독자를 초기화합니다.
  rcl_ret_t rc = rclc_subscription_init_default(
    &구독자, &노드,
    type_support, topic_name);

  RCL_RET_OK가 rc와 같지 않으면 {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

- 최선을 다함:

  ```c
  // 구독 객체
  rcl_subscription_t 구독자;
  const char * topic_name = "test_topic";

  // 메시지 유형 지원 가져오기
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // 최선 노력 구독자 초기화
  rcl_ret_t rc = rclc_subscription_init_best_effort(
    &구독자, &노드,
    type_support, topic_name);

  RCL_RET_OK가 rc와 같지 않으면 {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

- 사용자 지정 QoS:

  ```c
  // 구독 객체
  rcl_subscription_t 구독자;
  const char * topic_name = "test_topic";

  // 메시지 유형 지원 가져오기
  const rosidl_message_type_support_t * type_support =
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32);

  // 클라이언트 QoS 설정
  const rmw_qos_profile_t * qos_profile = &rmw_qos_profile_default;

  // 사용자 지정 서비스 품질 옵션으로 구독자를 초기화합니다.
  rcl_ret_t rc = rclc_subscription_init(
    &구독자, &노드,
    지원 유형, 토픽 이름, QoS 프로필);

  RCL_RET_OK가 rc와 같지 않으면 {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

사용 가능한 QoS 옵션과 신뢰성 모드와 최선 노력 모드 간의 장단점에 대한 자세한 내용은 [QoS 튜토리얼](../qos/)을 참조하십시오.

### 콜백
실행자는 메시지가 게시될 때 구성된 콜백 함수를 호출할 책임이 있습니다.
이 함수는 발행자가 보낸 값을 포함하는 메시지를 유일한 인수로 받습니다.

```c
// 함수 프로토타입:
void (* rclc_subscription_callback_t)(const void *);

// 구현 예시:
void subscription_callback(const void * msgin)
{
  // 수신된 메시지를 사용 중인 유형으로 형변환합니다.
  const std_msgs__msg__Int32 * msg = (const std_msgs__msg__Int32 *)msgin;

  // 메시지 처리
  printf("수신됨: %d\n", msg->data);
}
```

구독자와 실행기가 초기화되면, 실행기가 실행을 시작한 후 들어오는 발행물을 수신할 수 있도록 구독자 콜백을 실행기에 추가해야 합니다.

```c
// 게시자 데이터를 수신하기 위한 메시지 객체
std_msgs__msg__Int32 메시지;

// 실행기에 구독을 추가합니다.
rcl_ret_t rc = rclc_executor_add_subscription(
  &집행자, &구독자, &메시지,
  &subscription_callback, ON_NEW_DATA);

RCL_RET_OK가 rc와 같지 않으면 {
  ... // 오류 처리
  -1을 반환합니다.
}

// 메시지를 수신하기 위해 실행기를 돌립니다.
rclc_executor_spin(&executor);
```

## 메시지 초기화
메시지를 게시하거나 수신하기 전에 문자열 또는 시퀀스 유형의 경우 메모리를 초기화해야 할 수 있습니다.
자세한 내용은 [micro-ROS에서 메시지 메모리 처리](../../advanced/handling_type_memory/) 섹션을 참조하십시오.

## 청소하기

발행자/구독자 과정이 완료되면 노드는 더 이상 해당 토픽에 대해 발행/수신 중임을 알리지 않습니다.
초기화된 게시자 또는 구독자를 삭제하려면:

```c
// 게시자 파괴
rcl_publisher_fini(&publisher, &node);

// 구독자 삭제
rcl_subscription_fini(&구독자, &노드);
```

이렇게 하면 에이전트에 자동으로 생성된 인프라가 (가능한 경우) 삭제되고 클라이언트 측에서 사용된 메모리가 할당 해제됩니다.

---

## 출처: `_docs/tutorials/programming_rcl_rclc/qos/QoS.md`
<a id="source-docs-tutorials-programming-rcl-rclc-qos-qos-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

- [신뢰할 수 있는 QoS](#reliable-qos)
- [최선의 노력](#best-effort)
- [사용자 지정 QoS 구성](#custom-qos-configuration)

## 안정적인 QoS

신뢰할 수 있는 통신은 전송되는 각 메시지에 대한 확인 절차를 포함합니다. 이 방식은 통신 과정의 오류를 감지할 수 있지만, 메시지 지연 시간과 리소스 사용량이 증가하는 단점이 있습니다.

이 메시지 확인 프로세스는 신뢰할 수 있는 게시자, 서비스 및 클라이언트가 전송된 각 메시지에 대한 승인을 기다리기 때문에 `rcl_publish` 또는 실행기 스핀 호출의 차단 시간을 증가시킬 수 있습니다. `rmw-microxrcedds`는 이러한 항목에 대해 승인 시간 초과를 개별적으로 구성할 수 있는 API를 제공합니다.

  ```c
  // 확인 시간 초과(밀리초)
  int ack_timeout = 1000;

  // 안정적인 게시자 타임아웃 설정
  rc = rmw_uros_set_publisher_session_timeout(&publisher, ack_timeout);

  // 안정적인 서비스 서버 타임아웃 설정
  rc = rmw_uros_set_service_session_timeout(&service, ack_timeout);

  // 안정적인 서비스 클라이언트 타임아웃 설정
  rc = rmw_uros_set_client_session_timeout(&client, ack_timeout);

  RCL_RET_OK가 rc와 같지 않으면 {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

  모든 게시자의 기본값은 컴파일 시 cmake 변수 `RMW_UXRCE_PUBLISH_RELIABLE_TIMEOUT`에 의해 구성됩니다.

## 최선을 다함

최선 노력 모드에서는 확인 응답이 필요하지 않으며, 전송된 메시지는 수신될 것으로 예상됩니다. 이 방법은 메시지 발행 처리량을 향상시키고 리소스 사용량을 줄이지만, 통신 오류에 취약합니다.

## 사용자 지정 QoS 구성

사용자는 제공되는 `rmw_qos_profile_t` 구조체를 사용하여 자체 QoS를 사용자 지정할 수 있습니다.

```c
/// ROS 미들웨어 서비스 품질 프로필.
typedef struct RMW_PUBLIC_TYPE rmw_qos_profile_t
{
  enum rmw_qos_history_policy_t history;
  /// 메시지 큐의 크기입니다.
  size_t 깊이;
  /// 신뢰성 QoS 정책 설정
  enum rmw_qos_reliability_policy_t 신뢰성;
  /// 내구성 QoS 정책 설정
  enum rmw_qos_durability_policy_t 내구성;
  /// 메시지가 전송/수신될 것으로 예상되는 기간
  구조체 rmw_time_t 마감 시간;
  /// 메시지가 만료되어 더 이상 유효하지 않은 것으로 간주되는 시점의 시간
  구조체 rmw_time_t 수명;
  /// 활성도 QoS 정책 설정
  enum rmw_qos_liveliness_policy_t 생동감;
  /// RMW 노드 또는 게시자가 활성 상태임을 표시해야 하는 시간
  구조체 rmw_time_t liveliness_lease_duration;

  /// true로 설정하면 ROS 관련 네임스페이스 규칙이 무시됩니다.
  bool avoid_ros_namespace_conventions;
} rmw_qos_profile_t;
```

---

## 출처: `_docs/tutorials/programming_rcl_rclc/service/services.md`
<a id="source-docs-tutorials-programming-rcl-rclc-service-services-md"></a>

<img src="https://img.shields.io/badge/Written_for-Humble-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Rolling-green" style="display:inline"/> <img src="https://img.shields.io/badge/Tested_on-Iron-green" style="display:inline"/>

ROS 2 서비스는 노드 간 통신을 위한 또 다른 메커니즘입니다. 서비스는 ROS 2 메시지와 타입을 기반으로 하는 클라이언트-서버 패러다임을 구현합니다. ROS 2 서비스에 대한 자세한 정보는 [여기](https://docs.ros.org/en/rolling/Tutorials/Beginner-CLI-Tools/Understanding-ROS2-Services/Understanding-ROS2-Services.md)에서 확인할 수 있습니다.

이 개념과 관련된 바로 사용할 수 있는 코드는 [`micro-ROS-demos/rclc/addtwoints_server`](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/addtwoints_server/main.c) 및 [`micro-ROS-demos/rclc/addtwoints_client`](https://github.com/micro-ROS/micro-ROS-demos/blob/humble/rclc/addtwoints_client/main.c) 폴더에서 찾을 수 있습니다. 이 튜토리얼에서는 해당 예제의 코드 일부를 사용합니다.

- [서비스 서버](#service-server)
  - [초기화](#초기화)
  - [콜백](#callback)
- [서비스 클라이언트](#service-client)
  - [초기화](#초기화-1)
  - [콜백](#callback-1)
  - [요청 보내기](#send-a-request)
- [메시지 초기화](#message-initialization)
- [정리](#cleaning-up)

## 서비스 서버

### 초기화
RCL이 초기화되고 micro-ROS 노드가 생성되는 코드에서 시작하여 서비스 서버를 초기화하는 방법은 세 가지가 있습니다.

- 안정적(기본값):

  ```c
  // 서비스 서버 객체
  rcl_service_t 서비스;
  const char * service_name = "/addtwoints";

  // 메시지 유형 지원 가져오기
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // 기본 설정으로 서버를 초기화합니다.
  rcl_ret_t rc = rclc_service_init_default(
    &서비스, &노드,
    지원 유형, 서비스 이름);

  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

- 최선을 다함:

  ```c
  // 서비스 서버 객체
  rcl_service_t 서비스;
  const char * service_name = "/addtwoints";

  // 메시지 유형 지원 가져오기
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // 기본 설정으로 서버를 초기화합니다.
  rcl_ret_t rc = rclc_service_init_best_effort(
    &서비스, &노드,
    지원 유형, 서비스 이름);

  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

- 사용자 지정 QoS:

  ```c
  // 서비스 서버 객체
  rcl_service_t 서비스;
  const char * service_name = "/addtwoints";

  // 메시지 유형 지원 가져오기
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // 서비스 QoS 설정
  const rmw_qos_profile_t * qos_profile = &rmw_qos_profile_services_default;

  // 사용자 지정 서비스 품질 옵션으로 서버를 초기화합니다.
  rcl_ret_t rc = rclc_service_init(
    &서비스, &노드, 유형 지원,
    서비스 이름, QoS 프로필);

  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

사용 가능한 QoS 옵션과 신뢰성 모드와 최선 노력 모드 간의 장단점에 대한 자세한 내용은 [QoS 튜토리얼](../qos/)을 참조하십시오.

### 콜백

요청이 도착하면 실행기는 구성된 콜백 함수를 호출하고 요청 및 응답 메시지를 인수로 전달합니다.
요청 메시지에는 클라이언트가 보낸 값이 포함되어 있으며, 응답 메시지는 콜백이 반환된 후에 전달되므로 여기서 수정해야 합니다.

`AddTwoInts.srv` 타입 정의를 예로 들어 설명하겠습니다.

```c
int64 a
int64 b
---
int64 합계
```

클라이언트 요청 메시지에는 두 개의 정수 `a`와 `b`가 포함되며, 응답으로는 이 두 값의 `합`을 기대합니다.

```c
// 함수 프로토타입:
void (* rclc_service_callback_t)(const void *, void *);

// 구현 예시:
void service_callback(const void * request_msg, void * response_msg){
  // 메시지를 예상되는 유형으로 형변환합니다
  example_interfaces__srv__AddTwoInts_Request * req_in =
    (example_interfaces__srv__AddTwoInts_Request *) request_msg;
  example_interfaces__srv__AddTwoInts_Response * res_in =
    (example_interfaces__srv__AddTwoInts_Response *) response_msg;

  // 요청 메시지를 처리하고 응답 메시지 값을 설정합니다.
  printf("클라이언트가 %d와 %d의 합을 요청했습니다.\n", (int) req_in->a, (int) req_in->b);
  res_in->sum = req_in->a + req_in->b;
}
```

각 메시지를 예상되는 유형으로 형변환해야 한다는 점에 유의하십시오.

서비스와 실행기가 초기화되면, 실행기가 실행을 시작한 후 들어오는 요청을 처리할 수 있도록 서비스 콜백을 실행기에 추가해야 합니다.

```c
// 서비스 메시지 객체
example_interfaces__srv__AddTwoInts_Response response_msg;
example_interfaces__srv__AddTwoInts_Request request_msg;

// 실행기에 서버 콜백을 추가합니다.
rc = rclc_executor_add_service(
  &executor, &service, &request_msg,
  &response_msg, service_callback);

만약 (rc가 RCL_RET_OK가 아닌 경우) {
  ... // 오류 처리
  -1을 반환합니다.
}

// 요청을 수신하기 위해 실행기를 돌립니다.
rclc_executor_spin(&executor);
```

## 서비스 클라이언트

### 초기화
서비스 클라이언트 초기화는 서버 초기화와 거의 동일합니다.

- 안정적(기본값):

  ```c
  // 서비스 클라이언트 객체
  rcl_client_t 클라이언트;
  const char * service_name = "/addtwoints";

  // 메시지 유형 지원 가져오기
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // 기본 설정으로 클라이언트를 초기화합니다.
  rcl_ret_t rc = rclc_client_init_default(
    &클라이언트, &노드,
    지원 유형, 서비스 이름);

  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

- 최선을 다함:

  ```c
  // 서비스 클라이언트 객체
  rcl_client_t 클라이언트;
  const char * service_name = "/addtwoints";

  // 메시지 유형 지원 가져오기
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // 기본 설정으로 클라이언트를 초기화합니다.
  rcl_ret_t rc = rclc_client_init_best_effort(
    &클라이언트, &노드,
    지원 유형, 서비스 이름);

  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

- 사용자 지정 QoS:

  ```c
  // 서비스 클라이언트 객체
  rcl_client_t 클라이언트;
  const char * service_name = "/addtwoints";

  // 메시지 유형 지원 가져오기
  const rosidl_service_type_support_t * type_support =
    ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);

  // 클라이언트 QoS 설정
  const rmw_qos_profile_t * qos_profile = &rmw_qos_profile_services_default;

  // 사용자 지정 서비스 품질 옵션으로 서버를 초기화합니다.
  rcl_ret_t rc = rclc_client_init(
    &클라이언트, &노드, 유형 지원,
    서비스 이름, QoS 프로필);

  만약 (rc가 RCL_RET_OK가 아닌 경우) {
    ... // 오류 처리
    -1을 반환합니다.
  }
  ```

### 콜백
실행자는 서비스 응답이 도착하면 구성된 콜백 함수를 호출할 책임이 있습니다.
이 함수는 서버에서 보낸 값을 포함하는 응답 메시지를 유일한 인수로 받습니다.

응답 메시지를 예상되는 유형으로 변환해야 합니다. 예시:
```c
// 함수 프로토타입:
void (* rclc_client_callback_t)(const void *);

// 구현 예시:
void client_callback(const void * response_msg){
  // 응답 메시지를 예상 유형으로 형변환합니다.
  example_interfaces__srv__AddTwoInts_Response * msgin =
    (example_interfaces__srv__AddTwoInts_Response * ) response_msg;

  // 응답 메시지 처리
  printf("서비스 응답 %ld + %ld = %ld를 수신했습니다.\n", req.a, req.b, msgin->sum);
}
```

클라이언트와 실행기가 초기화되면, 실행기가 실행을 시작한 후 서비스 응답을 수신하기 위해 클라이언트 콜백을 실행기에 추가해야 합니다.

```c
// 응답 메시지 객체
example_interfaces__srv__AddTwoInts_Response res;

// 실행기에 클라이언트 콜백을 추가합니다.
rcl_ret_t rc = rclc_executor_add_client(&executor, &client, &res, client_callback);

만약 (rc가 RCL_RET_OK가 아닌 경우) {
  ... // 오류 처리
  -1을 반환합니다.
}

// 요청을 수신하기 위해 실행기를 돌립니다.
rclc_executor_spin(&executor);
```

### 요청 보내기
서비스 클라이언트와 서버 구성이 완료되면 서비스 클라이언트는 요청을 수행하고 실행기를 실행하여 응답을 받을 수 있습니다.
`AddTwoInts.srv`의 예제를 따라해 보겠습니다.

```c
// 요청 메시지 객체 (초기화된 클라이언트 유형 지원과 일치해야 함)
example_interfaces__srv__AddTwoInts_Request request_msg;

// 요청 메시지 메모리를 초기화하고 값을 설정합니다.
example_interfaces__srv__AddTwoInts_Request__init(&request_msg);
request_msg.a = 24;
request_msg.b = 42;

// 요청의 순번 (rcl_send_request 함수에 입력됨)
int64_t 시퀀스 번호;

// 요청 보내기
rcl_send_request(&client, &request_msg, &sequence_number);

// 응답을 받으려면 실행기를 실행하세요
rclc_executor_spin(&executor);
```

## 메시지 초기화
메시지를 보내거나 받기 전에 문자열이나 시퀀스 유형의 경우 메모리를 초기화해야 할 수 있습니다.
자세한 내용은 [micro-ROS에서 메시지 메모리 처리](../../advanced/handling_type_memory/) 섹션을 참조하십시오.

## 청소하기

초기화된 서비스 또는 클라이언트를 삭제하려면 다음 단계를 따르십시오.

```c
// 서비스 서버와 클라이언트를 삭제합니다
rcl_service_fini(&service, &node);
rcl_client_fini(&client, &node);
```

이렇게 하면 에이전트에 자동으로 생성된 인프라가 (가능한 경우) 삭제되고 클라이언트 측에서 사용된 메모리가 할당 해제됩니다.