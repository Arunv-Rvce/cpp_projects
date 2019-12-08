//
// Created by arun on 07/12/19.
//

#ifndef TICKET_MANAGEMET_TICKET_H
#define TICKET_MANAGEMET_TICKET_H

#endif //TICKET_MANAGEMET_TICKET_H

class Ticket {
public:
    static u_int64_t TICKET_COUNT;
    Ticket(string c_name);
    const string& get_customer_name(void) const { return customer_name; }
    const time_t& get_booked_time(void) const { return booked_time; }

    friend ostream& operator<<(ostream& outStream, const Ticket& ticket);

private:
    string customer_name;
    time_t booked_time;
    double per_ticket_price;
    int ticket_count;
};
