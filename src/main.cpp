#include <boost/asio.hpp>
#include "lib/icap.h"


int main() {
    boost::asio::io_service ios;
    Client client(ios);
    Response resp = client.options("localhost", "13440", "echo");
    return 0;
}
