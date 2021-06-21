class CF_ScrollWidget : CF_SpacerBaseWidget
{
	reference string ScrollbarWidth;
	reference string ContentWidth;
	reference string ContentHeight;
	reference string HorizontalScrollPosition;
	reference string VerticalScrollPosition;
	reference string HorizontalScrollStep;
	reference string VerticalScrollStep;

	protected ScrollWidget _ScrollWidget;
	protected float _HorizontalScrollStep;
	protected float _VerticalScrollStep;

	override void OnWidgetScriptInit(Widget w)
	{
		super.OnWidgetScriptInit(w);
		Class.CastTo(_ScrollWidget, w);
	}

	void OnView_ScrollbarWidth(CF_Model_Base model)
	{
		EnScript.SetClassVar(model, ScrollbarWidth, 0, _ScrollWidget.GetScrollbarWidth());
	}

	void OnModel_ScrollbarWidth(CF_Model_Base model)
	{
		OnView_ScrollbarWidth(model);
	}

	void OnView_ContentWidth(CF_Model_Base model)
	{
		EnScript.SetClassVar(model, ContentWidth, 0, _ScrollWidget.GetContentWidth());
	}

	void OnModel_ContentWidth(CF_Model_Base model)
	{
		OnView_ContentWidth(model);
	}

	void OnView_ContentHeight(CF_Model_Base model)
	{
		EnScript.SetClassVar(model, ContentHeight, 0, _ScrollWidget.GetContentHeight());
	}

	void OnModel_ContentHeight(CF_Model_Base model)
	{
		OnView_ContentHeight(model);
	}

	void OnView_HorizontalScrollPosition(CF_Model_Base model)
	{
		float _value = _ScrollWidget.GetHScrollPos();
		EnScript.SetClassVar(model, HorizontalScrollPosition, 0, _value);
	}

	void OnModel_HorizontalScrollPosition(CF_Model_Base model)
	{
		float _value;
		EnScript.GetClassVar(model, HorizontalScrollPosition, 0, _value);
		_ScrollWidget.HScrollToPos(_value);
	}

	void OnView_VerticalScrollPosition(CF_Model_Base model)
	{
		float _value = _ScrollWidget.GetVScrollPos();
		EnScript.SetClassVar(model, VerticalScrollPosition, 0, _value);
	}

	void OnModel_VerticalScrollPosition(CF_Model_Base model)
	{
		float _value;
		EnScript.GetClassVar(model, VerticalScrollPosition, 0, _value);
		_ScrollWidget.VScrollToPos(_value);
	}

	void OnView_HorizontalScrollStep(CF_Model_Base model)
	{
		EnScript.SetClassVar(model, HorizontalScrollStep, 0, _HorizontalScrollStep);
	}

	void OnModel_HorizontalScrollStep(CF_Model_Base model)
	{
		EnScript.GetClassVar(model, HorizontalScrollStep, 0, _HorizontalScrollStep);
		_ScrollWidget.HScrollStep(_HorizontalScrollStep);
	}

	void OnView_VerticalScrollStep(CF_Model_Base model)
	{
		EnScript.SetClassVar(model, VerticalScrollStep, 0, _VerticalScrollStep);
	}

	void OnModel_VerticalScrollStep(CF_Model_Base model)
	{
		EnScript.GetClassVar(model, VerticalScrollStep, 0, _VerticalScrollStep);
		_ScrollWidget.VScrollStep(_VerticalScrollStep);
	}
};