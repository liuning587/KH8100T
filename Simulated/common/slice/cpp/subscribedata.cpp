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

#include <subscribedata.h>
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

const ::std::string __SubData__SubscribeDataInfo__procSub_name = "procSub";

const ::std::string __SubData__SubscribeDataInfo__refreshParam_name = "refreshParam";

}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::SubData::upCast(::IceProxy::SubData::SubscribeDataInfo* p) { return p; }

void
::IceProxy::SubData::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::SubData::SubscribeDataInfo>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::SubData::SubscribeDataInfo;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::SubData::SubscribeDataInfo::procSub(const ::SubData::DataInfo& __p_data, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __SubData__SubscribeDataInfo__procSub_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_data);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::SubData::SubscribeDataInfo::begin_procSub(const ::SubData::DataInfo& __p_data, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __SubData__SubscribeDataInfo__procSub_name, __del, __cookie);
    try
    {
        __result->prepare(__SubData__SubscribeDataInfo__procSub_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_data);
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
IceProxy::SubData::SubscribeDataInfo::end_procSub(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __SubData__SubscribeDataInfo__procSub_name);
}

void
IceProxy::SubData::SubscribeDataInfo::refreshParam(const ::SubData::PartSec& __p_data, const ::SubData::FepProtocolInfoSeq& __p_piSeq, const ::SubData::UnitInfoSeq& __p_unitSeq, const ::SubData::UnitQsInfoSeq& __p_qsSeq, const ::Ice::Context* __ctx)
{
    ::IceInternal::Outgoing __og(this, __SubData__SubscribeDataInfo__refreshParam_name, ::Ice::Normal, __ctx);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_data);
        __os->write(__p_piSeq);
        __os->write(__p_unitSeq);
        __os->write(__p_qsSeq);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    __invoke(__og);
}

::Ice::AsyncResultPtr
IceProxy::SubData::SubscribeDataInfo::begin_refreshParam(const ::SubData::PartSec& __p_data, const ::SubData::FepProtocolInfoSeq& __p_piSeq, const ::SubData::UnitInfoSeq& __p_unitSeq, const ::SubData::UnitQsInfoSeq& __p_qsSeq, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __SubData__SubscribeDataInfo__refreshParam_name, __del, __cookie);
    try
    {
        __result->prepare(__SubData__SubscribeDataInfo__refreshParam_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->startWriteParams(::Ice::DefaultFormat);
        __os->write(__p_data);
        __os->write(__p_piSeq);
        __os->write(__p_unitSeq);
        __os->write(__p_qsSeq);
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
IceProxy::SubData::SubscribeDataInfo::end_refreshParam(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __SubData__SubscribeDataInfo__refreshParam_name);
}

const ::std::string&
IceProxy::SubData::SubscribeDataInfo::ice_staticId()
{
    return ::SubData::SubscribeDataInfo::ice_staticId();
}

::IceProxy::Ice::Object*
IceProxy::SubData::SubscribeDataInfo::__newInstance() const
{
    return new SubscribeDataInfo;
}

::Ice::Object* SubData::upCast(::SubData::SubscribeDataInfo* p) { return p; }

namespace
{
const ::std::string __SubData__SubscribeDataInfo_ids[2] =
{
    "::Ice::Object",
    "::SubData::SubscribeDataInfo"
};

}

bool
SubData::SubscribeDataInfo::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__SubData__SubscribeDataInfo_ids, __SubData__SubscribeDataInfo_ids + 2, _s);
}

::std::vector< ::std::string>
SubData::SubscribeDataInfo::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__SubData__SubscribeDataInfo_ids[0], &__SubData__SubscribeDataInfo_ids[2]);
}

const ::std::string&
SubData::SubscribeDataInfo::ice_id(const ::Ice::Current&) const
{
    return __SubData__SubscribeDataInfo_ids[1];
}

const ::std::string&
SubData::SubscribeDataInfo::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::SubData::SubscribeDataInfo";
    return typeId;
#else
    return __SubData__SubscribeDataInfo_ids[1];
#endif
}

::Ice::DispatchStatus
SubData::SubscribeDataInfo::___procSub(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::SubData::DataInfo __p_data;
    __is->read(__p_data);
    __inS.endReadParams();
    procSub(__p_data, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
SubData::SubscribeDataInfo::___refreshParam(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::SubData::PartSec __p_data;
    ::SubData::FepProtocolInfoSeq __p_piSeq;
    ::SubData::UnitInfoSeq __p_unitSeq;
    ::SubData::UnitQsInfoSeq __p_qsSeq;
    __is->read(__p_data);
    __is->read(__p_piSeq);
    __is->read(__p_unitSeq);
    __is->read(__p_qsSeq);
    __inS.endReadParams();
    refreshParam(__p_data, __p_piSeq, __p_unitSeq, __p_qsSeq, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __SubData__SubscribeDataInfo_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "procSub",
    "refreshParam"
};

}

::Ice::DispatchStatus
SubData::SubscribeDataInfo::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__SubData__SubscribeDataInfo_all, __SubData__SubscribeDataInfo_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __SubData__SubscribeDataInfo_all)
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
            return ___procSub(in, current);
        }
        case 5:
        {
            return ___refreshParam(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
SubData::SubscribeDataInfo::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
SubData::SubscribeDataInfo::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
SubData::__patch(SubscribeDataInfoPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::SubData::SubscribeDataInfoPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::SubData::SubscribeDataInfo::ice_staticId(), v);
    }
}
