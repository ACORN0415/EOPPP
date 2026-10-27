int test_func(void) {
    int v0 = 33;
    int v1 = 21;
    int v2 = 40;
    int v3 = 95;
    int v4 = 10;
    int v5 = 63;
    int v6 = 45;
    int v7 = 95;
    int i;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v0;
    }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
