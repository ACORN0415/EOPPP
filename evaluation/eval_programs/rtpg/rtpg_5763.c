// RTPG_5763: vars=6 stmts=7
enum State { FAST, GREEN, SLOW };
void test_func(void) {
    int x83 = 25;
    int prev17 = -11;
    int dat33 = 0;
    int z64 = 6;
    int cnt97 = 2;
    int dat23 = 36099;
    enum State st = FAST;
    int h0 = 43;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int h2 = 45342;
    int sv2 = 0;
    int i;
    for (i = 0; i < 54; i++) {
        cnt97 = cnt97;
        x83 = x83 - 3;
        z64 = x83 - 2;
        prev17 = prev17 - 2;
        cnt97 = cnt97 + 3;
        dat33 = cnt97;
        x83 = x83 + cnt97;
        if (prev17 > 0) goto done;
        if (prev17 < 61) {
        dat33 = dat23 - 2;
        }
    }
done:
    dat33 = 0;
}
int main() { test_func(); return 0; }

