// RTPG_3685: vars=4 stmts=6
void test_func(void) {
    int sum32 = 7;
    int lo24 = 34;
    int dat36 = 9;
    int cur11 = 2;
    int h0 = 94;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 98; i++) {
        sum32 = sum32 - lo24;
        sum32 = dat36 - dat36;
        lo24 = dat36 + sum32;
        cur11 = cur11 * 9;
        cur11 = cur11 + 2;
        sum32 = cur11 * 32;
        if (lo24 > 52) {
        dat36 = lo24 - sum32;
        }
    }
}
int main() { test_func(); return 0; }

