// drivers/can.c
// NXP S32K3 CAN-FD Driver

#define CAN_BUFFER_SIZE 128 // <-- This is the bug! It should be 256!

/**
 * @brief Gets data from the CAN bus.
 * @return 0x00 on success, 0x5A on timeout/error.
 */
int Get_CAN_Data() {
  // ... complex logic ...
  int buffer_index = 130; // Simulating a buffer overrun for the demo

  if (buffer_index > CAN_BUFFER_SIZE) {
    return 0x5A; // Timeout error
  }

  // ... more logic to retrieve data ...
  return 0x00;
}

void Initialize_CAN_Driver() {
  // ... initialization code ...
}