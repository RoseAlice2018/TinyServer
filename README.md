# TinyServer

    C++轻量级Web服务器
        - 使用线程池 + 非阻塞socket + epoll(ET和LT均实现) + 事件处理（Reactor 和模拟Proactor均实现）的并发模型
        - 使用**状态机**解析HTTP请求报文，支持解析GET和POST请求
        - 访问服务器数据库实现Web端用户注册,登录功能，可以请求服务器图片和视频文件
        - 实现同步/异步日志系统，记录服务器运行状态
        - 经Webbench压力测试可以实现**上万并发连接**数据交换