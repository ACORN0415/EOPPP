int test_func(void) {
    int v0 = 6;
    int v1 = 12;
    int v2 = 78;
    int v3 = 63;
    int v4 = 81;
    int v5 = 98;
    int v6 = 34;
    int i;
    v5 = v5 + v2;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v2;
    }
    if (v5 > v5) { v5 = v5; }
    return v0;
}
int main(void) { return test_func(); }
