/**
 * @file trash.h
 * @author HERENA JOSHIKA A S
 * @brief Header file for waste level measurement
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __TRASHMEASUREMENT_H__
#define __TRASHMEASUREMENT_H__

/**
 * @brief gives output as high when trash level goes below 6 with light
 * 
 * @return 3
 */

int lightindicator(void);

/**
 * @brief gives output as high when trash level goes below 6 with voice
 * 
 * @return 2
 */
int voiceindicator(void);

#endif