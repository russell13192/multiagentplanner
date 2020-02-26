/**
 * @file main.cpp
 * @author George Murray (russell13192@gmail.com)
 * @brief Main entry point for the multi agent planning system
 * @version 0.1
 * @date 2020-02-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "pistache/endpoint.h"

using namespace Pistache;

/**
 * @brief HelloHandler class -> This class handles the requests to the / endpoint and returns a string of Hello World
 * 
 */
class HelloHandler : public Http::Handler {
public:

    HTTP_PROTOTYPE(HelloHandler)

    /**
     * @brief Function to handle a generic request
     * 
     * @param request an HTTP request
     * @param response an HTTP response with the string Hello World
     */
    void onRequest(const Http::Request& request, Http::ResponseWriter response) override{
        UNUSED(request);
        response.send(Pistache::Http::Code::Ok, "Hello World\n");
    }
};

int main() {
    Pistache::Address addr(Pistache::Ipv4::any(), Pistache::Port(9080));
    auto opts = Pistache::Http::Endpoint::options()
        .threads(1);

    Http::Endpoint server(addr);
    server.init(opts);
    server.setHandler(Http::make_handler<HelloHandler>());
    server.serve();
}