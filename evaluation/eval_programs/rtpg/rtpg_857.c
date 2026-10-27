// RTPG_857: vars=4 stmts=3
void test_func(void) {
    int sum99 = 90;
    float x71 = 7.17;
    int lo80 = 3;
    int x75 = 24454;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 97; i++) {
        lo80 = x71 * 0;
        lo80 = lo80 + 4;
        lo80 = lo80 - 4;
        if (lo80 > 49375) goto done;
        if (x75 > -42) {
        sum99 = sum99 - x71;
        }
    }
done:
    sum99 = 0;
}
int main() { test_func(); return 0; }

