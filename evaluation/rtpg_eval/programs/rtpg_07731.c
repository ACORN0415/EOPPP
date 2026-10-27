int test_func(void) {
    int v0 = 47;
    int v1 = 13;
    int v2 = 55;
    int v3 = 79;
    int v4 = 15;
    int v5 = 26;
    int v6 = 83;
    int v7 = 40;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v4;
    }
    if (v1 > v3) { v1 = v3; }
    return v0;
}
int main(void) { return test_func(); }
