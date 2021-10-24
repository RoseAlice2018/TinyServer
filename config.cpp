
#include<string>
// 日志写模式定义
#define SYNLOG  1//同步写日志
#define ASYNLOG 2//异步写日志

// LT ET模式
#define listenfdET 1//边缘触发非阻塞
#define listenfdLT 2//水平触发阻塞ß


//日志模式选择
#define  LOG SYNLOG 
//epoll模式选择
#define EpollModel listenfdET

std::string IP_address = "127.0.0.1";
std::string Port = "80";
