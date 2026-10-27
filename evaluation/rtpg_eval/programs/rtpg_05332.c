int test_func(void) {
    int v0 = 60;
    int v1 = 83;
    int v2 = 57;
    int v3 = 34;
    int v4 = 30;
    int v5 = 63;
    int v6 = 71;
    int v7 = 8;
    int i;
    for (i = 0; i < 14; i++) {
        v6 = v6 + v4;
    }
    v7 = 88;
    if (v1 > v7) { v1 = v7; }
    v0 = v0 + v0;
    return v0;
}
int main(void) { return test_func(); }
