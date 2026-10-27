// RTPG_9302: vars=3 stmts=11
void test_func(void) {
    int acc97 = 5;
    int prev32 = 5;
    int cur32 = 6;
    int i;
    for (i = 0; i < 15; i++) {
        prev32 = prev32;
        prev32 = cur32 - 10;
        prev32 = cur32 - prev32;
        prev32 = acc97;
        prev32 = prev32 - cur32;
        prev32 = prev32 - acc97;
        prev32 = cur32;
        acc97 = prev32 + 7;
        acc97 = cur32 - acc97;
        acc97 = acc97 - 1;
        cur32 = acc97;
        if (cur32 >= 94) {
        prev32 = prev32 + 4;
        }
    }
}
int main() { test_func(); return 0; }

