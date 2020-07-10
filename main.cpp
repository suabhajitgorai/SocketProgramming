#include <iostream>
#include <unistd.h>
#include <netdb.h>

using namespace std;
int main() {

    size_t size = 15;
    char *hostname = (char*)malloc ( size * sizeof (char));
    int status =  gethostname(hostname,  size);
    hostent *addr =  gethostbyname(hostname);
    cout<<"the hostname is " << hostname << endl;
    cout<<"the status is " << status << endl;
    addr->h_addrtype
    return 0;
}