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

public final class RfwWarnEventsHelper
{
    public static void
    write(IceInternal.BasicStream __os, RfwWarn[] __v)
    {
        if(__v == null)
        {
            __os.writeSize(0);
        }
        else
        {
            __os.writeSize(__v.length);
            for(int __i0 = 0; __i0 < __v.length; __i0++)
            {
                RfwWarn.__write(__os, __v[__i0]);
            }
        }
    }

    public static RfwWarn[]
    read(IceInternal.BasicStream __is)
    {
        RfwWarn[] __v;
        final int __len0 = __is.readAndCheckSeqSize(12);
        __v = new RfwWarn[__len0];
        for(int __i0 = 0; __i0 < __len0; __i0++)
        {
            __v[__i0] = RfwWarn.__read(__is, __v[__i0]);
        }
        return __v;
    }
}
