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

public class TerminalInfo implements java.lang.Cloneable, java.io.Serializable
{
    public String termRID;

    public String deviceType;

    public String deviceRID;

    public String deviceName;

    public TerminalInfo()
    {
        termRID = "";
        deviceType = "";
        deviceRID = "";
        deviceName = "";
    }

    public TerminalInfo(String termRID, String deviceType, String deviceRID, String deviceName)
    {
        this.termRID = termRID;
        this.deviceType = deviceType;
        this.deviceRID = deviceRID;
        this.deviceName = deviceName;
    }

    public boolean
    equals(java.lang.Object rhs)
    {
        if(this == rhs)
        {
            return true;
        }
        TerminalInfo _r = null;
        if(rhs instanceof TerminalInfo)
        {
            _r = (TerminalInfo)rhs;
        }

        if(_r != null)
        {
            if(termRID != _r.termRID)
            {
                if(termRID == null || _r.termRID == null || !termRID.equals(_r.termRID))
                {
                    return false;
                }
            }
            if(deviceType != _r.deviceType)
            {
                if(deviceType == null || _r.deviceType == null || !deviceType.equals(_r.deviceType))
                {
                    return false;
                }
            }
            if(deviceRID != _r.deviceRID)
            {
                if(deviceRID == null || _r.deviceRID == null || !deviceRID.equals(_r.deviceRID))
                {
                    return false;
                }
            }
            if(deviceName != _r.deviceName)
            {
                if(deviceName == null || _r.deviceName == null || !deviceName.equals(_r.deviceName))
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
        __h = IceInternal.HashUtil.hashAdd(__h, "::RdbRealData::TerminalInfo");
        __h = IceInternal.HashUtil.hashAdd(__h, termRID);
        __h = IceInternal.HashUtil.hashAdd(__h, deviceType);
        __h = IceInternal.HashUtil.hashAdd(__h, deviceRID);
        __h = IceInternal.HashUtil.hashAdd(__h, deviceName);
        return __h;
    }

    public TerminalInfo
    clone()
    {
        TerminalInfo c = null;
        try
        {
            c = (TerminalInfo)super.clone();
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
        __os.writeString(termRID);
        __os.writeString(deviceType);
        __os.writeString(deviceRID);
        __os.writeString(deviceName);
    }

    public void
    __read(IceInternal.BasicStream __is)
    {
        termRID = __is.readString();
        deviceType = __is.readString();
        deviceRID = __is.readString();
        deviceName = __is.readString();
    }

    static public void
    __write(IceInternal.BasicStream __os, TerminalInfo __v)
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

    static public TerminalInfo
    __read(IceInternal.BasicStream __is, TerminalInfo __v)
    {
        if(__v == null)
        {
             __v = new TerminalInfo();
        }
        __v.__read(__is);
        return __v;
    }
    
    private static final TerminalInfo __nullMarshalValue = new TerminalInfo();

    public static final long serialVersionUID = -368919370L;
}
