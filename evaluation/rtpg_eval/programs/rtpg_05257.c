int test_func(void) {
    int v0 = 38;
    int v1 = 34;
    int v2 = 63;
    int v3 = 99;
    int v4 = 47;
    int v5 = 43;
    int v6 = 17;
    int v7 = 78;
    int i;
    v0 = v0 - v1;
    v0 = v0 + v1;
    v7 = v7 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
