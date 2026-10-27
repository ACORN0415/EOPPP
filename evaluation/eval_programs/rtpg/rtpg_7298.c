// RTPG_7298: vars=6 stmts=5
enum State { ON, GREEN, SLOW };
void test_func(void) {
    int out87 = 91;
    int c27 = 0;
    int cnt87 = 2;
    int z91 = 56255;
    int res19 = 25104;
    int a83 = 32;
    enum State st = ON;
    int i;
    for (i = 0; i < 64; i++) {
        c27 = c27 + 59;
        c27 = z91 + a83;
        z91 = a83;
        cnt87 = c27 - res19;
        z91 = res19;
    }
}
int main() { test_func(); return 0; }

