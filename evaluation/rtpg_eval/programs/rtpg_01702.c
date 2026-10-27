int test_func(void) {
    int v0 = 20;
    int v1 = 95;
    int v2 = 79;
    int v3 = 0;
    int v4 = 71;
    int v5 = 8;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
