/* 
 * File:   App.h
 * Author: DELL
 *
 * Created on May 19, 2018, 12:12 PM
 */

#ifndef APP_H
#define	APP_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef enum FanSpeed_e
    {
        OFF = 0,
        SPEED_1,
        SPEED_2,
        SPEED_3,
        SPEED_4,
        SPEED_5
    }FanSpeed_t;
    
    typedef enum DutyCycle_e
    {
        DC_0 = 0,
        DC_20 = 99,
        DC_40 = 199,
        DC_60 = 299,
        DC_80 = 399,
        DC_100 = 499
    }DutyCycle_t;



#ifdef	__cplusplus
}
#endif

#endif	/* APP_H */

