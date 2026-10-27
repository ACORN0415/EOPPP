// RTPG_4427: vars=4 stmts=8
void test_func(void) {
    int lo41 = 5;
    int out71 = 48;
    int val88 = 62961;
    int val24 = 7;
    int h0 = 8411;
    int sv0 = 0;
    int h1 = 55530;
    int sv1 = 0;
    int i;
    for (i = 0; i < 93; i++) {
        out71 = out71 + val24;
        lo41 = lo41 - val88;
        val24 = val24 - out71;
        val24 = val24 - 3;
        val88 = val24;
        val24 = out71 * 37831;
        lo41 = val88 - val24;
        val24 = val24;
    }
}
int main() { test_func(); return 0; }

