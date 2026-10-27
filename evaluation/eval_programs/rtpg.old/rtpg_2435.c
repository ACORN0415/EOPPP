// RTPG_2435: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int cur7 = 48;
    int a10 = 0;
    int hi52 = 95;
    int acc60 = 10;
    int sum47 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        hi52 = xn[i];
        hi52 = acc60 - a10;
        hi52 = acc60 - cur7;
        sum47 = cur7;
        sum47 = hi52;
        cur7 = acc60 - 42;
        yo[i] = acc60;
    }
}
int main() { test_func(); return 0; }

