int test_func(void) {
    int v0 = 49;
    int v1 = 16;
    int v2 = 76;
    int v3 = 45;
    int v4 = 46;
    int v5 = 34;
    int v6 = 93;
    int v7 = 79;
    int i;
    if (v4 > v6) { v4 = v6; }
    v2 = 73;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
