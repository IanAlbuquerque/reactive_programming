#ifndef TIMER_HEAP_H
#define TIMER_HEAP_H

#define MAX_NUMBER_OF_TIMERS 20

struct timer
{
	int time_stamp;
	void (*function)(void);
};
typedef struct timer Timer;

struct timerHeap
{
	int size;
	Timer timers[MAX_NUMBER_OF_TIMERS];
};
typedef struct timerHeap TimerHeap;

void timerHeapInitialize(TimerHeap* timer_heap);
Timer* timerHeapTop(TimerHeap* timer_heap);
int timerGetTimeStamp(Timer* timer);
void timerRunFunction(Timer* timer);
void timerHeapPopTop(TimerHeap* timer_heap);
void timerHeapPush(TimerHeap* timer_heap, int time_stamp, void (*function)(void));

#endif
