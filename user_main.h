#ifndef user_main_h
#define user_main_h

#include "queue.h"
#include "config.h"

#include <os_type.h>
#include <ets_sys.h>
#include <user_interface.h>

enum
{
	command_task_id					= USER_TASK_PRIO_1,
	command_task_queue_length		= 16,

	background_task_id				= USER_TASK_PRIO_2,
	background_task_queue_length	= 64,
};

enum
{
	command_task_command_invalid,
	command_task_command_reset,
	command_task_command_reset_finish,
};

extern queue_t uart_send_queue;
extern queue_t uart_receive_queue;
extern os_event_t background_task_queue[background_task_queue_length];

bool_t	wlan_init(void);
#endif
