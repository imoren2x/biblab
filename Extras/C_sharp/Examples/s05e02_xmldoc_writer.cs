using System;
using System.Text;
using System.Xml;
using System.Xml.Serialization;

/** Writing XML
 * Two aproaches:
 * 1 XmlWriter
 * 2 XmlDocument
 */

namespace WritingXml {
    class Program {
        static void Main(string[] args) {
            //XML Document//
            XmlDocument xmlDoc = new XmlDocument();
            //XML root node//
            XmlNode rootNode = xmlDoc.CreateElement("users");
            //XML root node//
            xmlDoc.AppendChild(rootNode);

            //New node: "user" node//
            XmlNode userNode = xmlDoc.CreateElement("user");
            //Atribute "age"//
            XmlAttribute attribute = xmlDoc.CreateAttribute("age");
            attribute.Value = "42";
            userNode.Attributes.Append(attribute);
            userNode.InnerText = "John Doe";
            rootNode.AppendChild(userNode);

            userNode = xmlDoc.CreateElement("user");
            attribute = xmlDoc.CreateAttribute("age");
            attribute.Value = "39";
            userNode.Attributes.Append(attribute);
            userNode.InnerText = "Jane Doe";
            rootNode.AppendChild(userNode);

            xmlDoc.Save("test-doc.xml");
        }
    }
}