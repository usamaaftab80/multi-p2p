  * **To save our time and to achieve the best results of the project, everyone should try to at least finish his part at his best responsibility**,
  * **Le Ngo Anh Cat** <lengoanhcat@gmail.com> is the main Researcher & Developer of the "Multi-P2P" project. Le Tien Anh <letienanh@gmail.com> and Nguyen Quang Hoang <hoangnq@gmail.com> will follow his research and verify his developments,
  * Meetings will be held once every two even weeks of a month via Dimdim.com. During a meeting, a presentation regarding the work progress will be made,
  * In order to close the project, 3 Work Packages (WPs) are to be finished. Outputs of WPs are Deliverables (Ds) including documents, executable binaries and source/simulation codes.
  * We (the development team, including AnhLT, HoangNQ, CatLNA) confirm that:

  1. All codes, deliverables, documents developed by the group, will be opened, everyone can use them at their own risk. The only requirement is to refer to the development group when using them (according to GPL: http://www.gnu.org/licenses/gpl.html).
  1. When using the main ideas (e.g. Evalvid supports svc, ALM supports svc, vic supports svc, mp4box supports svc, Evalvid supports OverSim?...), one has to refer to the paper(s) provided by Le Tien Anh.
  1. If, during the development process, CatLNA or HoangNQ invent a new idea (clearly stated in the deliverables), other will have to refer to the inventor when using it.

# Multi-P2P Work Packages (WPs) and Deliverables (Ds) #
  * Inside the svn tree, you will find the necessary source codes for your development. The "Deliverables" folder is reserved for the storage of deliverable/output documents and/or source/simulation codes of different WPs. You can upload, edit drafts of your deliverables in this folder.
  * You can check-out source codes, make necessary changes and then commit them back to the svn system under the same directory. No need to create a brand new folder. After finishing all changes, you can upload the final/draft version of your code to the appropriate Deliverables folder.
## WP1: Background knowledges ##
  1. D1.1 (document): Understanding main DHT overlay algorithms (Chord, Pastry, Tapastry),
  1. D1.2 (document): Understanding IP-multicasting and main Application Level Multicasting algorithms(Scribe, ESM),
  1. D1.3 (document): Understanding overlay simulation using OverSim.

## WP2: Building P2P communities on a DHT overlay and an ALM algorithm and bring that community to the PlanetLab ##
  1. D2.1 (document/executable binaries/source codes): Building a community peer software (with proper GUI) which can:
    * Put/get keys to the Harsh table,
    * Save/distribute small files into the overlay,
    * A peer can create, join (a) group(s) with a "group name/topic" within the p2p community,
    * Each peer in a group can be notified with new event (eventing), can join/disjoin, subscribe/un-subscribe to/from that group.
  1. D2.2 (document/executable binaries/source codes) The community can be deployed worldwide on the PlanetLab.

## WP3: Building a video conference service using vic (and other tools) on top of the P2P communities which have been built in WP2 ##
  1. D3.1 (document/executable binaries/source codes) A video conference service (vic) on top of a multicast-enabled P2P overlay. Vic should support ALM not only IP-Multicast,
  1. D3.2 (document/simulation codes) Simulation of multicasting video streams on top of a multicast-enabled P2P overlay using OverSim.

# Milestones #
http://projects.zoho.com/portal/mpeg4card/