// RTPG_9440: vars=6 stmts=5
void test_func(void) {
    int tmp60 = 1;
    int acc32 = 6;
    int acc36 = 21;
    int prev51 = 27;
    int dat83 = 89;
    int val48 = 57834;
    int i;
    for (i = 0; i < 12; i++) {
        tmp60 = acc36;
        prev51 = acc36 + acc36;
        acc32 = tmp60;
        val48 = val48 + val48;
        tmp60 = acc36 - val48;
    }
}
int main() { test_func(); return 0; }

