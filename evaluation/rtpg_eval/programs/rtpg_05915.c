int test_func(void) {
    int v0 = 63;
    int v1 = 21;
    int v2 = 68;
    int v3 = 46;
    int v4 = 47;
    int v5 = 86;
    int v6 = 78;
    int v7 = 7;
    int i;
    for (i = 0; i < 18; i++) {
        v5 = v5 + v4;
    }
    if (v5 > v6) { v5 = v6; }
    return v0;
}
int main(void) { return test_func(); }
