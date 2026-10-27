int test_func(void) {
    int v0 = 50;
    int v1 = 3;
    int v2 = 87;
    int v3 = 93;
    int v4 = 1;
    int v5 = 97;
    int i;
    if (v5 > v4) { v5 = v4; }
    v3 = v3 * 10;
    v0 = v0 ^ v5;
    return v0;
}
int main(void) { return test_func(); }
