#ifndef PROJECT11_NAVIGATION_WORKFLOWS_TASK_TO_TASK_WORKFLOW_H
#define PROJECT11_NAVIGATION_WORKFLOWS_TASK_TO_TASK_WORKFLOW_H

#include <project11_navigation/workflow.h>
#include <project11_navigation/task.h>

namespace project11_navigation
{

class TaskToTaskWorkflow: public Workflow<Task::Ptr, Task::Ptr>
{
};

}  // namespace project11_navigation

#endif
