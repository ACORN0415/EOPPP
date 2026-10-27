// RTPG_2093: vars=3 stmts=5
void test_func(void) {
    int val69 = -8;
    int tmp68 = 6;
    int cur32 = 37;
    int i;
    for (i = 0; i < 26; i++) {
        val69 = val69 - tmp68;
        cur32 = val69 - tmp68;
        cur32 = cur32 - val69;
        cur32 = cur32 - 4;
        tmp68 = val69 - val69;
    }
}
int main() { test_func(); return 0; }

