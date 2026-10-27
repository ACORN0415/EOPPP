// RTPG_541: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int v23 = 1;
    int lo69 = 8;
    int val11 = 39;
    int i;
    for (i = 0; i < 32; i++) {
        lo69 = xn[i];
        val11 = val11 - 4;
        v23 = lo69 - val11;
        lo69 = lo69 + 4;
        if (val11 > 27) {
        v23 = v23;
        }
        yo[i] = v23;
    }
}
int main() { test_func(); return 0; }

