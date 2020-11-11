#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <map>

#include <sys/epoll.h>

#include "Channel.h"
#include "IChannelCallBack.h"

const int MAX_LINE = 100;
const int MAX_EVENTS = 500;
const int MAX_LISTENFD = 5;

using namespace std;

class TcpServer: public IChannelCallBack
{
    public:
        TcpServer();
        ~TcpServer();
        void start();
        virtual void OnIn(int sockfd);
    private:
        int createAndListen();
        void update(Channel* pChannel, int op);

        int _epollfd;
        int _listenfd;
        struct epoll_event _events[MAX_EVENTS];
        map<int, Channel*> _channels;
};

#endif
