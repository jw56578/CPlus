using System.Runtime.InteropServices;

//the dll produced by the c++ compiler needs to be in the same running directory
//why is this not working. COMLibrary.dll has DoSomething
namespace ConsumeUnmanagedFromManaged
{
    class Program
    {
        static void Main(string[] args)
        {
            DoSomething();
        }
        [DllImport("COMLibrary.dll")]
        static extern void DoSomething();
    }
}
