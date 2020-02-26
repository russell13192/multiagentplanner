/**
 * @file HelloHandler.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-02-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "pistache/endpoint.h"

class HelloHandler : public Http::Handler {
public:

    HTTP_PROTOTYPE(HelloHandler)

    void onRequest(const Http::Request& request, Http::ResponseWriter response) {
         response.send(Http::Code::Ok, "Hello, World");
    }
};