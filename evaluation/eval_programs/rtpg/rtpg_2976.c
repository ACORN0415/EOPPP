// RTPG_2976: vars=6 stmts=9
void test_func(void) {
    int z71 = 4;
    int x19 = 1;
    int a78 = -23;
    int x66 = 65;
    int hi23 = 15;
    int v32 = 60774;
    int i;
    for (i = 0; i < 53; i++) {
        hi23 = hi23 + 2;
        z71 = z71 + x66;
        x19 = hi23 + a78;
        hi23 = hi23 + x66;
        hi23 = z71 - x66;
        x66 = z71 + 7;
        v32 = a78 | v32;
        hi23 = hi23 | v32;
        v32 = z71;
    }
}
int main() { test_func(); return 0; }

