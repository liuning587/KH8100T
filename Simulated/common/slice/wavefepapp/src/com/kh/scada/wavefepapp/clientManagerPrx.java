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
// Generated from file `wavefepapp.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package com.kh.scada.wavefepapp;

public interface clientManagerPrx extends Ice.ObjectPrx
{
    public boolean getFileDirList(int unitNo, String startDate, String endDate, FileDirSeqHolder fileList);

    public boolean getFileDirList(int unitNo, String startDate, String endDate, FileDirSeqHolder fileList, java.util.Map<String, String> __ctx);

    public Ice.AsyncResult begin_getFileDirList(int unitNo, String startDate, String endDate);

    public Ice.AsyncResult begin_getFileDirList(int unitNo, String startDate, String endDate, java.util.Map<String, String> __ctx);

    public Ice.AsyncResult begin_getFileDirList(int unitNo, String startDate, String endDate, Ice.Callback __cb);

    public Ice.AsyncResult begin_getFileDirList(int unitNo, String startDate, String endDate, java.util.Map<String, String> __ctx, Ice.Callback __cb);

    public Ice.AsyncResult begin_getFileDirList(int unitNo, String startDate, String endDate, Callback_clientManager_getFileDirList __cb);

    public Ice.AsyncResult begin_getFileDirList(int unitNo, String startDate, String endDate, java.util.Map<String, String> __ctx, Callback_clientManager_getFileDirList __cb);

    public interface FunctionalCallback_clientManager_getFileDirList_Response
    {
        void apply(boolean __ret, String[] fileList);
    }

    public Ice.AsyncResult begin_getFileDirList(int unitNo, 
                                                String startDate, 
                                                String endDate, 
                                                FunctionalCallback_clientManager_getFileDirList_Response __responseCb, 
                                                IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb);

    public Ice.AsyncResult begin_getFileDirList(int unitNo, 
                                                String startDate, 
                                                String endDate, 
                                                FunctionalCallback_clientManager_getFileDirList_Response __responseCb, 
                                                IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                IceInternal.Functional_BoolCallback __sentCb);

    public Ice.AsyncResult begin_getFileDirList(int unitNo, 
                                                String startDate, 
                                                String endDate, 
                                                java.util.Map<String, String> __ctx, 
                                                FunctionalCallback_clientManager_getFileDirList_Response __responseCb, 
                                                IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb);

    public Ice.AsyncResult begin_getFileDirList(int unitNo, 
                                                String startDate, 
                                                String endDate, 
                                                java.util.Map<String, String> __ctx, 
                                                FunctionalCallback_clientManager_getFileDirList_Response __responseCb, 
                                                IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                IceInternal.Functional_BoolCallback __sentCb);

    public boolean end_getFileDirList(FileDirSeqHolder fileList, Ice.AsyncResult __result);

    public boolean getFileCont(String strFileName, Ice.StringHolder strInf, Ice.StringHolder strCfg, ByteSeqHolder rfwDatas);

    public boolean getFileCont(String strFileName, Ice.StringHolder strInf, Ice.StringHolder strCfg, ByteSeqHolder rfwDatas, java.util.Map<String, String> __ctx);

    public Ice.AsyncResult begin_getFileCont(String strFileName);

    public Ice.AsyncResult begin_getFileCont(String strFileName, java.util.Map<String, String> __ctx);

    public Ice.AsyncResult begin_getFileCont(String strFileName, Ice.Callback __cb);

    public Ice.AsyncResult begin_getFileCont(String strFileName, java.util.Map<String, String> __ctx, Ice.Callback __cb);

    public Ice.AsyncResult begin_getFileCont(String strFileName, Callback_clientManager_getFileCont __cb);

    public Ice.AsyncResult begin_getFileCont(String strFileName, java.util.Map<String, String> __ctx, Callback_clientManager_getFileCont __cb);

    public interface FunctionalCallback_clientManager_getFileCont_Response
    {
        void apply(boolean __ret, String strInf, String strCfg, byte[] rfwDatas);
    }

    public Ice.AsyncResult begin_getFileCont(String strFileName, 
                                             FunctionalCallback_clientManager_getFileCont_Response __responseCb, 
                                             IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb);

    public Ice.AsyncResult begin_getFileCont(String strFileName, 
                                             FunctionalCallback_clientManager_getFileCont_Response __responseCb, 
                                             IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                             IceInternal.Functional_BoolCallback __sentCb);

    public Ice.AsyncResult begin_getFileCont(String strFileName, 
                                             java.util.Map<String, String> __ctx, 
                                             FunctionalCallback_clientManager_getFileCont_Response __responseCb, 
                                             IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb);

    public Ice.AsyncResult begin_getFileCont(String strFileName, 
                                             java.util.Map<String, String> __ctx, 
                                             FunctionalCallback_clientManager_getFileCont_Response __responseCb, 
                                             IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                             IceInternal.Functional_BoolCallback __sentCb);

    public boolean end_getFileCont(Ice.StringHolder strInf, Ice.StringHolder strCfg, ByteSeqHolder rfwDatas, Ice.AsyncResult __result);
}
