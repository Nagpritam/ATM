void lcd_cmd (char c);
void lcd_data  (char c);
void delay(int count);
void lcd_init(void);
void isr_eint1(void)__irq;
void ext_int_init(void);
//void lcd_display(int count);
void adc_init(void);
void lcd_display(long int n);
void chaser (void);
void adc (void);
void timer (void);
void timer0_init(void);
void ext_timerint_init(void);
void uart_init(void);
void i2c_init(char c);
void serial_rec(void);
void data(void);
int stringcheck(char edf[6]);
void passrec(int c);
int passcheck(char edf[4],int gh);
void amount_rec(int h);
int amountcheck(int edf,int j);
