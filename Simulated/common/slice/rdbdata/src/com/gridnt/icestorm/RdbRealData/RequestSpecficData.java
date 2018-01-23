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

public class RequestSpecficData implements java.lang.Cloneable, java.io.Serializable
{
    public String tableName;

    public java.util.List<java.lang.String> fieldSeq;

    public String fieldName;

    public String fieldValue;

    public RequestSpecficData()
    {
        tableName = "";
        fieldName = "";
        fieldValue = "";
    }

    public RequestSpecficData(String tableName, java.util.List<java.lang.String> fieldSeq, String fieldName, String fieldValue)
    {
        this.tableName = tableName;
        this.fieldSeq = fieldSeq;
        this.fieldName = fieldName;
        this.fieldValue = fieldValue;
    }

    public boolean
    equals(java.lang.Object rhs)
    {
        if(this == rhs)
        {
            return true;
        }
        RequestSpecficData _r = null;
        if(rhs instanceof RequestSpecficData)
        {
            _r = (RequestSpecficData)rhs;
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
            if(fieldSeq != _r.fieldSeq)
            {
                if(fieldSeq == null || _r.fieldSeq == null || !fieldSeq.equals(_r.fieldSeq))
                {
                    return false;
                }
            }
            if(fieldName != _r.fieldName)
            {
                if(fieldName == null || _r.fieldName == null || !fieldName.equals(_r.fieldName))
                {
                    return false;
                }
            }
            if(fieldValue != _r.fieldValue)
            {
                if(fieldValue == null || _r.fieldValue == null || !fieldValue.equals(_r.fieldValue))
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
        __h = IceInternal.HashUtil.hashAdd(__h, "::RdbRealData::RequestSpecficData");
        __h = IceInternal.HashUtil.hashAdd(__h, tableName);
        __h = IceInternal.HashUtil.hashAdd(__h, fieldSeq);
        __h = IceInternal.HashUtil.hashAdd(__h, fieldName);
        __h = IceInternal.HashUtil.hashAdd(__h, fieldValue);
        return __h;
    }

    public RequestSpecficData
    clone()
    {
        RequestSpecficData c = null;
        try
        {
            c = (RequestSpecficData)super.clone();
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
        StringsHelper.write(__os, fieldSeq);
        __os.writeString(fieldName);
        __os.writeString(fieldValue);
    }

    public void
    __read(IceInternal.BasicStream __is)
    {
        tableName = __is.readString();
        fieldSeq = StringsHelper.read(__is);
        fieldName = __is.readString();
        fieldValue = __is.readString();
    }

    static public void
    __write(IceInternal.BasicStream __os, RequestSpecficData __v)
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

    static public RequestSpecficData
    __read(IceInternal.BasicStream __is, RequestSpecficData __v)
    {
        if(__v == null)
        {
             __v = new RequestSpecficData();
        }
        __v.__read(__is);
        return __v;
    }
    
    private static final RequestSpecficData __nullMarshalValue = new RequestSpecficData();

    public static final long serialVersionUID = 145914829L;
}
