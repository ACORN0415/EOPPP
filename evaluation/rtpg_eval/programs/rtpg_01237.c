int test_func(void) {
    int v0 = 78;
    int v1 = 10;
    int v2 = 18;
    int v3 = 69;
    int v4 = 27;
    int v5 = 5;
    int v6 = 59;
    int i;
    if (v0 > v4) { v0 = v4; }
    for (i = 0; i < 18; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }
