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
// Generated from file `subscribedata.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __cpp_subscribedata_h__
#define __cpp_subscribedata_h__

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

namespace SubData
{

class SubscribeDataInfo;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::SubData::SubscribeDataInfo>&);
::IceProxy::Ice::Object* upCast(::IceProxy::SubData::SubscribeDataInfo*);

}

}

namespace SubData
{

class SubscribeDataInfo;
::Ice::Object* upCast(::SubData::SubscribeDataInfo*);
typedef ::IceInternal::Handle< ::SubData::SubscribeDataInfo> SubscribeDataInfoPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::SubData::SubscribeDataInfo> SubscribeDataInfoPrx;
void __patch(SubscribeDataInfoPtr&, const ::Ice::ObjectPtr&);

}

namespace SubData
{

struct DataInfo
{
    ::std::string modulename;
    bool isSubscribe;

    bool operator==(const DataInfo& __rhs) const
    {
        if(this == &__rhs)
        {
            return true;
        }
        if(modulename != __rhs.modulename)
        {
            return false;
        }
        if(isSubscribe != __rhs.isSubscribe)
        {
            return false;
        }
        return true;
    }

    bool operator<(const DataInfo& __rhs) const
    {
        if(this == &__rhs)
        {
            return false;
        }
        if(modulename < __rhs.modulename)
        {
            return true;
        }
        else if(__rhs.modulename < modulename)
        {
            return false;
        }
        if(isSubscribe < __rhs.isSubscribe)
        {
            return true;
        }
        else if(__rhs.isSubscribe < isSubscribe)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const DataInfo& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const DataInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const DataInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const DataInfo& __rhs) const
    {
        return !operator<(__rhs);
    }
};

struct PartSec
{
    ::std::string partition;
    ::std::string section;

    bool operator==(const PartSec& __rhs) const
    {
        if(this == &__rhs)
        {
            return true;
        }
        if(partition != __rhs.partition)
        {
            return false;
        }
        if(section != __rhs.section)
        {
            return false;
        }
        return true;
    }

    bool operator<(const PartSec& __rhs) const
    {
        if(this == &__rhs)
        {
            return false;
        }
        if(partition < __rhs.partition)
        {
            return true;
        }
        else if(__rhs.partition < partition)
        {
            return false;
        }
        if(section < __rhs.section)
        {
            return true;
        }
        else if(__rhs.section < section)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const PartSec& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const PartSec& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const PartSec& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const PartSec& __rhs) const
    {
        return !operator<(__rhs);
    }
};

const ::std::string SubscribeDataTopic = "subscribe_data";

}

namespace Ice
{
template<>
struct StreamableTraits< ::SubData::DataInfo>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::SubData::DataInfo, S>
{
    static void write(S* __os, const ::SubData::DataInfo& v)
    {
        __os->write(v.modulename);
        __os->write(v.isSubscribe);
    }
};

template<class S>
struct StreamReader< ::SubData::DataInfo, S>
{
    static void read(S* __is, ::SubData::DataInfo& v)
    {
        __is->read(v.modulename);
        __is->read(v.isSubscribe);
    }
};

template<>
struct StreamableTraits< ::SubData::PartSec>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::SubData::PartSec, S>
{
    static void write(S* __os, const ::SubData::PartSec& v)
    {
        __os->write(v.partition);
        __os->write(v.section);
    }
};

template<class S>
struct StreamReader< ::SubData::PartSec, S>
{
    static void read(S* __is, ::SubData::PartSec& v)
    {
        __is->read(v.partition);
        __is->read(v.section);
    }
};

}

namespace SubData
{

class Callback_SubscribeDataInfo_procSub_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_SubscribeDataInfo_procSub_Base> Callback_SubscribeDataInfo_procSubPtr;

class Callback_SubscribeDataInfo_refreshParam_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_SubscribeDataInfo_refreshParam_Base> Callback_SubscribeDataInfo_refreshParamPtr;

}

namespace IceProxy
{

namespace SubData
{

class SubscribeDataInfo : virtual public ::IceProxy::Ice::Object
{
public:

    void procSub(const ::SubData::DataInfo& __p_data)
    {
        procSub(__p_data, 0);
    }
    void procSub(const ::SubData::DataInfo& __p_data, const ::Ice::Context& __ctx)
    {
        procSub(__p_data, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_procSub(const ::SubData::DataInfo& __p_data, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_procSub(__p_data, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_procSub(const ::SubData::DataInfo& __p_data, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_procSub(__p_data, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_procSub(const ::SubData::DataInfo& __p_data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_procSub(__p_data, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_procSub(const ::SubData::DataInfo& __p_data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_procSub(__p_data, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_procSub(const ::SubData::DataInfo& __p_data)
    {
        return begin_procSub(__p_data, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_procSub(const ::SubData::DataInfo& __p_data, const ::Ice::Context& __ctx)
    {
        return begin_procSub(__p_data, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_procSub(const ::SubData::DataInfo& __p_data, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_procSub(__p_data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_procSub(const ::SubData::DataInfo& __p_data, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_procSub(__p_data, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_procSub(const ::SubData::DataInfo& __p_data, const ::SubData::Callback_SubscribeDataInfo_procSubPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_procSub(__p_data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_procSub(const ::SubData::DataInfo& __p_data, const ::Ice::Context& __ctx, const ::SubData::Callback_SubscribeDataInfo_procSubPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_procSub(__p_data, &__ctx, __del, __cookie);
    }

    void end_procSub(const ::Ice::AsyncResultPtr&);
    
private:

    void procSub(const ::SubData::DataInfo&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_procSub(const ::SubData::DataInfo&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    void refreshParam(const ::SubData::PartSec& __p_data)
    {
        refreshParam(__p_data, 0);
    }
    void refreshParam(const ::SubData::PartSec& __p_data, const ::Ice::Context& __ctx)
    {
        refreshParam(__p_data, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_refreshParam(const ::SubData::PartSec& __p_data, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_refreshParam(__p_data, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_refreshParam(const ::SubData::PartSec& __p_data, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_refreshParam(__p_data, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_refreshParam(const ::SubData::PartSec& __p_data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_refreshParam(__p_data, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_refreshParam(const ::SubData::PartSec& __p_data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_refreshParam(__p_data, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_refreshParam(const ::SubData::PartSec& __p_data)
    {
        return begin_refreshParam(__p_data, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_refreshParam(const ::SubData::PartSec& __p_data, const ::Ice::Context& __ctx)
    {
        return begin_refreshParam(__p_data, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_refreshParam(const ::SubData::PartSec& __p_data, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_refreshParam(__p_data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_refreshParam(const ::SubData::PartSec& __p_data, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_refreshParam(__p_data, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_refreshParam(const ::SubData::PartSec& __p_data, const ::SubData::Callback_SubscribeDataInfo_refreshParamPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_refreshParam(__p_data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_refreshParam(const ::SubData::PartSec& __p_data, const ::Ice::Context& __ctx, const ::SubData::Callback_SubscribeDataInfo_refreshParamPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_refreshParam(__p_data, &__ctx, __del, __cookie);
    }

    void end_refreshParam(const ::Ice::AsyncResultPtr&);
    
private:

    void refreshParam(const ::SubData::PartSec&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_refreshParam(const ::SubData::PartSec&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_secure(bool __secure) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_invocationTimeout(int __timeout) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_invocationTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_twoway() const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_oneway() const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_batchOneway() const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_datagram() const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_batchDatagram() const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_compress(bool __compress) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_timeout(int __timeout) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<SubscribeDataInfo> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<SubscribeDataInfo*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace SubData
{

class SubscribeDataInfo : virtual public ::Ice::Object
{
public:

    typedef SubscribeDataInfoPrx ProxyType;
    typedef SubscribeDataInfoPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void procSub(const ::SubData::DataInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___procSub(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void refreshParam(const ::SubData::PartSec&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___refreshParam(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
};

inline bool operator==(const SubscribeDataInfo& l, const SubscribeDataInfo& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const SubscribeDataInfo& l, const SubscribeDataInfo& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace SubData
{

template<class T>
class CallbackNC_SubscribeDataInfo_procSub : public Callback_SubscribeDataInfo_procSub_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_SubscribeDataInfo_procSub(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_SubscribeDataInfo_procSubPtr
newCallback_SubscribeDataInfo_procSub(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SubscribeDataInfo_procSub<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_SubscribeDataInfo_procSubPtr
newCallback_SubscribeDataInfo_procSub(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SubscribeDataInfo_procSub<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_SubscribeDataInfo_procSubPtr
newCallback_SubscribeDataInfo_procSub(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SubscribeDataInfo_procSub<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_SubscribeDataInfo_procSubPtr
newCallback_SubscribeDataInfo_procSub(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SubscribeDataInfo_procSub<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_SubscribeDataInfo_procSub : public Callback_SubscribeDataInfo_procSub_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_SubscribeDataInfo_procSub(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_SubscribeDataInfo_procSubPtr
newCallback_SubscribeDataInfo_procSub(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SubscribeDataInfo_procSub<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_SubscribeDataInfo_procSubPtr
newCallback_SubscribeDataInfo_procSub(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SubscribeDataInfo_procSub<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_SubscribeDataInfo_procSubPtr
newCallback_SubscribeDataInfo_procSub(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SubscribeDataInfo_procSub<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_SubscribeDataInfo_procSubPtr
newCallback_SubscribeDataInfo_procSub(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SubscribeDataInfo_procSub<T, CT>(instance, 0, excb, sentcb);
}

template<class T>
class CallbackNC_SubscribeDataInfo_refreshParam : public Callback_SubscribeDataInfo_refreshParam_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_SubscribeDataInfo_refreshParam(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_SubscribeDataInfo_refreshParamPtr
newCallback_SubscribeDataInfo_refreshParam(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SubscribeDataInfo_refreshParam<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_SubscribeDataInfo_refreshParamPtr
newCallback_SubscribeDataInfo_refreshParam(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SubscribeDataInfo_refreshParam<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_SubscribeDataInfo_refreshParamPtr
newCallback_SubscribeDataInfo_refreshParam(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SubscribeDataInfo_refreshParam<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_SubscribeDataInfo_refreshParamPtr
newCallback_SubscribeDataInfo_refreshParam(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SubscribeDataInfo_refreshParam<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_SubscribeDataInfo_refreshParam : public Callback_SubscribeDataInfo_refreshParam_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_SubscribeDataInfo_refreshParam(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_SubscribeDataInfo_refreshParamPtr
newCallback_SubscribeDataInfo_refreshParam(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SubscribeDataInfo_refreshParam<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_SubscribeDataInfo_refreshParamPtr
newCallback_SubscribeDataInfo_refreshParam(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SubscribeDataInfo_refreshParam<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_SubscribeDataInfo_refreshParamPtr
newCallback_SubscribeDataInfo_refreshParam(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SubscribeDataInfo_refreshParam<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_SubscribeDataInfo_refreshParamPtr
newCallback_SubscribeDataInfo_refreshParam(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SubscribeDataInfo_refreshParam<T, CT>(instance, 0, excb, sentcb);
}

}

#include <IceUtil/PopDisableWarnings.h>
#endif
