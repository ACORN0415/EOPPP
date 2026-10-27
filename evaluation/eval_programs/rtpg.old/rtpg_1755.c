// RTPG_1755: vars=3 stmts=6
void test_func(void) {
    int cnt17 = -13;
    int lo60 = -4;
    int sum66 = 97;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 38;
    int sv1 = 0;
    int i;
    for (i = 0; i < 10; i++) {
        lo60 = cnt17 + sum66;
        sum66 = lo60 - lo60;
        sum66 = cnt17 * -21;
        sum66 = sum66 + sum66;
        sum66 = lo60 * 64;
        sum66 = lo60 - sum66;
        if (cnt17 >= 61) {
        sum66 = sum66 + 2;
        }
    }
done:
    lo60 = 0;
}
int main() { test_func(); return 0; }

