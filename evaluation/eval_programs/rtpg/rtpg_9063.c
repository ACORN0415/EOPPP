// RTPG_9063: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int acc89 = 23;
    float out54 = 18.11;
    int cnt90 = 162;
    int i;
    for (i = 0; i < 16; i++) {
        out54 = xn[i];
        cnt90 = acc89 + acc89;
        cnt90 = out54 | acc89;
        acc89 = out54 + 9;
        cnt90 = acc89 ^ cnt90;
        yo[i] = out54;
    }
}
int main() { test_func(); return 0; }

