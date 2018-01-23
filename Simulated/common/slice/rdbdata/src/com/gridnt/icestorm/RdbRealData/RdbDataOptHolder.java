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

public final class RdbDataOptHolder extends Ice.ObjectHolderBase<RdbDataOpt>
{
    public
    RdbDataOptHolder()
    {
    }

    public
    RdbDataOptHolder(RdbDataOpt value)
    {
        this.value = value;
    }

    public void
    patch(Ice.Object v)
    {
        if(v == null || v instanceof RdbDataOpt)
        {
            value = (RdbDataOpt)v;
        }
        else
        {
            IceInternal.Ex.throwUOE(type(), v);
        }
    }

    public String
    type()
    {
        return _RdbDataOptDisp.ice_staticId();
    }
}
