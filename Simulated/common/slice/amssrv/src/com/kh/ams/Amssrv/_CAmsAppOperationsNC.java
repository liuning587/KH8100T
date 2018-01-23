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
 * AMS Manager对外接口
 *
 **/
public interface _CAmsAppOperationsNC
{
    /**
     * 预先注册，得到预订角色
     *
     * @parameter strType:节点类型
     * @parameter ipVect:注册节点的ip列表
     * @parameter num:注册次数
     * @parameter ServerNode:返回节点的信息
     * @return 预订角色(unknow/master/slave)
     * @throws CAmsException:未知异常
     *
     **/
    String Register(String strType, java.util.List<java.lang.String> ipVect, int num, ServerNodeHolder serverInfo)
        throws CAmsException;

    /**
     * 完成注册
     *
     * @parameter strServerName:Server名称
     * @parameter strRole:确认角色
     * @parameter district:分区
     * @parameter section:分段
     * @parameter districtName:分区名称
     * @parameter sectionName:分段名称 
     * @return void
     * @throws CAmsException:未知异常
     *
     **/
    void FinishRegister(String strServerName, String strRole, String district, String section)
        throws CAmsException;

    /**
     * 退出
     *
     * @parameter serverInfo:Server信息
     * @return void
     *
     **/
    void Quit(ServerNode serverInfo);

    /**
     * 角色切换
     *
     * @parameter strServerName:Server名称信息
     * @parameter strIp:ip信息
     * @parameter port:端口信息
     * @parameter strRole:切换角色
     * @return void
     *
     **/
    void shiftRole(String strType, String strServerName, String strIp, int port, String strRole, String strPart, String strSec);

    /**
     * 查询指定Server名称的角色
     *
     * @return string:返回角色值,master代表主,slave代表从，unknow代表未知
     * @throws Exception:其它原因
     *
     **/
    String GetRole(String strServerName)
        throws CAmsException;

    void HeartBeat(String strServerName)
        throws CAmsException;
}
