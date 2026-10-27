int test_func(void) {
    int v0 = 55;
    int v1 = 88;
    int v2 = 35;
    int v3 = 74;
    int v4 = 99;
    int v5 = 18;
    int v6 = 86;
    int i;
    v4 = v4 + v3;
    v2 = v2 - v3;
    for (i = 0; i < 5; i++) {
        v6 = v6 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
