// RTPG_1755: vars=3 stmts=2
void test_func(void) {
    int b81 = 13;
    int val49 = 3;
    int res78 = 42;
    int h0 = 9;
    int sv0 = 0;
    int h1 = -38;
    int sv1 = 0;
    int i;
    for (i = 0; i < 77; i++) {
        val49 = val49 + res78;
        res78 = val49 & res78;
    }
}
int main() { test_func(); return 0; }

