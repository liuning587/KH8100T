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

public class RespondCompleteData implements java.lang.Cloneable, java.io.Serializable
{
    public String tableName;

    public String dataRid;

    public java.util.List<java.lang.String> dataValues;

    public RespondCompleteData()
    {
        tableName = "";
        dataRid = "";
    }

    public RespondCompleteData(String tableName, String dataRid, java.util.List<java.lang.String> dataValues)
    {
        this.tableName = tableName;
        this.dataRid = dataRid;
        this.dataValues = dataValues;
    }

    public boolean
    equals(java.lang.Object rhs)
    {
        if(this == rhs)
        {
            return true;
        }
        RespondCompleteData _r = null;
        if(rhs instanceof RespondCompleteData)
        {
            _r = (RespondCompleteData)rhs;
        }

        if(_r != null)
        {
            if(tableName != _r.tableName)
            {
                if(tableName == null || _r.tableName == null || !tableName.equals(_r.tableName))
                {
                    return false;
                }
            }
            if(dataRid != _r.dataRid)
            {
                if(dataRid == null || _r.dataRid == null || !dataRid.equals(_r.dataRid))
                {
                    return false;
                }
            }
            if(dataValues != _r.dataValues)
            {
                if(dataValues == null || _r.dataValues == null || !dataValues.equals(_r.dataValues))
                {
                    return false;
                }
            }

            return true;
        }

        return false;
    }

    public int
    hashCode()
    {
        int __h = 5381;
        __h = IceInternal.HashUtil.hashAdd(__h, "::RdbRealData::RespondCompleteData");
        __h = IceInternal.HashUtil.hashAdd(__h, tableName);
        __h = IceInternal.HashUtil.hashAdd(__h, dataRid);
        __h = IceInternal.HashUtil.hashAdd(__h, dataValues);
        return __h;
    }

    public RespondCompleteData
    clone()
    {
        RespondCompleteData c = null;
        try
        {
            c = (RespondCompleteData)super.clone();
        }
        catch(CloneNotSupportedException ex)
        {
            assert false; // impossible
        }
        return c;
    }

    public void
    __write(IceInternal.BasicStream __os)
    {
        __os.writeString(tableName);
        __os.writeString(dataRid);
        StringsHelper.write(__os, dataValues);
    }

    public void
    __read(IceInternal.BasicStream __is)
    {
        tableName = __is.readString();
        dataRid = __is.readString();
        dataValues = StringsHelper.read(__is);
    }

    static public void
    __write(IceInternal.BasicStream __os, RespondCompleteData __v)
    {
        if(__v == null)
        {
            __nullMarshalValue.__write(__os);
        }
        else
        {
            __v.__write(__os);
        }
    }

    static public RespondCompleteData
    __read(IceInternal.BasicStream __is, RespondCompleteData __v)
    {
        if(__v == null)
        {
             __v = new RespondCompleteData();
        }
        __v.__read(__is);
        return __v;
    }
    
    private static final RespondCompleteData __nullMarshalValue = new RespondCompleteData();

    public static final long serialVersionUID = 1151646308L;
}
