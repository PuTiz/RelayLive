/**
 * ���ĶԷ�ƽ̨
 */

#pragma once
#include "SipHeaders.h"

class CSipSubscribe
{
public:
    CSipSubscribe(eXosip_t* pSip);
    virtual ~CSipSubscribe(void);

    // ���öԷ�ƽ̨����Ϣ
    void SetPlatform(string strDevCode, string strAddrIP, string strAddrPort);

    // Ŀ¼״̬����
    void SubscribeDirectory(const int expires);

    // �¼�����
    void SubscribeAlarm(const int expires);

    // �ƶ��豸λ����Ϣ����
    void SubscribeMobilepostion(const int expires);

	// �ƶ��豸λ����Ϣ����[���Ķ���豸]
    void SubscribeMobilepostion(const int expires, vector<string> devs);

	// �ƶ��豸λ����Ϣ����[���ĵ����豸]
    void SubscribeMobilepostion(const int expires, string strDevCode);

private:
    eXosip_t* m_pExContext;
    string    m_strCode;    //�Է�ƽ̨�ı���
    string    m_strIP;      //�Է�ƽ̨��IP
    string    m_strPort;    //�Է�ƽ̨�Ķ˿�
};
