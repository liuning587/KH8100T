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

public class EquipTree implements java.lang.Cloneable, java.io.Serializable
{
    public String parentRid;

    public String parentName;

    public String parentType;

    public String equipRid;

    public String equipName;

    public String equipType;

    public EquipTree()
    {
        parentRid = "";
        parentName = "";
        parentType = "";
        equipRid = "";
        equipName = "";
        equipType = "";
    }

    public EquipTree(String parentRid, String parentName, String parentType, String equipRid, String equipName, String equipType)
    {
        this.parentRid = parentRid;
        this.parentName = parentName;
        this.parentType = parentType;
        this.equipRid = equipRid;
        this.equipName = equipName;
        this.equipType = equipType;
    }

    public boolean
    equals(java.lang.Object rhs)
    {
        if(this == rhs)
        {
            return true;
        }
        EquipTree _r = null;
        if(rhs instanceof EquipTree)
        {
            _r = (EquipTree)rhs;
        }

        if(_r != null)
        {
            if(parentRid != _r.parentRid)
            {
                if(parentRid == null || _r.parentRid == null || !parentRid.equals(_r.parentRid))
                {
                    return false;
                }
            }
            if(parentName != _r.parentName)
            {
                if(parentName == null || _r.parentName == null || !parentName.equals(_r.parentName))
                {
                    return false;
                }
            }
            if(parentType != _r.parentType)
            {
                if(parentType == null || _r.parentType == null || !parentType.equals(_r.parentType))
                {
                    return false;
                }
            }
            if(equipRid != _r.equipRid)
            {
                if(equipRid == null || _r.equipRid == null || !equipRid.equals(_r.equipRid))
                {
                    return false;
                }
            }
            if(equipName != _r.equipName)
            {
                if(equipName == null || _r.equipName == null || !equipName.equals(_r.equipName))
                {
                    return false;
                }
            }
            if(equipType != _r.equipType)
            {
                if(equipType == null || _r.equipType == null || !equipType.equals(_r.equipType))
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
        __h = IceInternal.HashUtil.hashAdd(__h, "::RdbRealData::EquipTree");
        __h = IceInternal.HashUtil.hashAdd(__h, parentRid);
        __h = IceInternal.HashUtil.hashAdd(__h, parentName);
        __h = IceInternal.HashUtil.hashAdd(__h, parentType);
        __h = IceInternal.HashUtil.hashAdd(__h, equipRid);
        __h = IceInternal.HashUtil.hashAdd(__h, equipName);
        __h = IceInternal.HashUtil.hashAdd(__h, equipType);
        return __h;
    }

    public EquipTree
    clone()
    {
        EquipTree c = null;
        try
        {
            c = (EquipTree)super.clone();
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
        __os.writeString(parentRid);
        __os.writeString(parentName);
        __os.writeString(parentType);
        __os.writeString(equipRid);
        __os.writeString(equipName);
        __os.writeString(equipType);
    }

    public void
    __read(IceInternal.BasicStream __is)
    {
        parentRid = __is.readString();
        parentName = __is.readString();
        parentType = __is.readString();
        equipRid = __is.readString();
        equipName = __is.readString();
        equipType = __is.readString();
    }

    static public void
    __write(IceInternal.BasicStream __os, EquipTree __v)
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

    static public EquipTree
    __read(IceInternal.BasicStream __is, EquipTree __v)
    {
        if(__v == null)
        {
             __v = new EquipTree();
        }
        __v.__read(__is);
        return __v;
    }
    
    private static final EquipTree __nullMarshalValue = new EquipTree();

    public static final long serialVersionUID = 504120175L;
}
