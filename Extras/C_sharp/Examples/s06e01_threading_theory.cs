
/**
 * Thread theory
 */

/**
 * Thread Life Cycle
 Following are the various states in the life cycle of a thread:
    * The Unstarted State: It is the situation when the instance of the thread is created but the Start method is not called.
    * The Ready State: It is the situation when the thread is ready to run and waiting CPU cycle.
    * The Not Runnable State: A thread is not executable, when:
        Sleep method has been called
        Wait method has been called
        Blocked by I/O operations
    * The Dead State: It is the situation when the thread completes execution or is aborted.
 */

/**
 * Properties of the Thread Class
 *
 Property	Description
CurrentContext	Gets the current context in which the thread is executing.
CurrentCulture	Gets or sets the culture for the current thread.
CurrentPrinciple	Gets or sets the thread's current principal (for role-based security).
CurrentThread	Gets the currently running thread.
CurrentUICulture	Gets or sets the current culture used by the Resource Manager to look up culture-specific resources at run-time.
ExecutionContext	Gets an ExecutionContext object that contains information about the various contexts of the current thread.
IsAlive	Gets a value indicating the execution status of the current thread.
IsBackground	Gets or sets a value indicating whether or not a thread is a background thread.
IsThreadPoolThread	Gets a value indicating whether or not a thread belongs to the managed thread pool.
ManagedThreadId	Gets a unique identifier for the current managed thread.
Name	Gets or sets the name of the thread.
Priority	Gets or sets a value indicating the scheduling priority of a thread.
ThreadState	Gets a value containing the states of the current thread.
 */

/**
 * Methods of the Thread Class
 *
 Sr.No.	Methods
1	public void Abort()
Raises a ThreadAbortException in the thread on which it is invoked, to begin the process of terminating the thread. Calling this method usually terminates the thread.

2	public static LocalDataStoreSlot AllocateDataSlot()
Allocates an unnamed data slot on all the threads. For better performance, use fields that are marked with the ThreadStaticAttribute attribute instead.

3	public static LocalDataStoreSlot AllocateNamedDataSlot(string name)
Allocates a named data slot on all threads. For better performance, use fields that are marked with the ThreadStaticAttribute attribute instead.

4	public static void BeginCriticalRegion()
Notifies a host that execution is about to enter a region of code in which the effects of a thread abort or unhandled exception might jeopardize other tasks in the application domain.

5	public static void BeginThreadAffinity()
Notifies a host that managed code is about to execute instructions that depend on the identity of the current physical operating system thread.

6	public static void EndCriticalRegion()
Notifies a host that execution is about to enter a region of code in which the effects of a thread abort or unhandled exception are limited to the current task.

7	public static void EndThreadAffinity()
Notifies a host that managed code has finished executing instructions that depend on the identity of the current physical operating system thread.

8	public static void FreeNamedDataSlot(string name)
Eliminates the association between a name and a slot, for all threads in the process. For better performance, use fields that are marked with the ThreadStaticAttribute attribute instead.

9	public static Object GetData(LocalDataStoreSlot slot)
Retrieves the value from the specified slot on the current thread, within the current thread's current domain. For better performance, use fields that are marked with the ThreadStaticAttribute attribute instead.

10	public static AppDomain GetDomain()
Returns the current domain in which the current thread is running.

11	public static AppDomain GetDomain()
Returns a unique application domain identifier

12	public static LocalDataStoreSlot GetNamedDataSlot(string name)
Looks up a named data slot. For better performance, use fields that are marked with the ThreadStaticAttribute attribute instead.

13	public void Interrupt()
Interrupts a thread that is in the WaitSleepJoin thread state.

14	public void Join()
Blocks the calling thread until a thread terminates, while continuing to perform standard COM and SendMessage pumping. This method has different overloaded forms.

15	public static void MemoryBarrier()
Synchronizes memory access as follows: The processor executing the current thread cannot reorder instructions in such a way that memory accesses prior to the call to MemoryBarrier execute after memory accesses that follow the call to MemoryBarrier.

16	public static void ResetAbort()
Cancels an Abort requested for the current thread.

17	public static void SetData(LocalDataStoreSlot slot, Object data)
Sets the data in the specified slot on the currently running thread, for that thread's current domain. For better performance, use fields marked with the ThreadStaticAttribute attribute instead.

18	public void Start()
Starts a thread.

19	public static void Sleep(int millisecondsTimeout)
Makes the thread pause for a period of time.

20	public static void SpinWait(int iterations)
Causes a thread to wait the number of times defined by the iterations parameter

21
public static byte VolatileRead(ref byte address)

public static double VolatileRead(ref double address)

public static int VolatileRead(ref int address)

public static Object VolatileRead(ref Object address)

Reads the value of a field. The value is the latest written by any processor in a computer, regardless of the number of processors or the state of processor cache. This method has different overloaded forms. Only some are given above.

22
public static void VolatileWrite(ref byte address,byte value)

public static void VolatileWrite(ref double address, double value)

public static void VolatileWrite(ref int address, int value)

public static void VolatileWrite(ref Object address, Object value)

Writes a value to a field immediately, so that the value is visible to all processors in the computer. This method has different overloaded forms. Only some are given above.

23	public static bool Yield()
Causes the calling thread to yield execution to another thread that is ready to run on the current processor. The operating system selects the thread to yield to.
 */
