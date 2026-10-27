// RTPG_8442: vars=3 stmts=2
void test_func(void) {
    int v32 = 7;
    int c60 = 10;
    int lo38 = 6;
    int i;
    for (i = 0; i < 50; i++) {
        lo38 = c60;
        v32 = lo38 - 64730;
    }
}
int main() { test_func(); return 0; }

