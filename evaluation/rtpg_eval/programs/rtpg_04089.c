int test_func(void) {
    int v0 = 62;
    int v1 = 12;
    int v2 = 95;
    int v3 = 29;
    int v4 = 31;
    int v5 = 68;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v5;
    }
    v4 = v4 - v2;
    v4 = 36;
    return v0;
}
int main(void) { return test_func(); }
