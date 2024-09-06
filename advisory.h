
#ifndef ADVISORY_H
#define ADVISORY_H


#define NO_COLD_ADVISORY 0
#define COLD_ADVISORY 1
#define COLD_WARNING 2

/**
 * ----------------------------------------------------
 * @brief determines which cold adviory should be given 
 * @param windSpeed speed of the wind in MPH
 * @param ambientTempF ambient temperature in F
 * @return one of the three cold advisory levels (see above)
 */

int coldAdvisory(int windSpeed, int ambientTempF);


#endif