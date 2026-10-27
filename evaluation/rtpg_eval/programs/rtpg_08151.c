int test_func(void) {
    int v0 = 23;
    int v1 = 20;
    int v2 = 24;
    int v3 = 51;
    int v4 = 97;
    int v5 = 85;
    int v6 = 48;
    int v7 = 81;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v6;
    }
    v2 = v2 * 8;
    return v0;
}
int main(void) { return test_func(); }
