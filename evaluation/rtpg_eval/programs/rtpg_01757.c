int test_func(void) {
    int v0 = 84;
    int v1 = 91;
    int v2 = 37;
    int v3 = 1;
    int v4 = 99;
    int v5 = 72;
    int v6 = 15;
    int i;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v5;
    }
    if (v5 > v6) { v5 = v6; }
    return v0;
}
int main(void) { return test_func(); }
