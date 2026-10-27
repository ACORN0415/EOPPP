int test_func(void) {
    int v0 = 75;
    int v1 = 76;
    int v2 = 35;
    int v3 = 49;
    int v4 = 40;
    int v5 = 14;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v4;
    }
    v2 = v2 - v4;
    if (v1 > v5) { v1 = v5; }
    v5 = v5 + v5;
    return v0;
}
int main(void) { return test_func(); }
