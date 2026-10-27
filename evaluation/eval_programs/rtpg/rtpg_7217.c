// RTPG_7217: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int cnt30 = 0;
    int res73 = 48301;
    int b85 = 89;
    int res40 = 46;
    int lo47 = 70;
    int *ptr = &res40;
    int i;
    for (i = 0; i < 64; i++) {
        lo47 = xn[i];
        cnt30 = cnt30 + 3;
        res40 = res40 - 2;
        res73 = res40 + b85;
        b85 = res73 + 79;
        res40 = cnt30 + res40;
        *ptr = *ptr + 2;
        if (cnt30 != 73) {
        lo47 = res73;
        }
        yo[i] = res73;
    }
}
int main() { test_func(); return 0; }

