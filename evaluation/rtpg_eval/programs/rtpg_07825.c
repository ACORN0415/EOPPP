int test_func(void) {
    int v0 = 57;
    int v1 = 34;
    int v2 = 78;
    int v3 = 93;
    int v4 = 94;
    int v5 = 77;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v5;
    }
    v1 = v1 + v4;
    if (v5 > v2) { v5 = v2; }
    return v0;
}
int main(void) { return test_func(); }
