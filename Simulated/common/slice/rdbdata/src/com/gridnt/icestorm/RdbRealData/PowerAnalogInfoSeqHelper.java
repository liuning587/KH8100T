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

public final class PowerAnalogInfoSeqHelper
{
    public static void
    write(IceInternal.BasicStream __os, java.util.List<PowerAnalogInfo> __v)
    {
        if(__v == null)
        {
            __os.writeSize(0);
        }
        else
        {
            __os.writeSize(__v.size());
            for(PowerAnalogInfo __elem : __v)
            {
                PowerAnalogInfo.__write(__os, __elem);
            }
        }
    }

    public static java.util.List<PowerAnalogInfo>
    read(IceInternal.BasicStream __is)
    {
        java.util.List<PowerAnalogInfo> __v;
        __v = new java.util.ArrayList<PowerAnalogInfo>();
        final int __len0 = __is.readAndCheckSeqSize(10);
        for(int __i0 = 0; __i0 < __len0; __i0++)
        {
            PowerAnalogInfo __elem = null;
            __elem = PowerAnalogInfo.__read(__is, __elem);
            __v.add(__elem);
        }
        return __v;
    }
}
