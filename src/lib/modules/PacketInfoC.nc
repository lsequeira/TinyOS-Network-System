module PacketInfoC
{
	provides interface PacketInfo;
}
implementation
{
	static uint16_t Seq = 0;
	
	command uint16_t PacketInfo.getSeq()
	{
		return Seq;
	}
	
	command void PacketInfo.incSeq()
	{
		Seq++;
		
		return;
	}
}