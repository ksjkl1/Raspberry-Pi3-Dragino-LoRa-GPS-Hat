/*  config.h
*
*  Step1: sudo apt-get install wiringpi
*  Step2. UPDATE THIS FILE ACCORDING TO YOUR ENVIRONMENT 
*  Step3. make 
*  Step4. sudo ./bidirection
*/
#ifndef _CONFIG_H_
#define _CONFIG_H_

#include "radio.h"
// operation frequency, change your region freqency.
#define FREQUENCY   868104000   // AS(Japan)
// Default RX2
#define FREQ_RX2    868104000
#define DR_RX1      SF7        // default data rate
#define DR_RX2      SF10

/* Informal status fields */
// 24char
#define PLATFORM    "BidirectionSingleChannel"      /* platform definition */
// 40char
#define EMAIL       "foo-bar@gmail.com"         /* used for contact email */
// 64char
#define DESCRIPTION "Raspberry Pi3 and Dragino GPS-HAT"  /* used for free form description */

// Set Your location 
#define LATITUDE    4.497
#define LONGITUDE   52.065510
#define ALTITUDE    1

// define servers
// TODO: use host names and dns
#define SERVER1 "63.34.215.128"
#define PORT    1700                // The port on which to send data
#define PORT_DOWN 1700              // The port on which to receive data

#define DEFAULT_KEEPALIVE   10       /* default time interval for downstream keep-alive packet */
#define DEFAULT_STAT        4       // default send stat once every few times

#define DEFAULT_RX1     1       // default RX1 time in second
#define DEFAULT_RX2     1
#endif // _CONFIG_H_
