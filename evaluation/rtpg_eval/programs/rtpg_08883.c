int test_func(void) {
    int v0 = 82;
    int v1 = 41;
    int v2 = 49;
    int v3 = 98;
    int v4 = 2;
    int v5 = 64;
    int v6 = 72;
    int v7 = 22;
    int i;
    for (i = 0; i < 16; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
