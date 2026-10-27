// RTPG_1417: vars=3 stmts=3
enum State { GREEN, RED, ON };
void test_func(void) {
    int c93 = 63976;
    int out31 = -27;
    int dat85 = 3;
    enum State st = GREEN;
    int *ptr = &dat85;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 48;
    int sv1 = 0;
    int i;
    for (i = 0; i < 25; i++) {
        dat85 = dat85 + c93;
        dat85 = dat85 - c93;
        dat85 = out31 + c93;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

