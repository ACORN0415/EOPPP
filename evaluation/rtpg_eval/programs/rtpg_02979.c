int test_func(void) {
    int v0 = 37;
    int v1 = 84;
    int v2 = 52;
    int v3 = 43;
    int v4 = 23;
    int v5 = 93;
    int v6 = 14;
    int i;
    for (i = 0; i < 14; i++) {
        v4 = v4 + v6;
    }
    v6 = v6 + v5;
    if (v5 > v4) { v5 = v4; }
    return v0;
}
int main(void) { return test_func(); }
