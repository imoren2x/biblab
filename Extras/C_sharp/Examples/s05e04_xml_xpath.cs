using System;
using System.Text;
using System.Xml;

namespace ParsingXml {
    class Program {
        static void Main(string[] args) {
            XmlDocument xmlDoc = new XmlDocument();
            string rssUrl = "http://rss.cnn.com/rss/edition_world.rss";
            xmlDoc.Load(rssUrl);
            XmlNodeList itemNodes = xmlDoc.SelectNodes("//rss/channel/item");
            foreach(XmlNode itemNode in itemNodes) {
                XmlNode titleNode = itemNode.SelectSingleNode("title");
                XmlNode dateNode = itemNode.SelectSingleNode("pubDate");
                if((titleNode != null) && (dateNode != null))
                    Console.WriteLine(dateNode.InnerText + ": " + titleNode.InnerText);
            }
            Console.ReadKey();
        }
    }
}