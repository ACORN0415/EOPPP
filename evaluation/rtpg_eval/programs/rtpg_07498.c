int test_func(void) {
    int v0 = 24;
    int v1 = 46;
    int v2 = 47;
    int v3 = 40;
    int v4 = 44;
    int v5 = 21;
    int v6 = 72;
    int v7 = 46;
    int i;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v6;
    }
    v0 = 41;
    v0 = v0 + v1;
    if (v5 > v3) { v5 = v3; }
    return v0;
}
int main(void) { return test_func(); }
