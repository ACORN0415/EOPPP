int test_func(void) {
    int v0 = 89;
    int v1 = 25;
    int v2 = 100;
    int v3 = 18;
    int v4 = 3;
    int v5 = 21;
    int v6 = 79;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v6;
    }
    v2 = v2 & v4;
    return v0;
}
int main(void) { return test_func(); }
