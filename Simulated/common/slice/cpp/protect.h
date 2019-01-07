// **********************************************************************
//
// Copyright (c) 2003-2017 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.4
//
// <auto-generated>
//
// Generated from file `protect.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __protect_h__
#define __protect_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/GCObject.h>
#include <Ice/AsyncResult.h>
#include <Ice/Incoming.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 306
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 4
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace Protect
{

class CProtectApp;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Protect::CProtectApp>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Protect::CProtectApp*);

class CProtectFep;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Protect::CProtectFep>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Protect::CProtectFep*);

}

}

namespace Protect
{

class CProtectApp;
::Ice::Object* upCast(::Protect::CProtectApp*);
typedef ::IceInternal::Handle< ::Protect::CProtectApp> CProtectAppPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Protect::CProtectApp> CProtectAppPrx;
void __patch(CProtectAppPtr&, const ::Ice::ObjectPtr&);

class CProtectFep;
::Ice::Object* upCast(::Protect::CProtectFep*);
typedef ::IceInternal::Handle< ::Protect::CProtectFep> CProtectFepPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Protect::CProtectFep> CProtectFepPrx;
void __patch(CProtectFepPtr&, const ::Ice::ObjectPtr&);

}

namespace Protect
{

enum OPERTYPE
{
    READSETTING = 0,
    WRITESETTING = 1,
    READGROUPNO = 2,
    SWITCHGROUP = 3,
    PROTECTRESET = 4
};

typedef ::std::vector< ::Ice::Byte> Bytes;

struct ProtectValueInfo
{
    ::Ice::Short UnitNo;
    ::Ice::Short ProLine;
    ::Protect::OPERTYPE OperType;
    ::Ice::Short FuncCode;
    ::Ice::Short GroupNo;
    ::Ice::Short ProNum;
    ::Ice::Short ProMax;
    ::Ice::Int requestId;
    ::Protect::Bytes Vals;
};

const ::std::string ProtectValueAppTopic = "protectvalue_app_operation";

const ::std::string ProtectValueFepTopic = "protectvalue_fep_operation";

}

namespace Ice
{
template<>
struct StreamableTraits< ::Protect::OPERTYPE>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 4;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

template<>
struct StreamableTraits< ::Protect::ProtectValueInfo>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 18;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::Protect::ProtectValueInfo, S>
{
    static void write(S* __os, const ::Protect::ProtectValueInfo& v)
    {
        __os->write(v.UnitNo);
        __os->write(v.ProLine);
        __os->write(v.OperType);
        __os->write(v.FuncCode);
        __os->write(v.GroupNo);
        __os->write(v.ProNum);
        __os->write(v.ProMax);
        __os->write(v.requestId);
        __os->write(v.Vals);
    }
};

template<class S>
struct StreamReader< ::Protect::ProtectValueInfo, S>
{
    static void read(S* __is, ::Protect::ProtectValueInfo& v)
    {
        __is->read(v.UnitNo);
        __is->read(v.ProLine);
        __is->read(v.OperType);
        __is->read(v.FuncCode);
        __is->read(v.GroupNo);
        __is->read(v.ProNum);
        __is->read(v.ProMax);
        __is->read(v.requestId);
        __is->read(v.Vals);
    }
};

}

namespace Protect
{

class Callback_CProtectApp_processProtectSetting_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_CProtectApp_processProtectSetting_Base> Callback_CProtectApp_processProtectSettingPtr;

class Callback_CProtectFep_ProtectSettingExecute_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_CProtectFep_ProtectSettingExecute_Base> Callback_CProtectFep_ProtectSettingExecutePtr;

}

namespace IceProxy
{

namespace Protect
{

class CProtectApp : virtual public ::IceProxy::Ice::Object
{
public:

    void processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo)
    {
        processProtectSetting(__p_psInfo, 0);
    }
    void processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx)
    {
        processProtectSetting(__p_psInfo, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_processProtectSetting(__p_psInfo, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_processProtectSetting(__p_psInfo, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_processProtectSetting(__p_psInfo, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_processProtectSetting(__p_psInfo, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo)
    {
        return begin_processProtectSetting(__p_psInfo, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx)
    {
        return begin_processProtectSetting(__p_psInfo, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_processProtectSetting(__p_psInfo, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_processProtectSetting(__p_psInfo, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Protect::Callback_CProtectApp_processProtectSettingPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_processProtectSetting(__p_psInfo, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_processProtectSetting(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx, const ::Protect::Callback_CProtectApp_processProtectSettingPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_processProtectSetting(__p_psInfo, &__ctx, __del, __cookie);
    }

    void end_processProtectSetting(const ::Ice::AsyncResultPtr&);
    
private:

    void processProtectSetting(const ::Protect::ProtectValueInfo&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_processProtectSetting(const ::Protect::ProtectValueInfo&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_secure(bool __secure) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_invocationTimeout(int __timeout) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_invocationTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_twoway() const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_oneway() const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_batchOneway() const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_datagram() const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_batchDatagram() const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_compress(bool __compress) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectApp> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<CProtectApp*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CProtectFep : virtual public ::IceProxy::Ice::Object
{
public:

    void ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo)
    {
        ProtectSettingExecute(__p_psInfo, 0);
    }
    void ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx)
    {
        ProtectSettingExecute(__p_psInfo, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_ProtectSettingExecute(__p_psInfo, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_ProtectSettingExecute(__p_psInfo, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_ProtectSettingExecute(__p_psInfo, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_ProtectSettingExecute(__p_psInfo, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo)
    {
        return begin_ProtectSettingExecute(__p_psInfo, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx)
    {
        return begin_ProtectSettingExecute(__p_psInfo, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_ProtectSettingExecute(__p_psInfo, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_ProtectSettingExecute(__p_psInfo, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Protect::Callback_CProtectFep_ProtectSettingExecutePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_ProtectSettingExecute(__p_psInfo, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo& __p_psInfo, const ::Ice::Context& __ctx, const ::Protect::Callback_CProtectFep_ProtectSettingExecutePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_ProtectSettingExecute(__p_psInfo, &__ctx, __del, __cookie);
    }

    void end_ProtectSettingExecute(const ::Ice::AsyncResultPtr&);
    
private:

    void ProtectSettingExecute(const ::Protect::ProtectValueInfo&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_ProtectSettingExecute(const ::Protect::ProtectValueInfo&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_secure(bool __secure) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_invocationTimeout(int __timeout) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_invocationTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_twoway() const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_oneway() const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_batchOneway() const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_datagram() const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_batchDatagram() const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_compress(bool __compress) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CProtectFep> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<CProtectFep*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace Protect
{

class CProtectApp : virtual public ::Ice::Object
{
public:

    typedef CProtectAppPrx ProxyType;
    typedef CProtectAppPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void processProtectSetting(const ::Protect::ProtectValueInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___processProtectSetting(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
};

inline bool operator==(const CProtectApp& l, const CProtectApp& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const CProtectApp& l, const CProtectApp& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

class CProtectFep : virtual public ::Ice::Object
{
public:

    typedef CProtectFepPrx ProxyType;
    typedef CProtectFepPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void ProtectSettingExecute(const ::Protect::ProtectValueInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___ProtectSettingExecute(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
};

inline bool operator==(const CProtectFep& l, const CProtectFep& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const CProtectFep& l, const CProtectFep& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace Protect
{

template<class T>
class CallbackNC_CProtectApp_processProtectSetting : public Callback_CProtectApp_processProtectSetting_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_CProtectApp_processProtectSetting(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_CProtectApp_processProtectSettingPtr
newCallback_CProtectApp_processProtectSetting(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CProtectApp_processProtectSetting<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_CProtectApp_processProtectSettingPtr
newCallback_CProtectApp_processProtectSetting(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CProtectApp_processProtectSetting<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_CProtectApp_processProtectSettingPtr
newCallback_CProtectApp_processProtectSetting(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CProtectApp_processProtectSetting<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_CProtectApp_processProtectSettingPtr
newCallback_CProtectApp_processProtectSetting(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CProtectApp_processProtectSetting<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_CProtectApp_processProtectSetting : public Callback_CProtectApp_processProtectSetting_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_CProtectApp_processProtectSetting(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_CProtectApp_processProtectSettingPtr
newCallback_CProtectApp_processProtectSetting(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CProtectApp_processProtectSetting<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_CProtectApp_processProtectSettingPtr
newCallback_CProtectApp_processProtectSetting(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CProtectApp_processProtectSetting<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_CProtectApp_processProtectSettingPtr
newCallback_CProtectApp_processProtectSetting(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CProtectApp_processProtectSetting<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_CProtectApp_processProtectSettingPtr
newCallback_CProtectApp_processProtectSetting(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CProtectApp_processProtectSetting<T, CT>(instance, 0, excb, sentcb);
}

template<class T>
class CallbackNC_CProtectFep_ProtectSettingExecute : public Callback_CProtectFep_ProtectSettingExecute_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_CProtectFep_ProtectSettingExecute(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_CProtectFep_ProtectSettingExecutePtr
newCallback_CProtectFep_ProtectSettingExecute(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CProtectFep_ProtectSettingExecute<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_CProtectFep_ProtectSettingExecutePtr
newCallback_CProtectFep_ProtectSettingExecute(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CProtectFep_ProtectSettingExecute<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_CProtectFep_ProtectSettingExecutePtr
newCallback_CProtectFep_ProtectSettingExecute(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CProtectFep_ProtectSettingExecute<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_CProtectFep_ProtectSettingExecutePtr
newCallback_CProtectFep_ProtectSettingExecute(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CProtectFep_ProtectSettingExecute<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_CProtectFep_ProtectSettingExecute : public Callback_CProtectFep_ProtectSettingExecute_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_CProtectFep_ProtectSettingExecute(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_CProtectFep_ProtectSettingExecutePtr
newCallback_CProtectFep_ProtectSettingExecute(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CProtectFep_ProtectSettingExecute<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_CProtectFep_ProtectSettingExecutePtr
newCallback_CProtectFep_ProtectSettingExecute(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CProtectFep_ProtectSettingExecute<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_CProtectFep_ProtectSettingExecutePtr
newCallback_CProtectFep_ProtectSettingExecute(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CProtectFep_ProtectSettingExecute<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_CProtectFep_ProtectSettingExecutePtr
newCallback_CProtectFep_ProtectSettingExecute(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CProtectFep_ProtectSettingExecute<T, CT>(instance, 0, excb, sentcb);
}

}

#include <IceUtil/PopDisableWarnings.h>
#endif
