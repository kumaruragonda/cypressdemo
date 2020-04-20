#pragma once

/**
	Author:Arun
*/
struct cat {

	/** AWS IoT message structure using Eclipse MQTTClient MQTT::Message. The structure of Message extracted from MQTTClient.h:
	 *
	 * @code
	 * struct Message
	 * {
	 *    enum QoS qos;
	 *    bool retained;
	 *    bool dup;
	 *    unsigned short id;
	 *    void *payload;
	 *    size_t payloadlen;
	 * };
	 * @endcode
	 *
	 * aws_message_t structure is not allocated internally in MQTT library.
	 * The application callback should copy the content prior to return.
	 *
	 * */
	void make_aws_message();

	/** AWS Greengrass discovery callback that will be invoked in response to discover API (@ref AWSIoTClient::discover) */
	void get_aws_message();

	/** AWS IoT client subscriber callback that will be invoked whenever a message is received for the subscribed topic */

	void callback_aws_message();
};
