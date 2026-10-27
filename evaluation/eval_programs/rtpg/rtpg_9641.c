// RTPG_9641: vars=6 stmts=5
void test_func(void) {
    int prev51 = 1;
    int acc36 = 6;
    int dat83 = 21;
    int tmp60 = 27;
    int val48 = 89;
    int acc32 = 57834;
    int i;
    for (i = 0; i < 12; i++) {
        prev51 = dat83;
        tmp60 = dat83 + dat83;
        acc36 = prev51;
        acc32 = acc32 + acc32;
        prev51 = dat83 - acc32;
    }
}
int main() { test_func(); return 0; }

