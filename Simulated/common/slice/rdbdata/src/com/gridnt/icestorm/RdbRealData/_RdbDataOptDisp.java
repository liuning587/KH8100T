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
// Generated from file `rdbdata.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package com.gridnt.icestorm.RdbRealData;

public abstract class _RdbDataOptDisp extends Ice.ObjectImpl implements RdbDataOpt
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
        "::RdbRealData::RdbDataOpt"
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

    public final boolean DeleteRdbData(RequestDefaultDataSeq dataSeq, RequestDefaultDataSequenceHolder errorSeq)
    {
        return DeleteRdbData(dataSeq, errorSeq, null);
    }

    public final boolean GetEquipLineAndStationInfo(String deviceType, String deviceRid, LineAndStationInfoHolder info)
    {
        return GetEquipLineAndStationInfo(deviceType, deviceRid, info, null);
    }

    public final boolean GetEquipTree(String deviceType, String deviceRid, EquipTreeSequenceHolder treeSeq)
    {
        return GetEquipTree(deviceType, deviceRid, treeSeq, null);
    }

    public final boolean GetSpecificEquipTree(String deviceType, String deviceRid, String specDeviceType, EquipTreeSequenceHolder treeSeq)
    {
        return GetSpecificEquipTree(deviceType, deviceRid, specDeviceType, treeSeq, null);
    }

    public final boolean GetTopoData(RequestTopoDataSeq inDataSeq, ReceiveTopoDataSeqHolder outDataSeq)
    {
        return GetTopoData(inDataSeq, outDataSeq, null);
    }

    public final void GetTopoIslandInfo(TopoIslandInfoSeqHolder islandInfoes)
    {
        GetTopoIslandInfo(islandInfoes, null);
    }

    public final boolean InsertData(RespondCompleteDataSeq dataSeq, RespondCompleteDataSequenceHolder errorSeq)
    {
        return InsertData(dataSeq, errorSeq, null);
    }

    public final boolean IsInvalidDbData(String tableName, String dataRID)
    {
        return IsInvalidDbData(tableName, dataRID, null);
    }

    public final boolean SelectCompleteData(RequestCompleteDataSeq reqSeq, RespondCompleteDataSeqHolder repSeq)
    {
        return SelectCompleteData(reqSeq, repSeq, null);
    }

    public final boolean SelectDataCount(RequestDefaultDataSeq reqSeq, RespondDataCountSequenceHolder repSeq)
    {
        return SelectDataCount(reqSeq, repSeq, null);
    }

    public final boolean SelectDefaultData(RequestDefaultDataSeq reqSeq, RespondDefaultDataSeqHolder repSeq)
    {
        return SelectDefaultData(reqSeq, repSeq, null);
    }

    public final boolean SelectSpecificData(RequestSpecficDataSeq reqSeq, RespondSpecficDataSeqHolder repSeq)
    {
        return SelectSpecificData(reqSeq, repSeq, null);
    }

    public final boolean UpdateCompleteData(RespondCompleteDataSeq reqSeq, RespondCompleteDataSequenceHolder repSeq)
    {
        return UpdateCompleteData(reqSeq, repSeq, null);
    }

    public final void UpdateTopoData()
    {
        UpdateTopoData(null);
    }

    public final boolean isEmptyNode(String dataType, String dataRid)
    {
        return isEmptyNode(dataType, dataRid, null);
    }

    public final boolean isOrphanNode(String dataType, String dataRid)
    {
        return isOrphanNode(dataType, dataRid, null);
    }

    public static Ice.DispatchStatus ___InsertData(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        RespondCompleteDataSeq dataSeq = null;
        dataSeq = RespondCompleteDataSeq.__read(__is, dataSeq);
        __inS.endReadParams();
        RespondCompleteDataSequenceHolder errorSeq = new RespondCompleteDataSequenceHolder();
        boolean __ret = __obj.InsertData(dataSeq, errorSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        RespondCompleteDataSequenceHelper.write(__os, errorSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___SelectDefaultData(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        RequestDefaultDataSeq reqSeq = null;
        reqSeq = RequestDefaultDataSeq.__read(__is, reqSeq);
        __inS.endReadParams();
        RespondDefaultDataSeqHolder repSeq = new RespondDefaultDataSeqHolder();
        boolean __ret = __obj.SelectDefaultData(reqSeq, repSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        RespondDefaultDataSeq.__write(__os, repSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___SelectSpecificData(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        RequestSpecficDataSeq reqSeq = null;
        reqSeq = RequestSpecficDataSeq.__read(__is, reqSeq);
        __inS.endReadParams();
        RespondSpecficDataSeqHolder repSeq = new RespondSpecficDataSeqHolder();
        boolean __ret = __obj.SelectSpecificData(reqSeq, repSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        RespondSpecficDataSeq.__write(__os, repSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___SelectCompleteData(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        RequestCompleteDataSeq reqSeq = null;
        reqSeq = RequestCompleteDataSeq.__read(__is, reqSeq);
        __inS.endReadParams();
        RespondCompleteDataSeqHolder repSeq = new RespondCompleteDataSeqHolder();
        boolean __ret = __obj.SelectCompleteData(reqSeq, repSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        RespondCompleteDataSeq.__write(__os, repSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___SelectDataCount(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        RequestDefaultDataSeq reqSeq = null;
        reqSeq = RequestDefaultDataSeq.__read(__is, reqSeq);
        __inS.endReadParams();
        RespondDataCountSequenceHolder repSeq = new RespondDataCountSequenceHolder();
        boolean __ret = __obj.SelectDataCount(reqSeq, repSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        RespondDataCountSequenceHelper.write(__os, repSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___UpdateCompleteData(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        RespondCompleteDataSeq reqSeq = null;
        reqSeq = RespondCompleteDataSeq.__read(__is, reqSeq);
        __inS.endReadParams();
        RespondCompleteDataSequenceHolder repSeq = new RespondCompleteDataSequenceHolder();
        boolean __ret = __obj.UpdateCompleteData(reqSeq, repSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        RespondCompleteDataSequenceHelper.write(__os, repSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___DeleteRdbData(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        RequestDefaultDataSeq dataSeq = null;
        dataSeq = RequestDefaultDataSeq.__read(__is, dataSeq);
        __inS.endReadParams();
        RequestDefaultDataSequenceHolder errorSeq = new RequestDefaultDataSequenceHolder();
        boolean __ret = __obj.DeleteRdbData(dataSeq, errorSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        RequestDefaultDataSequenceHelper.write(__os, errorSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___GetEquipTree(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        String deviceType;
        String deviceRid;
        deviceType = __is.readString();
        deviceRid = __is.readString();
        __inS.endReadParams();
        EquipTreeSequenceHolder treeSeq = new EquipTreeSequenceHolder();
        boolean __ret = __obj.GetEquipTree(deviceType, deviceRid, treeSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        EquipTreeSequenceHelper.write(__os, treeSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___GetSpecificEquipTree(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        String deviceType;
        String deviceRid;
        String specDeviceType;
        deviceType = __is.readString();
        deviceRid = __is.readString();
        specDeviceType = __is.readString();
        __inS.endReadParams();
        EquipTreeSequenceHolder treeSeq = new EquipTreeSequenceHolder();
        boolean __ret = __obj.GetSpecificEquipTree(deviceType, deviceRid, specDeviceType, treeSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        EquipTreeSequenceHelper.write(__os, treeSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___GetEquipLineAndStationInfo(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        String deviceType;
        String deviceRid;
        deviceType = __is.readString();
        deviceRid = __is.readString();
        __inS.endReadParams();
        LineAndStationInfoHolder info = new LineAndStationInfoHolder();
        boolean __ret = __obj.GetEquipLineAndStationInfo(deviceType, deviceRid, info, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        LineAndStationInfo.__write(__os, info.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___isOrphanNode(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        String dataType;
        String dataRid;
        dataType = __is.readString();
        dataRid = __is.readString();
        __inS.endReadParams();
        boolean __ret = __obj.isOrphanNode(dataType, dataRid, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___isEmptyNode(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        String dataType;
        String dataRid;
        dataType = __is.readString();
        dataRid = __is.readString();
        __inS.endReadParams();
        boolean __ret = __obj.isEmptyNode(dataType, dataRid, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___IsInvalidDbData(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        String tableName;
        String dataRID;
        tableName = __is.readString();
        dataRID = __is.readString();
        __inS.endReadParams();
        boolean __ret = __obj.IsInvalidDbData(tableName, dataRID, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___GetTopoData(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        IceInternal.BasicStream __is = __inS.startReadParams();
        RequestTopoDataSeq inDataSeq = null;
        inDataSeq = RequestTopoDataSeq.__read(__is, inDataSeq);
        __inS.endReadParams();
        ReceiveTopoDataSeqHolder outDataSeq = new ReceiveTopoDataSeqHolder();
        boolean __ret = __obj.GetTopoData(inDataSeq, outDataSeq, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        ReceiveTopoDataSeq.__write(__os, outDataSeq.value);
        __os.writeBool(__ret);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___GetTopoIslandInfo(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        __inS.readEmptyParams();
        TopoIslandInfoSeqHolder islandInfoes = new TopoIslandInfoSeqHolder();
        __obj.GetTopoIslandInfo(islandInfoes, __current);
        IceInternal.BasicStream __os = __inS.__startWriteParams(Ice.FormatType.DefaultFormat);
        TopoIslandInfoSeqHelper.write(__os, islandInfoes.value);
        __inS.__endWriteParams(true);
        return Ice.DispatchStatus.DispatchOK;
    }

    public static Ice.DispatchStatus ___UpdateTopoData(RdbDataOpt __obj, IceInternal.Incoming __inS, Ice.Current __current)
    {
        __checkMode(Ice.OperationMode.Normal, __current.mode);
        __inS.readEmptyParams();
        __obj.UpdateTopoData(__current);
        __inS.__writeEmptyParams();
        return Ice.DispatchStatus.DispatchOK;
    }

    private final static String[] __all =
    {
        "DeleteRdbData",
        "GetEquipLineAndStationInfo",
        "GetEquipTree",
        "GetSpecificEquipTree",
        "GetTopoData",
        "GetTopoIslandInfo",
        "InsertData",
        "IsInvalidDbData",
        "SelectCompleteData",
        "SelectDataCount",
        "SelectDefaultData",
        "SelectSpecificData",
        "UpdateCompleteData",
        "UpdateTopoData",
        "ice_id",
        "ice_ids",
        "ice_isA",
        "ice_ping",
        "isEmptyNode",
        "isOrphanNode"
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
                return ___DeleteRdbData(this, in, __current);
            }
            case 1:
            {
                return ___GetEquipLineAndStationInfo(this, in, __current);
            }
            case 2:
            {
                return ___GetEquipTree(this, in, __current);
            }
            case 3:
            {
                return ___GetSpecificEquipTree(this, in, __current);
            }
            case 4:
            {
                return ___GetTopoData(this, in, __current);
            }
            case 5:
            {
                return ___GetTopoIslandInfo(this, in, __current);
            }
            case 6:
            {
                return ___InsertData(this, in, __current);
            }
            case 7:
            {
                return ___IsInvalidDbData(this, in, __current);
            }
            case 8:
            {
                return ___SelectCompleteData(this, in, __current);
            }
            case 9:
            {
                return ___SelectDataCount(this, in, __current);
            }
            case 10:
            {
                return ___SelectDefaultData(this, in, __current);
            }
            case 11:
            {
                return ___SelectSpecificData(this, in, __current);
            }
            case 12:
            {
                return ___UpdateCompleteData(this, in, __current);
            }
            case 13:
            {
                return ___UpdateTopoData(this, in, __current);
            }
            case 14:
            {
                return ___ice_id(this, in, __current);
            }
            case 15:
            {
                return ___ice_ids(this, in, __current);
            }
            case 16:
            {
                return ___ice_isA(this, in, __current);
            }
            case 17:
            {
                return ___ice_ping(this, in, __current);
            }
            case 18:
            {
                return ___isEmptyNode(this, in, __current);
            }
            case 19:
            {
                return ___isOrphanNode(this, in, __current);
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
