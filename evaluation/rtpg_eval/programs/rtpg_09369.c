int test_func(void) {
    int v0 = 42;
    int v1 = 49;
    int v2 = 27;
    int v3 = 73;
    int v4 = 5;
    int v5 = 21;
    int v6 = 40;
    int v7 = 45;
    int i;
    v5 = v5 + v0;
    v0 = v0 * 2;
    if (v5 > v6) { v5 = v6; }
    return v0;
}
int main(void) { return test_func(); }
