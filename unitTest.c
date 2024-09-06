/* unitTest.c
 * =============================================================
 *    Name:
 * Section:
 * Purpose:
 * =============================================================
 */
 
#include <stdbool.h> 
#include <stdio.h>
#include <assert.h>

#include "unitTest.h"
#include "advisory.h"
 
void unitTest01(){
    // Assert Statements Go Here
    assert(coldAdvisory(100, 16) == NO_COLD_ADVISORY); 
    printf("Test 01 passed\n");
}
void unitTest02(){
    // Assert Statements Go Here
    assert(coldAdvisory(100, 14) == COLD_WARNING); 
    printf("Test 02 passed\n");
}
void unitTest03(){
    // Assert Statements Go Here
    assert(coldAdvisory(35, 14) == COLD_ADVISORY); 
    printf("Test 03 passed\n");
}
void unitTest04(){
    // Assert Statements Go Here
    assert(coldAdvisory(100, -4) == COLD_WARNING); 
    printf("Test 04 passed\n");
}
void unitTest05(){
    // Assert Statements Go Here
    assert(coldAdvisory(10, -4) == COLD_ADVISORY); 
    printf("Test 05 passed\n");
}
void unitTest06(){
    // Assert Statements Go Here
    assert(coldAdvisory(100, -11) == COLD_WARNING); 
    printf("Test 06 passed\n");
}

void runAllTests(){
    unitTest01();
    unitTest02();
    unitTest03();
    unitTest04();
    unitTest05();
    unitTest06();

    // Additional Unit Test Calls Go Here
    printf("Testing completed\n");
}