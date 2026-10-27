// RTPG_956: vars=6 stmts=4
int xn[16];
int yo[16];
enum State { RED, SLOW, BLUE };
void test_func(void) {
    int cur96 = 5;
    int prev30 = 1;
    int acc31 = 57;
    double hi5 = 27.77;
    float prev45 = 99.62;
    int res57 = 15;
    enum State st = RED;
    int h0 = 23408;
    int sv0 = 0;
    int h1 = 43;
    int sv1 = 0;
    int h2 = 3;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev30 = xn[i];
        hi5 = cur96;
        prev45 = cur96 - prev30;
        prev30 = cur96 - cur96;
        prev45 = hi5 + res57;
        if (prev45 != 30) {
        res57 = res57 + res57;
        }
        yo[i] = cur96;
    }
}
int main() { test_func(); return 0; }

