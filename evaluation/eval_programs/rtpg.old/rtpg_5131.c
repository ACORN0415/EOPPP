// RTPG_5131: vars=3 stmts=7
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int prev96 = 5;
    int z40 = 2;
    int prev87 = 24;
    int h0 = -41;
    int sv0 = 0;
    int h1 = 34;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        z40 = xn[i];
        prev96 = xn[idx_arr[i]];
        prev87 = z40 * 5;
        prev96 = z40 - prev96;
        prev96 = z40 * 6245;
        prev87 = prev87 + z40;
        prev96 = z40;
        prev96 = prev96 + 4;
        z40 = prev96 + prev87;
        if (prev96 > 59950) goto done;
        if (prev87 >= 4) {
        z40 = prev96 - prev87;
        }
        yo[i] = prev96;
    }
done:
    prev96 = 0;
}
int main() { test_func(); return 0; }

