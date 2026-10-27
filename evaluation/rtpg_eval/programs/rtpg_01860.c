int test_func(void) {
    int v0 = 73;
    int v1 = 78;
    int v2 = 36;
    int v3 = 96;
    int v4 = 0;
    int v5 = 27;
    int v6 = 32;
    int i;
    v5 = v5 - v6;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v6;
    }
    v3 = 31;
    return v0;
}
int main(void) { return test_func(); }
