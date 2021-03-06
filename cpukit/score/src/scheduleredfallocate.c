/**
 *  @file
 *
 *  @brief Scheduler EDF Allocate
 *  @ingroup ScoreScheduler
 */

/*
 *  Copyright (C) 2011 Petr Benes.
 *  Copyright (C) 2011 On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#if HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/system.h>
#include <rtems/config.h>
#include <rtems/score/scheduler.h>
#include <rtems/score/scheduleredf.h>
#include <rtems/score/wkspace.h>

bool _Scheduler_EDF_Allocate(
  const Scheduler_Control *scheduler,
  Thread_Control          *the_thread
)
{
  Scheduler_EDF_Per_thread *schinfo = the_thread->scheduler_info;

  (void) scheduler;

  schinfo = (Scheduler_EDF_Per_thread *)(the_thread->scheduler_info);
  schinfo->thread = the_thread;
  schinfo->queue_state = SCHEDULER_EDF_QUEUE_STATE_NEVER_HAS_BEEN;

  return true;
}
