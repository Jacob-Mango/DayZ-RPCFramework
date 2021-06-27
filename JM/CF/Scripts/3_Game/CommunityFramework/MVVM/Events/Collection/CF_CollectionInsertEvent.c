class CF_CollectionInsertEvent : CF_CollectionEvent
{
	int Index;

	void CF_CollectionInsertEvent(int index)
	{
		Index = index;
	}

	override string String()
	{
		string str = super.String();
		str += " Index=" + Index;
		return str;
	}

	override void Process(CF_MVVM_View view, CF_ModelBase model, CF_ObservableCollection collection)
	{
		CF_Trace trace(this, "Process", "" + model, "" + collection, String());

		view.OnModel_Children_Insert(collection, this);
	}
};