int test_func(void) {
    int v0 = 74;
    int v1 = 3;
    int v2 = 25;
    int v3 = 87;
    int v4 = 29;
    int v5 = 7;
    int v6 = 56;
    int i;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v0;
    }
    if (v5 > v2) { v5 = v2; }
    return v0;
}
int main(void) { return test_func(); }
