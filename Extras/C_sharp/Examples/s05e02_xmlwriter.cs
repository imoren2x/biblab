using System;
using System.Text;
using System.Xml;

/** Writing XML
 * Two aproaches:
 * 1 XmlWriter
 * 2 XmlDocument
 */

namespace WritingXml {
    class Program {
        static void Main(string[] args) {
            XmlWriter xmlWriter = XmlWriter.Create("test.xml");

            xmlWriter.WriteStartDocument();
            xmlWriter.WriteStartElement("users");

            xmlWriter.WriteStartElement("user");
            xmlWriter.WriteAttributeString("age", "42");
            xmlWriter.WriteString("John Doe");
            xmlWriter.WriteEndElement();

            xmlWriter.WriteStartElement("user");
            xmlWriter.WriteAttributeString("age", "39");
            xmlWriter.WriteString("Jane Doe");

            xmlWriter.WriteEndDocument();
            xmlWriter.Close();
        }
    }
}