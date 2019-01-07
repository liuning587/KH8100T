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
// Generated from file `fepcommstate.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <fepcommstate.h>
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

const ::std::string __FepCommState__CComStateApp__processCommState_name = "processCommState";

const ::std::string __FepCommState__CComStateFep__processCommState_name = "processCommState";

const ::std::string __FepCommState__FepCommStateManager__processData_name = "processData";

}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::FepCommState::upCast(::IceProxy::FepCommState::CComStateApp* p) { return p; }

void
::IceProxy::FepCommState::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::FepCommState::CComStateApp>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::FepCommState::CComStateApp;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::FepCommState::CComStateApp::processCommState(const ::FepCommState::StateDataPacket& __p_csInfo, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __FepCommState__CComStateApp__processCommState_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_csInfo);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::FepCommState::CComStateApp::begin_processCommState(const ::FepCommState::StateDataPacket& __p_csInfo, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __FepCommState__CComStateApp__processCommState_name, __del, __cookie);
    try
    {
        __result->prepare(__FepCommState__CComStateApp__processCommState_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_csInfo);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

void
IceProxy::FepCommState::CComStateApp::end_processCommState(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __FepCommState__CComStateApp__processCommState_name);
}

const ::std::string&
IceProxy::FepCommState::CComStateApp::ice_staticId()
{
    return ::FepCommState::CComStateApp::ice_staticId();
}

::IceProxy::Ice::Object*
IceProxy::FepCommState::CComStateApp::__newInstance() const
{
    return new CComStateApp;
}
::IceProxy::Ice::Object* ::IceProxy::FepCommState::upCast(::IceProxy::FepCommState::CComStateFep* p) { return p; }

void
::IceProxy::FepCommState::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::FepCommState::CComStateFep>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::FepCommState::CComStateFep;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::FepCommState::CComStateFep::processCommState(const ::FepCommState::StateDataPacket& __p_csInfo, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __FepCommState__CComStateFep__processCommState_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_csInfo);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::FepCommState::CComStateFep::begin_processCommState(const ::FepCommState::StateDataPacket& __p_csInfo, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __FepCommState__CComStateFep__processCommState_name, __del, __cookie);
    try
    {
        __result->prepare(__FepCommState__CComStateFep__processCommState_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_csInfo);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

void
IceProxy::FepCommState::CComStateFep::end_processCommState(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __FepCommState__CComStateFep__processCommState_name);
}

const ::std::string&
IceProxy::FepCommState::CComStateFep::ice_staticId()
{
    return ::FepCommState::CComStateFep::ice_staticId();
}

::IceProxy::Ice::Object*
IceProxy::FepCommState::CComStateFep::__newInstance() const
{
    return new CComStateFep;
}
::IceProxy::Ice::Object* ::IceProxy::FepCommState::upCast(::IceProxy::FepCommState::FepCommStateManager* p) { return p; }

void
::IceProxy::FepCommState::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::FepCommState::FepCommStateManager>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::FepCommState::FepCommStateManager;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::FepCommState::FepCommStateManager::processData(const ::FepCommState::StateDataPacket& __p_aPacket, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __FepCommState__FepCommStateManager__processData_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_aPacket);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::FepCommState::FepCommStateManager::begin_processData(const ::FepCommState::StateDataPacket& __p_aPacket, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __FepCommState__FepCommStateManager__processData_name, __del, __cookie);
    try
    {
        __result->prepare(__FepCommState__FepCommStateManager__processData_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_aPacket);
        __result->endWriteParams();
        __result->invoke();
    }
    catch(const ::Ice::Exception& __ex)
    {
        __result->abort(__ex);
    }
    return __result;
}

void
IceProxy::FepCommState::FepCommStateManager::end_processData(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __FepCommState__FepCommStateManager__processData_name);
}

const ::std::string&
IceProxy::FepCommState::FepCommStateManager::ice_staticId()
{
    return ::FepCommState::FepCommStateManager::ice_staticId();
}

::IceProxy::Ice::Object*
IceProxy::FepCommState::FepCommStateManager::__newInstance() const
{
    return new FepCommStateManager;
}

::Ice::Object* FepCommState::upCast(::FepCommState::CComStateApp* p) { return p; }

namespace
{
const ::std::string __FepCommState__CComStateApp_ids[2] =
{
    "::FepCommState::CComStateApp",
    "::Ice::Object"
};

}

bool
FepCommState::CComStateApp::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__FepCommState__CComStateApp_ids, __FepCommState__CComStateApp_ids + 2, _s);
}

::std::vector< ::std::string>
FepCommState::CComStateApp::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__FepCommState__CComStateApp_ids[0], &__FepCommState__CComStateApp_ids[2]);
}

const ::std::string&
FepCommState::CComStateApp::ice_id(const ::Ice::Current&) const
{
    return __FepCommState__CComStateApp_ids[0];
}

const ::std::string&
FepCommState::CComStateApp::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::FepCommState::CComStateApp";
    return typeId;
#else
    return __FepCommState__CComStateApp_ids[0];
#endif
}

::Ice::DispatchStatus
FepCommState::CComStateApp::___processCommState(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::FepCommState::StateDataPacket __p_csInfo;
    __is->read(__p_csInfo);
    __inS.endReadParams();
    processCommState(__p_csInfo, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __FepCommState__CComStateApp_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "processCommState"
};

}

::Ice::DispatchStatus
FepCommState::CComStateApp::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__FepCommState__CComStateApp_all, __FepCommState__CComStateApp_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __FepCommState__CComStateApp_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___processCommState(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
FepCommState::CComStateApp::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
FepCommState::CComStateApp::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
FepCommState::__patch(CComStateAppPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::FepCommState::CComStateAppPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::FepCommState::CComStateApp::ice_staticId(), v);
    }
}

::Ice::Object* FepCommState::upCast(::FepCommState::CComStateFep* p) { return p; }

namespace
{
const ::std::string __FepCommState__CComStateFep_ids[2] =
{
    "::FepCommState::CComStateFep",
    "::Ice::Object"
};

}

bool
FepCommState::CComStateFep::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__FepCommState__CComStateFep_ids, __FepCommState__CComStateFep_ids + 2, _s);
}

::std::vector< ::std::string>
FepCommState::CComStateFep::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__FepCommState__CComStateFep_ids[0], &__FepCommState__CComStateFep_ids[2]);
}

const ::std::string&
FepCommState::CComStateFep::ice_id(const ::Ice::Current&) const
{
    return __FepCommState__CComStateFep_ids[0];
}

const ::std::string&
FepCommState::CComStateFep::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::FepCommState::CComStateFep";
    return typeId;
#else
    return __FepCommState__CComStateFep_ids[0];
#endif
}

::Ice::DispatchStatus
FepCommState::CComStateFep::___processCommState(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::FepCommState::StateDataPacket __p_csInfo;
    __is->read(__p_csInfo);
    __inS.endReadParams();
    processCommState(__p_csInfo, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __FepCommState__CComStateFep_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "processCommState"
};

}

::Ice::DispatchStatus
FepCommState::CComStateFep::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__FepCommState__CComStateFep_all, __FepCommState__CComStateFep_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __FepCommState__CComStateFep_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___processCommState(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
FepCommState::CComStateFep::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
FepCommState::CComStateFep::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
FepCommState::__patch(CComStateFepPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::FepCommState::CComStateFepPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::FepCommState::CComStateFep::ice_staticId(), v);
    }
}

::Ice::Object* FepCommState::upCast(::FepCommState::FepCommStateManager* p) { return p; }

namespace
{
const ::std::string __FepCommState__FepCommStateManager_ids[2] =
{
    "::FepCommState::FepCommStateManager",
    "::Ice::Object"
};

}

bool
FepCommState::FepCommStateManager::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__FepCommState__FepCommStateManager_ids, __FepCommState__FepCommStateManager_ids + 2, _s);
}

::std::vector< ::std::string>
FepCommState::FepCommStateManager::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__FepCommState__FepCommStateManager_ids[0], &__FepCommState__FepCommStateManager_ids[2]);
}

const ::std::string&
FepCommState::FepCommStateManager::ice_id(const ::Ice::Current&) const
{
    return __FepCommState__FepCommStateManager_ids[0];
}

const ::std::string&
FepCommState::FepCommStateManager::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::FepCommState::FepCommStateManager";
    return typeId;
#else
    return __FepCommState__FepCommStateManager_ids[0];
#endif
}

::Ice::DispatchStatus
FepCommState::FepCommStateManager::___processData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::FepCommState::StateDataPacket __p_aPacket;
    __is->read(__p_aPacket);
    __inS.endReadParams();
    processData(__p_aPacket, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __FepCommState__FepCommStateManager_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "processData"
};

}

::Ice::DispatchStatus
FepCommState::FepCommStateManager::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__FepCommState__FepCommStateManager_all, __FepCommState__FepCommStateManager_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __FepCommState__FepCommStateManager_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___processData(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
FepCommState::FepCommStateManager::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
FepCommState::FepCommStateManager::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
FepCommState::__patch(FepCommStateManagerPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::FepCommState::FepCommStateManagerPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::FepCommState::FepCommStateManager::ice_staticId(), v);
    }
}
