/*
 * rectangulartracker_pi.h
 *
 *  Created on: Jan  2017
 *      Author: Tianyu
 */

#ifndef RECTANGULARTRACKER_H_
#define RECTANGULARTRACKER_H_

#define _USE_MATH_DEFINES
#include <math.h> // defines M_PI

#include <libcaer/events/polarity.h>

void caerRectangulartrackerPiFilter(uint16_t moduleID, caerPolarityEventPacket polarity);

#endif /* RECTANGULARTRACKER_H_ */
