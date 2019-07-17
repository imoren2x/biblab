using System;
using System.Text;
using System.Xml;

namespace ParsingXml {
    class Program {
        static void Main(string[] args) {

            XmlDocument xmlDoc = new XmlDocument();
            string rssUrl = "http://rss.cnn.com/rss/edition_world.rss";
            xmlDoc.Load(rssUrl);
            
            //XPATH location
            string xpath = "//rss/channel/title";
            XmlNode titleNode = xmlDoc.SelectSingleNode(xpath);

            if (titleNode != null)
                Console.WriteLine(titleNode.InnerText);
            Console.ReadKey();   
        }
    }
}