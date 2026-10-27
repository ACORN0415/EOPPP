// RTPG_6933: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int prev40 = -26;
    int dat85 = 11667;
    int a57 = 27218;
    int x17 = 68;
    int cur91 = -20;
    int cnt95 = 23087;
    int i;
    for (i = 0; i < 32; i++) {
        dat85 = xn[i];
        cnt95 = dat85;
        x17 = prev40 + a57;
        a57 = prev40 - cur91;
        a57 = a57 - prev40;
        cnt95 = cnt95 - 2;
        yo[i] = cur91;
    }
}
int main() { test_func(); return 0; }

