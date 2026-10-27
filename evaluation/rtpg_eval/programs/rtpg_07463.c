int test_func(void) {
    int v0 = 34;
    int v1 = 15;
    int v2 = 15;
    int v3 = 4;
    int v4 = 50;
    int v5 = 70;
    int v6 = 11;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v6;
    }
    v4 = v4 - v6;
    if (v6 > v5) { v6 = v5; }
    return v0;
}
int main(void) { return test_func(); }
