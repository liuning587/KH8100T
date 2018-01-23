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
// Generated from file `amssrv.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package com.kh.ams.Amssrv;

public final class CAmsManagerHolder extends Ice.ObjectHolderBase<CAmsManager>
{
    public
    CAmsManagerHolder()
    {
    }

    public
    CAmsManagerHolder(CAmsManager value)
    {
        this.value = value;
    }

    public void
    patch(Ice.Object v)
    {
        if(v == null || v instanceof CAmsManager)
        {
            value = (CAmsManager)v;
        }
        else
        {
            IceInternal.Ex.throwUOE(type(), v);
        }
    }

    public String
    type()
    {
        return _CAmsManagerDisp.ice_staticId();
    }
}
