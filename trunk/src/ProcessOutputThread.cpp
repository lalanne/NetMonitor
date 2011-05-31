#include "ProcessOutputThread.hpp"

using namespace boost;

ProcessOutputThread::ProcessOutputThread()
{
    thread(processOutput);
}
