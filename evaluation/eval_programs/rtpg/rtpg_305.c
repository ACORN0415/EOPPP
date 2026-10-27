// RTPG_305: vars=3 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int x82 = 36;
    int b43 = 13;
    int acc23 = 48958;
    int i;
    for (i = 0; i < 16; i++) {
        acc23 = xn[i];
        x82 = acc23 - x82;
        acc23 = acc23 - 1;
        x82 = x82 - acc23;
        x82 = b43 + 2;
        b43 = b43 - x82;
        acc23 = acc23;
        b43 = x82;
        b43 = x82;
        b43 = b43 - 7;
        b43 = x82 - acc23;
        acc23 = x82;
        if (acc23 == 87) {
        acc23 = b43 - acc23;
        }
        yo[i] = b43;
    }
}
int main() { test_func(); return 0; }

