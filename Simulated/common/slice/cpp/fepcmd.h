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
// Generated from file `fepcmd.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __fepcmd_h__
#define __fepcmd_h__

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

namespace FepCmd
{

class CCallAllFep;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::FepCmd::CCallAllFep>&);
::IceProxy::Ice::Object* upCast(::IceProxy::FepCmd::CCallAllFep*);

}

}

namespace FepCmd
{

class CCallAllFep;
::Ice::Object* upCast(::FepCmd::CCallAllFep*);
typedef ::IceInternal::Handle< ::FepCmd::CCallAllFep> CCallAllFepPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::FepCmd::CCallAllFep> CCallAllFepPrx;
void __patch(CCallAllFepPtr&, const ::Ice::ObjectPtr&);

}

namespace FepCmd
{

enum OPERTYPE
{
    CALLALLDEV = 0,
    CALLALLMEM = 1
};

struct CallAllInfo
{
    ::Ice::Short UnitNo;
    ::FepCmd::OPERTYPE OperType;

    bool operator==(const CallAllInfo& __rhs) const
    {
        if(this == &__rhs)
        {
            return true;
        }
        if(UnitNo != __rhs.UnitNo)
        {
            return false;
        }
        if(OperType != __rhs.OperType)
        {
            return false;
        }
        return true;
    }

    bool operator<(const CallAllInfo& __rhs) const
    {
        if(this == &__rhs)
        {
            return false;
        }
        if(UnitNo < __rhs.UnitNo)
        {
            return true;
        }
        else if(__rhs.UnitNo < UnitNo)
        {
            return false;
        }
        if(OperType < __rhs.OperType)
        {
            return true;
        }
        else if(__rhs.OperType < OperType)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const CallAllInfo& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const CallAllInfo& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const CallAllInfo& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const CallAllInfo& __rhs) const
    {
        return !operator<(__rhs);
    }
};

const ::std::string CallAllFepTopic = "callall_fep_operation";

}

namespace Ice
{
template<>
struct StreamableTraits< ::FepCmd::OPERTYPE>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 1;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

template<>
struct StreamableTraits< ::FepCmd::CallAllInfo>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 3;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::FepCmd::CallAllInfo, S>
{
    static void write(S* __os, const ::FepCmd::CallAllInfo& v)
    {
        __os->write(v.UnitNo);
        __os->write(v.OperType);
    }
};

template<class S>
struct StreamReader< ::FepCmd::CallAllInfo, S>
{
    static void read(S* __is, ::FepCmd::CallAllInfo& v)
    {
        __is->read(v.UnitNo);
        __is->read(v.OperType);
    }
};

}

namespace FepCmd
{

class Callback_CCallAllFep_CallAllExecute_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_CCallAllFep_CallAllExecute_Base> Callback_CCallAllFep_CallAllExecutePtr;

}

namespace IceProxy
{

namespace FepCmd
{

class CCallAllFep : virtual public ::IceProxy::Ice::Object
{
public:

    void CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo)
    {
        CallAllExecute(__p_caInfo, 0);
    }
    void CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::Ice::Context& __ctx)
    {
        CallAllExecute(__p_caInfo, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_CallAllExecute(__p_caInfo, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_CallAllExecute(__p_caInfo, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_CallAllExecute(__p_caInfo, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_CallAllExecute(__p_caInfo, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo)
    {
        return begin_CallAllExecute(__p_caInfo, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::Ice::Context& __ctx)
    {
        return begin_CallAllExecute(__p_caInfo, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_CallAllExecute(__p_caInfo, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_CallAllExecute(__p_caInfo, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::FepCmd::Callback_CCallAllFep_CallAllExecutePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_CallAllExecute(__p_caInfo, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_CallAllExecute(const ::FepCmd::CallAllInfo& __p_caInfo, const ::Ice::Context& __ctx, const ::FepCmd::Callback_CCallAllFep_CallAllExecutePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_CallAllExecute(__p_caInfo, &__ctx, __del, __cookie);
    }

    void end_CallAllExecute(const ::Ice::AsyncResultPtr&);
    
private:

    void CallAllExecute(const ::FepCmd::CallAllInfo&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_CallAllExecute(const ::FepCmd::CallAllInfo&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_secure(bool __secure) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_invocationTimeout(int __timeout) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_invocationTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_twoway() const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_oneway() const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_batchOneway() const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_datagram() const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_batchDatagram() const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_compress(bool __compress) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CCallAllFep> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<CCallAllFep*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace FepCmd
{

class CCallAllFep : virtual public ::Ice::Object
{
public:

    typedef CCallAllFepPrx ProxyType;
    typedef CCallAllFepPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void CallAllExecute(const ::FepCmd::CallAllInfo&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___CallAllExecute(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
};

inline bool operator==(const CCallAllFep& l, const CCallAllFep& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const CCallAllFep& l, const CCallAllFep& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace FepCmd
{

template<class T>
class CallbackNC_CCallAllFep_CallAllExecute : public Callback_CCallAllFep_CallAllExecute_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_CCallAllFep_CallAllExecute(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_CCallAllFep_CallAllExecutePtr
newCallback_CCallAllFep_CallAllExecute(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CCallAllFep_CallAllExecute<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_CCallAllFep_CallAllExecutePtr
newCallback_CCallAllFep_CallAllExecute(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CCallAllFep_CallAllExecute<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_CCallAllFep_CallAllExecutePtr
newCallback_CCallAllFep_CallAllExecute(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CCallAllFep_CallAllExecute<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_CCallAllFep_CallAllExecutePtr
newCallback_CCallAllFep_CallAllExecute(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CCallAllFep_CallAllExecute<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_CCallAllFep_CallAllExecute : public Callback_CCallAllFep_CallAllExecute_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_CCallAllFep_CallAllExecute(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_CCallAllFep_CallAllExecutePtr
newCallback_CCallAllFep_CallAllExecute(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CCallAllFep_CallAllExecute<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_CCallAllFep_CallAllExecutePtr
newCallback_CCallAllFep_CallAllExecute(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CCallAllFep_CallAllExecute<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_CCallAllFep_CallAllExecutePtr
newCallback_CCallAllFep_CallAllExecute(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CCallAllFep_CallAllExecute<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_CCallAllFep_CallAllExecutePtr
newCallback_CCallAllFep_CallAllExecute(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CCallAllFep_CallAllExecute<T, CT>(instance, 0, excb, sentcb);
}

}

#include <IceUtil/PopDisableWarnings.h>
#endif
