int test_func(void) {
    int v0 = 40;
    int v1 = 91;
    int v2 = 19;
    int v3 = 17;
    int v4 = 98;
    int v5 = 18;
    int v6 = 97;
    int i;
    for (i = 0; i < 10; i++) {
        v6 = v6 + v5;
    }
    v3 = v3 - v0;
    v5 = v5 ^ v3;
    return v0;
}
int main(void) { return test_func(); }
