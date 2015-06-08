#ANDES Lab - University of California, Merced
#Author: UCM ANDES Lab
#$Author: abeltran2 $
#$LastChangedDate: 2014-08-31 16:06:26 -0700 (Sun, 31 Aug 2014) $
#! /usr/bin/python

import sys

from TOSSIM import *
from packet import *

t = Tossim([])
r = t.radio()
numMote = 0

# Load a topo file and use it.
def loadTopo(topoFile):
   print 'Creating Topo!'
   # Read topology file.
   topoFile = 'topo/'+topoFile
   f = open(topoFile, "r")
   global numMote
   numMote = int(f.readline());

   print 'Number of Motes', numMote

   for line in f:
      s = line.split()
      if s:
         print " ", s[0], " ", s[1], " ", s[2];
         r.add(int(s[0]), int(s[1]), float(s[2]))

# Load a noise file and apply it.
def loadNoise(noiseFile):
   if numMote == 0:
      print "Create a topo first"
      exit();
   # Get and Create a Noise Model
   noiseFile = 'noise/'+noiseFile;
   noise = open(noiseFile, "r")
   for line in noise:
      str1 = line.strip()
      if str1:
         val = int(str1)
      for i in range(1, numMote+1):
         t.getNode(i).addNoiseTraceReading(val)

   for i in range(1, numMote+1):
      print "Creating noise model for ",i;
      t.getNode(i).createNoiseModel()
      
def loadNoiseMote(noiseFile, nodeID):
   if numMote == 0:
      print "Create a topo first"
      exit();
   # Get and Create a Noise Model
   noiseFile = 'noise/'+noiseFile;
   noise = open(noiseFile, "r")
   for line in noise:
      str1 = line.strip()
      if str1:
         val = int(str1)
         t.getNode(nodeID).addNoiseTraceReading(val)

   print "Creating noise model for ",nodeID;
   t.getNode(nodeID).createNoiseModel()

def bootNode(nodeID):
   if numMote == 0:
      print "Create a topo first"
      exit();

   t.getNode(nodeID).bootAtTime(1333*nodeID);

def bootAll():
   i=0;
   for i in range(1, numMote+1):
      bootNode(i);

def moteOff(nodeID):
   t.getNode(nodeID).turnOff();

def moteOn(nodeID):
   t.getNode(nodeID).turnOn();

def package(string):
 	ints = []
	for c in string:
		ints.append(ord(c))
	return ints

def run(ticks):
	for i in range(ticks):
		t.runNextEvent()

# Rough run time. tickPerSecond does not work.
def runTime(amount):
   i=0
   while i<amount*1000:
      t.runNextEvent() 
      i=i+1

#Create a Command Packet
msg = pack()
msg.set_seq(0)
msg.set_TTL(15)
msg.set_protocol(99)

pkt = t.newPacket()
pkt.setData(msg.data)
pkt.setType(msg.get_amType())

# COMMAND TYPES
CMD_PING = "0"
CMD_NEIGHBOR_DUMP = "1"
CMD_LS_DUMP = "2"
CMD_ROUTE_DUMP = "3"
CMD_TEST_CLIENT = "4"
CMD_TEST_SERVER = "5"
CMD_KILL = "6"
CMD_MESSAGE = "7"

# Generic Command
def sendCMD(string):
   args = string.split(' ');
   msg.set_src(int(args[0]));
   msg.set_dest(int(args[0]));
   msg.set_protocol(99);
   payload=args[1]

   for i in range(2, len(args)):
      payload= payload + ' '+ args[i]
	
   msg.setString_payload(payload)
   
   pkt.setData(msg.data)
   pkt.setDestination(int(args[0]))
   
   pkt.deliver(int(args[0]), t.time()+5)

def cmdPing(source, destination, msg):
   dest = chr(int(destination));
   sendCMD(source +" "+ CMD_PING + dest + msg);

def cmdNeighborDMP(destination):
   sendCMD(str(destination) +" "+ CMD_NEIGHBOR_DUMP);
   
def cmdLSDMP(destination):
    sendCMD(str(destination) + " " + CMD_LS_DUMP);

def cmdTestServer(server_addr, server_port):
    server_port = chr(server_port);
    sendCMD(str(server_addr) +" "+ CMD_TEST_SERVER + str(server_port));
    
def cmdTestClient(client_addr, client_port, dest_addr, dest_port, transfer):
    upper = transfer >> 8;
    lower = transfer & 0x00FF;
    client_port = chr(client_port);
    dest_addr = chr(dest_addr);
    dest_port = chr(dest_port);
    transfer = chr(upper)+chr(lower);
    sendCMD(str(client_addr) +" "+ CMD_TEST_CLIENT + str(client_port) + str(dest_addr) + str(dest_port) + str(transfer));

def cmdClientMessage(client_addr, client_port, dest_addr, dest_port, message):
    k = 0;
    client_port = chr(client_port);
    dest_addr = chr(dest_addr);
    dest_port = chr(dest_port);
    
    while(k < len(message)):
        tmpMessage = '';
        min = 14;
        if (min < (len(message) - k)):
            min = min;
        else:
            min = len(message) - k;
        for j in range (0, min):
            tmpMessage += message[k];
            k += 1;
        k -= 1;
        size = chr(len(tmpMessage));
        
        sendCMD(str(client_addr) +" "+ CMD_MESSAGE + str(client_port) + str(dest_addr) + str(dest_port) + str(size) + str(tmpMessage));
        runTime(30);
        k += 1;
    
def cmdClientClose(client_addr, client_port, dest_addr, dest_port):
    client_port = chr(client_port);
    dest_addr = chr(dest_addr);
    dest_port = chr(dest_port);
    sendCMD(str(client_addr) +" "+ CMD_KILL + str(client_port) + str(dest_addr) + str(dest_port));

def cmdRouteDMP(destination):
   sendCMD(str(destination) +" "+ CMD_ROUTE_DUMP);

def addChannel(channelName):
   print 'Adding Channel', channelName;
   t.addChannel(channelName, sys.stdout);

#runTime(10);

#loadTopo("long_line.topo");
#loadTopo("topo2.topo");
loadTopo("pizza.topo");
#loadTopo("well_connected.topo");

#loadNoise("no_noise.txt");
#loadNoise("heavy_noise_10_.txt");
#loadNoise("heavy_noise_30_.txt");

loadNoiseMote("heavy_noise_10_.txt", 1);
loadNoiseMote("heavy_noise_10_.txt", 2);
loadNoiseMote("heavy_noise_10_.txt", 3);
loadNoiseMote("heavy_noise_10_.txt", 4);
loadNoiseMote("heavy_noise_10_.txt", 5);
loadNoiseMote("heavy_noise_10_.txt", 6);
loadNoiseMote("heavy_noise_10_.txt", 7);
loadNoiseMote("heavy_noise_10_.txt", 8);
loadNoiseMote("heavy_noise_10_.txt", 9);
loadNoiseMote("heavy_noise_10_.txt", 10);
loadNoiseMote("heavy_noise_10_.txt", 11);
loadNoiseMote("heavy_noise_10_.txt", 12);

bootAll();
#addChannel("cmdDebug");
#addChannel("genDebug");
#addChannel("Project1F");
#addChannel("Project1N");
#addChannel("Project2");
#addChannel("Project3TGen");
#addChannel("Project4Gen");
addChannel("Project4Clean");

runTime(30);

cmdTestServer(9, 41);
runTime(30);

cmdTestClient(7, 70, 9, 41, 2);
runTime(30);

cmdTestClient(1, 10, 9, 41, 2);
runTime(30);

cmdTestClient(6, 60, 9, 41, 2);
runTime(30);



cmdClientMessage(7, 70, 9, 41, "hello lemons22 70\r\n");
runTime(100);

cmdClientMessage(1, 10, 9, 41, "hello longusernamemcgee1993 10\r\n");
runTime(100);

cmdClientMessage(6, 60, 9, 41, "hello chocolateduck 60\r\n");
runTime(100);

cmdClientMessage(7, 70, 9, 41, "msg Hey guys, how's it going?\r\n");
runTime(150);

cmdClientMessage(7, 70, 9, 41, "listusr\r\n");
runTime(150);

cmdClientMessage(1, 10, 9, 41, "msg Pretty good! 123456789123456789123456789123456789123456789123456789123456789123456789123456789123456789\r\n");
runTime(150);

cmdClientMessage(1, 10, 9, 41, "whisper chocolateduck It's actually pretty bad... :(\r\n");
runTime(150);

cmdClientMessage(6, 60, 9, 41, "whisper longusernamemcgee1993 That is actually pretty unfortunate that you are not doing pretty good... @(T.T)@\r\n");
runTime(150);



#cmdClientClose(7, 70, 9, 41);
#runTime(30);

#cmdClientClose(1, 10, 9, 41);
#runTime(30);

#cmdClientClose(6, 60, 9, 41);
#runTime(50);





