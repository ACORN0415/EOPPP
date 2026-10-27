int test_func(void) {
    int v0 = 52;
    int v1 = 41;
    int v2 = 10;
    int v3 = 12;
    int v4 = 18;
    int v5 = 1;
    int i;
    for (i = 0; i < 14; i++) {
        v5 = v5 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
