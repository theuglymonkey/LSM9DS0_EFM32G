/*
 * I2C_Device.h
 *
 *  Created on: Jun 19, 2014
 *      Author: Robert
 */

#ifndef I2C_DEVICE_H_
#define I2C_DEVICE_H_

/* Defines*/
#define CORE_FREQUENCY              14000000
#define RTC_MIN_TIMEOUT                32000
#define I2C_ADDRESS                     0xE2
#define I2C_RXBUFFER_SIZE                 10

// Transmission flags
volatile bool i2c_rxInProgress;
volatile bool i2c_startTx;

void setupOscillators(void);

void enableI2cSlaveInterrupts(void);

void disableI2cInterrupts(void);

void setupI2C(void);

void receiveI2CData(void);

void performI2CTransfer(void);

#endif /* I2C_DEVICE_H_ */
