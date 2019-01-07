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
// Generated from file `aml.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <aml.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/PopDisableWarnings.h>

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

namespace
{

const ::std::string __Aml__CAmlRole__GetRole_name = "GetRole";

const ::std::string __Aml__CAmlRole__GetFepRole_name = "GetFepRole";

const ::std::string __Aml__CAmlRole__SetRole_name = "SetRole";

const ::std::string __Aml__CAmlRole__SetConfig_name = "SetConfig";

}

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit< ::Aml::CAmlException> __Aml__CAmlException_init("::Aml::CAmlException");

}

Aml::CAmlException::CAmlException(const ::std::string& __ice_reason) :
    ::Ice::UserException(),
    reason(__ice_reason)
{
}

Aml::CAmlException::~CAmlException() throw()
{
}

::std::string
Aml::CAmlException::ice_name() const
{
    return "Aml::CAmlException";
}

Aml::CAmlException*
Aml::CAmlException::ice_clone() const
{
    return new CAmlException(*this);
}

void
Aml::CAmlException::ice_throw() const
{
    throw *this;
}

void
Aml::CAmlException::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice("::Aml::CAmlException", -1, true);
    __os->write(reason);
    __os->endWriteSlice();
}

void
Aml::CAmlException::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(reason);
    __is->endReadSlice();
}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::Aml::upCast(::IceProxy::Aml::CAmlRole* p) { return p; }

void
::IceProxy::Aml::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Aml::CAmlRole>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Aml::CAmlRole;
        v->__copyFrom(proxy);
    }
}

::std::string
IceProxy::Aml::CAmlRole::GetRole(const ::Ice::Context* __ctx)
{
    __checkTwowayOnly(__Aml__CAmlRole__GetRole_name);
    ::IceInternal::Outgoing __og(this, __Aml__CAmlRole__GetRole_name, ::Ice::Normal, __ctx);
    __og.writeEmptyParams();
    if(!__og.invoke())
    {
        try
        {
            __og.throwUserException();
        }
        catch(const ::Aml::CAmlException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
            throw __uue;
        }
    }
    ::std::string __ret;
    ::IceInternal::BasicStream* __is = __og.startReadParams();
    __is->read(__ret);
    __og.endReadParams();
    return __ret;
}

::Ice::AsyncResultPtr
IceProxy::Aml::CAmlRole::begin_GetRole(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Aml__CAmlRole__GetRole_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Aml__CAmlRole__GetRole_name, __del, __cookie);
    try
    {
        __result->prepare(__Aml__CAmlRole__GetRole_name, ::Ice::Normal, __ctx);
        __result->writeEmptyParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

#ifdef ICE_CPP11

::Ice::AsyncResultPtr
IceProxy::Aml::CAmlRole::__begin_GetRole(const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
{
    class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
    {
    public:

        Cpp11CB(const ::std::function<void (const ::std::string&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
            ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
            _response(responseFunc)
        {
            CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
        }

        virtual void completed(const ::Ice::AsyncResultPtr& __result) const
        {
            ::Aml::CAmlRolePrx __proxy = ::Aml::CAmlRolePrx::uncheckedCast(__result->getProxy());
            ::std::string __ret;
            try
            {
                __ret = __proxy->end_GetRole(__result);
            }
            catch(const ::Ice::Exception& ex)
            {
                Cpp11FnCallbackNC::exception(__result, ex);
                return;
            }
            if(_response != nullptr)
            {
                _response(__ret);
            }
        }
    
    private:
        
        ::std::function<void (const ::std::string&)> _response;
    };
    return begin_GetRole(__ctx, new Cpp11CB(__response, __exception, __sent));
}
#endif

::std::string
IceProxy::Aml::CAmlRole::end_GetRole(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Aml__CAmlRole__GetRole_name);
    ::std::string __ret;
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Aml::CAmlException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    ::IceInternal::BasicStream* __is = __result->__startReadParams();
    __is->read(__ret);
    __result->__endReadParams();
    return __ret;
}

::std::string
IceProxy::Aml::CAmlRole::GetFepRole(::std::string& __p_strPart, ::std::string& __p_strSec, const ::Ice::Context* __ctx)
{
    __checkTwowayOnly(__Aml__CAmlRole__GetFepRole_name);
    ::IceInternal::Outgoing __og(this, __Aml__CAmlRole__GetFepRole_name, ::Ice::Normal, __ctx);
    __og.writeEmptyParams();
    if(!__og.invoke())
    {
        try
        {
            __og.throwUserException();
        }
        catch(const ::Aml::CAmlException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
            throw __uue;
        }
    }
    ::std::string __ret;
    ::IceInternal::BasicStream* __is = __og.startReadParams();
    __is->read(__p_strPart);
    __is->read(__p_strSec);
    __is->read(__ret);
    __og.endReadParams();
    return __ret;
}

::Ice::AsyncResultPtr
IceProxy::Aml::CAmlRole::begin_GetFepRole(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Aml__CAmlRole__GetFepRole_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Aml__CAmlRole__GetFepRole_name, __del, __cookie);
    try
    {
        __result->prepare(__Aml__CAmlRole__GetFepRole_name, ::Ice::Normal, __ctx);
        __result->writeEmptyParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

#ifdef ICE_CPP11

::Ice::AsyncResultPtr
IceProxy::Aml::CAmlRole::__begin_GetFepRole(const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::std::string&, const ::std::string&, const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
{
    class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
    {
    public:

        Cpp11CB(const ::std::function<void (const ::std::string&, const ::std::string&, const ::std::string&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
            ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
            _response(responseFunc)
        {
            CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
        }

        virtual void completed(const ::Ice::AsyncResultPtr& __result) const
        {
            ::Aml::CAmlRolePrx __proxy = ::Aml::CAmlRolePrx::uncheckedCast(__result->getProxy());
            ::std::string __p_strPart;
            ::std::string __p_strSec;
            ::std::string __ret;
            try
            {
                __ret = __proxy->end_GetFepRole(__p_strPart, __p_strSec, __result);
            }
            catch(const ::Ice::Exception& ex)
            {
                Cpp11FnCallbackNC::exception(__result, ex);
                return;
            }
            if(_response != nullptr)
            {
                _response(__ret, __p_strPart, __p_strSec);
            }
        }
    
    private:
        
        ::std::function<void (const ::std::string&, const ::std::string&, const ::std::string&)> _response;
    };
    return begin_GetFepRole(__ctx, new Cpp11CB(__response, __exception, __sent));
}
#endif

::std::string
IceProxy::Aml::CAmlRole::end_GetFepRole(::std::string& __p_strPart, ::std::string& __p_strSec, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Aml__CAmlRole__GetFepRole_name);
    ::std::string __ret;
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Aml::CAmlException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    ::IceInternal::BasicStream* __is = __result->__startReadParams();
    __is->read(__p_strPart);
    __is->read(__p_strSec);
    __is->read(__ret);
    __result->__endReadParams();
    return __ret;
}

void
IceProxy::Aml::CAmlRole::SetRole(const ::std::string& __p_role, const ::Ice::Context* __ctx)
{
    __checkTwowayOnly(__Aml__CAmlRole__SetRole_name);
    ::IceInternal::Outgoing __og(this, __Aml__CAmlRole__SetRole_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_role);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    if(!__og.invoke())
    {
        try
        {
            __og.throwUserException();
        }
        catch(const ::Aml::CAmlException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
            throw __uue;
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Aml::CAmlRole::begin_SetRole(const ::std::string& __p_role, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Aml__CAmlRole__SetRole_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Aml__CAmlRole__SetRole_name, __del, __cookie);
    try
    {
        __result->prepare(__Aml__CAmlRole__SetRole_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_role);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

#ifdef ICE_CPP11

::Ice::AsyncResultPtr
IceProxy::Aml::CAmlRole::__begin_SetRole(const ::std::string& __p_role, const ::Ice::Context* __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
{
    class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
    {
    public:

        Cpp11CB(const ::std::function<void ()>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
            ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
            _response(responseFunc)
        {
            CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
        }

        virtual void completed(const ::Ice::AsyncResultPtr& __result) const
        {
            ::Aml::CAmlRolePrx __proxy = ::Aml::CAmlRolePrx::uncheckedCast(__result->getProxy());
            try
            {
                __proxy->end_SetRole(__result);
            }
            catch(const ::Ice::Exception& ex)
            {
                Cpp11FnCallbackNC::exception(__result, ex);
                return;
            }
            if(_response != nullptr)
            {
                _response();
            }
        }
    
    private:
        
        ::std::function<void ()> _response;
    };
    return begin_SetRole(__p_role, __ctx, new Cpp11CB(__response, __exception, __sent));
}
#endif

void
IceProxy::Aml::CAmlRole::end_SetRole(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Aml__CAmlRole__SetRole_name);
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Aml::CAmlException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    __result->__readEmptyParams();
}

void
IceProxy::Aml::CAmlRole::SetConfig(const ::std::string& __p_role, const ::std::string& __p_strDistrict, const ::std::string& __p_strSection, const ::std::string& __p_strDistrictName, const ::std::string& __p_strSectionName, const ::std::string& __p_isXbfep, const ::Ice::Context* __ctx)
{
    __checkTwowayOnly(__Aml__CAmlRole__SetConfig_name);
    ::IceInternal::Outgoing __og(this, __Aml__CAmlRole__SetConfig_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_role);
        __os->write(__p_strDistrict);
        __os->write(__p_strSection);
        __os->write(__p_strDistrictName);
        __os->write(__p_strSectionName);
        __os->write(__p_isXbfep);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    if(!__og.invoke())
    {
        try
        {
            __og.throwUserException();
        }
        catch(const ::Aml::CAmlException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
            throw __uue;
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Aml::CAmlRole::begin_SetConfig(const ::std::string& __p_role, const ::std::string& __p_strDistrict, const ::std::string& __p_strSection, const ::std::string& __p_strDistrictName, const ::std::string& __p_strSectionName, const ::std::string& __p_isXbfep, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Aml__CAmlRole__SetConfig_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Aml__CAmlRole__SetConfig_name, __del, __cookie);
    try
    {
        __result->prepare(__Aml__CAmlRole__SetConfig_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_role);
        __os->write(__p_strDistrict);
        __os->write(__p_strSection);
        __os->write(__p_strDistrictName);
        __os->write(__p_strSectionName);
        __os->write(__p_isXbfep);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

#ifdef ICE_CPP11

::Ice::AsyncResultPtr
IceProxy::Aml::CAmlRole::__begin_SetConfig(const ::std::string& __p_role, const ::std::string& __p_strDistrict, const ::std::string& __p_strSection, const ::std::string& __p_strDistrictName, const ::std::string& __p_strSectionName, const ::std::string& __p_isXbfep, const ::Ice::Context* __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
{
    class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
    {
    public:

        Cpp11CB(const ::std::function<void ()>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
            ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
            _response(responseFunc)
        {
            CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
        }

        virtual void completed(const ::Ice::AsyncResultPtr& __result) const
        {
            ::Aml::CAmlRolePrx __proxy = ::Aml::CAmlRolePrx::uncheckedCast(__result->getProxy());
            try
            {
                __proxy->end_SetConfig(__result);
            }
            catch(const ::Ice::Exception& ex)
            {
                Cpp11FnCallbackNC::exception(__result, ex);
                return;
            }
            if(_response != nullptr)
            {
                _response();
            }
        }
    
    private:
        
        ::std::function<void ()> _response;
    };
    return begin_SetConfig(__p_role, __p_strDistrict, __p_strSection, __p_strDistrictName, __p_strSectionName, __p_isXbfep, __ctx, new Cpp11CB(__response, __exception, __sent));
}
#endif

void
IceProxy::Aml::CAmlRole::end_SetConfig(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Aml__CAmlRole__SetConfig_name);
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Aml::CAmlException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    __result->__readEmptyParams();
}

const ::std::string&
IceProxy::Aml::CAmlRole::ice_staticId()
{
    return ::Aml::CAmlRole::ice_staticId();
}

::IceProxy::Ice::Object*
IceProxy::Aml::CAmlRole::__newInstance() const
{
    return new CAmlRole;
}

::Ice::Object* Aml::upCast(::Aml::CAmlRole* p) { return p; }

namespace
{
const ::std::string __Aml__CAmlRole_ids[2] =
{
    "::Aml::CAmlRole",
    "::Ice::Object"
};

}

bool
Aml::CAmlRole::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Aml__CAmlRole_ids, __Aml__CAmlRole_ids + 2, _s);
}

::std::vector< ::std::string>
Aml::CAmlRole::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Aml__CAmlRole_ids[0], &__Aml__CAmlRole_ids[2]);
}

const ::std::string&
Aml::CAmlRole::ice_id(const ::Ice::Current&) const
{
    return __Aml__CAmlRole_ids[0];
}

const ::std::string&
Aml::CAmlRole::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::Aml::CAmlRole";
    return typeId;
#else
    return __Aml__CAmlRole_ids[0];
#endif
}

::Ice::DispatchStatus
Aml::CAmlRole::___GetRole(::IceInternal::Incoming& __inS, const ::Ice::Current& __current) const
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    try
    {
        ::std::string __ret = GetRole(__current);
        ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
        __os->write(__ret);
        __inS.__endWriteParams(true);
        return ::Ice::DispatchOK;
    }
    catch(const ::Aml::CAmlException& __ex)
    {
        __inS.__writeUserException(__ex, ::Ice::DefaultFormat);
    }
    return ::Ice::DispatchUserException;
}

::Ice::DispatchStatus
Aml::CAmlRole::___GetFepRole(::IceInternal::Incoming& __inS, const ::Ice::Current& __current) const
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    ::std::string __p_strPart;
    ::std::string __p_strSec;
    try
    {
        ::std::string __ret = GetFepRole(__p_strPart, __p_strSec, __current);
        ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_strPart);
        __os->write(__p_strSec);
        __os->write(__ret);
        __inS.__endWriteParams(true);
        return ::Ice::DispatchOK;
    }
    catch(const ::Aml::CAmlException& __ex)
    {
        __inS.__writeUserException(__ex, ::Ice::DefaultFormat);
    }
    return ::Ice::DispatchUserException;
}

::Ice::DispatchStatus
Aml::CAmlRole::___SetRole(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string __p_role;
    __is->read(__p_role);
    __inS.endReadParams();
    try
    {
        SetRole(__p_role, __current);
        __inS.__writeEmptyParams();
        return ::Ice::DispatchOK;
    }
    catch(const ::Aml::CAmlException& __ex)
    {
        __inS.__writeUserException(__ex, ::Ice::DefaultFormat);
    }
    return ::Ice::DispatchUserException;
}

::Ice::DispatchStatus
Aml::CAmlRole::___SetConfig(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string __p_role;
    ::std::string __p_strDistrict;
    ::std::string __p_strSection;
    ::std::string __p_strDistrictName;
    ::std::string __p_strSectionName;
    ::std::string __p_isXbfep;
    __is->read(__p_role);
    __is->read(__p_strDistrict);
    __is->read(__p_strSection);
    __is->read(__p_strDistrictName);
    __is->read(__p_strSectionName);
    __is->read(__p_isXbfep);
    __inS.endReadParams();
    try
    {
        SetConfig(__p_role, __p_strDistrict, __p_strSection, __p_strDistrictName, __p_strSectionName, __p_isXbfep, __current);
        __inS.__writeEmptyParams();
        return ::Ice::DispatchOK;
    }
    catch(const ::Aml::CAmlException& __ex)
    {
        __inS.__writeUserException(__ex, ::Ice::DefaultFormat);
    }
    return ::Ice::DispatchUserException;
}

namespace
{
const ::std::string __Aml__CAmlRole_all[] =
{
    "GetFepRole",
    "GetRole",
    "SetConfig",
    "SetRole",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

::Ice::DispatchStatus
Aml::CAmlRole::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Aml__CAmlRole_all, __Aml__CAmlRole_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Aml__CAmlRole_all)
    {
        case 0:
        {
            return ___GetFepRole(in, current);
        }
        case 1:
        {
            return ___GetRole(in, current);
        }
        case 2:
        {
            return ___SetConfig(in, current);
        }
        case 3:
        {
            return ___SetRole(in, current);
        }
        case 4:
        {
            return ___ice_id(in, current);
        }
        case 5:
        {
            return ___ice_ids(in, current);
        }
        case 6:
        {
            return ___ice_isA(in, current);
        }
        case 7:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Aml::CAmlRole::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Aml::CAmlRole::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Aml::__patch(CAmlRolePtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Aml::CAmlRolePtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Aml::CAmlRole::ice_staticId(), v);
    }
}
