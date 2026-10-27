// RTPG_1142: vars=4 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int hi13 = 4;
    int y82 = 9;
    int z33 = 37;
    int out34 = 57933;
    int *ptr = &hi13;
    int i;
    for (i = 0; i < 64; i++) {
        out34 = xn[i];
        y82 = y82 + 4;
        y82 = hi13;
        hi13 = z33 - y82;
        out34 = out34 + 4;
        out34 = out34 + 1;
        out34 = hi13 + 9;
        *ptr = *ptr + 3;
        if (out34 > 7) goto done;
        if (out34 <= -10) {
        out34 = z33;
        }
        yo[i] = y82;
    }
done:
    y82 = 0;
}
int main() { test_func(); return 0; }

