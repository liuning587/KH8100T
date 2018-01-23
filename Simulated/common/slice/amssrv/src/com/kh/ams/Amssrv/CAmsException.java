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

/**
 * AMS�쳣
 *
 **/
public class CAmsException extends Ice.UserException
{
    public CAmsException()
    {
        reason = "";
    }

    public CAmsException(Throwable __cause)
    {
        super(__cause);
        reason = "";
    }

    public CAmsException(String reason)
    {
        this.reason = reason;
    }

    public CAmsException(String reason, Throwable __cause)
    {
        super(__cause);
        this.reason = reason;
    }

    public String
    ice_name()
    {
        return "Amssrv::CAmsException";
    }

    /**
     * �쳣ԭ��
     *
     **/
    public String reason;

    protected void
    __writeImpl(IceInternal.BasicStream __os)
    {
        __os.startWriteSlice("::Amssrv::CAmsException", -1, true);
        __os.writeString(reason);
        __os.endWriteSlice();
    }

    protected void
    __readImpl(IceInternal.BasicStream __is)
    {
        __is.startReadSlice();
        reason = __is.readString();
        __is.endReadSlice();
    }

    public static final long serialVersionUID = 237473003L;
}
