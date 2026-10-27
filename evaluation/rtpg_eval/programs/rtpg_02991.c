int test_func(void) {
    int v0 = 18;
    int v1 = 93;
    int v2 = 80;
    int v3 = 73;
    int v4 = 24;
    int v5 = 2;
    int v6 = 28;
    int v7 = 58;
    int i;
    if (v0 > v7) { v0 = v7; }
    for (i = 0; i < 20; i++) {
        v6 = v6 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
