int test_func(void) {
    int v0 = 78;
    int v1 = 90;
    int v2 = 25;
    int v3 = 36;
    int v4 = 99;
    int v5 = 55;
    int i;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v4;
    }
    v1 = 25;
    if (v4 > v3) { v4 = v3; }
    v4 = v4 + v0;
    return v0;
}
int main(void) { return test_func(); }
