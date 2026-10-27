// RTPG_5051: vars=7 stmts=2
enum State { ON, RED, FAST };
void test_func(void) {
    int dat10 = 35182;
    float acc74 = 59.67;
    int v53 = -36;
    float c39 = 63.58;
    int a92 = 88;
    int c61 = 19;
    int cur71 = 2618;
    enum State st = ON;
    int i;
    for (i = 0; i < 51; i++) {
        v53 = acc74;
        a92 = a92 + 2;
    }
}
int main() { test_func(); return 0; }

