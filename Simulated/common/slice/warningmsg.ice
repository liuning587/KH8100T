/* **************************************************
* Copyright(c) 2011-, JNKH. All rights reserved.
*
* File��warningmsg.ice
* 
*****************************************************/ 
 
#ifndef _WARNINGMSG_ICE
#define _WARNINGMSG_ICE
 
[["java:package:com.gridnt.warningmsg"]]
/**
* 
* ����澯��Ϣ�ļ�
* 
*/
module WarningMsg
{ 
    ["java:type:java.util.ArrayList<String>"]   sequence<string> Strings;
    /**
    *
    *�ļ�����
    *
    **/
    struct WarningMsgContent
    {
        //��ȡ�ļ�λ��
        long pos;
        
        //����
        Strings content;
    };
                 
    interface WarningMsgFile
    {
        /**
         *
         *��ȡ�����ļ�����
         * @parameter pos:�ϴζ�ȡ�ļ�λ��
         * @parameter length:��ȡ����
         * @parameter strFilename:�ļ�����
         * @return LogContent
         **/
        ["cpp:const","nonmutating"] WarningMsgContent getContent(long pos, int length, string strFilename) ;
    };

    ["java:type:java.util.ArrayList<byte>"]   sequence<byte> Bytes;
    
    const string SendWarningMsgTopic = "SendWarningMsg";  // ����
    interface SendWarningMsg
    {
        void sendWarningMsgBinary(string title, Bytes datas);

        // �ļ��������
        void sendFinished(string title);
    };
};
 
#endif 