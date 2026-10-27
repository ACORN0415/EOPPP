int test_func(void) {
    int v0 = 32;
    int v1 = 40;
    int v2 = 29;
    int v3 = 47;
    int v4 = 85;
    int v5 = 28;
    int v6 = 80;
    int v7 = 51;
    int i;
    v0 = v0 * 4;
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 20; i++) {
        v4 = v4 + v5;
    }
    v3 = v3 + v2;
    return v0;
}
int main(void) { return test_func(); }
