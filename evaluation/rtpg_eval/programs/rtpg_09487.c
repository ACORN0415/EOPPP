int test_func(void) {
    int v0 = 82;
    int v1 = 62;
    int v2 = 90;
    int v3 = 63;
    int v4 = 50;
    int v5 = 88;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v3;
    }
    v4 = 46;
    return v0;
}
int main(void) { return test_func(); }
