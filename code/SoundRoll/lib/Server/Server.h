#ifndef Server_h
#define Server_h

class Server {

    private:
        int port = 0;


    public:
        Server();
        Server(int port);
        void init();
};

#endif