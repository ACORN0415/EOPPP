int test_func(void) {
    int v0 = 94;
    int v1 = 18;
    int v2 = 41;
    int v3 = 50;
    int v4 = 55;
    int v5 = 64;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v4;
    }
    v0 = v0 - v3;
    if (v0 > v4) { v0 = v4; }
    return v0;
}
int main(void) { return test_func(); }
