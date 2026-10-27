// RTPG_6648: vars=6 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int a10 = 4553;
    int sum89 = 33;
    int v30 = 37825;
    int y14 = 7;
    int out9 = 7;
    int sum57 = 55304;
    int i;
    for (i = 0; i < 64; i++) {
        a10 = xn[i];
        y14 = a10;
        y14 = out9 - sum89;
        y14 = y14 - 4;
        yo[i] = sum57;
    }
}
int main() { test_func(); return 0; }

