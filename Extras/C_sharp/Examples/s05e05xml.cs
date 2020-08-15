
/**
 XML = Tree of XML-Node

 XML-Node:
  - ChildNode
  - tag
  - attributes
  - inner text
  - outer text

 XML-Node inherits to XMLElement inherits to DocumentElement
 */

/**
 XmlDocument xmlDoc = new XmlDocument();

 <users>
 <user>
 Ignacio
 </user>
 </users>

 xmlDoc.DocumentElement.Name -> user
 xmlDoc.DocumentElement.InnerText -> Ignacio
 xmlDoc.DocumentElement.OuterText -> users
 xmlDoc.DocumentElement.Attributes["name"].Value
 *
 */