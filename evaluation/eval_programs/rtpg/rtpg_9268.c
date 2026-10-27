// RTPG_9268: vars=7 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int out64 = 6;
    int b80 = 6;
    int acc55 = 10;
    int prev47 = -41;
    int x12 = -9;
    int out36 = 4;
    int b86 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        x12 = xn[i];
        prev47 = b86 + b80;
        out64 = out64 + 4092;
        out36 = b86 - out64;
        x12 = acc55 + b86;
        if (b86 >= 68) {
        b86 = x12 + b80;
        }
        yo[i] = out64;
    }
}
int main() { test_func(); return 0; }

