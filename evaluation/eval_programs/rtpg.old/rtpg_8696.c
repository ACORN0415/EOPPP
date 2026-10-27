// RTPG_8696: vars=5 stmts=2
int idx_arr[32];
enum State { GREEN, SLOW, ON };
void test_func(void) {
    float v77 = 18.29;
    int a78 = 28405;
    int prev44 = 1929;
    int cnt56 = 6;
    int lo10 = 3;
    enum State st = GREEN;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 17;
    int sv1 = 0;
    int i;
    for (i = 0; i < 45; i++) {
        lo10 = xn[idx_arr[i]];
        v77 = a78;
        prev44 = prev44 * 60669;
    }
}
int main() { test_func(); return 0; }

