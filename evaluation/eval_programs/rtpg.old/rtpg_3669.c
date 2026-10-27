// RTPG_3669: vars=3 stmts=9
void test_func(void) {
    int b64 = 4;
    int v42 = 13;
    int b99 = 36099;
    int i;
    for (i = 0; i < 30; i++) {
        int j;
        for (j = 0; j < 5; j++) {
        v42 = v42 - b64;
        b99 = b99 - 7;
        b99 = v42;
        v42 = v42 - 27;
        b99 = b99 - v42;
        v42 = v42 + 63648;
        b64 = b64;
        v42 = v42 + 6;
        b99 = b64 - 7;
        }
    }
}
int main() { test_func(); return 0; }

