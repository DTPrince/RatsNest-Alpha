#ifndef COMMANDPACKET_H
#define COMMANDPACKET_H

//#include thatSerialLib

class CommandPacket {
public:
    CommandPacket();

    unsigned char get_type();
    unsigned char get_command();
    unsigned char get_length();
    char * get_data();
    int get_compressedData();

    void log_packet();  //might not belong here tbh
private:
    unsigned char type;
    unsigned char command;
    unsigned char length;
    char * data;
    int compressedData; //compress char data in single int.
};

#endif // COMMANDPACKET_H
