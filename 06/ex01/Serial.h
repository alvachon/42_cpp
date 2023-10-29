#ifndef SERIAL_H
# define SERIAL_H

#include "Data.h"

class Serial {

    public:
        Serial();
        ~Serial();
        Serial(const Serial & src);
        Serial& operator=(const Serial & rhs);

        uintptr_t   serialize(Data *ptr);
        Data*       deserialize(uintptr_t raw);
};


#endif  /********************************************* SERIAL.H*/