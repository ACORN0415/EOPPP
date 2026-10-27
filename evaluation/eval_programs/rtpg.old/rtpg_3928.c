// RTPG_3928: vars=3 stmts=3
int xn[32];
int yo[32];
enum State { ON, RED, GREEN };
void test_func(void) {
    int a23 = -22;
    int prev1 = 68;
    int z54 = 59;
    enum State st = ON;
    int i;
    for (i = 0; i < 32; i++) {
        z54 = xn[i];
        z54 = prev1;
        a23 = z54 + 31127;
        z54 = z54 + prev1;
        if (prev1 >= 37) {
        z54 = z54 + 2;
        }
        yo[i] = a23;
    }
}
int main() { test_func(); return 0; }

