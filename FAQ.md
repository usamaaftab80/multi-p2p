These are basic FAQs of the project. You are free to ask a question or add an answer when appropriate.



#### **Q: What is SVN? How can I use it** ####

A: SVN stands for "Subversion". Further information can be found in [this](http://svnbook.red-bean.com/en/1.5/svn-book.pdf) svn book.

#### **Q: Which tool can I use to check out source codes from a SVN system?** ####

A: Many, but I use Eclipse with the [Subclipse plug-in](http://subclipse.tigris.org/servlets/ProjectProcess;jsessionid=7446EF751264D8387D0992E8EDB816A5?pageID=p4wYuA).

#### **Q: But how can I actually use SVN with Eclipse?** ####

A: Well, IBM explained it [here](http://www.ibm.com/developerworks/opensource/library/os-ecl-subversion/).
Or you just come to your project folder in Eclipse and right-click on Team>. Everything is in the menu.

#### **Q: What is the official language of the project?** ####

A: Try to use English as much as possible. You can use Vietnamese but you may have to explain some terms in English.

#### **Q: How to use this Google code page?** ####

A: Read this [support](http://code.google.com/support/). The main idea is that you refer to the:
  * "Downloads" tab for up/download documents,
  * "Wiki" tab for read/write/share common things of the project (such as to update this FAQ with your questions and answers),
  * "Issue" tab for opening issues/problems of the codes,
  * "Source" tab for browsing the codes and their updates.

#### **Q: How can I communicate with the team?** ####

A: Send emails to evalsvc-n-multip2p(at)googlegroups.com.

#### **Q: What criteria of ALM do we need to consider when choosing appropriate mechanism for this multicast project?** ####

A: The target application is a video conference service built on the P2P overlay network. We'll find many more criteria along the way, but I think, these are some basic requirements for our multicast algorithm:
  * Real-time, many-to-many, multimedia communication,
  * Managing as many peers as possible joining/leaving the multicast tree,
  * Dynamic routings,
  * Smallest signalling,
  * ... (to be updated)