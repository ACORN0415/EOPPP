// RTPG_9431: vars=7 stmts=5
void test_func(void) {
    int x76 = 46;
    int c20 = -7;
    int tmp72 = 0;
    int dat60 = 6;
    int z97 = -32;
    int cur35 = 9;
    int out65 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        dat60 = x76 & c20;
        dat60 = c20;
        tmp72 = dat60 - cur35;
        tmp72 = cur35 - x76;
        z97 = z97 + 1;
        if (tmp72 > 33) goto done;
        if (cur35 > -11) {
        c20 = tmp72 + 62;
        }
    }
done:
    tmp72 = 0;
}
int main() { test_func(); return 0; }

