class CF_SpacerWidget : CF_SpacerBaseWidget
{
	reference string ContentAlignmentHorizontal;
	reference string ContentAlignmentVertical;

	private SpacerWidget _SpacerWidget;

	override void OnWidgetScriptInit(Widget w)
	{
		super.OnWidgetScriptInit(w);
		Class.CastTo(_SpacerWidget, w);
	}
	
	override void GetProperties()
	{
		super.GetProperties();

		AddProperty(ContentAlignmentHorizontal, "ContentAlignmentHorizontal");
		AddProperty(ContentAlignmentVertical, "ContentAlignmentVertical");
	}

	void OnView_ContentAlignmentHorizontal(Class model)
	{
		int _contentAlignmentH = _SpacerWidget.GetContentAlignmentH();
		EnScript.SetClassVar(model, ContentAlignmentHorizontal, 0, _contentAlignmentH);
	}

	void OnModel_ContentAlignmentHorizontal(Class model)
	{
		int _contentAlignmentH;
		EnScript.GetClassVar(model, ContentAlignmentHorizontal, 0, _contentAlignmentH);
		_SpacerWidget.SetContentAlignmentH(_contentAlignmentH);
	}

	void OnView_ContentAlignmentVertical(Class model)
	{
		int _contentAlignmentV = _SpacerWidget.GetContentAlignmentV();
		EnScript.SetClassVar(model, ContentAlignmentVertical, 0, _contentAlignmentV);
	}

	void OnModel_ContentAlignmentVertical(Class model)
	{
		int _contentAlignmentV;
		EnScript.GetClassVar(model, ContentAlignmentVertical, 0, _contentAlignmentV);
		_SpacerWidget.SetContentAlignmentV(_contentAlignmentV);
	}
};