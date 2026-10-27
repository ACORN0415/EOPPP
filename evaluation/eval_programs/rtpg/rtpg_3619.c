// RTPG_3619: vars=5 stmts=8
void test_func(void) {
    int cur63 = 6;
    int prev94 = 7;
    int val7 = 53;
    int b77 = -23;
    int v6 = 98;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 62693;
    int sv1 = 0;
    int i;
    for (i = 0; i < 67; i++) {
        val7 = b77;
        cur63 = b77 + 8;
        cur63 = val7 - b77;
        v6 = v6 + 5;
        cur63 = prev94;
        val7 = prev94;
        prev94 = v6;
        v6 = b77 + val7;
    }
}
int main() { test_func(); return 0; }

