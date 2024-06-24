#include <iostream>
#include <twilio.h>

int main() {
    TWilio::SmsSender sender;
    sender.send(message);
    std::cout <<"OTP sent successfully" << std::endl;
}catch (const std::expection e ) {
    std::cerr << "Error sending OTP:"<< e.what() << std::endl;
}
 return 0;
}