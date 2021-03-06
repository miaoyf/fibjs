/***************************************************************************
 *                                                                         *
 *   This file was automatically generated using idlc.js                   *
 *   PLEASE DO NOT EDIT!!!!                                                *
 *                                                                         *
 ***************************************************************************/

#ifndef _XmlNamedNodeMap_base_H_
#define _XmlNamedNodeMap_base_H_

/**
 @author Leo Hoo <lion@9465.net>
 */

#include "../object.h"

namespace fibjs
{

class XmlAttr_base;

class XmlNamedNodeMap_base : public object_base
{
	DECLARE_CLASS(XmlNamedNodeMap_base);

public:
	// XmlNamedNodeMap_base
	virtual result_t get_length(int32_t& retVal) = 0;
	virtual result_t item(int32_t index, obj_ptr<XmlAttr_base>& retVal) = 0;
	virtual result_t _indexed_getter(uint32_t index, obj_ptr<XmlAttr_base>& retVal) = 0;
	virtual result_t getNamedItem(const char* name, obj_ptr<XmlAttr_base>& retVal) = 0;

public:
	static void s_get_length(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value> &args);
	static void s_item(const v8::FunctionCallbackInfo<v8::Value>& args);
	static void i_IndexedGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value> &args);
	static void s_getNamedItem(const v8::FunctionCallbackInfo<v8::Value>& args);
};

}

#include "XmlAttr.h"

namespace fibjs
{
	inline ClassInfo& XmlNamedNodeMap_base::class_info()
	{
		static ClassData::ClassMethod s_method[] = 
		{
			{"item", s_item},
			{"getNamedItem", s_getNamedItem}
		};

		static ClassData::ClassProperty s_property[] = 
		{
			{"length", s_get_length, block_set}
		};

		static ClassData::ClassIndexed s_indexed = 
		{
			i_IndexedGetter, i_IndexedSetter
		};

		static ClassData s_cd = 
		{ 
			"XmlNamedNodeMap", NULL, 
			2, s_method, 0, NULL, 1, s_property, &s_indexed, NULL,
			&object_base::class_info()
		};

		static ClassInfo s_ci(s_cd);
		return s_ci;
	}

	inline void XmlNamedNodeMap_base::s_get_length(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value> &args)
	{
		int32_t vr;

		PROPERTY_ENTER();
		PROPERTY_INSTANCE(XmlNamedNodeMap_base);

		hr = pInst->get_length(vr);

		METHOD_RETURN();
	}

	inline void XmlNamedNodeMap_base::i_IndexedGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value> &args)
	{
		obj_ptr<XmlAttr_base> vr;

		PROPERTY_ENTER();
		PROPERTY_INSTANCE(XmlNamedNodeMap_base);

		hr = pInst->_indexed_getter(index, vr);

		METHOD_RETURN();
	}

	inline void XmlNamedNodeMap_base::s_item(const v8::FunctionCallbackInfo<v8::Value>& args)
	{
		obj_ptr<XmlAttr_base> vr;

		METHOD_INSTANCE(XmlNamedNodeMap_base);
		METHOD_ENTER(1, 1);

		ARG(int32_t, 0);

		hr = pInst->item(v0, vr);

		METHOD_RETURN();
	}

	inline void XmlNamedNodeMap_base::s_getNamedItem(const v8::FunctionCallbackInfo<v8::Value>& args)
	{
		obj_ptr<XmlAttr_base> vr;

		METHOD_INSTANCE(XmlNamedNodeMap_base);
		METHOD_ENTER(1, 1);

		ARG(arg_string, 0);

		hr = pInst->getNamedItem(v0, vr);

		METHOD_RETURN();
	}

}

#endif

