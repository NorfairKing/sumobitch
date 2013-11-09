/*
  SUMOBITCH Program
 
 Auhtors:
 Tom Sydney Kerckhove
 Tim Gillis
 */

// Motor pins
#define LEFT_ENABLE 5
#define LEFT_PHASE 4
#define RIGHT_ENABLE 3
#define RIGHT_PHASE 2

/*
LOW,    0 = Stop
LOW,  255 = Backward
HIGH,   0 = Forward
HIGH, 255 = Stop
*/

#define LEFT_FORWARD_PHASE HIGH
#define LEFT_BACKWARD_PHASE LOW
#define LEFT_STOP_PHASE LOW
#define LEFT_FORWARD_VALUE 0
#define LEFT_BACKWARD_VALUE 255
#define LEFT_STOP_VALUE 0

#define RIGHT_FORWARD_PHASE HIGH
#define RIGHT_BACKWARD_PHASE LOW
#define RIGHT_STOP_PHASE LOW
#define RIGHT_FORWARD_VALUE 0
#define RIGHT_BACKWARD_VALUE 255
#define RIGHT_STOP_VALUE 0
