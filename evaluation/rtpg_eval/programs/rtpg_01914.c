int test_func(void) {
    int v0 = 12;
    int v1 = 85;
    int v2 = 98;
    int v3 = 19;
    int v4 = 2;
    int v5 = 45;
    int v6 = 19;
    int i;
    for (i = 0; i < 16; i++) {
        v6 = v6 + v1;
    }
    v3 = 53;
    return v0;
}
int main(void) { return test_func(); }
