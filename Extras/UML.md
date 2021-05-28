Unified Modelling Language (UML)
======

Table of Contents

1. Use-case diagrams\
    1.1 Diagram Building blocks\
    1.2 Use case relationships\
        1.2.1 Include\
        1.2.2 Extend\
        1.2.3 Generalization\
        1.2.4 Association\
        1.2.5 Uses\
2. Class diagrams\
    2.1 Instance-level relationships\
        2.1.1 Association --- \
        2.1.2 Aggregation (‘has a’)\
        2.1.3 Composition (lifecycle dependent)\
        2.2 Class-level relationships\
        2.2.1 Generalisation (inheritance)\
        2.2.2 Realisation (not in C++)\
    2.3 General relationships\
        2.3.1 Dependency\
        2.3.2 Multiplicity\
______

1 Use-case diagrams
------
Behavioural diagram.

Basic approach: it expresses the functionality provided by a system (actors, goals (use cases) and dependencies).

Shows what system functions are performed for which actor

----------------------------------

1.1 Diagram building blocks

	1. Use case:
		Sequence of actions that provide something of measurement value.
		(circle with use case)

	2. Actors:
		Person/organization/system which plays a role in one or more interactions.
		(actor character)

	3. System boundary boxes (optional)
		Scope of the system.
		Within the box represents functionality.
		----
		|	|
		|	------------
		|				|
		|				|
		 ---------------

1.2 Use case relationships

1.2.1 Include
One use case includes another use case.

						<<include>>
	including use-case -------------> included use-case

1.2.2 Extend
The extension use case may be inserted in the extended use case under some conditions.

						<<extend>>
	extension use-case -------------> extended use-case
						{if ... }


	Usually, extend eq 'optional'
					eq 'potentially not executed with the base use case.
					eq not required to achieve the base use case goal.

1.2.3 Generalization/specialization

	General <_____________ Specific

1.2.4 Associations
	A __________________ B

1.2.5 Uses

				<<use>>
	using use-case -------------> use case used

2 Class diagrams
------

## 2.1 Instance-level relationships

### 2.1.1 Association ---

### 2.1.2 Aggregation (‘has a’)
Unfilled diamond.

### 2.1.3 Composition (lifecycle dependent)
Filled diamond.

## 2.2 Class-level relationships

### 2.2.1 Generalisation (inheritance)
Unfilled triangle.

### 2.2.2 Realisation (not in C++)

## 2.3 General relationships

### 2.3.1 Dependency

<<uses>>
---------->

### 2.3.2 Multiplicity

Links
------

* [UML Quick Ref Card \[umlqrc\] - Laurent Grégoire](http://tnerual.eriogerg.free.fr/umlqrc.pdf)

* [List of Unified Modeling Language tools - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/List_of_Unified_Modeling_Language_tools)

* [Modelio product range - Enterprise | Free edition - UML modeling, Java, C++, MDA, XMI](http://www.modeliosoft.com/en/products/packaging-overview.html)

* [sequence diagrams free program windows - Buscar con Google](http://www.google.es/#sclient=psy&hl=es&source=hp&q=sequence+diagrams+free+program+windows&aq=f&aqi=&aql=&oq=&pbx=1&bav=on.2,or.r_gc.r_pw.&fp=731a502582379377&biw=1076&bih=687)

* [ArgoUML - Wikipedia, the free encyclopedia](http://en.wikipedia.org/wiki/ArgoUML)

* [UML Tool for Fast UML Diagrams](http://www.umlet.com)

* [Mscgen: A Message Sequence Chart Renderer](http://www.mcternan.me.uk/mscgen/)

* [argouml-stats: Chapter 1. Introduction](http://argouml-stats.tigris.org/documentation/manual-0.26/ch01.html#d0e197)

* [Callplot | Download Callplot software for free at SourceForge.net](http://sourceforge.net/projects/callplot)

* [trace2uml: Drawing sequence diagrans in Doxygen](http://trace2uml.tigris.org/doxygen.htm)

* [Quick Sequence Diagram Editor - Example](http://sdedit.sourceforge.net/example/index.html#source)

* [UCM tutorial - IBM Education Assistant - Rational software](http://publib.boulder.ibm.com/infocenter/ieduasst/rtnv1r0/index.jsp?topic=/com.ibm.iea.rcc/rcc/7.0/IntroToUCM/RCCv7_UCM_Module1_UCMIntroduction/player.html)

