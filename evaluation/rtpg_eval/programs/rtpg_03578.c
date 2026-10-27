int test_func(void) {
    int v0 = 95;
    int v1 = 35;
    int v2 = 8;
    int v3 = 12;
    int v4 = 45;
    int i;
    v2 = 20;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v3;
    }
    v4 = v4 + v3;
    if (v4 > v4) { v4 = v4; }
    return v0;
}
int main(void) { return test_func(); }
