int test_func(void) {
    int v0 = 66;
    int v1 = 52;
    int v2 = 93;
    int v3 = 14;
    int v4 = 35;
    int v5 = 51;
    int v6 = 11;
    int v7 = 81;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v0;
    }
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
