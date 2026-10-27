int test_func(void) {
    int v0 = 95;
    int v1 = 2;
    int v2 = 86;
    int v3 = 5;
    int v4 = 73;
    int v5 = 31;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
