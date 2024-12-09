/*
 * scheduler.h
 *
 *  Created on: Dec 7, 2022
 *      Author: trong
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>
#include "main.h"

typedef struct {
	// Pointer to the task (must be a void (void) function)
	void (*pTask)(void);
	// Delay (ticks) until the function will (next) be run
	uint32_t Delay;
	// Interval (ticks) between subsequent runs
	uint32_t Period;
	// Incremented (by scheduler) when task is due to execute
	uint8_t RunMe;
	// Task ID shows what task's running at each time.
	uint32_t TaskID;
} sTasks;

// Define how many tasks at max we want to execute
#define SCH_MAX_TASKS	40

void SCH_Init(void);
unsigned char SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
void SCH_Shift_Task(const int TASK_INDEX);
unsigned char SCH_Delete_Task(const int TASK_INDEX);

#endif /* INC_SCHEDULER_H_ */
