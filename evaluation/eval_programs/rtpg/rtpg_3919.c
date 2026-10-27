// RTPG_3919: vars=3 stmts=5
void test_func(void) {
    int cur26 = 47977;
    int sum32 = 10;
    int z14 = 17;
    int *ptr = &z14;
    int h0 = 34;
    int sv0 = 0;
    int h1 = 71;
    int sv1 = 0;
    int i;
    for (i = 0; i < 15; i++) {
        cur26 = z14 * 8;
        cur26 = sum32 * 41;
        z14 = z14 + 1;
        cur26 = z14 - 6;
        z14 = z14 - sum32;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

