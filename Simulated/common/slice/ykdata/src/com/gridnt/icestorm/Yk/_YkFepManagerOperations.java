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
// Generated from file `ykdata.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package com.gridnt.icestorm.Yk;

public interface _YkFepManagerOperations
{
    /**
     * @param: cmd - ң�����
     * @param __current The Current object for the invocation.
     **/
    void select(YkCommand cmd, Ice.Current __current);

    void execute(YkCommand cmd, Ice.Current __current);

    void cancel(YkCommand cmd, Ice.Current __current);
}
