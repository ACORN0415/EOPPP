int test_func(void) {
    int v0 = 12;
    int v1 = 73;
    int v2 = 79;
    int v3 = 40;
    int v4 = 16;
    int v5 = 75;
    int v6 = 93;
    int v7 = 23;
    int i;
    if (v0 > v5) { v0 = v5; }
    v6 = v6 - v0;
    v2 = v2 + v7;
    return v0;
}
int main(void) { return test_func(); }
