#ifndef MAIN_H
#define	MAIN_H

#define TASK_CPU_CORE__REMOTE_CTRL	0
#define TASK_CPU_CORE__LCD			1
#define TASK_CPU_CORE__TOUCH		1

#define TASK_PRIORITY__LCD			(configMAX_PRIORITIES - 1)
#define TASK_PRIORITY__TOUCH		(configMAX_PRIORITIES - 2)
#define TASK_PRIORITY__REMOTE_CTRL	(configMAX_PRIORITIES - 3)

#endif