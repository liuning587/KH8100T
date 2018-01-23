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

public class RespondDataCount implements java.lang.Cloneable, java.io.Serializable
{
    public String tableName;

    public String fieldName;

    public String fieldValue;

    public int dataCount;

    public RespondDataCount()
    {
        tableName = "";
        fieldName = "";
        fieldValue = "";
    }

    public RespondDataCount(String tableName, String fieldName, String fieldValue, int dataCount)
    {
        this.tableName = tableName;
        this.fieldName = fieldName;
        this.fieldValue = fieldValue;
        this.dataCount = dataCount;
    }

    public boolean
    equals(java.lang.Object rhs)
    {
        if(this == rhs)
        {
            return true;
        }
        RespondDataCount _r = null;
        if(rhs instanceof RespondDataCount)
        {
            _r = (RespondDataCount)rhs;
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
            if(dataCount != _r.dataCount)
            {
                return false;
            }

            return true;
        }

        return false;
    }

    public int
    hashCode()
    {
        int __h = 5381;
        __h = IceInternal.HashUtil.hashAdd(__h, "::RdbRealData::RespondDataCount");
        __h = IceInternal.HashUtil.hashAdd(__h, tableName);
        __h = IceInternal.HashUtil.hashAdd(__h, fieldName);
        __h = IceInternal.HashUtil.hashAdd(__h, fieldValue);
        __h = IceInternal.HashUtil.hashAdd(__h, dataCount);
        return __h;
    }

    public RespondDataCount
    clone()
    {
        RespondDataCount c = null;
        try
        {
            c = (RespondDataCount)super.clone();
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
        __os.writeString(fieldName);
        __os.writeString(fieldValue);
        __os.writeInt(dataCount);
    }

    public void
    __read(IceInternal.BasicStream __is)
    {
        tableName = __is.readString();
        fieldName = __is.readString();
        fieldValue = __is.readString();
        dataCount = __is.readInt();
    }

    static public void
    __write(IceInternal.BasicStream __os, RespondDataCount __v)
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

    static public RespondDataCount
    __read(IceInternal.BasicStream __is, RespondDataCount __v)
    {
        if(__v == null)
        {
             __v = new RespondDataCount();
        }
        __v.__read(__is);
        return __v;
    }
    
    private static final RespondDataCount __nullMarshalValue = new RespondDataCount();

    public static final long serialVersionUID = 341114673L;
}
