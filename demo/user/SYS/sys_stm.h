#ifndef __SYS_STM_H
#define __SYS_STM_H

/*------------------------------*
*  enum definitions             *
*-------------------------------*/
typedef enum { FALSE = 0, TRUE = !FALSE } bool;
typedef enum { HIGH = 1, LOW = !HIGH } PinLevel;
typedef enum { WRITE = 0, READ = !WRITE } Operation;

/*------------------------------*
*  macros for others            *
*-------------------------------*/
#define   BIT(i)   (1 << (i))

#ifndef NULL
 #define   NULL     ((void *) 0)
#endif

/*------------------------------*
*  macros for functions         *
*-------------------------------*/
#define   TASK_CHECK(taskName)   { \
	ptask = &taskName; \
	\
	if (ptask->enable == FALSE) \
		return; \
	\
	if (ptask->suspend == TRUE) \
	{ \
		if (sys.tick < ptask->tick) return; \
		ptask->suspend = FALSE; \
	} \
}

#define   TASK_WAIT(t)   { \
	ptask->tick = sys.tick + t; \
	ptask->suspend = TRUE; \
}

#define   TASK_ENABLE(taskName)    { \
	taskName.enable = TRUE; \
}

#define   TASK_DISABLE(taskName)   { \
	taskName.enable = FALSE; \
}

/*------------------------------*
*  type definitions             *
*-------------------------------*/
typedef void (*const Function)(void);

typedef struct
{
	unsigned long tick;
	void (*const Init)(void);
	void (*const DelayUs)(unsigned short);
	void (*const DelayMs)(unsigned long);
} Sys;

typedef struct
{
	bool enable;
	bool suspend;
	unsigned long tick;
	void (*const Process)(void);
} Task;

/*------------------------------*
*  public variables             *
*-------------------------------*/
extern Sys sys;
extern Task *ptask;

#endif
