interface PacketInfo
{
	command uint16_t getSeq();
	
	command void incSeq();
}