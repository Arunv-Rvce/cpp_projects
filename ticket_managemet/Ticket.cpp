//
// Created by arun on 07/12/19.
//
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

#include "Ticket.h"

u_int64_t Ticket::TICKET_COUNT = 0;


Ticket::Ticket(string c_name): customer_name(c_name), booked_time(std::time(nullptr)) {

}


ostream& operator<<(ostream &outStream, const Ticket& ticket) {
    outStream << "Ticket Was Booked at: " << std::asctime(std::localtime(&ticket.get_booked_time()));
    return outStream;
}
