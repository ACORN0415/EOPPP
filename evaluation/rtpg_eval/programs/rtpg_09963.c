int test_func(void) {
    int v0 = 99;
    int v1 = 48;
    int v2 = 74;
    int v3 = 65;
    int v4 = 13;
    int v5 = 55;
    int v6 = 14;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v1;
    }
    if (v0 > v1) { v0 = v1; }
    return v0;
}
int main(void) { return test_func(); }
