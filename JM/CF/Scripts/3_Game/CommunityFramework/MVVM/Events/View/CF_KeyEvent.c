class CF_KeyEvent : CF_PositionEvent
{
	int Key;
	CF_KeyState State;

	override string String()
	{
		string str = super.String();
		str += " Key=" + Key;
		str += " State=" + State;
		return str;
	}
};