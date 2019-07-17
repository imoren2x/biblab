using System;
using System.Text;
using System.Xml;

namespace ParsingXml {
    class Program {
        static void Main(string[] args) {
            string currencyUrl = "http://www.ecb.int/stats/eurofxref/eurofxref-daily.xml";
            XmlReader xmlReader = XmlReader.Create(currencyUrl);
            while (xmlReader.Read()) {
                if (xmlReader.NodeType == XmlNodeType.Element) &&
                   (xmlReader.Name == "Cube") {
                    if (xmlReader.HasAttributes)
                        Console.WriteLine(xmlReader.GetAttribute("currency") + ": " + xmlReader.GetAttribute("rate"));                    
                }
            }
            Console.ReadKey();
        }
    }
}