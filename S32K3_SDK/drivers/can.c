#define CAN_BUFFER_SIZE 256

void can_send_data(const uint8_t* data, size_t length) {
    if (length > CAN_BUFFER_SIZE) {
        // Handle overflow
    }
    // Sending logic...
}