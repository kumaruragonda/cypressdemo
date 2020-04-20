/*
 * This project is derived from the CYPRESS FX3 Development Kit project, "C++ Streamer".  It can be used to collect RAW data from a RASDR device.
  The Cypress program, "C++ Streamer" was useful for evaluating USB2/USB3 performance of the FX3 chips.  The original program source is provided at:
  "C:\Program Files\Cypress\EZ-USB FX3 SDK\1.3\application\cpp\streamer".
 *
 *  Created on: 22-Feb-2020
 *      Author: Criticalriver
 */

#pragma once

/**
Function for retrieving RAW Data:: Author:Arun
*/
struct SETGATT {
  /**
    Discovery for Cypress IoT API
  */

	/******************************************************
	 *                      Macros
	 ******************************************************/

	#define AWS_MAX_CONNECTIONS                   (2)
	#define AWS_MQTT_KEEP_ALIVE_TIMEOUT           (5)         //in seconds
	#define AWS_DEFAULT_CONNECTION_RETRIES        (3)
	#define AWS_DEFAULT_DNS_TIMEOUT               (10000)     // milliseconds
	#define AWS_REQUEST_TIMEOUT                   (5000)      // milliseconds
	#define AWS_IOT_DEFAULT_MQTT_PORT             (8883)

	#define GREENGRASS_DISCOVERY_HTTP_REQUEST_URI_PREFIX  "/greengrass/discover/thing/"
	#define AWS_GG_HTTPS_CONNECT_TIMEOUT          (2000)
	#define AWS_GREENGRASS_DISCOVERY_TIMEOUT      (5000)

	#define AWS_GG_METADATA_MAX_LENGTH            (128)
	#define AWS_GG_THING_ARN_MAX_LENGTH           (128)
	#define AWS_GG_GROUP_ID_MAX_LENGTH            (64)
	#define AWS_GG_ROOT_CA_MAX_LENGTH             (2000)
	#define AWS_GG_MAX_CONNECTIONS                (1)

	#define AWS_GG_HTTPS_SERVER_PORT              (8443)

	#define GG_GROUP_ID                           "GGGroupId"
	#define GG_GROUP_KEY                          "GGGroups"
	#define GG_HOST_ADDRESS                       "HostAddress"
	#define GG_PORT                               "PortNumber"
	#define GG_METADATA                           "Metadata"
	#define GG_ROOT_CAS                           "CAs"
	#define GG_CORE_THING_ARN                     "thingArn"
	#define GG_BEGIN_CERTIFICATE                  "-----BEGIN CERTIFICATE-----"
	#define GG_REQUEST_PROTOCOL                   "https://"

	#define verify_aws_type(aws, type)   ( (aws->transport == type) ? 1 : 0 )

	#define AWS_LIBRARY_INFO( x )   printf x
	#define AWS_LIBRARY_DEBUG( x )  //printf x
	#define AWS_LIBRARY_ERROR( x )  printf x

	/**
	 * @addtogroup aws_iot_enums
	 *
	 * AWS IoT and Greengrass enumerated data types
	 *
	 * @{
	 */

	/******************************************************
	 *                    Constants
	 ******************************************************/

	/******************************************************
	 *                   Enumerations
	 ******************************************************/

	/******************************************************
	 *                 Type Definitions
	 ******************************************************/
	/**
	 * This project is derived from the CYPRESS FX3 Development Kit project, "C++ Streamer".  It can be used to collect RAW data from a RASDR device.
	 * List of AWS IoT protocols
	 */
  void set_gatt_attributes();
	/**
	 * @addtogroup aws_iot_enums
	 *
	 * AWS IoT and Greengrass enumerated data types
	 *
	 * @{
	 */
  void callback_gatt_attributes();
  /**
  	 * Connection endpoint information of a Greengrass core device. A greengrass core can have one or more endpoints.
  	 *Author: Kumar Babu
  	 */
  void aws_greengrass_core_connection_info_t();
};
