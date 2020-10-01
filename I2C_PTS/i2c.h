void i2c_init(void);
void i2c_start(void);
void i2c_restart(void);
void i2c_stop(void);
void i2c_write(unsigned char data);
void i2c_ack_t(void);
void i2c_ack_r(void);
void i2c_nack(void);
unsigned char i2c_read(void);
void i2c_address(int address);
void i2c_Wait(void);