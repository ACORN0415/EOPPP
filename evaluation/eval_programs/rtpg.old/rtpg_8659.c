// RTPG_8659: vars=4 stmts=6
void test_func(void) {
    int z35 = 20367;
    int c10 = 33;
    int z7 = 16;
    int out5 = 68;
    int *ptr = &z35;
    int h0 = 23;
    int sv0 = 0;
    int h1 = 51988;
    int sv1 = 0;
    int i;
    for (i = 0; i < 97; i++) {
        c10 = c10 * 57731;
        z35 = z35;
        out5 = z35 - 5;
        out5 = out5 + 4;
        z7 = c10 - z35;
        z7 = out5 - c10;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

