/* lab08.c
 * =============================================================
 *    Name:
 * Section:
 * Purpose:
 * =============================================================
 */

#include <stdio.h>
#include "advisory.h"
#include "unitTest.h"


void calculateColdAdvisory() {
    int ambientTemp = 0;
    int windSpeed = 0;
    int coldAdvise = NO_COLD_ADVISORY;

    // user input
    printf("enter the wind speed: ");
    scanf("%i", &windSpeed);

    printf("enter the ambient temp: ");
    scanf("%i", &ambientTemp);

    // get cold advisory level
    coldAdvise = coldAdvisory(windSpeed, ambientTemp);

    // output
    if(coldAdvise == NO_COLD_ADVISORY) {
        printf("There is no advisory ");
    } else if(coldAdvise == COLD_ADVISORY) {
        printf("There is a COLD ADVISORY ");
    } else {
        printf("There is a COLD WARNING ");
    }

    printf("for temp: %2i ", ambientTemp);
    printf("and wind: %2i\n", windSpeed);
}


int main(void) {

    // Uncomment me to run all tests
    //runAllTests();

    // Uncomment me to run the main program
    calculateColdAdvisory();

    return 0;
}