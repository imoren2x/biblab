using System;
using System.Collections;

/**
Property    Description
Count       Gets the number of key-and-value pairs contained in the Hashtable.
IsFixedSize Gets a value indicating whether the Hashtable has a fixed size.
IsReadOnly  Gets a value indicating whether the Hashtable is read-only.
Item        Gets or sets the value associated with the specified key.
Keys        Gets an ICollection containing the keys in the Hashtable.
Values      Gets an ICollection containing the values in the Hashtable.
 */
/**
Sr.No.  Method
1   public virtual void Add(object key, object value);
Adds an element with the specified key and value into the Hashtable.

2   public virtual void Clear();
Removes all elements from the Hashtable.

3   public virtual bool ContainsKey(object key);
Determines whether the Hashtable contains a specific key.

4   public virtual bool ContainsValue(object value);
Determines whether the Hashtable contains a specific value.

5   public virtual void Remove(object key);
Removes the element with the specified key from the Hashtable.
 */
namespace CollectionsApplication {
    class Program {
        static void Main(string[] args) {
            Hashtable ht = new Hashtable();

            ht.Add("001", "Zara Ali");
            ht.Add("002", "Abida Rehman");
            ht.Add("003", "Joe Holzner");
            ht.Add("004", "Mausam Benazir Nur");
            ht.Add("005", "M. Amlan");
            ht.Add("006", "M. Arif");
            ht.Add("007", "Ritesh Saikia");

            if (ht.ContainsValue("Nuha Ali")) {
                Console.WriteLine("This student name is already in the list");
            } else {
                ht.Add("008", "Nuha Ali");
            }

            // Get a collection of the keys.
            ICollection key = ht.Keys;

            foreach (string k in key)
                Console.WriteLine(k + ": " + ht[k]);

            Console.ReadKey();
        }
    }
}