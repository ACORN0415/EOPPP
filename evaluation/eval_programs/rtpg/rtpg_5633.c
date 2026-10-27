// RTPG_5633: vars=4 stmts=6
void test_func(void) {
    int sum84 = 15;
    int sum99 = 7497;
    int cur89 = 4;
    int b28 = 94;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 19339;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        sum84 = sum99 - cur89;
        sum84 = sum99 - sum84;
        sum99 = cur89 - 98;
        sum99 = sum84 + cur89;
        b28 = b28 - sum84;
        b28 = sum84 - b28;
    }
}
int main() { test_func(); return 0; }

