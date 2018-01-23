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

package com.kh.scada.protect.Protect;

/**
 * Provides type-specific helper functions.
 **/
public final class CProtectAppPrxHelper extends Ice.ObjectPrxHelperBase implements CProtectAppPrx
{
    private static final String __processProtectSetting_name = "processProtectSetting";

    public void processProtectSetting(ProtectValueInfo psInfo)
    {
        processProtectSetting(psInfo, null, false);
    }

    public void processProtectSetting(ProtectValueInfo psInfo, java.util.Map<String, String> __ctx)
    {
        processProtectSetting(psInfo, __ctx, true);
    }

    private void processProtectSetting(ProtectValueInfo psInfo, java.util.Map<String, String> __ctx, boolean __explicitCtx)
    {
        end_processProtectSetting(begin_processProtectSetting(psInfo, __ctx, __explicitCtx, true, null));
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo)
    {
        return begin_processProtectSetting(psInfo, null, false, false, null);
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, java.util.Map<String, String> __ctx)
    {
        return begin_processProtectSetting(psInfo, __ctx, true, false, null);
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, Ice.Callback __cb)
    {
        return begin_processProtectSetting(psInfo, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, java.util.Map<String, String> __ctx, Ice.Callback __cb)
    {
        return begin_processProtectSetting(psInfo, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, Callback_CProtectApp_processProtectSetting __cb)
    {
        return begin_processProtectSetting(psInfo, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, java.util.Map<String, String> __ctx, Callback_CProtectApp_processProtectSetting __cb)
    {
        return begin_processProtectSetting(psInfo, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                       IceInternal.Functional_VoidCallback __responseCb, 
                                                       IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_processProtectSetting(psInfo, null, false, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                       IceInternal.Functional_VoidCallback __responseCb, 
                                                       IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                       IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_processProtectSetting(psInfo, null, false, false, __responseCb, __exceptionCb, __sentCb);
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                       java.util.Map<String, String> __ctx, 
                                                       IceInternal.Functional_VoidCallback __responseCb, 
                                                       IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_processProtectSetting(psInfo, __ctx, true, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                       java.util.Map<String, String> __ctx, 
                                                       IceInternal.Functional_VoidCallback __responseCb, 
                                                       IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                       IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_processProtectSetting(psInfo, __ctx, true, false, __responseCb, __exceptionCb, __sentCb);
    }

    private Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                        java.util.Map<String, String> __ctx, 
                                                        boolean __explicitCtx, 
                                                        boolean __synchronous, 
                                                        IceInternal.Functional_VoidCallback __responseCb, 
                                                        IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                        IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_processProtectSetting(psInfo, 
                                           __ctx, 
                                           __explicitCtx, 
                                           __synchronous, 
                                           new IceInternal.Functional_OnewayCallback(__responseCb, __exceptionCb, __sentCb));
    }

    private Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                        java.util.Map<String, String> __ctx, 
                                                        boolean __explicitCtx, 
                                                        boolean __synchronous, 
                                                        IceInternal.CallbackBase __cb)
    {
        IceInternal.OutgoingAsync __result = getOutgoingAsync(__processProtectSetting_name, __cb);
        try
        {
            __result.prepare(__processProtectSetting_name, Ice.OperationMode.Normal, __ctx, __explicitCtx, __synchronous);
            IceInternal.BasicStream __os = __result.startWriteParams(Ice.FormatType.DefaultFormat);
            ProtectValueInfo.__write(__os, psInfo);
            __result.endWriteParams();
            __result.invoke();
        }
        catch(Ice.Exception __ex)
        {
            __result.abort(__ex);
        }
        return __result;
    }

    public void end_processProtectSetting(Ice.AsyncResult __iresult)
    {
        __end(__iresult, __processProtectSetting_name);
    }

    /**
     * Contacts the remote server to verify that the object implements this type.
     * Raises a local exception if a communication error occurs.
     * @param __obj The untyped proxy.
     * @return A proxy for this type, or null if the object does not support this type.
     **/
    public static CProtectAppPrx checkedCast(Ice.ObjectPrx __obj)
    {
        return checkedCastImpl(__obj, ice_staticId(), CProtectAppPrx.class, CProtectAppPrxHelper.class);
    }

    /**
     * Contacts the remote server to verify that the object implements this type.
     * Raises a local exception if a communication error occurs.
     * @param __obj The untyped proxy.
     * @param __ctx The Context map to send with the invocation.
     * @return A proxy for this type, or null if the object does not support this type.
     **/
    public static CProtectAppPrx checkedCast(Ice.ObjectPrx __obj, java.util.Map<String, String> __ctx)
    {
        return checkedCastImpl(__obj, __ctx, ice_staticId(), CProtectAppPrx.class, CProtectAppPrxHelper.class);
    }

    /**
     * Contacts the remote server to verify that a facet of the object implements this type.
     * Raises a local exception if a communication error occurs.
     * @param __obj The untyped proxy.
     * @param __facet The name of the desired facet.
     * @return A proxy for this type, or null if the object does not support this type.
     **/
    public static CProtectAppPrx checkedCast(Ice.ObjectPrx __obj, String __facet)
    {
        return checkedCastImpl(__obj, __facet, ice_staticId(), CProtectAppPrx.class, CProtectAppPrxHelper.class);
    }

    /**
     * Contacts the remote server to verify that a facet of the object implements this type.
     * Raises a local exception if a communication error occurs.
     * @param __obj The untyped proxy.
     * @param __facet The name of the desired facet.
     * @param __ctx The Context map to send with the invocation.
     * @return A proxy for this type, or null if the object does not support this type.
     **/
    public static CProtectAppPrx checkedCast(Ice.ObjectPrx __obj, String __facet, java.util.Map<String, String> __ctx)
    {
        return checkedCastImpl(__obj, __facet, __ctx, ice_staticId(), CProtectAppPrx.class, CProtectAppPrxHelper.class);
    }

    /**
     * Downcasts the given proxy to this type without contacting the remote server.
     * @param __obj The untyped proxy.
     * @return A proxy for this type.
     **/
    public static CProtectAppPrx uncheckedCast(Ice.ObjectPrx __obj)
    {
        return uncheckedCastImpl(__obj, CProtectAppPrx.class, CProtectAppPrxHelper.class);
    }

    /**
     * Downcasts the given proxy to this type without contacting the remote server.
     * @param __obj The untyped proxy.
     * @param __facet The name of the desired facet.
     * @return A proxy for this type.
     **/
    public static CProtectAppPrx uncheckedCast(Ice.ObjectPrx __obj, String __facet)
    {
        return uncheckedCastImpl(__obj, __facet, CProtectAppPrx.class, CProtectAppPrxHelper.class);
    }

    public static final String[] __ids =
    {
        "::Ice::Object",
        "::Protect::CProtectApp"
    };

    /**
     * Provides the Slice type ID of this type.
     * @return The Slice type ID.
     **/
    public static String ice_staticId()
    {
        return __ids[1];
    }

    public static void __write(IceInternal.BasicStream __os, CProtectAppPrx v)
    {
        __os.writeProxy(v);
    }

    public static CProtectAppPrx __read(IceInternal.BasicStream __is)
    {
        Ice.ObjectPrx proxy = __is.readProxy();
        if(proxy != null)
        {
            CProtectAppPrxHelper result = new CProtectAppPrxHelper();
            result.__copyFrom(proxy);
            return result;
        }
        return null;
    }

    public static final long serialVersionUID = 0L;
}
