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
// Generated from file `protect.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package com.kh.scada.protect.Protect;

public final class BytesHelper
{
    public static void
    write(IceInternal.BasicStream __os, byte[] __v)
    {
        __os.writeByteSeq(__v);
    }

    public static byte[]
    read(IceInternal.BasicStream __is)
    {
        byte[] __v;
        __v = __is.readByteSeq();
        return __v;
    }
}
