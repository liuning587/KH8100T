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

public abstract class _clientManagerDisp extends Ice.ObjectImpl implements clientManager
{
    protected void
    ice_copyStateFrom(Ice.Object __obj)
        throws java.lang.CloneNotSupportedException
    {
        throw new java.lang.CloneNotSupportedException();
    }

    public static final String[] __ids =
    {
        "::Ice::Object",
        "::wavefepapp::clientManager"
    };

    public boolean ice_isA(String s)
    {
        return java.util.Arrays.binarySearch(__ids, s) >= 0;
    }

    public boolean ice_isA(String s, Ice.Current __current)
    {
        return java.util.Arrays.binarySearch(__ids, s) >= 0;
    }

    public String[] ice_ids()
    {
        return __ids;
    }

    public String[] ice_ids(Ice.Current __current)
    {
        return __ids;
    }

    public String ice_id()
    {
        return __ids[1];
    }

    public String ice_id(Ice.Current __current)
    {
        return __ids[1];
    }

    public static String ice_staticId()
    {
        return __ids[1];
    }

    public final boolean getFileCont(int unitNo, String strFileName, Ice.StringHolder strInf, Ice.StringHolder strCfg, ByteSeqHolder rfwDatas)
    {
        return getFileCont(unitNo, strFileName, strInf, strCfg, rfwDatas, null);
    }

    public final boolean getFileDirList(int unitNo, String startDate, String endDate, FileDirSeqHolder fileList)
    {
        return getFileDirList(unitNo, startDate, endDate, fileList, null);
    }

    public static Ice.DispatchStatus ___getFileDirList(clientManager __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        int unitNo;
        String startDate;
        String endDate;
        unitNo = __is.readInt();
        startDate = __is.readString();
        endDate = __is.readString();
        __inS.endReadParams();
        FileDirSeqHolder fileList = new FileDirSeqHolder();
        boolean __ret = __obj.getFileDirList(unitNo, startDate, endDate, fileList, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        FileDirSeqHelper.write(__os, fileList.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___getFileCont(clientManager __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        int unitNo;
        String strFileName;
        unitNo = __is.readInt();
        strFileName = __is.readString();
        __inS.endReadParams();
        Ice.StringHolder strInf = new Ice.StringHolder();
        Ice.StringHolder strCfg = new Ice.StringHolder();
        ByteSeqHolder rfwDatas = new ByteSeqHolder();
        boolean __ret = __obj.getFileCont(unitNo, strFileName, strInf, strCfg, rfwDatas, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        __os.writeString(strInf.value);
        __os.writeString(strCfg.value);
        ByteSeqHelper.write(__os, rfwDatas.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    private final static String[] __all =
    {
        "getFileCont",
        "getFileDirList",
        "ice_id",
        "ice_ids",
        "ice_isA",
        "ice_ping"
    };

    public Ice.DispatchStatus __dispatch(IceInternal.Incoming in, Ice.Current __current)
    {
        int pos = java.util.Arrays.binarySearch(__all, __current.operation);
        if(pos < 0)
        {
            throw new Ice.OperationNotExistException(__current.id, __current.facet, __current.operation);
        }

        switch(pos)
        {
            case 0:
            {
                return ___getFileCont(this, in, __current);
            }
            case 1:
            {
                return ___getFileDirList(this, in, __current);
            }
            case 2:
            {
                return ___ice_id(this, in, __current);
            }
            case 3:
            {
                return ___ice_ids(this, in, __current);
            }
            case 4:
            {
                return ___ice_isA(this, in, __current);
            }
            case 5:
            {
                return ___ice_ping(this, in, __current);
            }
        }

        assert(false);
        throw new Ice.OperationNotExistException(__current.id, __current.facet, __current.operation);
    }

    protected void __writeImpl(IceInternal.BasicStream __os)
    {
        __os.startWriteSlice(ice_staticId(), -1, true);
        __os.endWriteSlice();
    }

    protected void __readImpl(IceInternal.BasicStream __is)
    {
        __is.startReadSlice();
        __is.endReadSlice();
    }

    public static final long serialVersionUID = 0L;
}
