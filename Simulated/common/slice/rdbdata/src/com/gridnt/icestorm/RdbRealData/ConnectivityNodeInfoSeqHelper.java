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

public final class ConnectivityNodeInfoSeqHelper
{
    public static void
    write(IceInternal.BasicStream __os, java.util.List<ConnectivityNodeInfo> __v)
    {
        if(__v == null)
        {
            __os.writeSize(0);
        }
        else
        {
            __os.writeSize(__v.size());
            for(ConnectivityNodeInfo __elem : __v)
            {
                ConnectivityNodeInfo.__write(__os, __elem);
            }
        }
    }

    public static java.util.List<ConnectivityNodeInfo>
    read(IceInternal.BasicStream __is)
    {
        java.util.List<ConnectivityNodeInfo> __v;
        __v = new java.util.ArrayList<ConnectivityNodeInfo>();
        final int __len0 = __is.readAndCheckSeqSize(2);
        for(int __i0 = 0; __i0 < __len0; __i0++)
        {
            ConnectivityNodeInfo __elem = null;
            __elem = ConnectivityNodeInfo.__read(__is, __elem);
            __v.add(__elem);
        }
        return __v;
    }
}
