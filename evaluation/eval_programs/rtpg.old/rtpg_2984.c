// RTPG_2984: vars=6 stmts=9
void test_func(void) {
    int a78 = 4;
    int x66 = 1;
    int x19 = -23;
    int hi23 = 65;
    int v32 = 15;
    int z71 = 60774;
    int i;
    for (i = 0; i < 53; i++) {
        v32 = v32 + 2;
        a78 = a78 + hi23;
        x66 = v32 + x19;
        v32 = v32 + hi23;
        v32 = a78 - hi23;
        hi23 = a78 + 7;
        z71 = x19 | v32;
        v32 = v32 | v32;
        z71 = a78;
    }
}
int main() { test_func(); return 0; }

