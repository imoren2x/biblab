
/**
 *
 I/O Class          Description
 BinaryReader       Reads primitive data from a binary stream.
 BinaryWriter       Writes primitive data in binary format.
 BufferedStream     A temporary storage for a stream of bytes.
 Directory          Helps in manipulating a directory structure.
 DirectoryInfo      Used for performing operations on directories.
 DriveInfo          Provides information for the drives.
 File               Helps in manipulating files.
 FileInfo           Used for performing operations on files.
 FileStream         Used to read from and write to any location in a file.
 MemoryStream       Used for random access to streamed data stored in memory.
 Path               Performs operations on path information.
 StreamReader       Used for reading characters from a byte stream.
 StreamWriter       Is used for writing characters to a stream.
 StringReader       Is used for reading from a string buffer.
 StringWriter       Is used for writing into a string buffer.
 */

/**
FileStream <object_name> = new FileStream( <file_name>, <FileMode Enumerator>, <FileAccess Enumerator>, <FileShare Enumerator>);
FileStream F = new FileStream("sample.txt", FileMode.Open, FileAccess.Read, FileShare.Read);
 *
    Parameter FileMode
    The FileMode enumerator defines various methods for opening files. The members of the FileMode enumerator are:

    * Append: It opens an existing file and puts cursor at the end of file, or creates the file, if the file does not exist.
    * Create: It creates a new file.
    * CreateNew: It specifies to the operating system, that it should create a new file.
    * Open: It opens an existing file.
    * OpenOrCreate: It specifies to the operating system that it should open a file if it exists, otherwise it should create a new file.
    * Truncate: It opens an existing file and truncates its size to zero bytes.

    Parameter FileAccess
    FileAccess enumerators have members: Read, ReadWrite and Write.

    Parameter FileShare
    FileShare enumerators have the following members:

    Parameter Inheritable: It allows a file handle to pass inheritance to the child processes

    Parameter None: It declines sharing of the current file

    Parameter Read: It allows opening the file for reading

    Parameter ReadWrite: It allows opening the file for reading and writing

    Parameter Write: It allows opening the file for writing
 *
 */
using System;
using System.IO;

namespace FileIOApplication {
    class Program {
        static void Main(string[] args) {
            FileStream F = new FileStream("test.dat", FileMode.OpenOrCreate, FileAccess.ReadWrite);
            for (int i = 1; i <= 20; i++)
                F.WriteByte((byte)i);

            F.Position = 0;
            for (int i = 0; i <= 20; i++)
                Console.Write(F.ReadByte() + " ");

            F.Close();
            Console.ReadKey();
        }
    }
}